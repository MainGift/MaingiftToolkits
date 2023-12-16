#pragma once

#include <QWidget>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <qstringlist.h>
#include <qobject.h>
#include "ui_Pdf2Word.h"
#include "Spire.Pdf.o.h"

class Pdf2Word : public QWidget
{
	Q_OBJECT

public:
	Pdf2Word(QWidget *parent = nullptr);
	~Pdf2Word();

private:
	Ui::Pdf2WordClass ui;
	QStringList filter;
	Spire::Pdf::PdfDocument* pdf = nullptr;

private slots:
	void on_filename_clicked();
	void on_output_clicked();
};
