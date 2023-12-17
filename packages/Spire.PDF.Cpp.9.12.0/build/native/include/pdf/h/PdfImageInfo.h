#pragma once
#include "pch.h"
//#include "../../common/h/Stream.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the utility class to store information about Images and its location.
    </summary>
*/
class EXPORTS PdfImageInfo : public virtual Object
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
    intrusive_ptr<Stream> GetImage ();
    /*
    <summary>
        Gets the Image index.
    </summary>
    */
    int GetIndex ();
    /*
    <summary>
        dispose the image resources
    </summary>
    */
    void Dispose ();
private:
};
}}