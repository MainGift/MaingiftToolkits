#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfBorders : public virtual Object
{
public:
    PdfBorders();
    /*
    <summary>
        Gets or sets the left.
    </summary>
<value>The left.</value>
    */
    intrusive_ptr<PdfPen> GetLeft ();
    /*

    */
    void SetLeft (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the right.
    </summary>
<value>The right.</value>
    */
    intrusive_ptr<PdfPen> GetRight ();
    /*

    */
    void SetRight (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the top.
    </summary>
<value>The top.</value>
    */
    intrusive_ptr<PdfPen> GetTop ();
    /*

    */
    void SetTop (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the bottom.
    </summary>
<value>The bottom.</value>
    */
    intrusive_ptr<PdfPen> GetBottom ();
    /*

    */
    void SetBottom (intrusive_ptr<PdfPen> value);
    /*

    */
    void SetAll (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets the default.
    </summary>
<value>The default.</value>
    */
    static intrusive_ptr<PdfBorders> GetDefault ();
private:
};
}}