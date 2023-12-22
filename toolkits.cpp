#include <qsystemtrayicon.h>
#include <qicon.h>
#include <qmenu.h>
#include <qaction.h>

#include "toolkits.h"

ToolKits::ToolKits(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    ui.pdf2word->disconnect();
    connect(ui.pdf2word, SIGNAL(clicked()), this, SLOT(on_pdf2word_clicked()));

    QApplication::setQuitOnLastWindowClosed(false);

    QSystemTrayIcon* icon = new QSystemTrayIcon(this);
    icon->setIcon(QIcon(":/ToolKits/MaingiftToolKits.ico"));

    QMenu* menu = new QMenu;
    QAction* showApp, * quitApp;
    showApp = new QAction("\346\230\276\347\244\272\344\270\273\347\252\227\345\217\243");
    quitApp = new QAction("\351\200\200\345\207\272");
    connect(showApp, &QAction::triggered, [&]() {showNormal(); });
    connect(quitApp, &QAction::triggered, [&]() {QCoreApplication::quit(); });

    menu->addAction(showApp);
    menu->addSeparator();
    menu->addAction(quitApp);
    icon->setContextMenu(menu);

    connect(icon, &QSystemTrayIcon::activated, [=](QSystemTrayIcon::ActivationReason r){
        if (r == QSystemTrayIcon::ActivationReason::Trigger) emit showApp->triggered();
    });

    icon->show();
}

ToolKits::~ToolKits()
{}

void ToolKits::on_pdf2word_clicked() {
    Pdf2Word* SonWidget = new Pdf2Word;
    SonWidget->show();
}
