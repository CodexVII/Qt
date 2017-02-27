/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_10;
    QFormLayout *formLayout_4;
    QLabel *label_12;
    QLineEdit *login_username;
    QLabel *label_13;
    QLineEdit *login_password;
    QPushButton *login;
    QTextBrowser *login_output;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(291, 174);
        gridLayout = new QGridLayout(LoginWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_12 = new QLabel(LoginWindow);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        login_username = new QLineEdit(LoginWindow);
        login_username->setObjectName(QStringLiteral("login_username"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, login_username);

        label_13 = new QLabel(LoginWindow);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        login_password = new QLineEdit(LoginWindow);
        login_password->setObjectName(QStringLiteral("login_password"));
        login_password->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, login_password);


        verticalLayout_10->addLayout(formLayout_4);

        login = new QPushButton(LoginWindow);
        login->setObjectName(QStringLiteral("login"));

        verticalLayout_10->addWidget(login);

        login_output = new QTextBrowser(LoginWindow);
        login_output->setObjectName(QStringLiteral("login_output"));
        login_output->setEnabled(true);

        verticalLayout_10->addWidget(login_output);


        gridLayout->addLayout(verticalLayout_10, 0, 0, 1, 1);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "REST API Client", 0));
        label_12->setText(QApplication::translate("LoginWindow", "Username:", 0));
        login_username->setText(QString());
        label_13->setText(QApplication::translate("LoginWindow", "Password:", 0));
        login_password->setText(QString());
        login->setText(QApplication::translate("LoginWindow", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
