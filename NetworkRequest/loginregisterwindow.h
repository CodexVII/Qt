#ifndef LOGINREGISTERWINDOW_H
#define LOGINREGISTERWINDOW_H

#include <QWidget>
#include "loginform.h"
#include "apiform.h"
#include "loginwindow.h"
#include "createuserrequest.h"

namespace Ui {
class LoginRegisterWindow;
}

class LoginRegisterWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginRegisterWindow(QWidget *parent = 0);
    ~LoginRegisterWindow();

public slots:
    void onLoginComplete(QByteArray);
    void onRegisterComplete(QByteArray);

private slots:
    void on_login_clicked();

    void on_createUser_clicked();

private:
    Ui::LoginRegisterWindow *ui;

    //Login form instance accessible from UI
    LoginForm loginForm;
    CreateUserRequest createUserRequest;

    //API Window instance
    ApiForm apiForm;
    LoginWindow loginWindow;
};

#endif // LOGINREGISTERWINDOW_H
