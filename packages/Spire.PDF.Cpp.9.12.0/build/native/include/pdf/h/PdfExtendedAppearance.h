#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents extended appearance of the annotation. It has two states such as On state and Off state.
    </summary>
*/
class EXPORTS PdfExtendedAppearance : public virtual Object
{
public:
    /*
    <summary>
        Gets the normal appearance of the annotation.
    </summary>
<value>The  object specifies the normal appearance of the annotation.</value>
    */
    intrusive_ptr<PdfAppearanceState> GetNormal ();
    /*
    <summary>
        Gets the appearance when mouse is hovered.
    </summary>
<value>The  object specifies the annotation appearance when the mouse is hovered on it.</value>
    */
    intrusive_ptr<PdfAppearanceState> GetMouseHover ();
    /*
    <summary>
        Gets the pressed state annotation.
    </summary>
<value>The appearance in pressed state.</value>
    */
    intrusive_ptr<PdfAppearanceState> GetPressed ();
private:
};
}}