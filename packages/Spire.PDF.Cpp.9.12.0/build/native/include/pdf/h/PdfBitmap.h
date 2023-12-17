#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfImage.h"
#include "PdfMask.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the bitmap images.
    </summary>
*/
class EXPORTS PdfBitmap : public virtual PdfImage
{
public:
    PdfBitmap();
    PdfBitmap(LPCWSTR_S path);

    PdfBitmap(intrusive_ptr<Stream> stream);
    /*
    <summary>
        Gets or sets the active frame of the bitmap.
    </summary>
<value>The active frame index.</value>
    */
    virtual int GetActiveFrame ();
    /*

    */
    virtual void SetActiveFrame (int value);
    /*
    <summary>
        Gets the number of frames in the bitmap.
    </summary>
<value>The frame count.</value>
    */
    virtual int GetFrameCount ();
    /*
    <summary>
        Gets or sets the mask of bitmap.
    </summary>
<value>New PdfMask.</value>
    */
    intrusive_ptr<PdfMask> GetMask ();
    /*

    */
    void SetMask (intrusive_ptr<PdfMask> value);
    /*
    <summary>
        Gets or sets the quality.
            The range is from 0 to 100, 100 is the best quality.
    </summary>
<remarks>
            When the image is stored into PDF not as a mask,
            you may reduce its quality, which saves the disk space.
            </remarks>
    */
    long GetQuality ();
    /*

    */
    void SetQuality (long value);
    /*
    <summary>
        Performs application-defined tasks associated with freeing,
            releasing, or resetting unmanaged resources.
    </summary>
    */
    virtual void Dispose ();
private:
};
}}