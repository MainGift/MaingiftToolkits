#pragma once
#include "pch.h"
//#include "../../common/h/Color.h"
//#include "../../common/h/common.h"
#include "EndCellLayoutEventArgs.h"
#include "PdfBlendMode.h"
#include "PdfPageBase.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The class representing a result of searching designated text from PDF page.
    </summary>
*/
class EXPORTS PdfTextFind : public virtual Object
{
public:
    /*
    <summary>
        Get the actual font name
    </summary>
    */
    LPCWSTR_S GetFontName ();
    /*
    <summary>
        Get the original font name
    </summary>
    */
    LPCWSTR_S GetOriginalFontName ();
    /*
    <summary>
         Gets  search text of this System.String structure.
    </summary>
    */
    LPCWSTR_S GetSearchText ();
    /*
    <summary>
        Gets  match text of this System.String structure.
    </summary>
    */
    LPCWSTR_S GetMatchText ();
    /*
    <summary>
        Gets  text which is including the searched text of this System.String structure.
    </summary>
    */
    LPCWSTR_S GetOuterText ();
    /*
    <summary>
        Gets all the text of the line where covers the searched text of this System.String structure .
    </summary>
    */
    LPCWSTR_S GetLineText ();
    /*
    <summary>
        Gets page which is including the searched text of this Spire.Pdf.PdfPageBase structure.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetSearchPage ();
    /*
    <summary>
        Gets index of page which is including the searched text of this System.Int32 structure.
    </summary>
    */
    int GetSearchPageIndex ();
    /*
    <summary>
         Gets the position of the searched text of this System.Drawing.PointF structure.
    </summary>
    */
    intrusive_ptr<PointF> GetPosition ();
    /*
    <summary>
        Used by find text cross line
            if the MatchText in more lines( &gt;=2 ),the results can not contain by one Rectangle.
            So we need a list to save data.
            Gets the positions of the searched text of this System.Drawing.PointF structure.
    </summary>
    */
    //System.Collections.Generic.List`1[[System.Drawing.PointF, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]] GetPositions ();
    /*
    <summary>
        if the MatchText in more lines( &gt;=2 ),the results can not contain by one Rectangle.
            So we need a list to save data.
             Gets the size of the searched text of this System.Drawing SizeF structure.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*
    <summary>
        Used by find text cross line
            if the MatchText in more lines( &gt;=2 ),the results can not contain by one Rectangle.
            So we need a list to save data.
            Gets the sizes of the searched text of this System.Drawing SizeF structure.
    </summary>
    */
    //System.Collections.Generic.List`1[[System.Drawing.SizeF, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]] GetSizes ();
    /*
    <summary>
        Gets the bounds of the searched text of this System.Drawing RectangleF structure.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*
    <summary>
        Used by find text cross line
            if the MatchText in more lines( &gt;=2 ),the results can not contain by one Rectangle.
            So we need a list to save data.
            Gets the bounds of the searched text of this System.Drawing RectangleF structure.
    </summary>
    */
    //System.Collections.Generic.List`1[[System.Drawing.RectangleF, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]] GetBoundses ();
    /*
    <summary>
        if the MatchText in more lines( &gt;=2 ),the results can not contain by one Rectangle.
            So we need a list to save data.
            Gets the bounds of the searched text of this System.Drawing RectangleF structure.
    </summary>
    */
    //System.Collections.Generic.List`1[[System.Drawing.RectangleF, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]] GetTextBounds ();
    /*
    <summary>
        Highlight the seached text.
    </summary>
    */
    void HighLight ();
    /*
    <summary>
        Highlight the seached text.
    </summary>
    <param name="color">The hight light color.</param>
    */
    void HighLight (intrusive_ptr<Color> color);
    /*
    <summary>
        apply hight light of the seached text
    </summary>
    */
    void ApplyHighLight ();
    /*
    <summary>
        Apply hight light of the seached text
    </summary>
    <param name="highlightColor">Hight light color</param>
    */
    void ApplyHighLight (intrusive_ptr<Color> highlightColor);
    /*
    <summary>
        apply hight light of the seached text
    </summary>
    */
    void ApplyRecoverString (LPCWSTR_S newvalue);
    /*
    <summary>
        apply hight light of the seached text,with unicode
    </summary>
    <param name="newvalue"></param>
    <param name="unicode"></param>
    */
    void ApplyRecoverString (LPCWSTR_S newvalue,bool unicode);
    /*
    <summary>
        Apply hight light of the seached text
    </summary>
    */
    void ApplyRecoverString (LPCWSTR_S newvalue, intrusive_ptr<Color> backColor);
    /*
    <summary>
        apply hight light of the seached text,with unicode
    </summary>
    <param name="newvalue"></param>
    <param name="backColor"></param>
    */
    void ApplyRecoverString (LPCWSTR_S newvalue, intrusive_ptr<Color> backColor,bool unicode);
private:
};
}}