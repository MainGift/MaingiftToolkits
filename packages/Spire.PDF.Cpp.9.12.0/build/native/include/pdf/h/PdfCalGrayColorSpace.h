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
        Represents a CalGray colorspace.
    </summary>
*/
class EXPORTS PdfCalGrayColorSpace : public virtual PdfColorSpaces
{
public:
    /*
    <summary>
        Gets or sets the black point. 
    </summary>
<value>An array of three numbers [XB YB ZB] specifying the tristimulus value, in the CIE 1931 XYZ space, of the diffuse black point. Default value: [ 0.0 0.0 0.0 ].</value>
    */
    std::vector<double> GetBlackPoint ();
    /*

    */
    void SetBlackPoint (std::vector<double> value);
    /*
    <summary>
        Gets or sets the gamma.
    </summary>
    */
    double GetGamma ();
    /*

    */
    void SetGamma (double value);
    /*
    <summary>
        Gets or sets the white point.
    </summary>
<value>An array of three numbers [XW YW ZW] specifying the tristimulus value, in the CIE 1931 XYZ space, of the diffuse white point. The numbers XW and ZW must be positive, and YW must be equal to 1.0.</value>
    */
    std::vector<double> GetWhitePoint ();
    /*

    */
    void SetWhitePoint (std::vector<double> value);
private:
};
}}