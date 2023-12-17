#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS Utilities_PdfImageInfo : public virtual Object
{
public:
    /*
    <summary>
        Gets the Image Boundary location.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*
    <summary>
        Gets the Image,save to stream.
    </summary>
    */
    intrusive_ptr<Image> GetImage ();
private:
};
}}