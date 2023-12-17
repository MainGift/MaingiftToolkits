#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a single column of the table.
    </summary>
*/
class EXPORTS PdfColumn : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the string format.
    </summary>
<value>The string format.</value>
    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
    /*
    <summary>
        Gets or sets the width of the column.
    </summary>
    */
    float GetWidth ();
    /*

    */
    void SetWidth (float value);
    /*
    <summary>
        Gets or sets the column name.
    </summary>
    */
    LPCWSTR_S GetColumnName ();
    /*

    */
    void SetColumnName (LPCWSTR_S value);
private:
};
}}