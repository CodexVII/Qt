#ifndef APIFORM_H
#define APIFORM_H

#include <QWidget>
#include "createuserrequest.h"

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
    void onPostFinished(QByteArray response);

    void on_createUser_clicked();

private:
    Ui::ApiForm *ui;

    //Form logic for creating user
    CreateUserRequest createUserRequest;
};

#endif // APIFORM_H
