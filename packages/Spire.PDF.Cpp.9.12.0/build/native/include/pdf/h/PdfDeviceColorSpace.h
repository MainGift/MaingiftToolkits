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
        Represents a device colorspace.
    </summary>
*/
class EXPORTS PdfDeviceColorSpace : public virtual PdfColorSpaces
{
public:
    /*
    <summary>
        Gets or sets the DeviceColorSpaceType
    </summary>
    */
    PdfColorSpace GetDeviceColorSpaceType ();
    /*

    */
    void SetDeviceColorSpaceType (PdfColorSpace value);
private:
};
}}