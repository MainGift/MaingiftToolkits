#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfActionLinkAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the Uri annotation
    </summary>
*/
class EXPORTS PdfUriAnnotation : public virtual PdfActionLinkAnnotation
{
public:
    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>        
    /// <param name="rectangle">RectangleF structure that specifies the bounds of the annotation.</param>
    PdfUriAnnotation(intrusive_ptr<RectangleF> rectangle);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="rectangle">RectangleF structure that specifies the bounds of the annotation.</param>
    /// <param name="uri">unique resource identifier path.</param>
    PdfUriAnnotation(intrusive_ptr<RectangleF> rectangle, LPCWSTR_S uri);
    /*
    <summary>
        Gets or sets the Uri address.
    </summary>
    */
    LPCWSTR_S GetUri ();
    /*

    */
    void SetUri (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the action.
    </summary>
<value>The  object specifies the action of the annotation.</value>
    */
    virtual intrusive_ptr<PdfAction> GetAction ();
    /*

    */
    virtual void SetAction (intrusive_ptr<PdfAction> value);
private:
};
}}