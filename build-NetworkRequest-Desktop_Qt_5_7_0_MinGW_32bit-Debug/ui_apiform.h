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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApiForm
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *createUser_username;
    QLabel *label_3;
    QLineEdit *createUser_password;
    QPushButton *createUser;
    QTextEdit *createUser_output;

    void setupUi(QWidget *ApiForm)
    {
        if (ApiForm->objectName().isEmpty())
            ApiForm->setObjectName(QStringLiteral("ApiForm"));
        ApiForm->resize(351, 263);
        label = new QLabel(ApiForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 71, 21));
        label->setScaledContents(true);
        groupBox = new QGroupBox(ApiForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 276, 161));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        createUser_username = new QLineEdit(groupBox);
        createUser_username->setObjectName(QStringLiteral("createUser_username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, createUser_username);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        createUser_password = new QLineEdit(groupBox);
        createUser_password->setObjectName(QStringLiteral("createUser_password"));
        createUser_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, createUser_password);

        createUser = new QPushButton(groupBox);
        createUser->setObjectName(QStringLiteral("createUser"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, createUser);

        createUser_output = new QTextEdit(groupBox);
        createUser_output->setObjectName(QStringLiteral("createUser_output"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, createUser_output);


        retranslateUi(ApiForm);

        QMetaObject::connectSlotsByName(ApiForm);
    } // setupUi

    void retranslateUi(QWidget *ApiForm)
    {
        ApiForm->setWindowTitle(QApplication::translate("ApiForm", "ApiForm", 0));
        label->setText(QApplication::translate("ApiForm", "User Creation", 0));
        groupBox->setTitle(QApplication::translate("ApiForm", "GroupBox", 0));
        label_2->setText(QApplication::translate("ApiForm", "Username:", 0));
        createUser_username->setText(QString());
        label_3->setText(QApplication::translate("ApiForm", "Password:", 0));
        createUser_password->setText(QString());
        createUser->setText(QApplication::translate("ApiForm", "Create User", 0));
    } // retranslateUi

};

namespace Ui {
    class ApiForm: public Ui_ApiForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APIFORM_H
