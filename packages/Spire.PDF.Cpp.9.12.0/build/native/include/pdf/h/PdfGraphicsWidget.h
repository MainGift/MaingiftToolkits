#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a base class for all page graphics elements.
    </summary>
*/
class EXPORTS PdfGraphicsWidget : public virtual Object
{
public:
    /*
    <summary>
        Draws an element on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the element should be printed.</param>
    */
    void Draw (intrusive_ptr<PdfCanvas> graphics);
    /*
    <summary>
        Draws an element on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the element should be printed.</param>
    <param name="location">Location of the element in the Graphics' co-ordinate system.</param>
    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,intrusive_ptr<PointF> location);
    /*
    <summary>
        Draws an element on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the element should be printed.</param>
    <param name="x">X co-ordinate of the element.</param>
    <param name="y">Y co-ordinate of the element.</param>
    */
    virtual void Draw (intrusive_ptr<PdfCanvas> graphics,float x,float y);
private:
};
}}