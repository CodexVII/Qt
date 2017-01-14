#ifndef APIFORM_H
#define APIFORM_H

#include <QWidget>
#include "createuserrequest.h"
#include "updatepasswordform.h"
#include "deleteuserform.h"
#include "paymentform.h"
#include "getsingleuserform.h"
#include "multipleusersearchform.h"
#include "loginform.h"

namespace Ui {
class ApiForm;
}

class ApiForm : public QWidget
{
    Q_OBJECT

public:
    explicit ApiForm(QWidget *parent = 0);
    ~ApiForm();

public slots:
    //from REST request
    void onUserCreated(QByteArray);
    void onPasswordUpdated(QByteArray);
    void onUserDeleted(QByteArray);
    void onPayment(QByteArray);
    void onUserReceived(QByteArray);
    void onMultipleUserSearchComplete(QByteArray);
    void onLoginComplete(QByteArray);

private slots:
    void on_updatePassword_clicked();
    void on_deleteUser_clicked();
    void on_createUser_clicked();
    void on_payment_clicked();
    void on_getUser_clicked();

    void on_multipleUserSearch_clicked();

    void on_login_clicked();

private:
    Ui::ApiForm *ui;

    //Form logic for creating user
    CreateUserRequest createUserRequest;
    UpdatePasswordForm updatePasswordForm;
    DeleteUserForm deleteUserForm;
    PaymentForm paymentForm;
    GetSingleUserForm getSingleUserForm;
    MultipleUserSearchForm multipleUserSearchForm;
    LoginForm loginForm;
};

#endif // APIFORM_H
