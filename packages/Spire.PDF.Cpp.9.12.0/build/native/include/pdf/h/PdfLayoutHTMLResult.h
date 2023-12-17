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
class EXPORTS PdfLayoutHTMLResult : public virtual PdfLayoutResult
{
public:
    /*
    <summary>
        The actual bounds of the html view. It may larger than Bounds
    </summary>
    */
    intrusive_ptr<RectangleF> GetHTMLViewBounds ();
private:
};
}}