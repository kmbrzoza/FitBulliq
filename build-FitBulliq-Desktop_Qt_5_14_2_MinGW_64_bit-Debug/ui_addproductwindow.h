/********************************************************************************
** Form generated from reading UI file 'addproductwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCTWINDOW_H
#define UI_ADDPRODUCTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddProductWindow
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *AddProductpushButton;
    QPushButton *AddOwnPrdctpushButton;
    QPushButton *pushButton;
    QPushButton *EditProductpushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *GramslineEdit;
    QLabel *label_5;
    QListWidget *listWidget;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *SearchlineEdit;
    QLabel *label_7;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *calorieslabel;
    QLabel *label_8;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *proteinlabel;
    QLabel *label_9;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *fatslabel;
    QLabel *label_10;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *carbohydrateslabel;
    QLabel *label_11;

    void setupUi(QDialog *AddProductWindow)
    {
        if (AddProductWindow->objectName().isEmpty())
            AddProductWindow->setObjectName(QString::fromUtf8("AddProductWindow"));
        AddProductWindow->setWindowModality(Qt::NonModal);
        AddProductWindow->setEnabled(true);
        AddProductWindow->resize(503, 381);
        AddProductWindow->setMinimumSize(QSize(503, 381));
        AddProductWindow->setMaximumSize(QSize(503, 381));
        QFont font;
        font.setPointSize(9);
        AddProductWindow->setFont(font);
        layoutWidget = new QWidget(AddProductWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 330, 389, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        AddProductpushButton = new QPushButton(layoutWidget);
        AddProductpushButton->setObjectName(QString::fromUtf8("AddProductpushButton"));

        horizontalLayout_3->addWidget(AddProductpushButton);

        AddOwnPrdctpushButton = new QPushButton(layoutWidget);
        AddOwnPrdctpushButton->setObjectName(QString::fromUtf8("AddOwnPrdctpushButton"));

        horizontalLayout_3->addWidget(AddOwnPrdctpushButton);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        EditProductpushButton = new QPushButton(layoutWidget);
        EditProductpushButton->setObjectName(QString::fromUtf8("EditProductpushButton"));

        horizontalLayout_3->addWidget(EditProductpushButton);

        layoutWidget1 = new QWidget(AddProductWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(310, 50, 81, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        GramslineEdit = new QLineEdit(layoutWidget1);
        GramslineEdit->setObjectName(QString::fromUtf8("GramslineEdit"));

        horizontalLayout->addWidget(GramslineEdit);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        listWidget = new QListWidget(AddProductWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 281, 261));
        layoutWidget2 = new QWidget(AddProductWindow);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 162, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        SearchlineEdit = new QLineEdit(layoutWidget2);
        SearchlineEdit->setObjectName(QString::fromUtf8("SearchlineEdit"));

        horizontalLayout_4->addWidget(SearchlineEdit);

        label_7 = new QLabel(AddProductWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 310, 321, 16));
        layoutWidget3 = new QWidget(AddProductWindow);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(312, 92, 161, 201));
        gridLayout = new QGridLayout(layoutWidget3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        calorieslabel = new QLabel(layoutWidget3);
        calorieslabel->setObjectName(QString::fromUtf8("calorieslabel"));

        horizontalLayout_2->addWidget(calorieslabel);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        proteinlabel = new QLabel(layoutWidget3);
        proteinlabel->setObjectName(QString::fromUtf8("proteinlabel"));

        horizontalLayout_5->addWidget(proteinlabel);

        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        fatslabel = new QLabel(layoutWidget3);
        fatslabel->setObjectName(QString::fromUtf8("fatslabel"));

        horizontalLayout_6->addWidget(fatslabel);

        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        carbohydrateslabel = new QLabel(layoutWidget3);
        carbohydrateslabel->setObjectName(QString::fromUtf8("carbohydrateslabel"));

        horizontalLayout_7->addWidget(carbohydrateslabel);

        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);


        gridLayout->addLayout(horizontalLayout_7, 3, 1, 1, 1);


        retranslateUi(AddProductWindow);

        QMetaObject::connectSlotsByName(AddProductWindow);
    } // setupUi

    void retranslateUi(QDialog *AddProductWindow)
    {
        AddProductWindow->setWindowTitle(QCoreApplication::translate("AddProductWindow", "Dialog", nullptr));
        AddProductpushButton->setText(QCoreApplication::translate("AddProductWindow", "Dodaj", nullptr));
        AddOwnPrdctpushButton->setText(QCoreApplication::translate("AddProductWindow", "Dodaj w\305\202asny produkt", nullptr));
        pushButton->setText(QCoreApplication::translate("AddProductWindow", "Usu\305\204", nullptr));
        EditProductpushButton->setText(QCoreApplication::translate("AddProductWindow", "Edytuj", nullptr));
        label_5->setText(QCoreApplication::translate("AddProductWindow", "g/ml", nullptr));
        label_6->setText(QCoreApplication::translate("AddProductWindow", "Wyszukaj", nullptr));
        label_7->setText(QCoreApplication::translate("AddProductWindow", "Nazwa produktu | Kcal | Bia\305\202ko | T\305\202uszcze | W\304\231glowodany", nullptr));
        label->setText(QCoreApplication::translate("AddProductWindow", "Kalorie:", nullptr));
        calorieslabel->setText(QCoreApplication::translate("AddProductWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("AddProductWindow", "kcal", nullptr));
        label_2->setText(QCoreApplication::translate("AddProductWindow", "Bia\305\202ka:", nullptr));
        proteinlabel->setText(QCoreApplication::translate("AddProductWindow", "0", nullptr));
        label_9->setText(QCoreApplication::translate("AddProductWindow", "g", nullptr));
        label_3->setText(QCoreApplication::translate("AddProductWindow", "T\305\202uszcze:", nullptr));
        fatslabel->setText(QCoreApplication::translate("AddProductWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("AddProductWindow", "g", nullptr));
        label_4->setText(QCoreApplication::translate("AddProductWindow", "W\304\231glowodany:", nullptr));
        carbohydrateslabel->setText(QCoreApplication::translate("AddProductWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("AddProductWindow", "g", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProductWindow: public Ui_AddProductWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCTWINDOW_H
