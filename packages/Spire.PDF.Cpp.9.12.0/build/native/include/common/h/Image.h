#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
#ifdef _SPIRE_XLS
namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Presentation{
#else
namespace Xls{
#endif
class EXPORTS Image : public virtual Object
{
public:
    static intrusive_ptr<Image> FromFile (LPCWSTR_S filename);
    static intrusive_ptr<Image> FromFile (LPCWSTR_S filename,bool useEmbeddedColorManagement);
    static intrusive_ptr<Image> FromStream (intrusive_ptr<Stream> stream);
    static intrusive_ptr<Image> FromStream (intrusive_ptr<Stream> stream,bool useEmbeddedColorManagement);
    //virtual System.Object Clone ();
    virtual void Dispose ();
    //static intrusive_ptr<Bitmap> FromHbitmap (System.IntPtr hbitmap);
    //static intrusive_ptr<Bitmap> FromHbitmap (System.IntPtr hbitmap,System.IntPtr hpalette);
    //static int GetPixelFormatSize (PixelFormat pixfmt);
    //static bool IsAlphaPixelFormat (PixelFormat pixfmt);
    //static bool IsExtendedPixelFormat (PixelFormat pixfmt);
    //static bool IsCanonicalPixelFormat (PixelFormat pixfmt);
    //System.Object GetTag ();
    //void SetTag (System.Object value);
    //System.Drawing.Imaging.EncoderParameters GetEncoderParameterList (System.Guid encoder);
    void Save (LPCWSTR_S filename);
    void Save (LPCWSTR_S filename,intrusive_ptr<ImageFormat> format);
    //void Save (LPCWSTR_S filename,System.Drawing.Imaging.ImageCodecInfo encoder,System.Drawing.Imaging.EncoderParameters encoderParams);
    void Save (intrusive_ptr<Stream> stream,intrusive_ptr<ImageFormat> format);
    //void Save (intrusive_ptr<Stream> stream,System.Drawing.Imaging.ImageCodecInfo encoder,System.Drawing.Imaging.EncoderParameters encoderParams);
    //void SaveAdd (System.Drawing.Imaging.EncoderParameters encoderParams);
    //void SaveAdd (intrusive_ptr<Image> image,System.Drawing.Imaging.EncoderParameters encoderParams);
    intrusive_ptr<SizeF> GetPhysicalDimension ();
    intrusive_ptr<Size> GetSize ();
    int GetWidth ();
    int GetHeight ();
    //float GetHorizontalResolution ();
    //float GetVerticalResolution ();
    int GetFlags ();
    intrusive_ptr<ImageFormat> GetRawFormat ();
    //PixelFormat GetPixelFormat ();
    //intrusive_ptr<RectangleF> GetBounds (System.Drawing.GraphicsUnit& pageUnit);
    //System.Drawing.Imaging.ColorPalette GetPalette ();
    //void SetPalette (System.Drawing.Imaging.ColorPalette value);
    //intrusive_ptr<Image> GetThumbnailImage (int thumbWidth,int thumbHeight,Image*+GetThumbnailImageAbort callback,System.IntPtr callbackData);
    //std::vector<System.Guid> GetFrameDimensionsList ();
    //int GetFrameCount (System.Drawing.Imaging.FrameDimension dimension);
    //int SelectActiveFrame (System.Drawing.Imaging.FrameDimension dimension,int frameIndex);
    //void RotateFlip (System.Drawing.RotateFlipType rotateFlipType);
    std::vector<int> GetPropertyIdList ();
    //System.Drawing.Imaging.PropertyItem GetPropertyItem (int propid);
    void RemovePropertyItem (int propid);
    //void SetPropertyItem (System.Drawing.Imaging.PropertyItem propitem);
    //std::vector<System.Drawing.Imaging.PropertyItem> GetPropertyItems ();
    static intrusive_ptr<Image> FromStream (intrusive_ptr<Stream> stream,bool useEmbeddedColorManagement,bool validateImageData);
private:
};
}}