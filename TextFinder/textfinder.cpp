#include "textfinder.h"
#include "ui_textfinder.h"
#include <QFile>
#include <QTextStream>

TextFinder::TextFinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadTextFile(); /* Manually entered */
}

TextFinder::~TextFinder()
{
    delete ui;
}

/*Manually entered
 */
void TextFinder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}

/* Manually entered
 */
void TextFinder::loadTextFile()
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
