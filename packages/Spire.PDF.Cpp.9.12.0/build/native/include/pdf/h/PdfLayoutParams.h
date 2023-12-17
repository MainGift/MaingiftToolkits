#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfLayoutParams : public virtual Object
{
public:
    /*

    */
    intrusive_ptr<PdfPageBase> GetPage ();
    /*

    */
    void SetPage (intrusive_ptr<PdfPageBase> value);
    /*

    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    void SetBounds (intrusive_ptr<RectangleF> value);
    /*

    */
    intrusive_ptr<PdfTextLayout> GetFormat ();
    /*

    */
    void SetFormat (intrusive_ptr<PdfTextLayout> value);
private:
};
}}