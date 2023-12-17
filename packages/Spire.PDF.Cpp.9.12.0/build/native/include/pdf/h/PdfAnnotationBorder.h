#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the appearance of an annotation's border.
    </summary>
*/
class EXPORTS PdfAnnotationBorder : public virtual Object
{
public:
    PdfAnnotationBorder();

    PdfAnnotationBorder(float borderWidth);

    PdfAnnotationBorder(float borderWidth, float horizontalRadius, float verticalRadius);
    /*
    <summary>
        Gets or sets a horizontal corner radius.
    </summary>
    */
    float GetHorizontalRadius ();
    /*

    */
    void SetHorizontalRadius (float value);
    /*
    <summary>
        Gets or sets a vertical corner radius.
    </summary>
    */
    float GetVerticalRadius ();
    /*

    */
    void SetVerticalRadius (float value);
    /*
    <summary>
        Gets or sets the width of annotation's border. 
    </summary>
<value>A float value specifying the width of the annotation's border. </value>
    */
    float GetWidth ();
    /*

    */
    void SetWidth (float value);
private:
};
}}