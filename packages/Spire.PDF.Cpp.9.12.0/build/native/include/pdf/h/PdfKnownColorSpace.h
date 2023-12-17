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
        Represents an indexed colorspace.
    </summary>
*/
class EXPORTS PdfKnownColorSpace : public virtual PdfColorSpaces
{
public:
    /*
    <summary>
        Gets or sets the base colorspace. 
    </summary>
<value>The color space in which the values in the color table are to be interpreted.</value>
    */
    intrusive_ptr<PdfColorSpaces> GetBaseColorSpace ();
    /*

    */
    void SetBaseColorSpace (intrusive_ptr<PdfColorSpaces> value);
    /*
    <summary>
        Gets or sets the index of the max color.
    </summary>
<value>The maximum index that can be used to access the values in the color table.</value>
    */
    int GetMaxColorIndex ();
    /*

    */
    void SetMaxColorIndex (int value);
    /*
    <summary>
        Gets or sets the color table. 
    </summary>
<value>The table of color components.</value>
<remarks>The color table data must be m * (maxIndex + 1) bytes long, where m is the number of color components in the base color space. Each byte is an unsigned integer in the range 0 to 255 that is scaled to the range of the corresponding color component in the base color space; that is, 0 corresponds to the minimum value in the range for that component, and 255 corresponds to the maximum.</remarks>
    */
    //std::vector<BYTE*> GetIndexedColorTable ();
    /*

    */
    //void SetIndexedColorTable (std::vector<BYTE*> value);
    /*
    <summary>
        Gets the profile data.
    </summary>
    <returns>The profile data.</returns>
    */
    //std::vector<BYTE*> GetProfileData ();
private:
};
}}