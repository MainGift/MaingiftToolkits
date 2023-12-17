#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfShapeWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents Pdf Template object.
    </summary>
*/
class EXPORTS PdfTemplate : public virtual PdfShapeWidget
{
public:
    PdfTemplate();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="size">The size.</param>
    PdfTemplate(intrusive_ptr<SizeF> size);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="width">The width.</param>
    /// <param name="height">The height.</param>
    PdfTemplate(float width, float height);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="width">The width.</param>
    /// <param name="height">The height.</param>
    /// <param name="isPdfAppearance">Indicates if the template is used for PdfAppearance.</param>
    PdfTemplate(float width, float height, bool isPdfAppearance);
    /*
    <summary>
        Gets graphics context of the template.
    </summary>
<remarks>It will return null, if the template is read-only.</remarks>
    */
    intrusive_ptr<PdfCanvas> GetGraphics ();
    /*
    <summary>
        Gets the size of the template.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*
    <summary>
        Gets the width of the template.
    </summary>
    */
    float GetWidth ();
    /*
    <summary>
        Gets the height of the template.
    </summary>
    */
    float GetHeight ();
    /*
    <summary>
        Gets a value indicating whether the template is read-only.
    </summary>
<value>
  <c>true</c> if the template is read-only; otherwise, <c>false</c>.</value>
<remarks>Read-only templates does not expose graphics. They just return null.</remarks>
    */
    bool GetReadOnly ();
    /*
    <summary>
        Resets the template and sets the specified size.
    </summary>
    <param name="size">The size.</param>
    */
    void Reset (intrusive_ptr<SizeF> size);
    /*
    <summary>
        Resets an instance.
    </summary>
    */
    void Reset ();
private:
};
}}