#include "Pdf2Word.h"
#include <unistd.h>
#include <exception>
#include <string>

Pdf2Word::Pdf2Word(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	filter << "\345\217\257\347\247\273\346\244\215\346\226\207\346\241\243 (*.pdf)"
		<< "\346\211\200\346\234\211\346\226\207\344\273\266 (*.*)";
	ui.filename_edit->setReadOnly(true);
	connect(ui.filename_btn, SIGNAL(clicked()), this, SLOT(on_filename_clicked()));
	connect(ui.output_btn, SIGNAL(clicked()), this, SLOT(on_output_clicked()));
}

Pdf2Word::~Pdf2Word()
{}

void Pdf2Word::on_filename_clicked() {
	QString qpath = QFileDialog::getOpenFileName(this, "Maingift\345\267\245\345\205\267\347\256\261", 
		QApplication::applicationDirPath(), filter.join(";;"));

	ui.filename_edit->clear();
	ui.filename_edit->insert(qpath);

	if (qpath == "") return;
}

void Pdf2Word::on_output_clicked() {
	// 获取pdf文件名
	QString filename = ui.filename_edit->text(); 
	std::wstring flstr = filename.toStdWString();
	LPCWSTR fpath = flstr.c_str();

	// 过滤“”
	if (filename == "") return;

	// 导入pdf文件
	try {
		pdf = new Spire::Pdf::PdfDocument();
		pdf->LoadFromFile(fpath);
	} 
	catch (std::exception e) {
		QMessageBox showerror(QMessageBox::Warning, "Maingift\345\267\245\345\205\267\347\256\261", 
			"Ooops......\346\227\240\346\263\225\346\211\223\345\274\200\346\226\207\344\273\266", QMessageBox::Ok);
		showerror.exec();
		return ;
	}

	// 获取保存文件名
	QString qpath = QFileDialog::getSaveFileName(this, "Maingift\345\267\245\345\205\267\347\256\261", 
		QApplication::applicationDirPath(), "Word\346\226\207\346\241\243 (*.doc *.docx)");
	std::wstring str = qpath.toStdWString();
	LPCWSTR path = str.c_str();

	// 过滤“”
	if (qpath == "") return;

	// 获取保存参数
	bool is_stream = ui.stream_chk->checkState() == Qt::Checked;
	bool is_docx = ui.docx_chk->checkState() == Qt::Checked;

	// 按参数保存
	if (is_stream) pdf->GetConvertOptions()->SetPdfToDocOptions(true, true);
	if (is_docx) pdf->SaveToFile(path, Spire::Pdf::FileFormat::DOCX);
	else pdf->SaveToFile(path, Spire::Pdf::FileFormat::DOC);
}
