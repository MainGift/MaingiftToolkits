#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAppearanceField.h"
#include "PdfPageBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents button field in the PDF form.
    </summary>
*/
class EXPORTS PdfButtonField : public virtual PdfAppearanceField
{
public:
    PdfButtonField(intrusive_ptr<PdfPageBase> page, LPCWSTR_S name);
    /*
    <summary>
        Gets or sets the caption text.
    </summary>
<value>The caption text.</value>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the button layout mode.
    </summary>
    */
    PdfButtonLayoutMode GetLayoutMode ();
    /*

    */
    void SetLayoutMode (PdfButtonLayoutMode value);
    /*
    <summary>
        Gets or sets the text displayed when the mouse button is pressed within the annotation's active area, only available in Push mode.
    </summary>
    */
    LPCWSTR_S GetAlternateText ();
    /*

    */
    void SetAlternateText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the text displayed when the user rolls the cursor into the annotation's active area without pressing the mouse button, only available in Push mode.
    </summary>
    */
    LPCWSTR_S GetRolloverText ();
    /*

    */
    void SetRolloverText (LPCWSTR_S value);
    /*
    <summary>
        Defining the icon layout.
    </summary>
    */
    intrusive_ptr<PdfButtonIconLayout> GetIconLayout ();
    /*
    <summary>
        Gets or sets the widget annotation's normal icon displayed when it is not interacting with the user.
    </summary>
    */
    intrusive_ptr<PdfImage> GetIcon ();
    /*

    */
    void SetIcon (intrusive_ptr<PdfImage> value);
    /*
    <summary>
        Gets or sets the widget annotation's alternate icon displayed when the mouse button is pressed within its active area, only available in Push mode.
    </summary>
    */
    intrusive_ptr<PdfImage> GetAlternateIcon ();
    /*

    */
    void SetAlternateIcon (intrusive_ptr<PdfImage> value);
    /*
    <summary>
        Gets or sets the widget annotation's rollover icon displayed when the user rolls the cursor into its active area without pressing the mouse button, only available in Push mode.
    </summary>
    */
    intrusive_ptr<PdfImage> GetRolloverIcon ();
    /*

    */
    void SetRolloverIcon (intrusive_ptr<PdfImage> value);
    /*
    <summary>
        Adds Print action to current button field.
            <remarks>Clicking on the specified button will trigger the Print Dialog Box.</remarks></summary>
    */
    void AddPrintAction ();
private:
};
}}