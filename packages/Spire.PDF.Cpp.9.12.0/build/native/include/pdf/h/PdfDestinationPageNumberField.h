#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfPageWidget.h"
#include "PdfNewPage.h"
//#include "../../common/h/RectangleF.h"
#include "PdfFontBase.h"
#include "PdfBrush.h"
#include "PdfPageNumberField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents class which displays destination page's number.
    </summary>
*/
class EXPORTS PdfDestinationPageNumberField : public virtual PdfPageNumberField
{
public:
    PdfDestinationPageNumberField();

    PdfDestinationPageNumberField(intrusive_ptr<PdfFontBase> font);

    PdfDestinationPageNumberField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfDestinationPageNumberField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
    /*
    <summary>
        Get and sets the PdfLoadedPage
    </summary>
    */
    intrusive_ptr<PdfPageWidget> GetPageWidget ();
    /*

    */
    void SetPageWidget (intrusive_ptr<PdfPageWidget> value);
    /*
    <summary>
        Gets or sets the page.
    </summary>
<value>The page.</value>
    */
    intrusive_ptr<PdfNewPage> GetPage ();
    /*

    */
    void SetPage (intrusive_ptr<PdfNewPage> value);
private:
};
}}