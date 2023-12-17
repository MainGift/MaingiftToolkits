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
class EXPORTS ImageBrush : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Transform> GetImageBrushTransform ();
    /*

    */
    void SetImageBrushTransform (intrusive_ptr<Transform> value);
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
    LPCWSTR_S GetImageSource ();
    /*

    */
    void SetImageSource (LPCWSTR_S value);
private:
};
}}