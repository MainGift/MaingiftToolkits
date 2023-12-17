#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfLayoutWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Base class for the main shapes.
    </summary>
*/
class EXPORTS PdfShapeWidget : public virtual PdfLayoutWidget
{
public:
    /*
    <summary>
        Gets the bounds.
    </summary>
    <returns>rect</returns>
    */
    intrusive_ptr<RectangleF> GetBounds ();
private:
};
}}