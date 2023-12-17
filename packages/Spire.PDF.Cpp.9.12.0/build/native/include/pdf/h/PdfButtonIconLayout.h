#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the button icon layout options.
    </summary>
*/
class EXPORTS PdfButtonIconLayout : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the circumstances under which the icon shall be scaled inside the annotation rectangle.
    </summary>
    */
    PdfButtonIconScaleReason GetScaleReason ();
    /*

    */
    void SetScaleReason (PdfButtonIconScaleReason value);
    /*
    <summary>
        Gets or sets an array of two numbers between 0.0 and 1.0 indicating the fraction of leftover space to allocate at the left and bottom of the icon.
    </summary>
    */
    std::vector<int> GetSpaces ();
    /*

    */
    void SetSpaces (std::vector<float> value);
    /*
    <summary>
        If true, indicates that the button appearance should be scaled to fit fully within the bounds of the annotation without taking into consideration the line width of the border.
    </summary>
    */
    bool GetIsFitBounds ();
    /*

    */
    void SetIsFitBounds (bool value);
    /*
    <summary>
        Gets or sets the type of scaling to use.
    </summary>
    */
    PdfButtonIconScaleMode GetScaleMode ();
    /*

    */
    void SetScaleMode (PdfButtonIconScaleMode value);
private:
};
}}