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
class EXPORTS RadialGradientBrush : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Transform> GetRadialGradientBrushTransform ();
    /*

    */
    void SetRadialGradientBrushTransform (intrusive_ptr<Transform> value);
    /*
<remarks />
    */
    std::vector<intrusive_ptr<GradientStop>> GetRadialGradientBrushGradientStops ();
    /*

    */
    void SetRadialGradientBrushGradientStops (std::vector<intrusive_ptr<GradientStop>> value);
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
    ClrIntMode GetColorInterpolationMode ();
    /*

    */
    void SetColorInterpolationMode (ClrIntMode value);
    /*
<remarks />
    */
    SpreadMethod GetSpreadMethod ();
    /*

    */
    void SetSpreadMethod (SpreadMethod value);
    /*
<remarks />
    */
    MappingMode GetMappingMode ();
    /*

    */
    void SetMappingMode (MappingMode value);
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
    LPCWSTR_S GetCenter ();
    /*

    */
    void SetCenter (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetGradientOrigin ();
    /*

    */
    void SetGradientOrigin (LPCWSTR_S value);
    /*
<remarks />
    */
    double GetRadiusX ();
    /*

    */
    void SetRadiusX (double value);
    /*
<remarks />
    */
    double GetRadiusY ();
    /*

    */
    void SetRadiusY (double value);
private:
};
}}