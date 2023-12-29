#pragma once

#include <QtWidgets/QWidget>
#include "ui_toolkits.h"

#include "Pdf2Word.h"
#include "Pdf2Image.h"
#include "ui_Pdf2Word.h"
#include "ui_Pdf2Image.h"

class ToolKits : public QWidget
{
    Q_OBJECT

public:
    ToolKits(QWidget *parent = nullptr);
    ~ToolKits();

private:
    Ui::ToolKitsClass ui;

private slots:
    void on_pdf2word_clicked();
    void on_pdf2img_clicked();
};
