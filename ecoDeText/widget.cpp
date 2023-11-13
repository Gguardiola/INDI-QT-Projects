#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

//a.connect(
//            QPlainTextEdit.textEditMain, SIGNAL(textChanged(const QString&)),
  //          QPlainTextEdit.textEditCopy, SLOT(setText(const QString&)));


void Widget::on_textEditMain_textChanged()
{
    ui->textEditCopy->setText(ui->textEditMain->toPlainText());
}
