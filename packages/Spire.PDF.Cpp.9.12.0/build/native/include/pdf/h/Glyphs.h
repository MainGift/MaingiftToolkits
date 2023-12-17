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
class EXPORTS Glyphs : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Transform> GetGlyphsRenderTransform ();
    /*

    */
    void SetGlyphsRenderTransform (intrusive_ptr<Transform> value);
    /*
<remarks />
    */
    intrusive_ptr<Geometry> GetGlyphsClip ();
    /*

    */
    void SetGlyphsClip (intrusive_ptr<Geometry> value);
    /*
<remarks />
    */
    intrusive_ptr<Brush> GetGlyphsOpacityMask ();
    /*

    */
    void SetGlyphsOpacityMask (intrusive_ptr<Brush> value);
    /*
<remarks />
    */
    intrusive_ptr<Brush> GetGlyphsFill ();
    /*

    */
    void SetGlyphsFill (intrusive_ptr<Brush> value);
    /*
<remarks />
    */
    LPCWSTR_S GetBidiLevel ();
    /*

    */
    void SetBidiLevel (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetCaretStops ();
    /*

    */
    void SetCaretStops (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetDeviceFontName ();
    /*

    */
    void SetDeviceFontName (LPCWSTR_S value);
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
    double GetFontRenderingEmSize ();
    /*

    */
    void SetFontRenderingEmSize (double value);
    /*
<remarks />
    */
    LPCWSTR_S GetFontUri ();
    /*

    */
    void SetFontUri (LPCWSTR_S value);
    /*
<remarks />
    */
    double GetOriginX ();
    /*

    */
    void SetOriginX (double value);
    /*
<remarks />
    */
    double GetOriginY ();
    /*

    */
    void SetOriginY (double value);
    /*
<remarks />
    */
    bool GetIsSideways ();
    /*

    */
    void SetIsSideways (bool value);
    /*
<remarks />
    */
    LPCWSTR_S GetIndices ();
    /*

    */
    void SetIndices (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetUnicodeString ();
    /*

    */
    void SetUnicodeString (LPCWSTR_S value);
    /*
<remarks />
    */
    StyleSimulations GetStyleSimulations ();
    /*

    */
    void SetStyleSimulations (StyleSimulations value);
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
private:
};
}}