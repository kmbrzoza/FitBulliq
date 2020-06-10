/********************************************************************************
** Form generated from reading UI file 'editmealproductwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMEALPRODUCTWINDOW_H
#define UI_EDITMEALPRODUCTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditMealProductWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *EditMealProductWindow)
    {
        if (EditMealProductWindow->objectName().isEmpty())
            EditMealProductWindow->setObjectName(QString::fromUtf8("EditMealProductWindow"));
        EditMealProductWindow->resize(349, 239);
        EditMealProductWindow->setMinimumSize(QSize(349, 239));
        EditMealProductWindow->setMaximumSize(QSize(349, 239));
        QFont font;
        font.setPointSize(9);
        EditMealProductWindow->setFont(font);
        gridLayout = new QGridLayout(EditMealProductWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(EditMealProductWindow);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(EditMealProductWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(EditMealProductWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);


        retranslateUi(EditMealProductWindow);

        QMetaObject::connectSlotsByName(EditMealProductWindow);
    } // setupUi

    void retranslateUi(QDialog *EditMealProductWindow)
    {
        EditMealProductWindow->setWindowTitle(QCoreApplication::translate("EditMealProductWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditMealProductWindow", "Wpisz gramy:", nullptr));
        pushButton->setText(QCoreApplication::translate("EditMealProductWindow", "Edytuj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditMealProductWindow: public Ui_EditMealProductWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMEALPRODUCTWINDOW_H
