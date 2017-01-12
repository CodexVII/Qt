#ifndef APIFORM_H
#define APIFORM_H

#include <QWidget>
#include "createuserrequest.h"
#include "updatepasswordform.h"
#include "deleteuserform.h"
#include "paymentform.h"

namespace Ui {
class ApiForm;
}

class ApiForm : public QWidget
{
    Q_OBJECT

public:
    explicit ApiForm(QWidget *parent = 0);
    ~ApiForm();
    void createUserFunc();

public slots:
    //from REST request
    void onUserCreated(QByteArray);
    void onPasswordUpdated(QByteArray);
    void onUserDeleted(QByteArray);
    void onPayment(QByteArray);

private slots:
    void on_updatePassword_clicked();
    void on_deleteUser_clicked();
    void on_createUser_clicked();

    void on_payment_clicked();

private:
    Ui::ApiForm *ui;

    //Form logic for creating user
    CreateUserRequest createUserRequest;
    UpdatePasswordForm updatePasswordForm;
    DeleteUserForm deleteUserForm;
    PaymentForm paymentForm;
};

#endif // APIFORM_H
