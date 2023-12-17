#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Defines the way the document is to be presented on the screen or in print.
    </summary>
*/
class EXPORTS PdfViewerPreferences : public virtual Object
{
public:
    /*
    <summary>
        A flag specifying whether to position the documents window in the center of the screen.
    </summary>
    */
    bool GetCenterWindow ();
    /*

    */
    void SetCenterWindow (bool value);
    /*

    */
    void SetBookMarkExpandOrCollapse (bool value);
    /*
    <summary>
        A flag specifying whether the windows title bar should display the document title taken 
            from the Title entry of the document information dictionary. If false, the title bar 
            should instead display the name of the Pdf file containing the document.
    </summary>
    */
    bool GetDisplayTitle ();
    /*

    */
    void SetDisplayTitle (bool value);
    /*
    <summary>
        A flag specifying whether to resize the documents window to fit the size of the first 
            displayed page.
    </summary>
    */
    bool GetFitWindow ();
    /*

    */
    void SetFitWindow (bool value);
    /*
    <summary>
        A flag specifying whether to hide the viewer applications menu bar when the 
            document is active.
    </summary>
    */
    bool GetHideMenubar ();
    /*

    */
    void SetHideMenubar (bool value);
    /*
    <summary>
        A flag specifying whether to hide the viewer applications tool bars when the document is active.
    </summary>
    */
    bool GetHideToolbar ();
    /*

    */
    void SetHideToolbar (bool value);
    /*
    <summary>
        A flag specifying whether to hide user interface elements in the documents window 
            (such as scroll bars and navigation controls), leaving only the documents contents displayed.
    </summary>
    */
    bool GetHideWindowUI ();
    /*

    */
    void SetHideWindowUI (bool value);
    /*
    <summary>
        A name object specifying how the document should be displayed when opened.
    </summary>
    */
    PdfPageMode GetPageMode ();
    /*

    */
    void SetPageMode (PdfPageMode value);
    /*
    <summary>
        A name object specifying the page layout to be used when the document is opened.
    </summary>
    */
    PdfPageLayout GetPageLayout ();
    /*

    */
    void SetPageLayout (PdfPageLayout value);
    /*
    <summary>
        Gets or Set the page scaling option to be selected 
            when a print dialog is displayed for this document.
    </summary>
    */
    PrintScalingMode GetPrintScaling ();
    /*

    */
    void SetPrintScaling (PrintScalingMode value);
private:
};
}}