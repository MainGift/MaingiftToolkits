#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Size.h"
#include "PdfShapeWidget.h"
#include "PdfImageType.h"
#include "PdfStringFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the base class for images.
    </summary>
*/
class EXPORTS PdfImage : public virtual PdfShapeWidget
{
public:
    /*
    <summary>
        Gets the height of the image in pixels.
    </summary>
<value>The height.</value>
    */
    virtual int GetHeight ();
    /*
    <summary>
        If True, png direct convert to Jpx and no mask.
    </summary>
    */
    bool GetPngDirectToJpeg ();
    /*

    */
    void SetPngDirectToJpeg (bool value);
    /*
    <summary>
        Gets the width of the image in pixels.
    </summary>
<value>The width.</value>
    */
    virtual int GetWidth ();
    /*
    <summary>
        Gets the horizontal resolution, in pixels per inch, of this Image. 
    </summary>
<value>The horizontal resolution.</value>
    */
    virtual float GetHorizontalResolution ();
    /*
    <summary>
        Gets the vertical resolution, in pixels per inch, of this Image. 
    </summary>
<value>The vertical resolution.</value>
    */
    virtual float GetVerticalResolution ();
    /*
    <summary>
        Returns the size of the image in points.
    </summary>
<remarks>This property uses HorizontalResolution and VerticalResolution for calculating the size in points.</remarks>
    */
    virtual intrusive_ptr<SizeF> GetPhysicalDimension ();
    /*
    <summary>
        Gets or sets the active frame of the image.
    </summary>
    */
    virtual int GetActiveFrame ();
    /*

    */
    virtual void SetActiveFrame (int value);
    /*
    <summary>
        Gets the number of frames in the image.
    </summary>
    */
    virtual int GetFrameCount ();
    /*
    <summary>
        Creates PdfImage from a file.
    </summary>
    <param name="path">Path to a file.</param>
    <returns>Returns a created PdfImage object.</returns>
    */
    static intrusive_ptr<PdfImage> FromFile (LPCWSTR_S path);
    /*
    <summary>
        Creates PdfImage from stream.
    </summary>
    <param name="stream">The stream.</param>
    <returns>Returns a created PdfImage object.</returns>
    */
    static intrusive_ptr<PdfImage> FromStream (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Converts a  object into a PDF image.
    </summary>
    <param name="image">The image.</param>
    <returns>Returns a created PdfImage object.</returns>
    */
    //static intrusive_ptr<PdfImage> FromImage (intrusive_ptr<Image> image);
    /*
    <summary>
        Creates a new image instance from RTF text.
    </summary>
    <param name="rtf">RTF text data.</param>
    <param name="width">Width of the image in points.</param>
    <param name="type">Type of the image that should be created.</param>
    <param name="format">The text string format.</param>
    <returns>PdfImage containing RTF text.</returns>
    */
    static intrusive_ptr<PdfImage> FromRtf (LPCWSTR_S rtf,float width,PdfImageType type,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Creates a new image instance from RTF text.
    </summary>
    <param name="rtf">RTF text data.</param>
    <param name="width">Width of the image in points.</param>
    <param name="type">Type of the image that should be created.</param>
    <returns>PdfImage containing RTF text.</returns>
    */
    static intrusive_ptr<PdfImage> FromRtf (LPCWSTR_S rtf,float width,PdfImageType type);
    /*
    <summary>
        Creates a new image instance from RTF text.
    </summary>
    <param name="rtf">RTF text data.</param>
    <param name="width">Width of the image in points.</param>
    <param name="height">Height of the image in points.</param>
    <param name="type">Type of the image that should be created.</param>
    <returns>PdfImage containing RTF text.</returns>
    */
    static intrusive_ptr<PdfImage> FromRtf (LPCWSTR_S rtf,float width,float height,PdfImageType type);
    /*
    <summary>
        Creates a new image instance from RTF text.
    </summary>
    <param name="rtf">RTF text data.</param>
    <param name="width">Width of the image in points.</param>
    <param name="height">Height of the image in points.</param>
    <param name="type">Type of the image that should be created.</param>
    <param name="format">The text string format.</param>
    <returns>PdfImage containing RTF text.</returns>
    */
    static intrusive_ptr<PdfImage> FromRtf (LPCWSTR_S rtf,float width,float height,PdfImageType type,intrusive_ptr<PdfStringFormat> format);
private:
};
}}