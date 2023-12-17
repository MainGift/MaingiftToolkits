#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfColorSpaces.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Representing a CalRGB colorspace. 
    </summary>
*/
class EXPORTS PdfCalRGBColorSpace : public virtual PdfColorSpaces
{
public:
    /*
    <summary>
        Gets or sets the black point. 
    </summary>
<value>An array of three numbers [XB YB ZB] specifying the tristimulus value, in the CIE 1931 XYZ space, of the diffuse black point. </value>
    */
    std::vector<double> GetBlackPoint ();
    /*

    */
    void SetBlackPoint (std::vector<double> value);
    /*
    <summary>
        Gets or sets the gamma. 
    </summary>
<value>An array of three numbers [GR GG GB] specifying the gamma for the red, green, and blue components of the color space. </value>
    */
    std::vector<double> GetGamma ();
    /*

    */
    void SetGamma (std::vector<double> value);
    /*
    <summary>
        Gets or sets the colorspace transformation matrix. 
    </summary>
<value>An array of nine numbers [XA YA ZA XB YB ZB XC YC ZC] specifying the linear interpretation of the decoded A, B, and C components of the color space with respect to the final XYZ representation.</value>
    */
    std::vector<double> GetMatrix ();
    /*

    */
    void SetMatrix (std::vector<double> value);
    /*
    <summary>
        Gets or sets the white point.
    </summary>
<value>An array of three numbers [XW YW ZW] specifying the tristimulus value, in the CIE 1931 XYZ space, of the diffuse white point.</value>
    */
    std::vector<double> GetWhitePoint ();
    /*

    */
    void SetWhitePoint (std::vector<double> value);
private:
};
}}