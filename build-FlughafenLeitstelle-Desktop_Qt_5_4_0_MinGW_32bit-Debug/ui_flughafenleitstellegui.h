/********************************************************************************
** Form generated from reading UI file 'flughafenleitstellegui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLUGHAFENLEITSTELLEGUI_H
#define UI_FLUGHAFENLEITSTELLEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlughafenLeitstelleGUI
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FlughafenLeitstelleGUI)
    {
        if (FlughafenLeitstelleGUI->objectName().isEmpty())
            FlughafenLeitstelleGUI->setObjectName(QStringLiteral("FlughafenLeitstelleGUI"));
        FlughafenLeitstelleGUI->resize(400, 300);
        menuBar = new QMenuBar(FlughafenLeitstelleGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        FlughafenLeitstelleGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FlughafenLeitstelleGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FlughafenLeitstelleGUI->addToolBar(mainToolBar);
        centralWidget = new QWidget(FlughafenLeitstelleGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FlughafenLeitstelleGUI->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FlughafenLeitstelleGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FlughafenLeitstelleGUI->setStatusBar(statusBar);

        retranslateUi(FlughafenLeitstelleGUI);

        QMetaObject::connectSlotsByName(FlughafenLeitstelleGUI);
    } // setupUi

    void retranslateUi(QMainWindow *FlughafenLeitstelleGUI)
    {
        FlughafenLeitstelleGUI->setWindowTitle(QApplication::translate("FlughafenLeitstelleGUI", "FlughafenLeitstelleGUI", 0));
    } // retranslateUi

};

namespace Ui {
    class FlughafenLeitstelleGUI: public Ui_FlughafenLeitstelleGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLUGHAFENLEITSTELLEGUI_H
