/********************************************************************************
** Form generated from reading UI file 'editproductwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPRODUCTWINDOW_H
#define UI_EDITPRODUCTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProductWindow
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_5;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;
    QDoubleSpinBox *doubleSpinBox_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;

    void setupUi(QDialog *EditProductWindow)
    {
        if (EditProductWindow->objectName().isEmpty())
            EditProductWindow->setObjectName(QString::fromUtf8("EditProductWindow"));
        EditProductWindow->resize(300, 294);
        EditProductWindow->setMinimumSize(QSize(300, 294));
        EditProductWindow->setMaximumSize(QSize(300, 294));
        QFont font;
        font.setPointSize(9);
        EditProductWindow->setFont(font);
        layoutWidget = new QWidget(EditProductWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 152, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton = new QPushButton(EditProductWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 240, 80, 21));
        layoutWidget_2 = new QWidget(EditProductWindow);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 80, 277, 142));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 50, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 10);
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_4->addWidget(label_14);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        doubleSpinBox_5 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setMaximum(9999.989999999999782);

        verticalLayout_5->addWidget(doubleSpinBox_5);

        doubleSpinBox_6 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setMaximum(9999.989999999999782);

        verticalLayout_5->addWidget(doubleSpinBox_6);

        doubleSpinBox_7 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(2);
        doubleSpinBox_7->setMaximum(9999.989999999999782);

        verticalLayout_5->addWidget(doubleSpinBox_7);

        doubleSpinBox_8 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_8->setObjectName(QString::fromUtf8("doubleSpinBox_8"));
        doubleSpinBox_8->setMaximum(9999.989999999999782);

        verticalLayout_5->addWidget(doubleSpinBox_8);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_6->addWidget(label_15);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_6->addWidget(label_16);

        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_6->addWidget(label_17);

        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_6->addWidget(label_18);


        horizontalLayout_4->addLayout(verticalLayout_6);


        retranslateUi(EditProductWindow);

        QMetaObject::connectSlotsByName(EditProductWindow);
    } // setupUi

    void retranslateUi(QDialog *EditProductWindow)
    {
        EditProductWindow->setWindowTitle(QCoreApplication::translate("EditProductWindow", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("EditProductWindow", "Nazwa:", nullptr));
        pushButton->setText(QCoreApplication::translate("EditProductWindow", "Dodaj", nullptr));
        label_11->setText(QCoreApplication::translate("EditProductWindow", "Kalorie:", nullptr));
        label_12->setText(QCoreApplication::translate("EditProductWindow", "Bia\305\202ka:", nullptr));
        label_13->setText(QCoreApplication::translate("EditProductWindow", "T\305\202uszcze:", nullptr));
        label_14->setText(QCoreApplication::translate("EditProductWindow", "W\304\231glowodany:", nullptr));
        label_15->setText(QCoreApplication::translate("EditProductWindow", "kcal/100g", nullptr));
        label_16->setText(QCoreApplication::translate("EditProductWindow", "g/100g", nullptr));
        label_17->setText(QCoreApplication::translate("EditProductWindow", "g/100g", nullptr));
        label_18->setText(QCoreApplication::translate("EditProductWindow", "g/100g", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProductWindow: public Ui_EditProductWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPRODUCTWINDOW_H
