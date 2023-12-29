#include "Pdf2Image.h"
#include <string>

Pdf2Image::Pdf2Image(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	filter << "\345\217\257\347\247\273\346\244\215\346\226\207\346\241\243 (*.pdf)"
		<< "\346\211\200\346\234\211\346\226\207\344\273\266 (*.*)";
	connect(ui.filename_btn, SIGNAL(clicked()), this, SLOT(on_filename_clicked()));
	connect(ui.output_btn, SIGNAL(clicked()), this, SLOT(on_output_clicked()));
}

Pdf2Image::~Pdf2Image()
{}

void Pdf2Image::on_filename_clicked() {
	QString qpath = QFileDialog::getOpenFileName(this, "Maingift\345\267\245\345\205\267\347\256\261", ".", filter.join(";;"));

	ui.filename_edit->clear();
	ui.filename_edit->insert(qpath);

	if (qpath == "") return;
}

void Pdf2Image::on_output_clicked() {
	QString filename = ui.filename_edit->text();
	std::wstring fstr = filename.toStdWString();
	LPCWSTR fpath = fstr.c_str();

	QString qpath = QFileDialog::getSaveFileName(this, "Maingift\345\267\245\345\205\267\347\256\261",
		".", "Word\346\226\207\346\241\243 (*.doc *.docx)");
	std::wstring str = qpath.toStdWString();
	LPCWSTR path = str.c_str();

	if (pdf == nullptr) {
		QMessageBox showerror(QMessageBox::Warning, "Maingift\345\267\245\345\205\267\347\256\261",
			"Ooops......\346\227\240\346\263\225\346\211\223\345\274\200\346\226\207\344\273\266", QMessageBox::Ok);
		showerror.exec();
		return;
	}
}
