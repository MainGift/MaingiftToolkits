#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMask.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the image mask object for bitmaps.
    </summary>
*/
class EXPORTS PdfImageMask : public virtual PdfMask
{
public:
    /*
    <summary>
        Gets the image mask.
    </summary>
<value>The image mask.</value>
    */
    intrusive_ptr<PdfBitmap> GetMask ();
    /*
    <summary>
        Gets the mask type.
    </summary>
<value>
  <c>true</c> if soft mask; otherwise, hard mask <c>false</c>.</value>
    */
    bool GetSoftMask ();
private:
};
}}