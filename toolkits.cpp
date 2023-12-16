#include "toolkits.h"

ToolKits::ToolKits(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    ui.pdf2word->disconnect();
    connect(ui.youGet, SIGNAL(clicked()), this, SLOT(on_downloadvideo_clicked()));
}

ToolKits::~ToolKits()
{}

void ToolKits::on_downloadvideo_clicked() {
}
