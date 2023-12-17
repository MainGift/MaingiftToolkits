#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfLayoutResult : public virtual Object
{
public:
    // <summary>
    // Gets the last page where the element was drawn.
    // </summary>
    intrusive_ptr<PdfPageBase> GetPage ();

    // <summary>
    // Gets the bounds of the element on the last page where it was drawn.
    // </summary>
    intrusive_ptr<RectangleF> GetBounds ();
private:
};
}}