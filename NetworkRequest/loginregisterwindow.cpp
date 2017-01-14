#include "loginregisterwindow.h"
#include "ui_loginregisterwindow.h"

LoginRegisterWindow::LoginRegisterWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginRegisterWindow)
{
    ui->setupUi(this);

    //listen for login request to finish
    connect(&loginForm, SIGNAL(loginComplete(QByteArray)),
            this,SLOT(onLoginComplete(QByteArray)));

    //listen for register request to finish
    connect(&createUserRequest, SIGNAL(userCreated(QByteArray)),
            this, SLOT(onRegisterComplete(QByteArray)));
}

LoginRegisterWindow::~LoginRegisterWindow()
{
    delete ui;
}

/* Verify if the user provided correct credentials
 * If so, hide the current window and show the API one
 * report to the user otherwise
 */
void LoginRegisterWindow::onLoginComplete(QByteArray response){
    //display result to user
    ui->login_output->setText(response);

    //check server response
    if(response.contains("success")){
        hide();
        apiForm.show();
    }
}

void LoginRegisterWindow::onRegisterComplete(QByteArray response)
{
    //display result to user
    ui->createUser_output->setText(response);

    //check server response
    if(response.contains("success")){
        hide();
        loginWindow.show();
    }
}

void LoginRegisterWindow::on_login_clicked()
{
    //set form attributes from UI
    loginForm.setUsername(ui->login_username->text());
    loginForm.setPassword(ui->login_password->text());

    //login
    loginForm.login();
}

void LoginRegisterWindow::on_createUser_clicked()
{
    //set form attributes from UI
    createUserRequest.setUsername(ui->createUser_username->text());
    createUserRequest.setPassword(ui->createUser_password->text());

    //register
    createUserRequest.createUser();
}
