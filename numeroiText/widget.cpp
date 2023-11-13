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


void Widget::on_lineEdit_textChanged(const QString &arg1)
{
    QString input = arg1;

    if(input.length() == 1 && !input.back().isDigit()){
        ui->lineEdit->setText("");
    }
    else if(input.length() > 1 && !input.back().isDigit()){
        ui->lineEdit->setText(input.remove(input.length()-1,input.length()-1));
    }
}

void Widget::on_lineEdit_2_textChanged(const QString &arg1)
{
    QString input = arg1;

    if(input.length() == 1 && !input.back().isLetter()){
        ui->lineEdit_2->setText("");
    }
    else if(input.length() > 1 && !input.back().isLetter()){
        ui->lineEdit_2->setText(input.remove(input.length()-1,input.length()-1));
    }
}
