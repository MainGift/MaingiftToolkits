#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded line annotation class.
    </summary>
*/
class EXPORTS PdfLineAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the back color of the annotation.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetBackColor ();
    /*

    */
    void SetBackColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the begin line style of the annotation.
    </summary>
    */
    PdfLineEndingStyle GetBeginLineStyle ();
    /*

    */
    void SetBeginLineStyle (PdfLineEndingStyle value);
    /*
    <summary>
        Gets or sets the caption type of the annotation.
    </summary>
    */
    PdfLineCaptionType GetCaptionType ();
    /*

    */
    void SetCaptionType (PdfLineCaptionType value);
    /*
    <summary>
        Gets or sets the end line style of the annotation.
    </summary>
    */
    PdfLineEndingStyle GetEndLineStyle ();
    /*

    */
    void SetEndLineStyle (PdfLineEndingStyle value);
    /*
    <summary>
        Gets or sets the inner line color of the annotation.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetInnerLineColor ();
    /*

    */
    void SetInnerLineColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the leader line of the annotation.
    </summary>
    */
    int GetLeaderLine ();
    /*

    */
    void SetLeaderLine (int value);
    /*
    <summary>
        Gets the endpoint of the annotation, it's at the bottom left
            The origin of coordinate system corresponds to the lower-left corner of page.The positive x axis extends horizontally to the right and the positive y axis vertically upward
    </summary>
    */
    intrusive_ptr<PointF> GetEndPoint ();
    /*
    <summary>
        Gets the startpoint of the annotation, it's at the bottom left
            The origin of coordinate system corresponds to the lower-left corner of page.The positive x axis extends horizontally to the right and the positive y axis vertically upward      
    </summary>
    */
    intrusive_ptr<PointF> GetStartPoint ();
    /*
    <summary>
        Gets or sets the leader ext of the annotation.
    </summary>
    */
    int GetLeaderExt ();
    /*

    */
    void SetLeaderExt (int value);
    /*
    <summary>
        Gets the line border of the annotation.
    </summary>
    */
    intrusive_ptr<LineBorder> GetLineBorder ();
    /*

    */
    void SetLineBorder (intrusive_ptr<LineBorder> value);
    /*
    <summary>
        Gets or sets the line caption of the annotation.
    </summary>
    */
    bool GetLineCaption ();
    /*

    */
    void SetLineCaption (bool value);
    /*
    <summary>
        Gets or sets the line intent of the annotation.
    </summary>
    */
    PdfLineIntent GetLineIntent ();
    /*

    */
    void SetLineIntent (PdfLineIntent value);
    /*
    <summary>
        To specifying author
    </summary>
    */
    LPCWSTR_S GetAuthor ();
    /*

    */
    void SetAuthor (LPCWSTR_S value);
    /*
    <summary>
        To specifying subject
    </summary>
    */
    LPCWSTR_S GetSubject ();
    /*

    */
    void SetSubject (LPCWSTR_S value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}