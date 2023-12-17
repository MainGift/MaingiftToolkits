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
        Represents an ICC based colorspace..
    </summary>
*/
class EXPORTS PdfICCColorSpace : public virtual PdfColorSpaces
{
public:
    /*
    <summary>
        Gets or sets the alternate color space.
    </summary>
<value>The alternate color space to be used in case the one specified in the stream data is not supported.</value>
    */
    intrusive_ptr<PdfColorSpaces> GetAlternateColorSpace ();
    /*

    */
    void SetAlternateColorSpace (intrusive_ptr<PdfColorSpaces> value);
    /*
    <summary>
        Gets or sets the color components.
    </summary>
<value>The number of color components in the color space described by the ICC profile data.</value>
<remarks>This number must match the number of components actually in the ICC profile. As of PDF 1.4, this value must be 1, 3 or 4.</remarks>
    */
    byte GetColorComponents ();
    /*

    */
    void SetColorComponents (byte value);
    /*
    <summary>
        Gets or sets the profile data.
    </summary>
<value>The ICC profile data.</value>
    */
    //std::vector<BYTE*> ProfileData();
    /*

    */
    //void SetProfileData (std::vector<BYTE*> value);
    /*
    <summary>
        Gets or sets the range for color components. 
    </summary>
<value>An array of 2  ColorComponents numbers [ min0 max0 min1 max1 ... ] specifying the minimum and maximum valid values of the corresponding color components. These values must match the information in the ICC profile.</value>
    */
    std::vector<double> GetRange ();
    /*

    */
    void SetRange (std::vector<double> value);
    /*
    <summary>
        Set the Color Profile.
    </summary>
    <returns>ICC profile data.</returns>
    */
    //std::vector<BYTE*> GetProfileData ();
private:
};
}}