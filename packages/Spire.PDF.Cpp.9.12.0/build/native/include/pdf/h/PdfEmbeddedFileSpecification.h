#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFileSpecificationBase.h"
//#include "../../common/h/DateTime.h"
//#include "../../common/h/Stream.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents specification of embedded file.
    </summary>
*/
class EXPORTS PdfEmbeddedFileSpecification : public virtual PdfFileSpecificationBase
{
public:
    /*
<value></value>
    */
    virtual LPCWSTR_S GetFileName ();
    /*

    */
    virtual void SetFileName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the data.
    </summary>
<value>The data.</value>
    */
    intrusive_ptr<Stream> GetData ();
    /*

    */
    void SetData (BYTE* value,int length);
    /*
    <summary>
        Gets or sets the description.
    </summary>
<value>The description.</value>
    */
    LPCWSTR_S GetDescription ();
    /*

    */
    void SetDescription (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the MIME type of the embedded file.
    </summary>
<value>The MIME type of the embedded file.</value>
    */
    LPCWSTR_S GetMimeType ();
    /*

    */
    void SetMimeType (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets creation date.
    </summary>
<value>Creation date.</value>
    */
     intrusive_ptr<DateTime> GetCreationDate ();
    /*

    */
    void SetCreationDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets or sets modification date.
    </summary>
<value>Modification date.</value>
    */
    intrusive_ptr<DateTime> GetModificationDate ();
    /*

    */
    void SetModificationDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Set the corresponding field value by field name.
    </summary>
    <param name="fieldName">Custom field name.</param>
    <param name="fieldValue">The corresponding field value.</param>
    */
    void SetFieldValue (LPCWSTR_S fieldName,LPCWSTR_S fieldValue);
    /*
    <summary>
        Set the corresponding field value by field name.
    </summary>
    <param name="fieldName">Custom field name.</param>
    <param name="fieldValue">The corresponding field value.</param>
    */
    void SetFieldValue (LPCWSTR_S fieldName,intrusive_ptr<DateTime> fieldValue);
    /*
    <summary>
        Set the corresponding field value by field name.
    </summary>
    <param name="fieldName">Custom field name.</param>
    <param name="fieldValue">The corresponding field value.</param>
    */
    void SetFieldValue (LPCWSTR_S fieldName,int fieldValue);
private:
};
}}