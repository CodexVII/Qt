/********************************************************************************
** Form generated from reading UI file 'benchmark.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BENCHMARK_H
#define UI_BENCHMARK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Benchmark
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTextBrowser *textBrowser_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QTextBrowser *textBrowser;
    QLabel *label;
    QComboBox *comboBox;
    QProgressBar *progressBar;

    void setupUi(QWidget *Benchmark)
    {
        if (Benchmark->objectName().isEmpty())
            Benchmark->setObjectName(QStringLiteral("Benchmark"));
        Benchmark->resize(687, 309);
        Benchmark->setContextMenuPolicy(Qt::NoContextMenu);
        Benchmark->setStyleSheet(QLatin1String("QTextBrowser{\n"
"	background-color:transparent;\n"
"	border:none\n"
"}"));
        radioButton = new QRadioButton(Benchmark);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(30, 20, 141, 17));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(Benchmark);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 110, 131, 17));
        textBrowser_2 = new QTextBrowser(Benchmark);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(50, 40, 341, 61));
        layoutWidget = new QWidget(Benchmark);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(441, 10, 211, 116));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(10000);
        horizontalSlider->setSingleStep(5);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(30, 0));
        label_4->setMaximumSize(QSize(30, 16777215));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4->setMargin(0);

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(30, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(Benchmark);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 130, 341, 101));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget1);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::SpanningRole, textBrowser);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        progressBar = new QProgressBar(Benchmark);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(30, 270, 621, 23));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        layoutWidget->raise();
        layoutWidget->raise();
        radioButton->raise();
        radioButton_2->raise();
        textBrowser_2->raise();
        progressBar->raise();

        retranslateUi(Benchmark);
        QObject::connect(horizontalSlider_2, SIGNAL(sliderMoved(int)), label_5, SLOT(setNum(int)));
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), label_4, SLOT(setNum(int)));
        QObject::connect(radioButton, SIGNAL(toggled(bool)), textBrowser, SLOT(setDisabled(bool)));
        QObject::connect(radioButton, SIGNAL(toggled(bool)), comboBox, SLOT(setDisabled(bool)));
        QObject::connect(radioButton, SIGNAL(toggled(bool)), label, SLOT(setDisabled(bool)));
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), textBrowser_2, SLOT(setDisabled(bool)));
        QObject::connect(pushButton, SIGNAL(clicked()), progressBar, SLOT(show()));

        QMetaObject::connectSlotsByName(Benchmark);
    } // setupUi

    void retranslateUi(QWidget *Benchmark)
    {
        Benchmark->setWindowTitle(QApplication::translate("Benchmark", "Benchmark", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Benchmark", "Express Benchmark", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Benchmark", "Targetted Benchmark", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("Benchmark", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Simulates user actions by running through all of the services. The number of requests is specified in the </span><span style=\" font-size:8pt; font-style:italic;\">Iteration</span><span style=\" font-size:8pt;\"> field. Concurrent requests is specified in the </span><span style=\" font-size:8pt; font-style:italic;\">Instances</span><span style=\" font-size:8pt;\"> field.</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Benchmark", "Iterations:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Benchmark", "1", Q_NULLPTR));
        label_3->setText(QApplication::translate("Benchmark", "Instances:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Benchmark", "1", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Benchmark", "Begin Benchmark", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Benchmark", "Cancel Benchmark", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Benchmark", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Makes repeated requests to the specified microservice. The number of repeats depend on the </span><span style=\" font-size:8pt; font-style:italic;\">Iteration</span><span style=\" font-size:8pt;\"> input. The number of concurrent requests can be specified by entering a value into the </span><span style=\" font-size:8pt; font-style:italic;\">Instances</span><span style=\" font-size:8pt;\"> field. </span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Benchmark", "Microservice:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Benchmark", "Payment - Pay", Q_NULLPTR)
         << QApplication::translate("Benchmark", "Payment - Transaction History", Q_NULLPTR)
         << QApplication::translate("Benchmark", "User - Register", Q_NULLPTR)
         << QApplication::translate("Benchmark", "User - Delete", Q_NULLPTR)
         << QApplication::translate("Benchmark", "User - Get (Single User)", Q_NULLPTR)
         << QApplication::translate("Benchmark", "User - Search (Multiple Users)", Q_NULLPTR)
         << QApplication::translate("Benchmark", "User - Validate", Q_NULLPTR)
         << QApplication::translate("Benchmark", "User - Update Password", Q_NULLPTR)
        );
        progressBar->setFormat(QApplication::translate("Benchmark", "   Executing Iteration: %v/%m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Benchmark: public Ui_Benchmark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BENCHMARK_H
