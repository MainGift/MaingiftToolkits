#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfLayoutResult.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfTextLayoutResult : public virtual PdfLayoutResult
{
public:
    // <summary>
    // Gets a value that contains the text that was not printed.
    // </summary>
    LPCWSTR_S GetRemainder ();
    // <summary>
    // Gets a value that indicates the bounds of the last line that was printed on the page.
    // </summary>
    intrusive_ptr<RectangleF> GetLastLineBounds ();
private:
};
}}