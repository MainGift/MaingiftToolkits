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
class EXPORTS Canvas : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Resources> GetCanvasResources ();
    /*

    */
    void SetCanvasResources (intrusive_ptr<Resources> value);
    /*
<remarks />
    */
    intrusive_ptr<Transform> GetCanvasRenderTransform ();
    /*

    */
    void SetCanvasRenderTransform (intrusive_ptr<Transform> value);
    /*
<remarks />
    */
    intrusive_ptr<Geometry> GetCanvasClip ();
    /*

    */
    void SetCanvasClip (intrusive_ptr<Geometry> value);
    /*
<remarks />
    */
    intrusive_ptr<Brush> GetCanvasOpacityMask ();
    /*

    */
    void SetCanvasOpacityMask (intrusive_ptr<Brush> value);
    /*
<remarks />
    */
    std::vector<intrusive_ptr<Object>> GetItems ();
    /*

    */
    void SetItems (std::vector<intrusive_ptr<Object>> value);
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
    LPCWSTR_S GetName ();
    /*

    */
    void SetName (LPCWSTR_S value);
    /*
<remarks />
    */
    EdgeMode GetRenderOptionsEdgeMode ();
    /*

    */
    void SetRenderOptionsEdgeMode (EdgeMode value);
    /*
<remarks />
    */
    bool GetRenderOptionsEdgeModeSpecified ();
    /*

    */
    void SetRenderOptionsEdgeModeSpecified (bool value);
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
private:
};
}}