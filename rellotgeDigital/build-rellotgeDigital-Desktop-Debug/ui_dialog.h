/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QLCDNumber *lcdHour;
    QLabel *label_2;
    QPushButton *buttonExit;
    QLabel *label;
    QDial *dialHour;
    QDial *dialMin;
    QLCDNumber *lcdMin;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(633, 516);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdHour = new QLCDNumber(Dialog);
        lcdHour->setObjectName(QString::fromUtf8("lcdHour"));

        gridLayout->addWidget(lcdHour, 1, 0, 2, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        buttonExit = new QPushButton(Dialog);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));

        gridLayout->addWidget(buttonExit, 5, 2, 1, 1);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dialHour = new QDial(Dialog);
        dialHour->setObjectName(QString::fromUtf8("dialHour"));

        gridLayout->addWidget(dialHour, 4, 0, 1, 1);

        dialMin = new QDial(Dialog);
        dialMin->setObjectName(QString::fromUtf8("dialMin"));

        gridLayout->addWidget(dialMin, 4, 1, 1, 1);

        lcdMin = new QLCDNumber(Dialog);
        lcdMin->setObjectName(QString::fromUtf8("lcdMin"));

        gridLayout->addWidget(lcdMin, 1, 1, 2, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Minutes", nullptr));
        buttonExit->setText(QApplication::translate("Dialog", "Exit", nullptr));
        label->setText(QApplication::translate("Dialog", "Hours", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
