#include "apiform.h"
#include "ui_apiform.h"
#include <iostream>

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
}

ApiForm::~ApiForm()
{
    delete ui;
}


void ApiForm::onUserCreated(QByteArray response)
{
    //print out response to widget.
    ui->createUser_output->setText(response);
}

void ApiForm::onPasswordUpdated(QByteArray response)
{
    ui->updatePassword_output->setText(response);
}

void ApiForm::onUserDeleted(QByteArray response)
{
    ui->deleteUser_output->setText(response);
}

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
