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
class EXPORTS Path : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Transform> GetPathRenderTransform ();
    /*

    */
    void SetPathRenderTransform (intrusive_ptr<Transform> value);
    /*
<remarks />
    */
    intrusive_ptr<Geometry> GetPathClip ();
    /*

    */
    void SetPathClip (intrusive_ptr<Geometry> value);
    /*
<remarks />
    */
    intrusive_ptr<Brush> GetPathOpacityMask ();
    /*

    */
    void SetPathOpacityMask (intrusive_ptr<Brush> value);
    /*
<remarks />
    */
    intrusive_ptr<Brush> GetPathFill ();
    /*

    */
    void SetPathFill (intrusive_ptr<Brush> value);
    /*
<remarks />
    */
    intrusive_ptr<Brush> GetPathStroke ();
    /*

    */
    void SetPathStroke (intrusive_ptr<Brush> value);
    /*
<remarks />
    */
    intrusive_ptr<Geometry> GetPathData ();
    /*

    */
    void SetPathData (intrusive_ptr<Geometry> value);
    /*
<remarks />
    */
    LPCWSTR_S GetData ();
    /*

    */
    void SetData (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetFill ();
    /*

    */
    void SetFill (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetRenderTransform ();
    /*

    */
    void SetRenderTransform (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetClip ();
    /*

    */
    void SetClip (LPCWSTR_S value);
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
    LPCWSTR_S GetOpacityMask ();
    /*

    */
    void SetOpacityMask (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetStroke ();
    /*

    */
    void SetStroke (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetStrokeDashArray ();
    /*

    */
    void SetStrokeDashArray (LPCWSTR_S value);
    /*
<remarks />
    */
    DashCap GetStrokeDashCap ();
    /*

    */
    void SetStrokeDashCap (DashCap value);
    /*
<remarks />
    */
    double GetStrokeDashOffset ();
    /*

    */
    void SetStrokeDashOffset (double value);
    /*
<remarks />
    */
    LineCap GetStrokeEndLineCap ();
    /*

    */
    void SetStrokeEndLineCap (LineCap value);
    /*
<remarks />
    */
    LineCap GetStrokeStartLineCap ();
    /*

    */
    void SetStrokeStartLineCap (LineCap value);
    /*
<remarks />
    */
    LineJoin GetStrokeLineJoin ();
    /*

    */
    void SetStrokeLineJoin (LineJoin value);
    /*
<remarks />
    */
    double GetStrokeMiterLimit ();
    /*

    */
    void SetStrokeMiterLimit (double value);
    /*
<remarks />
    */
    double GetStrokeThickness ();
    /*

    */
    void SetStrokeThickness (double value);
    /*
<remarks />
    */
    LPCWSTR_S GetName ();
    /*

    */
    void SetName (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetFixedPageNavigateUri ();
    /*

    */
    void SetFixedPageNavigateUri (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S Getlang ();
    /*

    */
    void Setlang (LPCWSTR_S value);
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
    LPCWSTR_S GetAutomationPropertiesName ();
    /*

    */
    void SetAutomationPropertiesName (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetAutomationPropertiesHelpText ();
    /*

    */
    void SetAutomationPropertiesHelpText (LPCWSTR_S value);
    /*
<remarks />
    */
    bool GetSnapsToDevicePixels ();
    /*

    */
    void SetSnapsToDevicePixels (bool value);
    /*
<remarks />
    */
    bool GetSnapsToDevicePixelsSpecified ();
    /*

    */
    void SetSnapsToDevicePixelsSpecified (bool value);
private:
};
}}