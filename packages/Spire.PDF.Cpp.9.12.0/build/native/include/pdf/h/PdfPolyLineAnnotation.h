#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/PointF.h"
#include "PdfAnnotation.h"
#include "PdfPageBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the poly line annotation.
    </summary>
*/
class EXPORTS PdfPolyLineAnnotation : public virtual PdfAnnotation
{
public:
    PdfPolyLineAnnotation();
    PdfPolyLineAnnotation(intrusive_ptr<PdfPageBase> page, std::vector<intrusive_ptr<PointF>> points);
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
private:
};
}}