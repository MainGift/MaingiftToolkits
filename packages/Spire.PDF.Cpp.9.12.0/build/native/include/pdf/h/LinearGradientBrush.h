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
class EXPORTS LinearGradientBrush : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Transform> GetLinearGradientBrushTransform ();
    /*

    */
    void SetLinearGradientBrushTransform (intrusive_ptr<Transform> value);
    /*
<remarks />
    */
    std::vector<intrusive_ptr<GradientStop>> GetLinearGradientBrushGradientStops ();
    /*

    */
    void SetLinearGradientBrushGradientStops (std::vector<intrusive_ptr<GradientStop>> value);
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
    LPCWSTR_S GetStartPoint ();
    /*

    */
    void SetStartPoint (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetEndPoint ();
    /*

    */
    void SetEndPoint (LPCWSTR_S value);
private:
};
}}