#include "Pdf2Word.h"
#include <string>

Pdf2Word::Pdf2Word(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	filter << tr("Portable Document File (*.pdf)")
		<< tr("All Files (*.*)");
	connect(ui.filename_btn, SIGNAL(clicked()), this, SLOT(on_filename_clicked()));
	connect(ui.output_btn, SIGNAL(clicked()), this, SLOT(on_output_clicked()));
}

Pdf2Word::~Pdf2Word()
{}

void Pdf2Word::on_filename_clicked() {
	QString qpath = QFileDialog::getOpenFileName(this, tr("MaingiftToolkits"), QApplication::applicationDirPath(), filter.join(";;"));
	std::wstring str = qpath.toStdWString();
	LPCWSTR path = str.c_str();

	ui.filename_edit->clear();
	ui.filename_edit->insert(qpath);

	pdf = new Spire::Pdf::PdfDocument();
	pdf->LoadFromFile(path);
}

void Pdf2Word::on_output_clicked() {
	QString qpath = QFileDialog::getSaveFileName(this, tr("MaingiftToolkits"), QApplication::applicationDirPath(), "Word Documents (*.doc *.docx)");
	std::wstring str = qpath.toStdWString();
	LPCWSTR path = str.c_str();

	if (!(path)) return ;
	if (pdf == nullptr) {
		QMessageBox showerror(QMessageBox::Warning, tr("MaingiftToolkits"), tr("Cannot Open Pdf Document"), QMessageBox::Ok);
		showerror.exec();
		return ;
	}
	bool is_stream = ui.stream_chk->checkState() == Qt::Checked;
	bool is_docx = ui.docx_chk->checkState() == Qt::Checked;

	if (is_stream) pdf->GetConvertOptions()->SetPdfToDocOptions(true, true);
	if (is_docx) pdf->SaveToFile(path, Spire::Pdf::FileFormat::DOCX);
	else pdf->SaveToFile(path, Spire::Pdf::FileFormat::DOC);
}
