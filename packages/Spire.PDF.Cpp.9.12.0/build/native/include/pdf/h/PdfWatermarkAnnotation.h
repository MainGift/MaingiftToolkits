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
        The water mark annotation.
    </summary>
*/
class EXPORTS PdfWatermarkAnnotation : public virtual PdfAnnotation
{
public:
    /*

    */
    void SetAppearance (intrusive_ptr<PdfAppearance> value);
    /*
    <summary>
        Set the matrix.
    </summary>
    <param name="matrix">The matrix</param>
    */
    void SetMatrix (std::vector<float> matrix);
    /*
    <summary>
        Set the horizontal translation.
    </summary>
    <param name="horizontal">The horizontal</param>
    */
    void SetHorizontalTranslation (float horizontal);
    /*
    <summary>
        Set the vertical translation.
    </summary>
    <param name="vertical">The vertiacl</param>
    */
    void SetVerticalTranslation (float vertical);
private:
};
}}