#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lcdBin->setBinMode();
    ui->lcdOctal->setOctMode();
    ui->lcdHex->setHexMode();
}

Widget::~Widget()
{
    delete ui;
}

