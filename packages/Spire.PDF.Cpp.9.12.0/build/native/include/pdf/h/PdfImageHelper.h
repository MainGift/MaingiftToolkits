#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfImageHelper : public virtual Object
{
public:
    /*
    <summary>
        Get all image information on the page.
    </summary>
    <param name="page">The pdf page.</param>
    */
    std::vector<intrusive_ptr<PdfImageInfo>> GetImagesInfo (intrusive_ptr<PdfPageBase> page);
    /*
    <summary>
        Replace image.
    </summary>
    <param name="imageInfo">The original image info.</param>
    <param name="newImage">The new replace image.</param>
    */
    void ReplaceImage (intrusive_ptr<Utilities_PdfImageInfo> imageInfo,intrusive_ptr<PdfImage> newImage);
private:
};
}}