#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    //listen for login request to finish
    connect(&loginForm, SIGNAL(loginComplete(QByteArray)),
            this,SLOT(onLoginComplete(QByteArray)));
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

/* Verify if the user provided correct credentials
 * If so, hide the current window and show the API one
 * report to the user otherwise
 */
void LoginWindow::onLoginComplete(QByteArray response){
    //display result to user
    ui->login_output->clear();
    ui->login_output->setText(response);

    //check server response
    if(response.contains("success")){
        hide();
        apiForm.show();
    }
}

void LoginWindow::on_login_clicked()
{
    //set form attributes from UI
    loginForm.setUsername(ui->login_username->text());
    loginForm.setPassword(ui->login_password->text());

    //login
    loginForm.login();
}
