#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents parameters how to display the page in the presentation mode.
    </summary>
*/
class EXPORTS PdfPageTransition : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the transition style to use when moving to this page from another 
            during a presentation.
    </summary>
<value>The style.</value>
    */
    PdfTransitionStyle GetStyle ();
    /*

    */
    void SetStyle (PdfTransitionStyle value);
    /*
    <summary>
        Gets or sets the duration of the transition effect, in seconds.
    </summary>
<value>The transition duration.</value>
    */
    float GetDuration ();
    /*

    */
    void SetDuration (float value);
    /*
    <summary>
        Gets or sets the dimension in which the specified transition effect occurs.
    </summary>
<value>The dimension.</value>
    */
    PdfTransitionDimension GetDimension ();
    /*

    */
    void SetDimension (PdfTransitionDimension value);
    /*
    <summary>
        Gets or sets the the direction of motion for the specified transition effect.
    </summary>
<value>The motion.</value>
    */
    PdfTransitionMotion GetMotion ();
    /*

    */
    void SetMotion (PdfTransitionMotion value);
    /*
    <summary>
        The direction in which the specified transition effect moves, expressed in degrees counter 
            clockwise starting from a left-to-right direction. (This differs from the page objects 
            Rotate property, which is measured clockwise from the top.)
    </summary>
    */
    PdfTransitionDirection GetDirection ();
    /*

    */
    void SetDirection (PdfTransitionDirection value);
    /*
    <summary>
        Gets or sets the starting or ending scale at which the changes are drawn. 
            If Motion property specifies an inward transition, the scale of the changes drawn progresses 
            from Scale to 1.0 over the course of the transition. If Motion specifies an outward 
            transition, the scale of the changes drawn progresses from 1.0 to Scale over the course 
            of the transition.
    </summary>
<remarks>
            This property has effect for Fly transition style only.
            </remarks>
<value>The scale.</value>
    */
    float GetScale ();
    /*

    */
    void SetScale (float value);
    /*
    <summary>
        Gets or sets The pages display duration (also called its advance timing): the maximum 
            length of time, in seconds, that the page is displayed during presentations before 
            the viewer application automatically advances to the next page. By default, 
            the viewer does not advance automatically.
    </summary>
<value>The page duration.</value>
    */
    float GetPageDuration ();
    /*

    */
    void SetPageDuration (float value);
    /*
    <summary>
        Creates a new object that is a copy of the current instance.
    </summary>
    <returns>
            A new object that is a copy of this instance.
            </returns>
    */
    //virtual System.Object Clone ();
private:
};
}}