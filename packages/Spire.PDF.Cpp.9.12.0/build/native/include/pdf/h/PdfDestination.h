#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
//#include "../../common/h/PointF.h"
#include "PdfPageBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an anchor in the document where bookmarks or annotations can direct when clicked.
    </summary>
*/
class EXPORTS PdfDestination : public virtual Object
{
public:
    PdfDestination();

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="page">The page.</param>
    PdfDestination(intrusive_ptr<PdfPageBase> page);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="page">The page.</param>
    /// <param name="location">The location.</param>
    PdfDestination(intrusive_ptr<PdfPageBase> page, intrusive_ptr<PointF> location);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="page">The page.</param>
    /// <param name="rectangle">The rectangle.</param>
    PdfDestination(intrusive_ptr<PdfPageBase> page, intrusive_ptr<RectangleF> rectangle);

    /// <summary>
    /// Initializes a new instance of PdfDestination.
    /// </summary>
    /// <param name="pageNumber">The zero based page number.</param>
    /// <param name="location">The location in the page based on the lower-left coordinate system.</param>
    /// <param name="zoom">The zoom factor.</param>
    //PdfDestination(int pageNumber, intrusive_ptr<PointF> location, float zoom);
    /*
    <summary>
        The zero based page number.
    </summary>
    */
    int GetPageNumber ();
    /*
    <summary>
        Gets or sets zoom factor.
    </summary>
    */
    float GetZoom ();
    /*

    */
    void SetZoom (float value);
    /*
    <summary>
        Gets or sets a page where the destination is situated.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPage ();
    /*

    */
    void SetPage (intrusive_ptr<PdfPageBase> value);
    /*
    <summary>
        Gets or sets mode of the destination.
    </summary>
    */
    PdfDestinationMode GetMode ();
    /*

    */
    void SetMode (PdfDestinationMode value);
    /*
    <summary>
        Gets or sets a location of the destination.
    </summary>
    */
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets a rectangle of the destination.
    </summary>
    */
    intrusive_ptr<RectangleF> GetRectangle ();
    /*

    */
    void SetRectangle (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets a value indicating whether this instance is valid.
    </summary>
<value>
  <c>true</c> if this instance is valid; otherwise, <c>false</c>.</value>
    */
    bool GetIsValid ();
private:
};
}}