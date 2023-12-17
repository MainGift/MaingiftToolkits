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
        Represents a Lab colorspace
    </summary>
*/
class EXPORTS PdfLabColorSpace : public virtual PdfColorSpaces
{
public:
    /*
    <summary>
        Gets or sets BlackPoint
    </summary>
<value>An array of three numbers [XB YB ZB] specifying the tristimulus value, in the CIE 1931 XYZ space, of the diffuse black point.</value>
    */
    std::vector<double> GetBlackPoint ();
    /*

    */
    void SetBlackPoint (std::vector<double> value);
    /*
    <summary>
        Gets or sets the Range
    </summary>
<value>An array of three numbers [XB YB ZB] specifying the tristimulus value, in the CIE 1931 XYZ space, of the diffuse black point.</value>
    */
    std::vector<double> GetRange ();
    /*

    */
    void SetRange (std::vector<double> value);
    /*
    <summary>
        Gets or sets the white point
    </summary>
<value>An array of three numbers [XW YW ZW] specifying the tristimulus value, in the CIE 1931 XYZ space, of the diffuse white point. </value>
    */
    std::vector<double> GetWhitePoint ();
    /*

    */
    void SetWhitePoint (std::vector<double> value);
private:
};
}}