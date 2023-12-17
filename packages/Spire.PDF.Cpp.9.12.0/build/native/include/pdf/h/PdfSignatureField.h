#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfSignatureAppearanceField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents signature field in the PDF Form.
    </summary>
*/
class EXPORTS PdfSignatureField : public virtual PdfSignatureAppearanceField
{
public:
    /*

    */
    intrusive_ptr<PdfAppearance> GetAppearance ();
    /*

    */
    //Security_intrusive_ptr<PdfSignature> GetSignature ();
    /*

    */
    //void SetSignature (Security_intrusive_ptr<PdfSignature> value);
    /*
    <summary>
        Draws an image.
    </summary>
    <param name="image">The image.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,float x,float y);
    /*
    <summary>
        Draws an image.
    </summary>
    <param name="image">The image.</param>
    <param name="rectangle">The rectangle.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Draws an image.
    </summary>
    <param name="image">The image.</param>
    <param name="point">The point.</param>
    <param name="size">The size.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,intrusive_ptr<PointF> point,intrusive_ptr<SizeF> size);
private:
};
}}