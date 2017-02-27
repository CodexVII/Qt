/********************************************************************************
** Form generated from reading UI file 'apiform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APIFORM_H
#define UI_APIFORM_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApiForm
{
public:
    QGridLayout *gridLayout_8;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_9;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *createUser_username;
    QLabel *label_3;
    QLineEdit *createUser_password;
    QPushButton *createUser;
    QTextBrowser *createUser_output;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *updatePassword_username;
    QLabel *label_6;
    QLineEdit *updatePassword_oldPassword;
    QLabel *label_7;
    QLineEdit *updatePassword_newPassword;
    QPushButton *updatePassword;
    QTextBrowser *updatePassword_output;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QLineEdit *deleteUser_username;
    QPushButton *deleteUser;
    QTextBrowser *deleteUser_output;
    QWidget *tab_4;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_11;
    QLabel *label;
    QLineEdit *payment_sender;
    QLabel *label_4;
    QLineEdit *payment_receiver;
    QLabel *label_9;
    QLineEdit *payment_amount;
    QPushButton *payment;
    QTextBrowser *payment_output;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_6;
    QLabel *label_11;
    QLineEdit *multipleUserSearch_username;
    QPushButton *multipleUserSearch;
    QTextBrowser *multipleUserSearch_output;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_5;
    QLabel *label_10;
    QLineEdit *getUser_username;
    QPushButton *getUser;
    QTextBrowser *getUser_output;

    void setupUi(QWidget *ApiForm)
    {
        if (ApiForm->objectName().isEmpty())
            ApiForm->setObjectName(QStringLiteral("ApiForm"));
        ApiForm->resize(610, 265);
        gridLayout_8 = new QGridLayout(ApiForm);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(9);
        tabWidget = new QTabWidget(ApiForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        createUser_username = new QLineEdit(tab);
        createUser_username->setObjectName(QStringLiteral("createUser_username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, createUser_username);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        createUser_password = new QLineEdit(tab);
        createUser_password->setObjectName(QStringLiteral("createUser_password"));
        createUser_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, createUser_password);

        createUser = new QPushButton(tab);
        createUser->setObjectName(QStringLiteral("createUser"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, createUser);


        verticalLayout_9->addLayout(formLayout);

        createUser_output = new QTextBrowser(tab);
        createUser_output->setObjectName(QStringLiteral("createUser_output"));
        createUser_output->setEnabled(true);

        verticalLayout_9->addWidget(createUser_output);


        gridLayout->addLayout(verticalLayout_9, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        updatePassword_username = new QLineEdit(tab_2);
        updatePassword_username->setObjectName(QStringLiteral("updatePassword_username"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, updatePassword_username);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        updatePassword_oldPassword = new QLineEdit(tab_2);
        updatePassword_oldPassword->setObjectName(QStringLiteral("updatePassword_oldPassword"));
        updatePassword_oldPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, updatePassword_oldPassword);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        updatePassword_newPassword = new QLineEdit(tab_2);
        updatePassword_newPassword->setObjectName(QStringLiteral("updatePassword_newPassword"));
        updatePassword_newPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, updatePassword_newPassword);

        updatePassword = new QPushButton(tab_2);
        updatePassword->setObjectName(QStringLiteral("updatePassword"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, updatePassword);


        verticalLayout_3->addLayout(formLayout_2);

        updatePassword_output = new QTextBrowser(tab_2);
        updatePassword_output->setObjectName(QStringLiteral("updatePassword_output"));
        updatePassword_output->setEnabled(true);

        verticalLayout_3->addWidget(updatePassword_output);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        deleteUser_username = new QLineEdit(tab_3);
        deleteUser_username->setObjectName(QStringLiteral("deleteUser_username"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, deleteUser_username);

        deleteUser = new QPushButton(tab_3);
        deleteUser->setObjectName(QStringLiteral("deleteUser"));

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, deleteUser);


        verticalLayout_2->addLayout(formLayout_3);

        deleteUser_output = new QTextBrowser(tab_3);
        deleteUser_output->setObjectName(QStringLiteral("deleteUser_output"));
        deleteUser_output->setEnabled(true);

        verticalLayout_2->addWidget(deleteUser_output);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_14 = new QGridLayout(tab_4);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_11 = new QFormLayout();
        formLayout_11->setSpacing(6);
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        label = new QLabel(tab_4);
        label->setObjectName(QStringLiteral("label"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label);

        payment_sender = new QLineEdit(tab_4);
        payment_sender->setObjectName(QStringLiteral("payment_sender"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, payment_sender);

        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_4);

        payment_receiver = new QLineEdit(tab_4);
        payment_receiver->setObjectName(QStringLiteral("payment_receiver"));

        formLayout_11->setWidget(1, QFormLayout::FieldRole, payment_receiver);

        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_11->setWidget(2, QFormLayout::LabelRole, label_9);

        payment_amount = new QLineEdit(tab_4);
        payment_amount->setObjectName(QStringLiteral("payment_amount"));

        formLayout_11->setWidget(2, QFormLayout::FieldRole, payment_amount);

        payment = new QPushButton(tab_4);
        payment->setObjectName(QStringLiteral("payment"));

        formLayout_11->setWidget(3, QFormLayout::SpanningRole, payment);


        verticalLayout->addLayout(formLayout_11);

        payment_output = new QTextBrowser(tab_4);
        payment_output->setObjectName(QStringLiteral("payment_output"));
        payment_output->setEnabled(true);
        payment_output->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(payment_output);


        gridLayout_14->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_11);

        multipleUserSearch_username = new QLineEdit(tab_5);
        multipleUserSearch_username->setObjectName(QStringLiteral("multipleUserSearch_username"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, multipleUserSearch_username);

        multipleUserSearch = new QPushButton(tab_5);
        multipleUserSearch->setObjectName(QStringLiteral("multipleUserSearch"));

        formLayout_6->setWidget(1, QFormLayout::SpanningRole, multipleUserSearch);


        verticalLayout_6->addLayout(formLayout_6);

        multipleUserSearch_output = new QTextBrowser(tab_5);
        multipleUserSearch_output->setObjectName(QStringLiteral("multipleUserSearch_output"));
        multipleUserSearch_output->setEnabled(true);

        verticalLayout_6->addWidget(multipleUserSearch_output);


        gridLayout_6->addLayout(verticalLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_10 = new QLabel(tab_6);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_10);

        getUser_username = new QLineEdit(tab_6);
        getUser_username->setObjectName(QStringLiteral("getUser_username"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, getUser_username);

        getUser = new QPushButton(tab_6);
        getUser->setObjectName(QStringLiteral("getUser"));

        formLayout_5->setWidget(1, QFormLayout::SpanningRole, getUser);


        verticalLayout_5->addLayout(formLayout_5);

        getUser_output = new QTextBrowser(tab_6);
        getUser_output->setObjectName(QStringLiteral("getUser_output"));
        getUser_output->setEnabled(true);
        getUser_output->setAutoFillBackground(true);

        verticalLayout_5->addWidget(getUser_output);


        gridLayout_7->addLayout(verticalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());

        gridLayout_8->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ApiForm);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ApiForm);
    } // setupUi

    void retranslateUi(QWidget *ApiForm)
    {
        ApiForm->setWindowTitle(QApplication::translate("ApiForm", "REST API Client", 0));
        label_2->setText(QApplication::translate("ApiForm", "Username:", 0));
        createUser_username->setText(QString());
        label_3->setText(QApplication::translate("ApiForm", "Password:", 0));
        createUser_password->setText(QString());
        createUser->setText(QApplication::translate("ApiForm", "Create", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ApiForm", "User Creation", 0));
        label_5->setText(QApplication::translate("ApiForm", "Username:", 0));
        label_6->setText(QApplication::translate("ApiForm", "Old Password:", 0));
        label_7->setText(QApplication::translate("ApiForm", "New Password:", 0));
        updatePassword->setText(QApplication::translate("ApiForm", "Update", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ApiForm", "Password Update", 0));
        label_8->setText(QApplication::translate("ApiForm", "Username:", 0));
        deleteUser->setText(QApplication::translate("ApiForm", "Delete", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ApiForm", "Delete User", 0));
        label->setText(QApplication::translate("ApiForm", "Sender:", 0));
        label_4->setText(QApplication::translate("ApiForm", "Receiver:", 0));
        label_9->setText(QApplication::translate("ApiForm", "Amount", 0));
        payment->setText(QApplication::translate("ApiForm", "Pay", 0));
        payment_output->setHtml(QApplication::translate("ApiForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-style:italic;\"><br /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ApiForm", "Payment", 0));
        label_11->setText(QApplication::translate("ApiForm", "Username:", 0));
        multipleUserSearch->setText(QApplication::translate("ApiForm", "Search", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ApiForm", "Multiple User Search", 0));
        label_10->setText(QApplication::translate("ApiForm", "Username:", 0));
        getUser_username->setText(QString());
        getUser->setText(QApplication::translate("ApiForm", "Search", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("ApiForm", "Single User Search", 0));
    } // retranslateUi

};

namespace Ui {
    class ApiForm: public Ui_ApiForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APIFORM_H
