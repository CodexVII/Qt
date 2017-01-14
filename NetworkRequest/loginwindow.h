#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include "loginform.h"
#include "apiform.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

public slots:
    void onLoginComplete(QByteArray);

private slots:
    void on_login_clicked();

private:
    Ui::LoginWindow *ui;
    LoginForm loginForm;

    //New Window to open once successful
    ApiForm apiForm;

};

#endif // LOGINWINDOW_H
