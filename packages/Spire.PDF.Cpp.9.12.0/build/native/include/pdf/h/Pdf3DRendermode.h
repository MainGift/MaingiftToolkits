#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the rendering mode of the 3D artwork. 
    </summary>
*/
class EXPORTS Pdf3DRendermode : public virtual Object
{
public:
    Pdf3DRendermode();

    Pdf3DRendermode(Pdf3DRenderStyle style);
    /*
    <summary>
        Gets or sets the type of the projection.
    </summary>
    */
    Pdf3DRenderStyle GetStyle ();
    /*

    */
    void SetStyle (Pdf3DRenderStyle value);
    /*
    <summary>
        Gets or sets the Auxiliary color.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetAuxilaryColor ();
    /*

    */
    void SetAuxilaryColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the Face color.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetFaceColor ();
    /*

    */
    void SetFaceColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the crease value. 
            <remarks>The crease value is specified in degrees, from 0 to 360.</remarks></summary>
    */
    float GetCreaseValue ();
    /*

    */
    void SetCreaseValue (float value);
    /*
    <summary>
        Gets or sets the rendering opacity. 
    </summary>
<remarks>The opacity is given in percents, 100 is full opacity, 0 is no opacity.</remarks>
    */
    float GetOpacity ();
    /*

    */
    void SetOpacity (float value);
private:
};
}}