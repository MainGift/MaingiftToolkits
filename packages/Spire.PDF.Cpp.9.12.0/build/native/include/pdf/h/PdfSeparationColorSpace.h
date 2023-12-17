#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfColorSpaces.h"
#include "PdfRGBColor.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a separation colorspace
    </summary>
*/
class EXPORTS PdfSeparationColorSpace : public virtual PdfColorSpaces
{
public:
    PdfSeparationColorSpace();
    PdfSeparationColorSpace(LPCWSTR_S colorant, intrusive_ptr<PdfRGBColor> baseColor);

    /*
    <summary>
        The base color to be used.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetBaseColor ();
    /*

    */
    void SetBaseColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        The name of the colorant.
    </summary>
    */
    LPCWSTR_S GetColorant ();
    /*

    */
    void SetColorant (LPCWSTR_S value);
    /*
    <summary>
        Get the profile data.
    </summary>
    <returns>The profile data</returns>
    */
    //std::vector<BYTE*> GetProfileData ();
private:
};
}}