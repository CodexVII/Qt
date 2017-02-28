#include "benchmark.h"
#include "ui_benchmark.h"
#include <QDebug>
Benchmark::Benchmark(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Benchmark)
{
    ui->setupUi(this);
    ui->progressBar->hide();

    //NETWORK
    networkManager = new QNetworkAccessManager(this);

    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(onRequestFinished()));

    connect(this, SIGNAL(waitOnResponse()),
            this, SLOT(beginWaiting()));
}


Benchmark::~Benchmark()
{
    delete ui;
}

void Benchmark::createUser(QString username)
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

void Benchmark::deleteUser(QString username)
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

void Benchmark::getUser()
{
    QUrl target = QUrl(QString(USER_API).append("get/BenchMark"));

    QNetworkRequest networkRequest(target);

    //make a GET call to the REST service
    networkManager->get(networkRequest);

    emit(waitOnResponse());
}


void Benchmark::searchUsers()
{
    //append search pattern to URL
    QString target = QString(USER_API) + "search/i";

    QNetworkRequest networkRequest(target);

    //call REST service
    networkManager->get(networkRequest);

    emit(waitOnResponse());
}

void Benchmark::pay()
{
    // prep temporary user to pay
    createUser("BenchMark2");

    //setup form data
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy","");
    query.addQueryItem("sender","BenchMark");
    query.addQueryItem("receiver","BenchMark2");
    query.addQueryItem("amount",QString::number(rand() % 1000 + 500));  // 500-1500

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(QString(PAYMENT_API).append("pay"));
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST payment service
    networkManager->post(networkRequest,postData);

    emit(waitOnResponse());

    deleteUser("BenchMark2");
}

void Benchmark::getTransactionHistory()
{
    QNetworkRequest networkRequest(QString(PAYMENT_API).append("history/BenchMark"));

    // make a GET call to the REST service
    networkManager->get(networkRequest);
    emit(waitOnResponse());
}

void Benchmark::login()
{
    //setup form
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy",""); //bypass error described in Issue#1
    query.addQueryItem("name", "BenchMark");
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

void Benchmark::updatePassword()
{
    //setup form
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy","");
    query.addQueryItem("name", "BenchMark");
    query.addQueryItem("old_pwd","test");
    query.addQueryItem("new_pwd","newtest");

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(QString(USER_API).append("update/password"));
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST update password service
    networkManager->post(networkRequest,postData);

    emit(waitOnResponse());
}


void Benchmark::expressBenchmark()
{
    int iterations = ui->horizontalSlider->value();
    for(int i=0; i<iterations; i++){
        // update the progress bar
        ui->progressBar->setValue(i);
        createUser();
        login();
        getUser();
        searchUsers();
        pay();
        getTransactionHistory();
        updatePassword();
        deleteUser();
    }
    ui->progressBar->setValue(ui->progressBar->maximum());
}

// delays without GUI freezing
void Benchmark::delay( int ms )
{
    QTime dieTime = QTime::currentTime().addMSecs( ms );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}

void Benchmark::onRequestFinished()
{
    advance = true;
}

void Benchmark::beginWaiting()
{
    // wait for the network manager to respond before proceeding
    advance = false;
    while(!advance){
        delay(25);
    }
}


void Benchmark::on_pushButton_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->progressBar->setMaximum(ui->horizontalSlider->value());
    expressBenchmark();
    ui->pushButton->setEnabled(true);
}

