/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QLCDNumber *lcdMinutes;
    QLabel *label_2;
    QLCDNumber *lcdHour;
    QDial *dialMinutes;
    QLabel *label;
    QDial *dialHours;
    QPushButton *buttonExit;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(574, 365);
        gridLayout = new QGridLayout(Form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdMinutes = new QLCDNumber(Form);
        lcdMinutes->setObjectName(QString::fromUtf8("lcdMinutes"));

        gridLayout->addWidget(lcdMinutes, 1, 1, 1, 1);

        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        lcdHour = new QLCDNumber(Form);
        lcdHour->setObjectName(QString::fromUtf8("lcdHour"));

        gridLayout->addWidget(lcdHour, 1, 0, 1, 1);

        dialMinutes = new QDial(Form);
        dialMinutes->setObjectName(QString::fromUtf8("dialMinutes"));
        dialMinutes->setMaximum(59);

        gridLayout->addWidget(dialMinutes, 2, 1, 1, 1);

        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dialHours = new QDial(Form);
        dialHours->setObjectName(QString::fromUtf8("dialHours"));
        dialHours->setMaximum(23);

        gridLayout->addWidget(dialHours, 2, 0, 1, 1);

        buttonExit = new QPushButton(Form);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));

        gridLayout->addWidget(buttonExit, 3, 2, 1, 1);


        retranslateUi(Form);
        QObject::connect(buttonExit, SIGNAL(clicked()), Form, SLOT(close()));
        QObject::connect(dialMinutes, SIGNAL(valueChanged(int)), lcdMinutes, SLOT(display(int)));
        QObject::connect(dialHours, SIGNAL(valueChanged(int)), lcdHour, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_2->setText(QApplication::translate("Form", "Minutes", nullptr));
        label->setText(QApplication::translate("Form", "Hours", nullptr));
        buttonExit->setText(QApplication::translate("Form", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
