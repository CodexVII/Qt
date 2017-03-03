/********************************************************************************
** Form generated from reading UI file 'apiform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApiForm
{
public:
    QAction *actionBenchmark;
    QAction *actionQuit;
    QAction *actionAbout;
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
    QWidget *tab_7;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLineEdit *getTransactionHistory_username;
    QPushButton *getTransactionHistory;
    QTableWidget *tableWidget;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QLabel *label_11;
    QLineEdit *multipleUserSearch_username;
    QTableWidget *multipleUserSearch_table;
    QPushButton *multipleUserSearch;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_5;
    QLabel *label_10;
    QLineEdit *getUser_username;
    QPushButton *getUser;
    QTextBrowser *getUser_output;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *ApiForm)
    {
        if (ApiForm->objectName().isEmpty())
            ApiForm->setObjectName(QStringLiteral("ApiForm"));
        ApiForm->resize(723, 287);
        actionBenchmark = new QAction(ApiForm);
        actionBenchmark->setObjectName(QStringLiteral("actionBenchmark"));
        actionQuit = new QAction(ApiForm);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(ApiForm);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
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
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_3 = new QGridLayout(tab_7);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_12 = new QLabel(tab_7);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        getTransactionHistory_username = new QLineEdit(tab_7);
        getTransactionHistory_username->setObjectName(QStringLiteral("getTransactionHistory_username"));

        gridLayout_3->addWidget(getTransactionHistory_username, 0, 1, 1, 1);

        getTransactionHistory = new QPushButton(tab_7);
        getTransactionHistory->setObjectName(QStringLiteral("getTransactionHistory"));

        gridLayout_3->addWidget(getTransactionHistory, 1, 0, 1, 2);

        tableWidget = new QTableWidget(tab_7);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        gridLayout_3->addWidget(tableWidget, 2, 0, 1, 2);

        tabWidget->addTab(tab_7, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 0, 0, 1, 1);

        multipleUserSearch_username = new QLineEdit(tab_5);
        multipleUserSearch_username->setObjectName(QStringLiteral("multipleUserSearch_username"));

        gridLayout_5->addWidget(multipleUserSearch_username, 0, 1, 1, 1);

        multipleUserSearch_table = new QTableWidget(tab_5);
        if (multipleUserSearch_table->columnCount() < 4)
            multipleUserSearch_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        multipleUserSearch_table->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        multipleUserSearch_table->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        multipleUserSearch_table->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        multipleUserSearch_table->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        multipleUserSearch_table->setObjectName(QStringLiteral("multipleUserSearch_table"));
        multipleUserSearch_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        multipleUserSearch_table->setSortingEnabled(true);
        multipleUserSearch_table->horizontalHeader()->setCascadingSectionResizes(false);
        multipleUserSearch_table->horizontalHeader()->setDefaultSectionSize(160);
        multipleUserSearch_table->horizontalHeader()->setStretchLastSection(true);

        gridLayout_5->addWidget(multipleUserSearch_table, 2, 0, 1, 2);

        multipleUserSearch = new QPushButton(tab_5);
        multipleUserSearch->setObjectName(QStringLiteral("multipleUserSearch"));

        gridLayout_5->addWidget(multipleUserSearch, 1, 0, 1, 2);

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
        ApiForm->setCentralWidget(tabWidget);
        menuBar = new QMenuBar(ApiForm);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 723, 20));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        ApiForm->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionBenchmark);
        menuMenu->addSeparator();
        menuMenu->addAction(actionAbout);
        menuMenu->addAction(actionQuit);

        retranslateUi(ApiForm);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ApiForm);
    } // setupUi

    void retranslateUi(QMainWindow *ApiForm)
    {
        ApiForm->setWindowTitle(QApplication::translate("ApiForm", "REST API Client", Q_NULLPTR));
        actionBenchmark->setText(QApplication::translate("ApiForm", "Benchmark", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("ApiForm", "Quit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("ApiForm", "About", Q_NULLPTR));
        label_2->setText(QApplication::translate("ApiForm", "Username:", Q_NULLPTR));
        createUser_username->setText(QString());
        label_3->setText(QApplication::translate("ApiForm", "Password:", Q_NULLPTR));
        createUser_password->setText(QString());
        createUser->setText(QApplication::translate("ApiForm", "Create", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ApiForm", "User Creation", Q_NULLPTR));
        label_5->setText(QApplication::translate("ApiForm", "Username:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ApiForm", "Old Password:", Q_NULLPTR));
        label_7->setText(QApplication::translate("ApiForm", "New Password:", Q_NULLPTR));
        updatePassword->setText(QApplication::translate("ApiForm", "Update", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ApiForm", "Password Update", Q_NULLPTR));
        label_8->setText(QApplication::translate("ApiForm", "Username:", Q_NULLPTR));
        deleteUser->setText(QApplication::translate("ApiForm", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ApiForm", "Delete User", Q_NULLPTR));
        label->setText(QApplication::translate("ApiForm", "Sender:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ApiForm", "Receiver:", Q_NULLPTR));
        label_9->setText(QApplication::translate("ApiForm", "Amount", Q_NULLPTR));
        payment->setText(QApplication::translate("ApiForm", "Pay", Q_NULLPTR));
        payment_output->setHtml(QApplication::translate("ApiForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-style:italic;\"><br /></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ApiForm", "Payment", Q_NULLPTR));
        label_12->setText(QApplication::translate("ApiForm", "Username:", Q_NULLPTR));
        getTransactionHistory_username->setText(QString());
        getTransactionHistory->setText(QApplication::translate("ApiForm", "Search", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ApiForm", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ApiForm", "Timestamp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ApiForm", "Receiver", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ApiForm", "Sender", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ApiForm", "Amount", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("ApiForm", "Transaction History", Q_NULLPTR));
        label_11->setText(QApplication::translate("ApiForm", "Username:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = multipleUserSearch_table->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("ApiForm", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = multipleUserSearch_table->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("ApiForm", "Username", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = multipleUserSearch_table->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("ApiForm", "Password", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = multipleUserSearch_table->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("ApiForm", "Balance", Q_NULLPTR));
        multipleUserSearch->setText(QApplication::translate("ApiForm", "Search", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ApiForm", "Multiple User Search", Q_NULLPTR));
        label_10->setText(QApplication::translate("ApiForm", "Username:", Q_NULLPTR));
        getUser_username->setText(QString());
        getUser->setText(QApplication::translate("ApiForm", "Search", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("ApiForm", "Single User Search", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("ApiForm", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApiForm: public Ui_ApiForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APIFORM_H
