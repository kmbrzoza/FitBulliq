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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditMealProductWindow
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

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
        pushButton = new QPushButton(EditMealProductWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 140, 80, 21));
        layoutWidget = new QWidget(EditMealProductWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 90, 181, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(EditMealProductWindow);

        QMetaObject::connectSlotsByName(EditMealProductWindow);
    } // setupUi

    void retranslateUi(QDialog *EditMealProductWindow)
    {
        EditMealProductWindow->setWindowTitle(QCoreApplication::translate("EditMealProductWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("EditMealProductWindow", "Edytuj", nullptr));
        label->setText(QCoreApplication::translate("EditMealProductWindow", "Wpisz gramy:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditMealProductWindow: public Ui_EditMealProductWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMEALPRODUCTWINDOW_H
