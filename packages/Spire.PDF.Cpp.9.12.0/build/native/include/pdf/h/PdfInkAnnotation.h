#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents Ink annotation in the PDF.
    </summary>
*/
class EXPORTS PdfInkAnnotation : public virtual PdfAnnotation
{
public:
    /*

    */
    //System.Collections.Generic.List`1[[System.Int32[], mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetInkList ();
    /*

    */
    //void SetInkList (System.Collections.Generic.List`1[[System.Int32[], mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
    /*
    <summary>
        Gets or sets the annotation opacity. 
            <remarks>The opacity is given in decimal, 1 is full opacity, 0 is no opacity.</remarks></summary>
    */
    float GetOpacity ();
    /*

    */
    void SetOpacity (float value);
private:
};
}}