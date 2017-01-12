#ifndef APIFORM_H
#define APIFORM_H

#include <QWidget>
#include "QNetworkReply"
#include "QUrlQuery"

namespace Ui {
class ApiForm;
}

class ApiForm : public QWidget
{
    Q_OBJECT

public:
    explicit ApiForm(QWidget *parent = 0);
    ~ApiForm();
    void createUser();

private slots:
    void onPostFinished(QNetworkReply *reply);

    void on_createUser_clicked();

private:
    Ui::ApiForm *ui;
};

#endif // APIFORM_H
