#include "Pdf2Word.h"
#include <string>

Pdf2Word::Pdf2Word(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	filter << "\345\217\257\347\247\273\346\244\215\346\226\207\346\241\243 (*.pdf)"
		<< "\346\211\200\346\234\211\346\226\207\344\273\266 (*.*)";
	connect(ui.filename_btn, SIGNAL(clicked()), this, SLOT(on_filename_clicked()));
	connect(ui.output_btn, SIGNAL(clicked()), this, SLOT(on_output_clicked()));
}

Pdf2Word::~Pdf2Word()
{}

void Pdf2Word::on_filename_clicked() {
	QString qpath = QFileDialog::getOpenFileName(this, "Maingift\345\267\245\345\205\267\347\256\261", 
		QApplication::applicationDirPath(), filter.join(";;"));
	std::wstring str = qpath.toStdWString();
	LPCWSTR path = str.c_str();

	ui.filename_edit->clear();
	ui.filename_edit->insert(qpath);

	pdf = new Spire::Pdf::PdfDocument();
	pdf->LoadFromFile(path);
}

void Pdf2Word::on_output_clicked() {
	QString qpath = QFileDialog::getSaveFileName(this, "Maingift\345\267\245\345\205\267\347\256\261", 
		QApplication::applicationDirPath(), "Word\346\226\207\346\241\243 (*.doc *.docx)");
	std::wstring str = qpath.toStdWString();
	LPCWSTR path = str.c_str();

	if (!(path)) return ;
	if (pdf == nullptr) {
		QMessageBox showerror(QMessageBox::Warning, "Maingift\345\267\245\345\205\267\347\256\261", 
			"\346\227\240\346\263\225\346\211\223\345\274\200\346\226\207\344\273\266", QMessageBox::Ok);
		showerror.exec();
		return ;
	}
	bool is_stream = ui.stream_chk->checkState() == Qt::Checked;
	bool is_docx = ui.docx_chk->checkState() == Qt::Checked;

	if (is_stream) pdf->GetConvertOptions()->SetPdfToDocOptions(true, true);
	if (is_docx) pdf->SaveToFile(path, Spire::Pdf::FileFormat::DOCX);
	else pdf->SaveToFile(path, Spire::Pdf::FileFormat::DOC);
}
