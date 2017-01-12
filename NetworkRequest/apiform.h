#ifndef APIFORM_H
#define APIFORM_H

#include <QWidget>
#include "createuserrequest.h"
#include "updatepasswordform.h"

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
    void onUserCreated(QByteArray response);
    void onPasswordUpdated(QByteArray response);

    void on_createUser_clicked();

private slots:
    void on_updatePassword_clicked();

private:
    Ui::ApiForm *ui;

    //Form logic for creating user
    CreateUserRequest createUserRequest;
    UpdatePasswordForm updatePasswordForm;
};

#endif // APIFORM_H
