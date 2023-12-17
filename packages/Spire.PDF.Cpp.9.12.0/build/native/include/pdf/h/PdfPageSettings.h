#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent class with setting of page.
    </summary>
*/
class EXPORTS PdfPageSettings : public virtual Object
{
public:
    PdfPageSettings();

    PdfPageSettings(intrusive_ptr<SizeF> size);

    PdfPageSettings(PdfPageOrientation pageOrientation);

    PdfPageSettings(intrusive_ptr<SizeF> size, PdfPageOrientation pageOrientation);

    PdfPageSettings(float margins);

    PdfPageSettings(float leftMargin, float topMargin, float rightMargin, float bottomMargin);

    PdfPageSettings(intrusive_ptr<SizeF> size, float margins);

    PdfPageSettings(intrusive_ptr<SizeF> size, float leftMargin, float topMargin, float rightMargin, float bottomMargin);

    PdfPageSettings(intrusive_ptr<SizeF> size, PdfPageOrientation pageOrientation, float margins);

    PdfPageSettings(intrusive_ptr<SizeF> size, PdfPageOrientation pageOrientation, float leftMargin, float topMargin, float rightMargin, float bottomMargin);
    /*

    */
    //System.Collections.Generic.List`1[[Spire.Pdf.PdfPaperSourceTray, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetListPaperSourceTray ();
    /*

    */
    //void SetListPaperSourceTray (System.Collections.Generic.List`1[[Spire.Pdf.PdfPaperSourceTray, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] value);
    /*
    <summary>
        Gets or sets the page orientation.
    </summary>
    */
    PdfPageOrientation GetOrientation ();
    /*

    */
    void SetOrientation (PdfPageOrientation value);
    /*
    <summary>
        Gets or sets the size of the page.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*

    */
    void SetSize (intrusive_ptr<SizeF> value);
    /*
    <summary>
        Gets or sets the width of the page.
    </summary>
    */
    float GetWidth ();
    /*

    */
    void SetWidth (float value);
    /*
    <summary>
        Gets or sets the height of the page.
    </summary>
    */
    float GetHeight ();
    /*

    */
    void SetHeight (float value);
    /*
    <summary>
        Gets or sets the margins of the page.
    </summary>
    */
    intrusive_ptr<PdfMargins> GetMargins ();
    /*

    */
    void SetMargins (intrusive_ptr<PdfMargins> value);
    /*
    <summary>
        Gets or sets the number of degrees by which the page should be rotated clockwise when displayed or printed.
    </summary>
    */
    PdfPageRotateAngle GetRotate ();
    /*

    */
    void SetRotate (PdfPageRotateAngle value);
    /*
    <summary>
        Gets or sets the transition.
    </summary>
<value>The transition.</value>
    */
    intrusive_ptr<PdfPageTransition> GetTransition ();
    /*

    */
    void SetTransition (intrusive_ptr<PdfPageTransition> value);
    /*
    <summary>
        Sets the margins.
    </summary>
    <param name="margins">The margins.</param>
    */
    void SetMargins (float margins);
    /*
    <summary>
        Sets the margins.
    </summary>
    <param name="leftRight">The left right.</param>
    <param name="topBottom">The top bottom.</param>
    */
    void SetMargins (float leftRight,float topBottom);
    /*
    <summary>
        Sets the margins.
    </summary>
    <param name="left">The left.</param>
    <param name="top">The top.</param>
    <param name="right">The right.</param>
    <param name="bottom">The bottom.</param>
    */
    void SetMargins (float left,float top,float right,float bottom);
    /*
    <summary>
        Creates a clone of the object.
    </summary>
    <returns>Cloned object.</returns>
    */
    //virtual System.Object Clone ();
private:
};
}}