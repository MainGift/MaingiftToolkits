#pragma once

#include <QWidget>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <qstringlist.h>
#include "ui_Pdf2Image.h"
#include "Spire.Pdf.o.h"

class Pdf2Image : public QWidget
{
	Q_OBJECT

public:
	Pdf2Image(QWidget *parent = nullptr);
	~Pdf2Image();

private:
	Ui::Pdf2ImageClass ui;
	QStringList filter;
	Spire::Pdf::PdfDocument* pdf = nullptr;

private slots:
	void on_filename_clicked();
	void on_output_clicked();
};
