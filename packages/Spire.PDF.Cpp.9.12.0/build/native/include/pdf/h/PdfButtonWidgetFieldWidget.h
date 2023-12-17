#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledFieldWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a button field of an existing PDF document`s form.
    </summary>
*/
class EXPORTS PdfButtonWidgetFieldWidget : public virtual PdfStyledFieldWidget
{
public:
    /*
    <summary>
        Gets or sets the caption text.
    </summary>
<value>A string value specifying the caption of the button.</value>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets the collection of button items.
    </summary>
    */
    intrusive_ptr<PdfButtonWidgetItemCollection> GetWidgetItems ();
    /*
    <summary>
        Defining the icon layout.
    </summary>
    */
    intrusive_ptr<PdfButtonIconLayout> GetIconLayout ();
    /*
    <summary>
        need replace image
    </summary>
    <param name="image"></param>
    */
    void SetButtonImage (intrusive_ptr<PdfImage> image);
    /*
    <summary>
        Adds Print action to current button field.</summary>
<remarks>Clicking on the specified button will trigger the Print Dialog Box.</remarks>
    */
    void AddPrintAction ();
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}