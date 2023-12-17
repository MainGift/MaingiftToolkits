#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfTemplate.h"
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the appearance of an annotation.
    </summary>
*/
class EXPORTS PdfAppearance : public virtual Object
{
public:
    PdfAppearance();
    PdfAppearance(intrusive_ptr<PdfAnnotation> annotation);
    /*
    <summary>
        Gets or sets  object which applied to annotation in normal state.
    </summary>
    */
    intrusive_ptr<PdfTemplate> GetNormal ();
    /*

    */
    void SetNormal (intrusive_ptr<PdfTemplate> value);
    /*
    <summary>
        Gets or sets  object which applied to the annotation on hovering the mouse.
    </summary>
    */
    intrusive_ptr<PdfTemplate> GetMouseHover ();
    /*

    */
    void SetMouseHover (intrusive_ptr<PdfTemplate> value);
    /*
    <summary>
        Gets or sets  object which applied to an annotation when mouse button is pressed.
    </summary>
    */
    intrusive_ptr<PdfTemplate> GetPressed ();
    /*

    */
    void SetPressed (intrusive_ptr<PdfTemplate> value);
private:
};
}}