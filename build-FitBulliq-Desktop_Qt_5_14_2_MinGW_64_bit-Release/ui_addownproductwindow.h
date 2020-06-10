/********************************************************************************
** Form generated from reading UI file 'addownproductwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDOWNPRODUCTWINDOW_H
#define UI_ADDOWNPRODUCTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddOwnProductWindow
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QSpinBox *spinBoxKcal;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *AddOwnProductWindow)
    {
        if (AddOwnProductWindow->objectName().isEmpty())
            AddOwnProductWindow->setObjectName(QString::fromUtf8("AddOwnProductWindow"));
        AddOwnProductWindow->resize(300, 294);
        AddOwnProductWindow->setMinimumSize(QSize(300, 294));
        AddOwnProductWindow->setMaximumSize(QSize(300, 294));
        QFont font;
        font.setPointSize(9);
        AddOwnProductWindow->setFont(font);
        pushButton = new QPushButton(AddOwnProductWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 240, 80, 21));
        layoutWidget = new QWidget(AddOwnProductWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 152, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        layoutWidget1 = new QWidget(AddOwnProductWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 80, 277, 142));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 50, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 10);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        spinBoxKcal = new QSpinBox(layoutWidget1);
        spinBoxKcal->setObjectName(QString::fromUtf8("spinBoxKcal"));
        spinBoxKcal->setMaximum(9999);

        verticalLayout->addWidget(spinBoxKcal);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMaximum(9999.989999999999782);

        verticalLayout->addWidget(doubleSpinBox_2);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(2);
        doubleSpinBox_3->setMaximum(9999.989999999999782);

        verticalLayout->addWidget(doubleSpinBox_3);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setMaximum(9999.989999999999782);

        verticalLayout->addWidget(doubleSpinBox_4);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(AddOwnProductWindow);

        QMetaObject::connectSlotsByName(AddOwnProductWindow);
    } // setupUi

    void retranslateUi(QDialog *AddOwnProductWindow)
    {
        AddOwnProductWindow->setWindowTitle(QCoreApplication::translate("AddOwnProductWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("AddOwnProductWindow", "Dodaj", nullptr));
        label->setText(QCoreApplication::translate("AddOwnProductWindow", "Nazwa:", nullptr));
        label_2->setText(QCoreApplication::translate("AddOwnProductWindow", "Kalorie:", nullptr));
        label_3->setText(QCoreApplication::translate("AddOwnProductWindow", "Bia\305\202ka:", nullptr));
        label_4->setText(QCoreApplication::translate("AddOwnProductWindow", "T\305\202uszcze:", nullptr));
        label_5->setText(QCoreApplication::translate("AddOwnProductWindow", "W\304\231glowodany:", nullptr));
        label_9->setText(QCoreApplication::translate("AddOwnProductWindow", "kcal/100g", nullptr));
        label_6->setText(QCoreApplication::translate("AddOwnProductWindow", "g/100g", nullptr));
        label_7->setText(QCoreApplication::translate("AddOwnProductWindow", "g/100g", nullptr));
        label_8->setText(QCoreApplication::translate("AddOwnProductWindow", "g/100g", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddOwnProductWindow: public Ui_AddOwnProductWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDOWNPRODUCTWINDOW_H
