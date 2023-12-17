#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent pdf optional content group.
            Content typically belongs to a single optional content group.
    </summary>
*/
class EXPORTS PdfLayer : public virtual Object
{
public:
    /*
    <summary>
        Get or set pdf layer name.
            Notice: 
            Name may be is not unique.
    </summary>
    */
    LPCWSTR_S GetName ();
    /*

    */
    void SetName (LPCWSTR_S value);
    /*
    <summary>
        Get or set pdf layer view state.
    </summary>
    */
    LayerViewState GetViewState ();
    /*

    */
    void SetViewState (LayerViewState value);
    /*
    <summary>
        Get or set pdf layer export state.
    </summary>
    */
    LayerExportState GetExportState ();
    /*

    */
    void SetExportState (LayerExportState value);
    /*
    <summary>
        Get or set pdf layer print state.
    </summary>
    */
    LayerPrintState GetPrintState ();
    /*

    */
    void SetPrintState (LayerPrintState value);
    /*
    <summary>
        Get or set pdf layer visible.
    </summary>
    */
    virtual PdfVisibility GetVisibility ();
    /*

    */
    void SetVisibility (PdfVisibility value);
    /*
    <summary>
        Get whether the layer shows on user interface or not.
    </summary>
    */
    bool GetIsShowOnUI ();
    /*
    <summary>
        Get reference of the layer.
    </summary>
    */
    LPCWSTR_S GetReference ();
    /*
    <summary>
        Create the layer graphics.
    </summary>
    <param name="g">
            The pdf layer container's graphics.
            eg: PdfPageBase.Canvas ...
    </param>
    <returns>The pdf layer graphics.</returns>
    */
    intrusive_ptr<PdfCanvas> CreateGraphics (intrusive_ptr<PdfCanvas> g);
private:
};
}}