#pragma once
#include "pch.h"
#include "PdfLayoutType.h"
#include "PdfLayoutBreakType.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfTextLayout : public virtual Object
{
public:
    PdfTextLayout();

    PdfTextLayout(intrusive_ptr<PdfTextLayout> baseFormat);
    /*

    */
    PdfLayoutType GetLayout ();
    /*

    */
    void SetLayout (PdfLayoutType value);
    /*

    */
    PdfLayoutBreakType GetBreak ();
    /*

    */
    void SetBreak (PdfLayoutBreakType value);
    /*

    */
    intrusive_ptr<RectangleF> GetPaginateBounds ();
    /*

    */
    void SetPaginateBounds (intrusive_ptr<RectangleF> value);
private:
};
}}