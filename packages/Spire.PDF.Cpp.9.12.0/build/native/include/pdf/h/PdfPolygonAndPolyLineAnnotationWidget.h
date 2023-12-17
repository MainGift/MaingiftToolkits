#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMarkUpAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded text PolygonAndPolyLine annotation class.
    </summary>
*/
class EXPORTS PdfPolygonAndPolyLineAnnotationWidget : public virtual PdfMarkUpAnnotationWidget
{
public:
    /*
    <summary>
        The vertice coordinates.
    </summary>
    */
    std::vector<intrusive_ptr<PointF>> GetVertices ();
    /*

    */
    void SetVertices (std::vector<intrusive_ptr<PointF>> value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}