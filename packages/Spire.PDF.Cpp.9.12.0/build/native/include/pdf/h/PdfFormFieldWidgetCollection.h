#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFieldCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents field collection of loaded form.
    </summary>
*/
class EXPORTS PdfFormFieldWidgetCollection : public virtual PdfFieldCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    virtual intrusive_ptr<PdfField> GetItem (int index);
    /*
    <summary>
        Returns field with specified name.
    </summary>
    <param name="name">The specified field name.</param>
    */
    intrusive_ptr<PdfField> GetItem (LPCWSTR_S name);
    /*
    <summary>
        Gets or sets the form.
    </summary>
    */
    intrusive_ptr<PdfFormWidget> GetFormWidget ();
    /*

    */
    void SetFormWidget (intrusive_ptr<PdfFormWidget> value);
    /*
    <summary>
        Field Signature Names
    </summary>
    */
    //System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetFieldNames ();
    /*
    <summary>
        Get FieldName from FormWidget by exportValue
    </summary>
    <param name="exportValue"></param>
    <returns></returns>
    */
    //System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetFieldNameByExportValue (LPCWSTR_S exportValue);
    /*
    <summary>
        Get Fields from FormWidget by exportValue
    </summary>
    <param name="exportValue"></param>
    <returns></returns>
    */
    //System.Collections.Generic.List`1[[Spire.Pdf.Fields.PdfField, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetFieldsByExportValue (LPCWSTR_S exportValue);
private:
    intrusive_ptr<PdfField> Create(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
};
}}