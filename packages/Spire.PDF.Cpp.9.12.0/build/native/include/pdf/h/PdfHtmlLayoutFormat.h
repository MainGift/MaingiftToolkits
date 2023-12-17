#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfHtmlLayoutFormat : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets layout type of the element.
    </summary>
    */
    PdfLayoutType GetLayout ();
    /*

    */
    void SetLayout (PdfLayoutType value);
    /*
    <summary>
        If html view is larger than pdf page, zooms out it to fit pdf page.
            But if html view is smaller than, will not zoom in it.
    </summary>
    */
    Clip GetFitToPage ();
    /*

    */
    void SetFitToPage (Clip value);
    /*
    <summary>
        If html view is larger than page, resize pdf page to fit html view.
            But if html view is smaller than, will not resize pdf page.
    </summary>
    */
    Clip GetFitToHtml ();
    /*

    */
    void SetFitToHtml (Clip value);
    /*
    <summary>
        If html view is smaller than page, trim pdf page to fit html view.
    </summary>
    */
    Clip GetTrimPage ();
    /*

    */
    void SetTrimPage (Clip value);
    /*
    <summary>
        The maximum time in milliseconds to wait the completion of loading html.
            Default is 30000.
    </summary>
    */
    int GetLoadHtmlTimeout ();
    /*

    */
    void SetLoadHtmlTimeout (int value);
    /*
    <summary>
        webBrowser load html  whether  Waiting
     </summary>
    */
    bool GetIsWaiting ();
    /*

    */
    void SetIsWaiting (bool value);
    /*
    <summary>
        webBrowser load html  whether  Waiting time  in milliseconds.
     </summary>
    */
    int GetWaitingTime ();
    /*

    */
    void SetWaitingTime (int value);
private:
};
}}