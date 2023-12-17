#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfPolygonAndPolyLineAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded text Polygon annotation class.
    </summary>
*/
class EXPORTS PdfPolyLineAnnotationWidget : public virtual PdfPolygonAndPolyLineAnnotationWidget
{
public:
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}