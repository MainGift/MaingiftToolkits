#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCancelEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Data for event before lay outing of the page.
    </summary>
*/
class EXPORTS BeginPageLayoutEventArgs : public virtual PdfCancelEventArgs
{
public:
    /*
    <summary>
        Gets or sets value that indicates the lay outing bounds on the page.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets the page where the lay outing should start.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPage ();
private:
};
}}