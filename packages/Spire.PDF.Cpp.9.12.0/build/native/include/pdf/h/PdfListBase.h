#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfLayoutWidget.h"
#include "PdfListItemCollection.h"
#include "EndItemLayoutEventHandler.h"
#include "BeginItemLayoutEventHandler.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class for lists.
    </summary>
*/
class EXPORTS PdfListBase : public virtual PdfLayoutWidget
{
public:
    /*
    <summary>
        Gets items of the list.
    </summary>
    */
    intrusive_ptr<PdfListItemCollection> GetItems ();
    /*
    <summary>
        Gets or sets tabulation for the list.
    </summary>
    */
    float GetIndent ();
    /*

    */
    void SetIndent (float value);
    /*
    <summary>
        Gets or sets the indent from the marker to the list item text.
    </summary>
    */
    float GetTextIndent ();
    /*

    */
    void SetTextIndent (float value);
    /*
    <summary>
        Gets or sets the list font.
    </summary>
    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets or sets list brush.
    </summary>
    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets list pen.
    </summary>
    */
    intrusive_ptr<PdfPen> GetPen ();
    /*

    */
    void SetPen (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the format of the list.
    </summary>
<value>The format.</value>
    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
    /*

    */
    void add_BeginItemLayout (intrusive_ptr<BeginItemLayoutEventHandler> value);
    /*

    */
    void remove_BeginItemLayout (intrusive_ptr<BeginItemLayoutEventHandler> value);
    /*

    */
    void add_EndItemLayout (intrusive_ptr<EndItemLayoutEventHandler> value);
    /*

    */
    void remove_EndItemLayout (intrusive_ptr<EndItemLayoutEventHandler> value);
    /*
    <summary>
        Draws an list on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the list should be printed.</param>
    <param name="x">X co-ordinate of the list.</param>
    <param name="y">Y co-ordinate of the list.</param>
    */
    virtual void Draw (intrusive_ptr<PdfCanvas> graphics,float x,float y);
private:
};
}}