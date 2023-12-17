#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfShapeWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Describes a graphics element which can be drawn by a pen.
    </summary>
*/
class EXPORTS PdfDrawWidget : public virtual PdfShapeWidget
{
public:
    /*
    <summary>
        Gets or sets a pen that will be used to draw the element.
    </summary>
    */
    intrusive_ptr<PdfPen> GetPen ();
    /*

    */
    void SetPen (intrusive_ptr<PdfPen> value);
private:
};
}}