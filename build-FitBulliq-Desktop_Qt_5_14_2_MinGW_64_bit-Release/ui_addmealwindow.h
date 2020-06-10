/********************************************************************************
** Form generated from reading UI file 'addmealwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEALWINDOW_H
#define UI_ADDMEALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddMealWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *AddMealLineEdit;
    QPushButton *ConfirmButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AddMealWindow)
    {
        if (AddMealWindow->objectName().isEmpty())
            AddMealWindow->setObjectName(QString::fromUtf8("AddMealWindow"));
        AddMealWindow->resize(395, 283);
        AddMealWindow->setMaximumSize(QSize(1920, 1080));
        QFont font;
        font.setPointSize(9);
        AddMealWindow->setFont(font);
        gridLayout = new QGridLayout(AddMealWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(AddMealWindow);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        AddMealLineEdit = new QLineEdit(AddMealWindow);
        AddMealLineEdit->setObjectName(QString::fromUtf8("AddMealLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, AddMealLineEdit);


        formLayout->setLayout(0, QFormLayout::SpanningRole, formLayout_2);

        ConfirmButton = new QPushButton(AddMealWindow);
        ConfirmButton->setObjectName(QString::fromUtf8("ConfirmButton"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, ConfirmButton);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);


        retranslateUi(AddMealWindow);

        QMetaObject::connectSlotsByName(AddMealWindow);
    } // setupUi

    void retranslateUi(QDialog *AddMealWindow)
    {
        AddMealWindow->setWindowTitle(QCoreApplication::translate("AddMealWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddMealWindow", "Wprowad\305\272 nazw\304\231 posi\305\202ku", nullptr));
        ConfirmButton->setText(QCoreApplication::translate("AddMealWindow", "Zatwierd\305\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMealWindow: public Ui_AddMealWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEALWINDOW_H
