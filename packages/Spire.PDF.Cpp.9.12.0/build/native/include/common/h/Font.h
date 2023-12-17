#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
#ifdef _SPIRE_XLS
namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Presentation{
#else
namespace Xls{
#endif
class EXPORTS Font : public virtual Object
{
public:
    Font();
    Font(LPCWSTR_S fontName, float size);
    Font(LPCWSTR_S fontName, float size, FontStyle fontstyle);
    ~Font();
    //static intrusive_ptr<Font> FromHfont (System.IntPtr hfont);
    //FontFamily GetFontFamily ();
    BYTE GetGdiCharSet ();
    //bool GetGdiVerticalFont ();
    bool GetItalic ();
    LPCWSTR_S GetOriginalFontName ();
    //void ToLogFont (System.Object logFont);
    //void ToLogFont (System.Object logFont,System.Drawing.Graphics graphics);
    //System.IntPtr ToHfont ();
    FontStyle GetStyle ();
    float GetSize ();
    float GetSizeInPoints ();
    GraphicsUnit GetUnit ();
    int GetHeight ();
    //static intrusive_ptr<Font> FromLogFont (System.Object lf,System.IntPtr hdc);
    //static intrusive_ptr<Font> FromLogFont (System.Object lf);
    //static intrusive_ptr<Font> FromHdc (System.IntPtr hdc);
    //virtual System.Object Clone ();
    virtual void Dispose ();
    virtual int GetHashCode ();
    bool GetBold ();
    LPCWSTR_S GetName ();
    bool GetStrikeout ();
    bool GetUnderline ();
    //virtual bool Equals (System.Object obj);
    virtual LPCWSTR_S ToString ();
    //float GetHeight (System.Drawing.Graphics graphics);
    //float GetHeight ();
    //float GetHeight (float dpi);
    //bool GetIsSystemFont ();
    //LPCWSTR_S GetSystemFontName ();
private:
};
}}