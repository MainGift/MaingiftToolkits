#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfLineEndingStyle.h"
#include "PdfLineIntent.h"
#include "PdfLineCaptionType.h"
#include "PdfRGBColor.h"
#include "LineBorder.h"
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a line annotation. 
    </summary>
*/
class EXPORTS PdfLineAnnotation : public virtual PdfAnnotation
{
public:
    PdfLineAnnotation();

    PdfLineAnnotation(std::vector<int> linePoints);

    PdfLineAnnotation(std::vector<int> linePoints, LPCWSTR_S text);

    PdfLineAnnotation(intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Gets or sets whether the line annotation caption should be displayed.
    </summary>
<value>
  <c>true</c> if the line caption should be displayed, otherwise <c>false</c>.</value>
    */
    bool GetLineCaption ();
    /*

    */
    void SetLineCaption (bool value);
    /*
    <summary>
        Gets or sets Leader Line 
    </summary>
    */
    int GetLeaderLine ();
    /*

    */
    void SetLeaderLine (int value);
    /*
    <summary>
        Gets or sets Leader Line Extension
    </summary>
    */
    int GetLeaderLineExt ();
    /*

    */
    void SetLeaderLineExt (int value);
    /*
    <summary>
        Gets or sets Border style of the Line Annotation.
    </summary>
<value>A  enumeration member specifying the border style for the line.</value>
    */
    intrusive_ptr<LineBorder> GetlineBorder ();
    /*

    */
    void SetlineBorder (intrusive_ptr<LineBorder> value);
    /*
    <summary>
        Gets or sets the style used for the beginning of the line. 
    </summary>
<value>A  enumeration member specifying the begin style for the line.</value>
    */
    PdfLineEndingStyle GetBeginLineStyle ();
    /*

    */
    void SetBeginLineStyle (PdfLineEndingStyle value);
    /*
    <summary>
        Gets or sets the style used for the end of the line. 
    </summary>
<value>A  enumeration member specifying the end style for the line.</value>
    */
    PdfLineEndingStyle GetEndLineStyle ();
    /*

    */
    void SetEndLineStyle (PdfLineEndingStyle value);
    /*
    <summary>
        Gets or sets the line caption text type.
    </summary>
<value>A  enumeration member specifying the line caption type.</value>
    */
    PdfLineCaptionType GetCaptionType ();
    /*

    */
    void SetCaptionType (PdfLineCaptionType value);
    /*
    <summary>
        Gets or sets LineIntent
    </summary>
    */
    PdfLineIntent GetLineIntent ();
    /*

    */
    void SetLineIntent (PdfLineIntent value);
    /*
    <summary>
        Gets or sets Inner Color of the PdfLine
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetInnerLineColor ();
    /*

    */
    void SetInnerLineColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets Background Color of the PdfLine
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetBackColor ();
    /*

    */
    void SetBackColor (intrusive_ptr<PdfRGBColor> value);
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
        To specifying Caption Type
    </summary>
    */
    PdfLineCaptionType m_captionType ();
private:
};
}}