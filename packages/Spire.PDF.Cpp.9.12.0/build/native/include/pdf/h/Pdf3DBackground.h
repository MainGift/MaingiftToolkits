#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the background appearance for 3D artwork. 
    </summary>
*/
class EXPORTS Pdf3DBackground : public virtual Object
{
public:
    Pdf3DBackground();

    Pdf3DBackground(intrusive_ptr<PdfRGBColor> color);
    /*
    <summary>
        Gets or sets the background color.
    </summary>
<value>The  object specifying the background color for the 3D artwork. </value>
    */
    intrusive_ptr<PdfRGBColor> GetColor ();
    /*

    */
    void SetColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets a value indicating how the background is applied. 
    </summary>
<value>True if the background is applied to entire annotation, false if the background is applied to annotation's 3D view box only.</value>
    */
    bool GetApplyToEntireAnnotation ();
    /*

    */
    void SetApplyToEntireAnnotation (bool value);
private:
};
}}