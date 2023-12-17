#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
//#include "../../common/h/Image.h"
#include "PdfFieldWidgetImportError.h"
#include "PdfForm.h"
#include "PdfFormFieldWidgetCollection.h"
#include "XFAForm.h"
#include "PdfField.h"
#include "DataFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents Loaded form.
    </summary>
*/
class EXPORTS PdfFormWidget : public virtual PdfForm
{
public:
    /*
    <summary>
        Gets the field collection.
    </summary>
    */
    intrusive_ptr<PdfFormFieldWidgetCollection> GetFieldsWidget ();
    /*
    <summary>
        Gets or sets a value indicating whether the form is read only.
    </summary>
<value>True if the field is read-only, false otherwise. Default is false.</value>
    */
    virtual bool GetReadOnly ();
    /*

    */
    virtual void SetReadOnly (bool value);
    /*
    <summary>
        Gets XFA data of the form.
    </summary>
    */
    intrusive_ptr<XFAForm> GetXFAForm ();
    /*

    */
    bool GetIsDynamicForm ();
    /*
    <summary>
        Gets or sets a value indicating whether need appearances.
    </summary>
    */
    virtual bool GetNeedAppearances ();
    /*

    */
    virtual void SetNeedAppearances (bool value);
    /*

    */
    bool SetFieldValueForXFAForm (intrusive_ptr<PdfField> field,LPCWSTR_S value);
    /*
    <summary>
        Export the form data to a file.
    </summary>
    <param name="fileName">Name of the document which is need to export.</param>
    <param name="dataFormat">The format of exported data.</param>
    <param name="formName"> The name of the PDF file the data is exported from.</param>
    */
    void ExportData (LPCWSTR_S fileName,DataFormat dataFormat,LPCWSTR_S formName);
    /*
    <summary>
        Export the form data to a file.
    </summary>
    <param name="fileName">The stream where form data will be exported.</param>
    <param name="dataFormat">The format of exported data</param>
    <param name="formName"> The name of the PDF file the data is exported from</param>
    */
    void ExportData (intrusive_ptr<Stream> stream,DataFormat dataFormat,LPCWSTR_S formName);
    /*
    <summary>
        Imports the data.
    </summary>
    <param name="fileName">Name of the file.</param>
    <param name="dataFormat">The data format.</param>
    */
    void ImportData (LPCWSTR_S fileName,DataFormat dataFormat);
    /*
    <summary>
        Import form data from XFDF file.
    </summary>
    <param name="fileName"></param>
    */
    void ImportDataXFDF (LPCWSTR_S fileName);
    /*
    <summary>
        Imports the data.
    </summary>
    <param name="fileName">Name of the file.</param>
    <param name="dataFormat">The data format.</param>
    <param name="errorFlag">if it is error flag, set to <c>true</c>.</param>
    <returns></returns>
    */
    std::vector<intrusive_ptr<PdfFieldWidgetImportError>> ImportData (LPCWSTR_S fileName,DataFormat dataFormat,bool errorFlag);
    /*
    <summary>
        Import form data from FDF file.
    </summary>
    <param name="stream">The FDF file stream</param>
    <param name="continueImportOnError">False if the import should stop on the first field that generates an error, or true if the import should ignore the error and continue with the next field.</param>
    <returns>Document form fields filled with data which are imported from FDF.</returns>
    */
    std::vector<intrusive_ptr<PdfFieldWidgetImportError>> ImportDataFDF (intrusive_ptr<Stream> stream,bool continueImportOnError);
    /*
    <summary>
        Sets/Resets the form field highlight option.
    </summary>
    */
    void HighlightFields (bool highlight);
    /*
    <summary>
        Called when [hex in string].
    </summary>
    <param name="test">The test.</param>
    <returns></returns>
    */
    bool OnlyHexInString (LPCWSTR_S test);
    /*
    <summary>
        Extract Images from Signature
    </summary>
    <returns></returns>
    */
    std::vector<intrusive_ptr<Image>> ExtractSignatureAsImages ();
private:
};
}}