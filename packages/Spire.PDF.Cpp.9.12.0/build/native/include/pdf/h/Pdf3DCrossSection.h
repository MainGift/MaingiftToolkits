#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfRGBColor.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the clipping portion of the 3D artwork for the purpose of showing artwork cross sections.
    </summary>
*/
class EXPORTS Pdf3DCrossSection : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the center of the cutting plane. 
            <remarks>A three element array specifying the center of rotation on the cutting plane in world space coordinates.</remarks></summary>
    */
    std::vector<int> GetCenter ();
    /*

    */
    void SetCenter (std::vector<float> value);
    /*
    <summary>
        Gets or sets the cutting plane color. 
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetColor ();
    /*

    */
    void SetColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the intersection color.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetIntersectionColor ();
    /*

    */
    void SetIntersectionColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets a value indicating whether the intersection of cutting plane with 3D artwork is visible.
    </summary>
    */
    bool GetIntersectionIsVisible ();
    /*

    */
    void SetIntersectionIsVisible (bool value);
    /*
    <summary>
        Gets or sets the cutting plane opacity. 
            <remarks>The opacity is given in percents, 100 is full opacity, 0 is no opacity.</remarks></summary>
    */
    float GetOpacity ();
    /*

    */
    void SetOpacity (float value);
    /*
    <summary>
        Gets or sets the orientation of the cutting plane. 
            <value>A three-element array specifying the orientation of the cutting plane in world space, where each value represents the orientation in relation to the X, Y, and Z axes, respectively. </value><remarks>If the array has more than 3 elements, only the first 3 will be considered. Exactly one of the values must be null, indicating an initial state of the cutting plane that is perpendicular to the corresponding axis and clipping all geometry on the positive side of that axis. The other two values must be numbers indicating the rotation of the plane, in degrees, around their corresponding axes. The order in which these rotations are applied should match the order in which the values appear in the array. </remarks></summary>
    */
    std::vector<intrusive_ptr<Object>> GetOrientation ();
    /*

    */
    void SetOrientation (std::vector<intrusive_ptr<Object>> value);
private:
};
}}