#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class for field's group items.
    </summary>
*/
class EXPORTS PdfFieldWidgetItem : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the bounds.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets or sets the location.
    </summary>
    */
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets the size.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*

    */
    void SetSize (intrusive_ptr<SizeF> value);
    /*
    <summary>
        Gets the page.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPage ();
private:
};
}}