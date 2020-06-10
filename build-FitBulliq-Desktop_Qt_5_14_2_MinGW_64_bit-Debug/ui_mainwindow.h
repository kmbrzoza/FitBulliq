/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QDateEdit *dateEdit;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *RemovMealpushButton;
    QPushButton *AddMealButton;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLabel *dayMacrolabel;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *mealMacrolabel;
    QLabel *label_4;
    QListWidget *listWidget;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *AddProductButton;
    QPushButton *removeMealPrdctpushButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(485, 462);
        MainWindow->setMinimumSize(QSize(485, 462));
        MainWindow->setMaximumSize(QSize(485, 462));
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout->addWidget(dateEdit);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaxVisibleItems(15);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        RemovMealpushButton = new QPushButton(centralwidget);
        RemovMealpushButton->setObjectName(QString::fromUtf8("RemovMealpushButton"));

        verticalLayout_2->addWidget(RemovMealpushButton);

        AddMealButton = new QPushButton(centralwidget);
        AddMealButton->setObjectName(QString::fromUtf8("AddMealButton"));

        verticalLayout_2->addWidget(AddMealButton);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        dayMacrolabel = new QLabel(centralwidget);
        dayMacrolabel->setObjectName(QString::fromUtf8("dayMacrolabel"));

        verticalLayout_4->addWidget(dayMacrolabel);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        mealMacrolabel = new QLabel(centralwidget);
        mealMacrolabel->setObjectName(QString::fromUtf8("mealMacrolabel"));

        verticalLayout_3->addWidget(mealMacrolabel);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::AutoText);
        label_4->setScaledContents(false);

        verticalLayout_3->addWidget(label_4);


        verticalLayout_5->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        AddProductButton = new QPushButton(centralwidget);
        AddProductButton->setObjectName(QString::fromUtf8("AddProductButton"));

        horizontalLayout_3->addWidget(AddProductButton);

        removeMealPrdctpushButton = new QPushButton(centralwidget);
        removeMealPrdctpushButton->setObjectName(QString::fromUtf8("removeMealPrdctpushButton"));

        horizontalLayout_3->addWidget(removeMealPrdctpushButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 485, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        RemovMealpushButton->setText(QCoreApplication::translate("MainWindow", "Usu\305\204 posi\305\202ek", nullptr));
        AddMealButton->setText(QCoreApplication::translate("MainWindow", "Dodaj posi\305\202ek", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Makrosk\305\202adniki z dnia:", nullptr));
        dayMacrolabel->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Makrosk\305\202adniki z posi\305\202ku:", nullptr));
        mealMacrolabel->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "B: Bia\305\202ko T: T\305\202uszcze W: W\304\231glowodany", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nazwa produktu | Ilosc | Kcal | Bia\305\202ko | T\305\202uszcze | W\304\231glowodany", nullptr));
        AddProductButton->setText(QCoreApplication::translate("MainWindow", "Dodaj produkt", nullptr));
        removeMealPrdctpushButton->setText(QCoreApplication::translate("MainWindow", "Usu\305\204 produkt", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Edytuj produkt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
