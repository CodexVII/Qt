#include "benchmarkworker.h"
#include <QCoreApplication>
BenchmarkWorker::BenchmarkWorker(QObject *parent) : QObject(parent)
{
        networkManager = new QNetworkAccessManager(this);
        hostname = QHostInfo::localHostName();

        connect(networkManager, SIGNAL(finished(QNetworkReply*)),
                this, SLOT(onRequestFinished()));

        connect(this, SIGNAL(waitOnResponse()),
                this, SLOT(beginWaiting()));
}


BenchmarkWorker::~BenchmarkWorker()
{
//    delete ui;
}

void BenchmarkWorker::createUser(QString username)
{
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy", "");
    query.addQueryItem("name",QString(username));
    query.addQueryItem("password", "test");

    params.setQuery(query);
    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    QNetworkRequest networkRequest(QString(USER_API).append("add"));
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    networkManager->post(networkRequest, postData);
    emit(waitOnResponse());
}

void BenchmarkWorker::deleteUser(QString username)
{
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy","");
    query.addQueryItem("name", QString(username));

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(QString(USER_API).append("delete"));
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST delete user service
    networkManager->post(networkRequest,postData);
    emit(waitOnResponse());
}

void BenchmarkWorker::getUser()
{
    QUrl target = QUrl(QString(USER_API).append("get/"+hostname));

    QNetworkRequest networkRequest(target);

    //make a GET call to the REST service
    networkManager->get(networkRequest);

    emit(waitOnResponse());
}


void BenchmarkWorker::searchUsers()
{
    //append search pattern to URL
    QString target = QString(USER_API) + "search/i";

    QNetworkRequest networkRequest(target);

    //call REST service
    networkManager->get(networkRequest);

    emit(waitOnResponse());
}

void BenchmarkWorker::pay()
{
    // prep temporary user to pay
    createUser(hostname + "-v2");

    //setup form data
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy","");
    query.addQueryItem("sender",hostname);
    query.addQueryItem("receiver",hostname + "-v2");
    query.addQueryItem("amount",QString::number(rand() % 1000 + 500));  // 500-1500

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(QString(PAYMENT_API).append("pay"));
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST payment service
    networkManager->post(networkRequest,postData);

    emit(waitOnResponse());

    deleteUser(hostname + "-v2");
}

void BenchmarkWorker::getTransactionHistory()
{
    QNetworkRequest networkRequest(QString(PAYMENT_API).append("history/"+hostname));

    // make a GET call to the REST service
    networkManager->get(networkRequest);
    emit(waitOnResponse());
}

void BenchmarkWorker::login()
{
    //setup form
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy",""); //bypass error described in Issue#1
    query.addQueryItem("name", hostname);
    query.addQueryItem("password", "test");

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(QString(USER_API).append("validate"));
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST service
    networkManager->post(networkRequest,postData);

    emit(waitOnResponse());
}

void BenchmarkWorker::updatePassword()
{
    //setup form
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy","");
    query.addQueryItem("name", hostname);
    query.addQueryItem("old_pwd","test");
    query.addQueryItem("new_pwd","test");

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(QString(USER_API).append("update/password"));
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST update password service
    networkManager->post(networkRequest,postData);

    emit(waitOnResponse());
}


void BenchmarkWorker::expressBenchmark()
{
    for(int i=0; i<limit; i++){
        // update the progress bar
//        ui->progressBar->setValue(i);
        createUser(hostname);
        login();
        getUser();
        searchUsers();
        pay();
        getTransactionHistory();
        updatePassword();
        deleteUser(hostname);
    }
//    ui->progressBar->setValue(ui->progressBar->maximum());
}

void BenchmarkWorker::targettedBenchmark()
{
    //switch statement on user selection
//    QString service = ui->comboBox->itemText(ui->comboBox->currentIndex());
    QString service = "abc";
    QRegularExpression pay("\\bPay\\b");
    QRegularExpression history("\\bTransaction History\\b");
    QRegularExpression add("\\bRegister\\b");
    QRegularExpression remove("\\bDelete\\b");
    QRegularExpression password("\\bUpdate Password\\b");
    QRegularExpression login("\\bValidate\\b");
    QRegularExpression search("\\bSearch\\b");
    QRegularExpression get("\\bGet\\b");

    createUser(hostname);
    if (pay.match(service).hasMatch()){
        for(int i=0; i< limit; i++){
//            ui->progressBar->setValue(i);
            this->pay();
        }
    }else if (history.match(service).hasMatch()){
        for(int i=0; i< limit; i++){
//            ui->progressBar->setValue(i);
            this->getTransactionHistory();
        }
    }else if (add.match(service).hasMatch()){
        for(int i=0; i< limit; i++){
//            ui->progressBar->setValue(i);
            this->createUser(hostname + "-target");
            this->deleteUser(hostname + "-target");
        }
    }else if (remove.match(service).hasMatch()){
        for(int i=0; i< limit; i++){
//            ui->progressBar->setValue(i);
            this->createUser(hostname + "-target");
            this->deleteUser(hostname + "-target");
        }
    }else if (password.match(service).hasMatch()){
        for(int i=0; i< limit; i++){
//            ui->progressBar->setValue(i);
            this->updatePassword();
        }
    }else if (login.match(service).hasMatch()){
        for(int i=0; i< limit; i++){
//            ui->progressBar->setValue(i);
            this->login();
        }
    }else if (search.match(service).hasMatch()){
        for(int i=0; i< limit; i++){
//            ui->progressBar->setValue(i);
            this->searchUsers();
        }
    }
    else if (get.match(service).hasMatch()){
            for(int i=0; i< limit; i++){
//                ui->progressBar->setValue(i);
                this->getUser();
            }
        }
    deleteUser(hostname);

//    ui->progressBar->setValue(ui->progressBar->maximum());
}



// delays without GUI freezing
void BenchmarkWorker::delay( int ms )
{
    QTime dieTime = QTime::currentTime().addMSecs( ms );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}

void BenchmarkWorker::onRequestFinished()
{
    advance = true;
}

void BenchmarkWorker::beginWaiting()
{
    // wait for the network manager to respond before proceeding
    advance = false;
    while(!advance){
        delay(25);
    }
}

int BenchmarkWorker::getLimit() const
{
    return limit;
}

void BenchmarkWorker::setLimit(int value)
{
    limit = value;
}
