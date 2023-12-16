#pragma once

#include <QtWidgets/QWidget>
#include "ui_toolkits.h"

class ToolKits : public QWidget
{
    Q_OBJECT

public:
    ToolKits(QWidget *parent = nullptr);
    ~ToolKits();

private:
    Ui::ToolKitsClass ui;

private slots:
    void on_downloadvideo_clicked();
};
