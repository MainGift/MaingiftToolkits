#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the polygon annotation.
    </summary>
*/
class EXPORTS PdfPolygonAnnotation : public virtual PdfAnnotation
{
public:
    PdfPolygonAnnotation();

    PdfPolygonAnnotation(intrusive_ptr<PdfPageBase> page, std::vector<intrusive_ptr<PointF>> points);
    /*
    <summary>
        The user who created the annotation.
    </summary>
    */
    LPCWSTR_S GetAuthor ();
    /*

    */
    void SetAuthor (LPCWSTR_S value);
    /*
    <summary>
        The description of the annotation.
    </summary>
    */
    LPCWSTR_S GetSubject ();
    /*

    */
    void SetSubject (LPCWSTR_S value);
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
        The date and time when the annotation was most recently modified.
    </summary>
    */
    intrusive_ptr<DateTime> GetModifiedDate ();
    /*

    */
    void SetModifiedDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        The border effect.
    </summary>
    */
    PdfBorderEffect GetBorderEffect ();
    /*

    */
    void SetBorderEffect (PdfBorderEffect value);
    /*
    <summary>
        The radius.
    </summary>
    */
    static float RADIUS ();
private:
};
}}