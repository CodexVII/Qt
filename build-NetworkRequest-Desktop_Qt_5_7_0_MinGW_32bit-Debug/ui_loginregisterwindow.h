/********************************************************************************
** Form generated from reading UI file 'loginregisterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINREGISTERWINDOW_H
#define UI_LOGINREGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginRegisterWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_12;
    QFormLayout *formLayout_4;
    QLabel *label_12;
    QLineEdit *login_username;
    QLabel *label_13;
    QLineEdit *login_password;
    QPushButton *login;
    QTextBrowser *login_output;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_11;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QLineEdit *createUser_username;
    QLabel *label_7;
    QLineEdit *createUser_password;
    QPushButton *createUser;
    QTextBrowser *createUser_output;

    void setupUi(QWidget *LoginRegisterWindow)
    {
        if (LoginRegisterWindow->objectName().isEmpty())
            LoginRegisterWindow->setObjectName(QStringLiteral("LoginRegisterWindow"));
        LoginRegisterWindow->resize(657, 225);
        gridLayout = new QGridLayout(LoginRegisterWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(LoginRegisterWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        login_username = new QLineEdit(groupBox);
        login_username->setObjectName(QStringLiteral("login_username"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, login_username);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        login_password = new QLineEdit(groupBox);
        login_password->setObjectName(QStringLiteral("login_password"));
        login_password->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, login_password);


        verticalLayout_12->addLayout(formLayout_4);

        login = new QPushButton(groupBox);
        login->setObjectName(QStringLiteral("login"));

        verticalLayout_12->addWidget(login);

        login_output = new QTextBrowser(groupBox);
        login_output->setObjectName(QStringLiteral("login_output"));
        login_output->setEnabled(true);

        verticalLayout_12->addWidget(login_output);


        gridLayout_3->addLayout(verticalLayout_12, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(LoginRegisterWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        createUser_username = new QLineEdit(groupBox_2);
        createUser_username->setObjectName(QStringLiteral("createUser_username"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, createUser_username);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_7);

        createUser_password = new QLineEdit(groupBox_2);
        createUser_password->setObjectName(QStringLiteral("createUser_password"));
        createUser_password->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, createUser_password);

        createUser = new QPushButton(groupBox_2);
        createUser->setObjectName(QStringLiteral("createUser"));

        formLayout_3->setWidget(2, QFormLayout::SpanningRole, createUser);


        verticalLayout_11->addLayout(formLayout_3);

        createUser_output = new QTextBrowser(groupBox_2);
        createUser_output->setObjectName(QStringLiteral("createUser_output"));
        createUser_output->setEnabled(true);

        verticalLayout_11->addWidget(createUser_output);


        gridLayout_2->addLayout(verticalLayout_11, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(LoginRegisterWindow);

        QMetaObject::connectSlotsByName(LoginRegisterWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginRegisterWindow)
    {
        LoginRegisterWindow->setWindowTitle(QApplication::translate("LoginRegisterWindow", "REST API Client", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LoginRegisterWindow", "Login", Q_NULLPTR));
        label_12->setText(QApplication::translate("LoginRegisterWindow", "Username:", Q_NULLPTR));
        login_username->setText(QString());
        label_13->setText(QApplication::translate("LoginRegisterWindow", "Password:", Q_NULLPTR));
        login_password->setText(QString());
        login->setText(QApplication::translate("LoginRegisterWindow", "Login", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("LoginRegisterWindow", "Register", Q_NULLPTR));
        label_6->setText(QApplication::translate("LoginRegisterWindow", "Username:", Q_NULLPTR));
        createUser_username->setText(QString());
        label_7->setText(QApplication::translate("LoginRegisterWindow", "Password:", Q_NULLPTR));
        createUser_password->setText(QString());
        createUser->setText(QApplication::translate("LoginRegisterWindow", "Register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginRegisterWindow: public Ui_LoginRegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINREGISTERWINDOW_H
