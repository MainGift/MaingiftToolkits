#include "toolkits.h"

ToolKits::ToolKits(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    ui.pdf2word->disconnect();
    connect(ui.pdf2word, SIGNAL(clicked()), this, SLOT(on_pdf2word_clicked()));
}

ToolKits::~ToolKits()
{}

void ToolKits::on_pdf2word_clicked() {
    Pdf2Word* SonWidget = new Pdf2Word;
    SonWidget->show();
}
