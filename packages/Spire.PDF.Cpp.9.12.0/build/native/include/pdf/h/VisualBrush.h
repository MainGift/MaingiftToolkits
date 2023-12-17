#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS VisualBrush : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Transform> GetVisualBrushTransform ();
    /*

    */
    void SetVisualBrushTransform (intrusive_ptr<Transform> value);
    /*
<remarks />
    */
    intrusive_ptr<Visual> GetVisualBrushVisual ();
    /*

    */
    void SetVisualBrushVisual (intrusive_ptr<Visual> value);
    /*
<remarks />
    */
    double GetOpacity ();
    /*

    */
    void SetOpacity (double value);
    /*
<remarks />
    */
    LPCWSTR_S GetKey ();
    /*

    */
    void SetKey (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetTransform ();
    /*

    */
    void SetTransform (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetViewbox ();
    /*

    */
    void SetViewbox (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetViewport ();
    /*

    */
    void SetViewport (LPCWSTR_S value);
    /*
<remarks />
    */
    TileMode GetTileMode ();
    /*

    */
    void SetTileMode (TileMode value);
    /*
<remarks />
    */
    ViewUnits GetViewboxUnits ();
    /*

    */
    void SetViewboxUnits (ViewUnits value);
    /*
<remarks />
    */
    ViewUnits GetViewportUnits ();
    /*

    */
    void SetViewportUnits (ViewUnits value);
    /*
<remarks />
    */
    LPCWSTR_S GetVisual ();
    /*

    */
    void SetVisual (LPCWSTR_S value);
private:
};
}}