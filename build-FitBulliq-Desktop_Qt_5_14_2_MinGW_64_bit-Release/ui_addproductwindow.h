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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddProductWindow
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *SearchlineEdit;
    QHBoxLayout *horizontalLayout;
    QLineEdit *GramslineEdit;
    QLabel *label_5;
    QListWidget *listWidget;
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
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *AddProductpushButton;
    QPushButton *AddOwnPrdctpushButton;
    QPushButton *pushButton;
    QPushButton *EditProductpushButton;

    void setupUi(QDialog *AddProductWindow)
    {
        if (AddProductWindow->objectName().isEmpty())
            AddProductWindow->setObjectName(QString::fromUtf8("AddProductWindow"));
        AddProductWindow->setWindowModality(Qt::NonModal);
        AddProductWindow->setEnabled(true);
        AddProductWindow->resize(503, 381);
        AddProductWindow->setMaximumSize(QSize(1920, 1080));
        QFont font;
        font.setPointSize(9);
        AddProductWindow->setFont(font);
        gridLayout_2 = new QGridLayout(AddProductWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(AddProductWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        SearchlineEdit = new QLineEdit(AddProductWindow);
        SearchlineEdit->setObjectName(QString::fromUtf8("SearchlineEdit"));

        horizontalLayout_4->addWidget(SearchlineEdit);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        GramslineEdit = new QLineEdit(AddProductWindow);
        GramslineEdit->setObjectName(QString::fromUtf8("GramslineEdit"));

        horizontalLayout->addWidget(GramslineEdit);

        label_5 = new QLabel(AddProductWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        listWidget = new QListWidget(AddProductWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font1;
        font1.setPointSize(10);
        listWidget->setFont(font1);

        gridLayout_2->addWidget(listWidget, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AddProductWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        calorieslabel = new QLabel(AddProductWindow);
        calorieslabel->setObjectName(QString::fromUtf8("calorieslabel"));

        horizontalLayout_2->addWidget(calorieslabel);

        label_8 = new QLabel(AddProductWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_2 = new QLabel(AddProductWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        proteinlabel = new QLabel(AddProductWindow);
        proteinlabel->setObjectName(QString::fromUtf8("proteinlabel"));

        horizontalLayout_5->addWidget(proteinlabel);

        label_9 = new QLabel(AddProductWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        label_3 = new QLabel(AddProductWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        fatslabel = new QLabel(AddProductWindow);
        fatslabel->setObjectName(QString::fromUtf8("fatslabel"));

        horizontalLayout_6->addWidget(fatslabel);

        label_10 = new QLabel(AddProductWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        label_4 = new QLabel(AddProductWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        carbohydrateslabel = new QLabel(AddProductWindow);
        carbohydrateslabel->setObjectName(QString::fromUtf8("carbohydrateslabel"));

        horizontalLayout_7->addWidget(carbohydrateslabel);

        label_11 = new QLabel(AddProductWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);


        gridLayout->addLayout(horizontalLayout_7, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(AddProductWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        AddProductpushButton = new QPushButton(AddProductWindow);
        AddProductpushButton->setObjectName(QString::fromUtf8("AddProductpushButton"));

        horizontalLayout_3->addWidget(AddProductpushButton);

        AddOwnPrdctpushButton = new QPushButton(AddProductWindow);
        AddOwnPrdctpushButton->setObjectName(QString::fromUtf8("AddOwnPrdctpushButton"));

        horizontalLayout_3->addWidget(AddOwnPrdctpushButton);

        pushButton = new QPushButton(AddProductWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        EditProductpushButton = new QPushButton(AddProductWindow);
        EditProductpushButton->setObjectName(QString::fromUtf8("EditProductpushButton"));

        horizontalLayout_3->addWidget(EditProductpushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout, 2, 0, 1, 2);


        retranslateUi(AddProductWindow);

        QMetaObject::connectSlotsByName(AddProductWindow);
    } // setupUi

    void retranslateUi(QDialog *AddProductWindow)
    {
        AddProductWindow->setWindowTitle(QCoreApplication::translate("AddProductWindow", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("AddProductWindow", "Wyszukaj", nullptr));
        label_5->setText(QCoreApplication::translate("AddProductWindow", "g/ml", nullptr));
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
        label_7->setText(QCoreApplication::translate("AddProductWindow", "Nazwa produktu | Kcal | Bia\305\202ko (g) | T\305\202uszcze (g) | W\304\231glowodany (g)", nullptr));
        AddProductpushButton->setText(QCoreApplication::translate("AddProductWindow", "Dodaj", nullptr));
        AddOwnPrdctpushButton->setText(QCoreApplication::translate("AddProductWindow", "Dodaj w\305\202asny produkt", nullptr));
        pushButton->setText(QCoreApplication::translate("AddProductWindow", "Usu\305\204", nullptr));
        EditProductpushButton->setText(QCoreApplication::translate("AddProductWindow", "Edytuj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProductWindow: public Ui_AddProductWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCTWINDOW_H
