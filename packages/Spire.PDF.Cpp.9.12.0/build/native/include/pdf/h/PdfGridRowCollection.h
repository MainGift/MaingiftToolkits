#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGridRowCollection : public virtual Object
{
public:
    /*
    <summary>
        Adds this instance.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<PdfGridRow> Add ();
    /*
    <summary>
        Sets the span.
    </summary>
    <param name="rowIndex">Index of the row.</param>
    <param name="cellIndex">Index of the cell.</param>
    <param name="rowSpan">The row span.</param>
    <param name="colSpan">The col span.</param>
    */
    void SetSpan (int rowIndex,int cellIndex,int rowSpan,int colSpan);
    /*
    <summary>
        Applies the style.
    </summary>
    <param name="style">The style.</param>
    */
    void ApplyStyle (intrusive_ptr<PdfGridStyleBase> style);
private:
};
}}