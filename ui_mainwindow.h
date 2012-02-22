/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 12. Feb 22:47:48 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNouvelle_Recherche;
    QAction *actionA_propos;
    QAction *actionDerni_res_requ_tes;
    QAction *actionFermer;
    QAction *actionA_propos_Qt;
    QAction *actionOptions;
    QAction *actionChanger_la_langue;
    QAction *actionCopier;
    QAction *actionCouper;
    QAction *actionColler;
    QWidget *centralWidget;
    QFrame *topFrame;
    QPushButton *openButton_2;
    QPushButton *searchButton;
    QFrame *bottomFrame;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuOutils;
    QMenu *menuAide;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(691, 437);
        actionNouvelle_Recherche = new QAction(MainWindow);
        actionNouvelle_Recherche->setObjectName(QString::fromUtf8("actionNouvelle_Recherche"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNouvelle_Recherche->setIcon(icon);
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        actionDerni_res_requ_tes = new QAction(MainWindow);
        actionDerni_res_requ_tes->setObjectName(QString::fromUtf8("actionDerni_res_requ_tes"));
        actionDerni_res_requ_tes->setEnabled(false);
        actionFermer = new QAction(MainWindow);
        actionFermer->setObjectName(QString::fromUtf8("actionFermer"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFermer->setIcon(icon1);
        actionA_propos_Qt = new QAction(MainWindow);
        actionA_propos_Qt->setObjectName(QString::fromUtf8("actionA_propos_Qt"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionChanger_la_langue = new QAction(MainWindow);
        actionChanger_la_langue->setObjectName(QString::fromUtf8("actionChanger_la_langue"));
        actionCopier = new QAction(MainWindow);
        actionCopier->setObjectName(QString::fromUtf8("actionCopier"));
        actionCouper = new QAction(MainWindow);
        actionCouper->setObjectName(QString::fromUtf8("actionCouper"));
        actionColler = new QAction(MainWindow);
        actionColler->setObjectName(QString::fromUtf8("actionColler"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        topFrame = new QFrame(centralWidget);
        topFrame->setObjectName(QString::fromUtf8("topFrame"));
        topFrame->setEnabled(true);
        topFrame->setGeometry(QRect(0, 0, 691, 48));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topFrame->sizePolicy().hasHeightForWidth());
        topFrame->setSizePolicy(sizePolicy);
        topFrame->setFrameShape(QFrame::StyledPanel);
        topFrame->setFrameShadow(QFrame::Raised);
        openButton_2 = new QPushButton(topFrame);
        openButton_2->setObjectName(QString::fromUtf8("openButton_2"));
        openButton_2->setGeometry(QRect(60, 0, 47, 43));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/folder_green_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openButton_2->setIcon(icon2);
        openButton_2->setIconSize(QSize(35, 35));
        searchButton = new QPushButton(topFrame);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setEnabled(true);
        searchButton->setGeometry(QRect(0, 0, 54, 43));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(9);
        sizePolicy1.setVerticalStretch(6);
        sizePolicy1.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy1);
        searchButton->setMinimumSize(QSize(54, 0));
        searchButton->setMaximumSize(QSize(16777214, 16777215));
        searchButton->setSizeIncrement(QSize(4, 2));
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(35, 35));
        bottomFrame = new QFrame(centralWidget);
        bottomFrame->setObjectName(QString::fromUtf8("bottomFrame"));
        bottomFrame->setGeometry(QRect(0, 54, 691, 331));
        bottomFrame->setFrameShape(QFrame::StyledPanel);
        bottomFrame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 691, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QString::fromUtf8("menuEdition"));
        menuOutils = new QMenu(menuBar);
        menuOutils->setObjectName(QString::fromUtf8("menuOutils"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuOutils->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionNouvelle_Recherche);
        menuFichier->addSeparator();
        menuFichier->addAction(actionDerni_res_requ_tes);
        menuFichier->addSeparator();
        menuFichier->addAction(actionFermer);
        menuEdition->addAction(actionCopier);
        menuEdition->addAction(actionCouper);
        menuEdition->addAction(actionColler);
        menuOutils->addAction(actionOptions);
        menuOutils->addAction(actionChanger_la_langue);
        menuAide->addAction(actionA_propos);
        menuAide->addAction(actionA_propos_Qt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNouvelle_Recherche->setText(QApplication::translate("MainWindow", "Nouvelle Recherche", 0, QApplication::UnicodeUTF8));
        actionA_propos->setText(QApplication::translate("MainWindow", "A propos", 0, QApplication::UnicodeUTF8));
        actionDerni_res_requ_tes->setText(QApplication::translate("MainWindow", "derni\303\250res requ\303\252tes", 0, QApplication::UnicodeUTF8));
        actionFermer->setText(QApplication::translate("MainWindow", "Fermer", 0, QApplication::UnicodeUTF8));
        actionA_propos_Qt->setText(QApplication::translate("MainWindow", "A propos Qt", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
        actionChanger_la_langue->setText(QApplication::translate("MainWindow", "Changer la langue", 0, QApplication::UnicodeUTF8));
        actionCopier->setText(QApplication::translate("MainWindow", "copier", 0, QApplication::UnicodeUTF8));
        actionCouper->setText(QApplication::translate("MainWindow", "couper", 0, QApplication::UnicodeUTF8));
        actionColler->setText(QApplication::translate("MainWindow", "coller", 0, QApplication::UnicodeUTF8));
        openButton_2->setText(QString());
        searchButton->setText(QString());
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0, QApplication::UnicodeUTF8));
        menuOutils->setTitle(QApplication::translate("MainWindow", "Outils", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
