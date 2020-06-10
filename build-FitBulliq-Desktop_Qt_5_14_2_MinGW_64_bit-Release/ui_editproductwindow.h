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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditProductWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
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
    QPushButton *pushButton;

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
        gridLayout = new QGridLayout(EditProductWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_10 = new QLabel(EditProductWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        lineEdit_2 = new QLineEdit(EditProductWindow);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 10);
        label_11 = new QLabel(EditProductWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(EditProductWindow);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_13 = new QLabel(EditProductWindow);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        label_14 = new QLabel(EditProductWindow);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_4->addWidget(label_14);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        doubleSpinBox_5 = new QDoubleSpinBox(EditProductWindow);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setMaximum(9999.989999999999782);

        verticalLayout_5->addWidget(doubleSpinBox_5);

        doubleSpinBox_6 = new QDoubleSpinBox(EditProductWindow);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setMaximum(9999.989999999999782);

        verticalLayout_5->addWidget(doubleSpinBox_6);

        doubleSpinBox_7 = new QDoubleSpinBox(EditProductWindow);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(2);
        doubleSpinBox_7->setMaximum(9999.989999999999782);

        verticalLayout_5->addWidget(doubleSpinBox_7);

        doubleSpinBox_8 = new QDoubleSpinBox(EditProductWindow);
        doubleSpinBox_8->setObjectName(QString::fromUtf8("doubleSpinBox_8"));
        doubleSpinBox_8->setMaximum(9999.989999999999782);

        verticalLayout_5->addWidget(doubleSpinBox_8);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_15 = new QLabel(EditProductWindow);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_6->addWidget(label_15);

        label_16 = new QLabel(EditProductWindow);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_6->addWidget(label_16);

        label_17 = new QLabel(EditProductWindow);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_6->addWidget(label_17);

        label_18 = new QLabel(EditProductWindow);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_6->addWidget(label_18);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(EditProductWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(EditProductWindow);

        QMetaObject::connectSlotsByName(EditProductWindow);
    } // setupUi

    void retranslateUi(QDialog *EditProductWindow)
    {
        EditProductWindow->setWindowTitle(QCoreApplication::translate("EditProductWindow", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("EditProductWindow", "Nazwa:", nullptr));
        label_11->setText(QCoreApplication::translate("EditProductWindow", "Kalorie:", nullptr));
        label_12->setText(QCoreApplication::translate("EditProductWindow", "Bia\305\202ka:", nullptr));
        label_13->setText(QCoreApplication::translate("EditProductWindow", "T\305\202uszcze:", nullptr));
        label_14->setText(QCoreApplication::translate("EditProductWindow", "W\304\231glowodany:", nullptr));
        label_15->setText(QCoreApplication::translate("EditProductWindow", "kcal/100g", nullptr));
        label_16->setText(QCoreApplication::translate("EditProductWindow", "g/100g", nullptr));
        label_17->setText(QCoreApplication::translate("EditProductWindow", "g/100g", nullptr));
        label_18->setText(QCoreApplication::translate("EditProductWindow", "g/100g", nullptr));
        pushButton->setText(QCoreApplication::translate("EditProductWindow", "Dodaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProductWindow: public Ui_EditProductWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPRODUCTWINDOW_H
