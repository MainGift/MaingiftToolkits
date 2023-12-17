#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the lighting scheme for the 3D artwork.
    </summary>
*/
class EXPORTS Pdf3DLighting : public virtual Object
{
public:
    Pdf3DLighting();

    Pdf3DLighting(Pdf3DLightingStyle style);
    /*
    <summary>
        Gets or sets the Lighting style of the 3D artwork.
    </summary>
    */
    Pdf3DLightingStyle GetStyle ();
    /*

    */
    void SetStyle (Pdf3DLightingStyle value);
private:
};
}}