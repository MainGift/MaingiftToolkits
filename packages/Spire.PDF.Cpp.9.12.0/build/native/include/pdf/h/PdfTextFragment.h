#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/SizeF.h"
//#include "../../common/h/PointF.h"
//#include "../../common/h/RectangleF.h"
//#include "../../common/h/Color.h"
#include "PdfPageBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The class representing a result of searching designated text from PDF page.
    </summary>
*/
class EXPORTS PdfTextFragment : public virtual Object
{
public:
    /*
    <summary>
        Gets the text.
    </summary>
    */
    LPCWSTR_S GetText ();
    /*
    <summary>
        Gets all text of the line which covers the target text.
    </summary>
    */
    LPCWSTR_S GetLineText ();
    /*
    <summary>
        Gets the page where the text is located.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPage ();
    /*
    <summary>
        Used by find text cross line
            if the MatchText in more lines( &gt;=2 ),the results can not contain by one Rectangle.
            So we need a list to save data.
            Gets the positions of the searched text of this System.Drawing.PointF structure.
    </summary>
    */
    std::vector<intrusive_ptr<PointF>> GetPositions ();
    /*
    <summary>
        if the MatchText in more lines( &gt;=2 ),the results can not contain by one Rectangle.
            So we need a list to save data.
            Gets the bounds of the searched text of this System.Drawing RectangleF structure.
    </summary>
    */
    std::vector<intrusive_ptr<RectangleF>> GetBounds ();
    /*
    <summary>
        Used by find text cross line
            if the MatchText in more lines( &gt;=2 ),the results can not contain by one Rectangle.
            So we need a list to save data.
            Gets the sizes of the searched text of this System.Drawing SizeF structure.
    </summary>
    */
    std::vector<intrusive_ptr<SizeF>> GetSizes ();
    /*
    <summary>
        Highlight the target text.
    </summary>
    */
    void HighLight ();
    /*
    <summary>
        Highlight the target text.
    </summary>
    <param name="color">The hight light color.</param>
    */
    void HighLight (intrusive_ptr<Color> color);
private:
};
}}