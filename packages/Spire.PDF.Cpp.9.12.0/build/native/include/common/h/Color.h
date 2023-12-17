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
class EXPORTS Color : public virtual Object
{
public:
    static intrusive_ptr<Color> GetTransparent ();
    static intrusive_ptr<Color> GetAliceBlue ();
    static intrusive_ptr<Color> GetAntiqueWhite ();
    static intrusive_ptr<Color> GetAqua ();
    static intrusive_ptr<Color> GetAquamarine ();
    static intrusive_ptr<Color> GetAzure ();
    static intrusive_ptr<Color> GetBeige ();
    static intrusive_ptr<Color> GetBisque ();
    static intrusive_ptr<Color> GetBlack ();
    static intrusive_ptr<Color> GetBlanchedAlmond ();
    static intrusive_ptr<Color> GetBlue ();
    static intrusive_ptr<Color> GetBlueViolet ();
    static intrusive_ptr<Color> GetBrown ();
    static intrusive_ptr<Color> GetBurlyWood ();
    static intrusive_ptr<Color> GetCadetBlue ();
    static intrusive_ptr<Color> GetChartreuse ();
    static intrusive_ptr<Color> GetChocolate ();
    static intrusive_ptr<Color> GetCoral ();
    static intrusive_ptr<Color> GetCornflowerBlue ();
    static intrusive_ptr<Color> GetCornsilk ();
    static intrusive_ptr<Color> GetCrimson ();
    static intrusive_ptr<Color> GetCyan ();
    static intrusive_ptr<Color> GetDarkBlue ();
    static intrusive_ptr<Color> GetDarkCyan ();
    static intrusive_ptr<Color> GetDarkGoldenrod ();
    static intrusive_ptr<Color> GetDarkGray ();
    static intrusive_ptr<Color> GetDarkGreen ();
    static intrusive_ptr<Color> GetDarkKhaki ();
    static intrusive_ptr<Color> GetDarkMagenta ();
    static intrusive_ptr<Color> GetDarkOliveGreen ();
    static intrusive_ptr<Color> GetDarkOrange ();
    static intrusive_ptr<Color> GetDarkOrchid ();
    static intrusive_ptr<Color> GetDarkRed ();
    static intrusive_ptr<Color> GetDarkSalmon ();
    static intrusive_ptr<Color> GetDarkSeaGreen ();
    static intrusive_ptr<Color> GetDarkSlateBlue ();
    static intrusive_ptr<Color> GetDarkSlateGray ();
    static intrusive_ptr<Color> GetDarkTurquoise ();
    static intrusive_ptr<Color> GetDarkViolet ();
    static intrusive_ptr<Color> GetDeepPink ();
    static intrusive_ptr<Color> GetDeepSkyBlue ();
    static intrusive_ptr<Color> GetDimGray ();
    static intrusive_ptr<Color> GetDodgerBlue ();
    static intrusive_ptr<Color> GetFirebrick ();
    static intrusive_ptr<Color> GetFloralWhite ();
    static intrusive_ptr<Color> GetForestGreen ();
    static intrusive_ptr<Color> GetFuchsia ();
    static intrusive_ptr<Color> GetGainsboro ();
    static intrusive_ptr<Color> GetGhostWhite ();
    static intrusive_ptr<Color> GetGold ();
    static intrusive_ptr<Color> GetGoldenrod ();
    static intrusive_ptr<Color> GetGray ();
    static intrusive_ptr<Color> GetGreen ();
    static intrusive_ptr<Color> GetGreenYellow ();
    static intrusive_ptr<Color> GetHoneydew ();
    static intrusive_ptr<Color> GetHotPink ();
    static intrusive_ptr<Color> GetIndianRed ();
    static intrusive_ptr<Color> GetIndigo ();
    static intrusive_ptr<Color> GetIvory ();
    static intrusive_ptr<Color> GetKhaki ();
    static intrusive_ptr<Color> GetLavender ();
    static intrusive_ptr<Color> GetLavenderBlush ();
    static intrusive_ptr<Color> GetLawnGreen ();
    static intrusive_ptr<Color> GetLemonChiffon ();
    static intrusive_ptr<Color> GetLightBlue ();
    static intrusive_ptr<Color> GetLightCoral ();
    static intrusive_ptr<Color> GetLightCyan ();
    static intrusive_ptr<Color> GetLightGoldenrodYellow ();
    static intrusive_ptr<Color> GetLightGreen ();
    static intrusive_ptr<Color> GetLightGray ();
    static intrusive_ptr<Color> GetLightPink ();
    static intrusive_ptr<Color> GetLightSalmon ();
    static intrusive_ptr<Color> GetLightSeaGreen ();
    static intrusive_ptr<Color> GetLightSkyBlue ();
    static intrusive_ptr<Color> GetLightSlateGray ();
    static intrusive_ptr<Color> GetLightSteelBlue ();
    static intrusive_ptr<Color> GetLightYellow ();
    static intrusive_ptr<Color> GetLime ();
    static intrusive_ptr<Color> GetLimeGreen ();
    static intrusive_ptr<Color> GetLinen ();
    static intrusive_ptr<Color> GetMagenta ();
    static intrusive_ptr<Color> GetMaroon ();
    static intrusive_ptr<Color> GetMediumAquamarine ();
    static intrusive_ptr<Color> GetMediumBlue ();
    static intrusive_ptr<Color> GetMediumOrchid ();
    static intrusive_ptr<Color> GetMediumPurple ();
    static intrusive_ptr<Color> GetMediumSeaGreen ();
    static intrusive_ptr<Color> GetMediumSlateBlue ();
    static intrusive_ptr<Color> GetMediumSpringGreen ();
    static intrusive_ptr<Color> GetMediumTurquoise ();
    static intrusive_ptr<Color> GetMediumVioletRed ();
    static intrusive_ptr<Color> GetMidnightBlue ();
    static intrusive_ptr<Color> GetMintCream ();
    static intrusive_ptr<Color> GetMistyRose ();
    static intrusive_ptr<Color> GetMoccasin ();
    static intrusive_ptr<Color> GetNavajoWhite ();
    static intrusive_ptr<Color> GetNavy ();
    static intrusive_ptr<Color> GetOldLace ();
    static intrusive_ptr<Color> GetOlive ();
    static intrusive_ptr<Color> GetOliveDrab ();
    static intrusive_ptr<Color> GetOrange ();
    static intrusive_ptr<Color> GetOrangeRed ();
    static intrusive_ptr<Color> GetOrchid ();
    static intrusive_ptr<Color> GetPaleGoldenrod ();
    static intrusive_ptr<Color> GetPaleGreen ();
    static intrusive_ptr<Color> GetPaleTurquoise ();
    static intrusive_ptr<Color> GetPaleVioletRed ();
    static intrusive_ptr<Color> GetPapayaWhip ();
    static intrusive_ptr<Color> GetPeachPuff ();
    static intrusive_ptr<Color> GetPeru ();
    static intrusive_ptr<Color> GetPink ();
    static intrusive_ptr<Color> GetPlum ();
    static intrusive_ptr<Color> GetPowderBlue ();
    static intrusive_ptr<Color> GetPurple ();
    static intrusive_ptr<Color> GetRed ();
    static intrusive_ptr<Color> GetRosyBrown ();
    static intrusive_ptr<Color> GetRoyalBlue ();
    static intrusive_ptr<Color> GetSaddleBrown ();
    static intrusive_ptr<Color> GetSalmon ();
    static intrusive_ptr<Color> GetSandyBrown ();
    static intrusive_ptr<Color> GetSeaGreen ();
    static intrusive_ptr<Color> GetSeaShell ();
    static intrusive_ptr<Color> GetSienna ();
    static intrusive_ptr<Color> GetSilver ();
    static intrusive_ptr<Color> GetSkyBlue ();
    static intrusive_ptr<Color> GetSlateBlue ();
    static intrusive_ptr<Color> GetSlateGray ();
    static intrusive_ptr<Color> GetSnow ();
    static intrusive_ptr<Color> GetSpringGreen ();
    static intrusive_ptr<Color> GetSteelBlue ();
    static intrusive_ptr<Color> GetTan ();
    static intrusive_ptr<Color> GetTeal ();
    static intrusive_ptr<Color> GetThistle ();
    static intrusive_ptr<Color> GetTomato ();
    static intrusive_ptr<Color> GetTurquoise ();
    static intrusive_ptr<Color> GetViolet ();
    static intrusive_ptr<Color> GetWheat ();
    static intrusive_ptr<Color> GetWhite ();
    static intrusive_ptr<Color> GetWhiteSmoke ();
    static intrusive_ptr<Color> GetYellow ();
    static intrusive_ptr<Color> GetYellowGreen ();
    int GetR ();
    int GetG ();
    int GetB ();
    int GetA ();
    bool GetIsKnownColor ();
    bool GetIsEmpty ();
    bool GetIsNamedColor ();
    bool GetIsSystemColor ();
    LPCWSTR_S GetName ();
    static intrusive_ptr<Color> FromArgb (int argb);
    static intrusive_ptr<Color> FromArgb (int red,int green,int blue);
    //static intrusive_ptr<Color> FromKnownColor (System.Drawing.KnownColor color);
    static intrusive_ptr<Color> FromName (LPCWSTR_S name);
    float GetBrightness ();
    float GetHue ();
    float GetSaturation ();
    int ToArgb ();
    //System.Drawing.KnownColor ToKnownColor ();
    //static bool op_Equality (intrusive_ptr<Color> left,intrusive_ptr<Color> right);
    //static bool op_Inequality (intrusive_ptr<Color> left,intrusive_ptr<Color> right);
    //virtual bool Equals (System.Object obj);
    virtual int GetHashCode ();
    virtual LPCWSTR_S ToString ();
    static intrusive_ptr<Color> FromArgb (int alpha,int red,int green,int blue);
    static intrusive_ptr<Color> FromArgb (int alpha,intrusive_ptr<Color> baseColor);
    static intrusive_ptr<Color> Empty ();
private:
};
}}