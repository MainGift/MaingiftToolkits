#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "Image.h"
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
class EXPORTS Bitmap : public virtual Image
{
public:
    //static intrusive_ptr<Bitmap> FromHicon (System.IntPtr hicon);
    //static intrusive_ptr<Bitmap> FromResource (System.IntPtr hinstance,LPCWSTR_S bitmapName);
    //System.IntPtr GetHbitmap ();
    //System.IntPtr GetHbitmap (intrusive_ptr<Color> background);
    //System.IntPtr GetHicon ();
    //intrusive_ptr<Bitmap> Clone (intrusive_ptr<Rectangle> rect,PixelFormat format);
    //intrusive_ptr<Bitmap> Clone (intrusive_ptr<RectangleF> rect,PixelFormat format);
    void MakeTransparent ();
    //void MakeTransparent (intrusive_ptr<Color> transparentColor);
    //System.Drawing.Imaging.BitmapData LockBits (intrusive_ptr<Rectangle> rect,System.Drawing.Imaging.ImageLockMode flags,PixelFormat format);
    //System.Drawing.Imaging.BitmapData LockBits (intrusive_ptr<Rectangle> rect,System.Drawing.Imaging.ImageLockMode flags,PixelFormat format,System.Drawing.Imaging.BitmapData bitmapData);
    //void UnlockBits (System.Drawing.Imaging.BitmapData bitmapdata);
    //intrusive_ptr<Color> GetPixel (int x,int y);
    //void SetPixel (int x,int y,intrusive_ptr<Color> color);
    //void SetResolution (float xDpi,float yDpi);
private:
};
}}