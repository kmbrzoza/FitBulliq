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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMealWindow
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *AddMealLineEdit;
    QPushButton *ConfirmButton;

    void setupUi(QDialog *AddMealWindow)
    {
        if (AddMealWindow->objectName().isEmpty())
            AddMealWindow->setObjectName(QString::fromUtf8("AddMealWindow"));
        AddMealWindow->resize(395, 283);
        AddMealWindow->setMinimumSize(QSize(395, 283));
        AddMealWindow->setMaximumSize(QSize(395, 283));
        QFont font;
        font.setPointSize(9);
        AddMealWindow->setFont(font);
        layoutWidget = new QWidget(AddMealWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 90, 281, 121));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        AddMealLineEdit = new QLineEdit(layoutWidget);
        AddMealLineEdit->setObjectName(QString::fromUtf8("AddMealLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, AddMealLineEdit);


        formLayout->setLayout(0, QFormLayout::LabelRole, formLayout_2);

        ConfirmButton = new QPushButton(layoutWidget);
        ConfirmButton->setObjectName(QString::fromUtf8("ConfirmButton"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, ConfirmButton);


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
