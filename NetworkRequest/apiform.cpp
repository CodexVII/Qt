#include "apiform.h"
#include "ui_apiform.h"
#include <iostream>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonValueRef>
#include <QJsonArray>
#include <QJsonObject>
#include "transaction.h"

#include <QDebug>
using namespace std;

ApiForm::ApiForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApiForm)
{
    ui->setupUi(this);

    //listen for the user to be created
    connect(&createUserRequest, SIGNAL(userCreated(QByteArray)),
            this, SLOT(onUserCreated(QByteArray)));

    //listen for password updates to be finished
    connect(&updatePasswordForm, SIGNAL(passwordUpdated(QByteArray)),
            this, SLOT(onPasswordUpdated(QByteArray)));

    //listen for delete requests to be finished
    connect(&deleteUserForm, SIGNAL(userDeleted(QByteArray)),
            this, SLOT(onUserDeleted(QByteArray)));

    //listen for payment requests to be finished
    connect(&paymentForm, SIGNAL(paymentProcessed(QByteArray)),
            this, SLOT(onPayment(QByteArray)));

    //listen for get user requests to be finished
    connect(&getSingleUserForm, SIGNAL(userReceived(QByteArray)),
            this, SLOT(onUserReceived(QByteArray)));

    //listen for multiple search query to be finished
    connect(&multipleUserSearchForm, SIGNAL(searchComplete(QByteArray)),
            this, SLOT(onMultipleUserSearchComplete(QByteArray)));

    //listen for transaction history query to be finished
    connect(&transactionHistoryForm, SIGNAL(transactionHistoryReceived(QByteArray)),
            this, SLOT(onTransactionHistoryReceived(QByteArray)));
}

ApiForm::~ApiForm()
{
    delete ui;
}

////////////////////////////////////////////////////////////////
/// REST REQUEST COMPLETE SLOTS
////////////////////////////////////////////////////////////////
void ApiForm::onUserCreated(QByteArray response)
{
    //print out response to widget.
    ui->createUser_output->clear();
    ui->createUser_output->setText(response);
}

void ApiForm::onPasswordUpdated(QByteArray response)
{
    ui->updatePassword_output->clear();
    ui->updatePassword_output->setText(response);
}

void ApiForm::onUserDeleted(QByteArray response)
{
    ui->deleteUser_output->clear();
    ui->deleteUser_output->setText(response);
}

void ApiForm::onPayment(QByteArray response)
{
    ui->payment_output->clear();
    ui->payment_output->setText(response);
}

void ApiForm::onUserReceived(QByteArray response)
{
    ui->getUser_output->clear();
    ui->getUser_output->setText(response);
}

void ApiForm::onMultipleUserSearchComplete(QByteArray response)
{
    ui->multipleUserSearch_output->clear();
    ui->multipleUserSearch_output->setText(response);
}

void ApiForm::onTransactionHistoryReceived(QByteArray response)
{

    QJsonDocument doc = QJsonDocument::fromJson(response);
    QJsonArray array = doc.array(); // get the array of json objects in the array

    // Take in json string store in doc
    // decide whether it's array or single object
    // create method that does this
    Transaction transaction;
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(array.size());
    for(int i=0; i<array.size(); i++){
        QJsonObject object = array[i].toObject();
        transaction.setId(object["id"].toInt());
        transaction.setTimestamp(object["timestamp"].toString());
        transaction.setSender(object["sender"].toString());
        transaction.setReceiver(object["receiver"].toString());
        transaction.setAmount(object["amount"].toDouble());

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(transaction.getId())));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(transaction.getTimestamp()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(transaction.getSender()));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(transaction.getReceiver()));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(transaction.getAmount())));
    }
}


/////////////////////////////////////////////////////
/// UI ON_CLICKED SLOTS
/////////////////////////////////////////////////////
void ApiForm::on_createUser_clicked()
{
    //set form object's required fields
    createUserRequest.setUsername(ui->createUser_username->text());
    createUserRequest.setPassword(ui->createUser_password->text());

    //call function to start user creation
    createUserRequest.createUser();
}

void ApiForm::on_updatePassword_clicked()
{
    //set form attributes from UI
    updatePasswordForm.setUsername(ui->updatePassword_username->text());
    updatePasswordForm.setOld_password(ui->updatePassword_oldPassword->text());
    updatePasswordForm.setNew_password(ui->updatePassword_newPassword->text());

    //call function to start password update
    updatePasswordForm.updatePassword();
}

void ApiForm::on_deleteUser_clicked()
{
    //set form attributes from UI
    deleteUserForm.setUsername(ui->deleteUser_username->text());

    //call function to start user delete
    deleteUserForm.deleteUser();
}

void ApiForm::on_payment_clicked()
{
    //set form attributes from UI
    paymentForm.setSender(ui->payment_sender->text());
    paymentForm.setReceiver(ui->payment_receiver->text());
    paymentForm.setAmount((ui->payment_amount->text()).toDouble());

    //call function to start payment
    paymentForm.pay();
}

void ApiForm::on_getUser_clicked()
{
    //set form attributes from UI
    getSingleUserForm.setUsername(ui->getUser_username->text());

    //begin query
    getSingleUserForm.getUser();
}

void ApiForm::on_multipleUserSearch_clicked()
{
    //set form ttributes from UI
    multipleUserSearchForm.setUsername(ui->multipleUserSearch_username->text());

    //begin query
    multipleUserSearchForm.searchUsers();
}

void ApiForm::on_getTransactionHistory_clicked()
{
    // set username from UI
    transactionHistoryForm.setUsername(ui->getTransactionHistory_username->text());

    //begin query
    transactionHistoryForm.getTransactionHistory();
}
