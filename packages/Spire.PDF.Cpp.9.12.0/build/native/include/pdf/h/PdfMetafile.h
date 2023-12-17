#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/GraphicsUnit.h"
#include "PdfImage.h"

#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Class representing metafiles.
    </summary>
*/
class EXPORTS PdfMetafile : public virtual PdfImage
{
public:
    /*

    */
    long GetQuality ();
    /*

    */
    void SetQuality (long value);
    /*

    */
    float GetPageScale ();
    /*

    */
    void SetPageScale (float value);
    /*

    */
    GraphicsUnit GetPageUnit ();
    /*

    */
    void SetPageUnit (GraphicsUnit value);
    /*

    */
    virtual void Dispose ();
    /*

    */
    void SetTransparency (float alphaPen,float alphaBrush,PdfBlendMode blendMode,bool transparency);
private:
};
}}