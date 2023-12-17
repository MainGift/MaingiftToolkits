#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a Base class for popup annotation which can be either in open or closed state.
    </summary>
*/
class EXPORTS PdfPopupAnnotation : public virtual PdfAnnotation
{
public:
    PdfPopupAnnotation();

    PdfPopupAnnotation(intrusive_ptr<RectangleF> rectangle);

    PdfPopupAnnotation(intrusive_ptr<RectangleF> rectangle, LPCWSTR_S text);
    /*
    <summary>
        Gets or sets icon style.
    </summary>
    */
    PdfPopupIcon GetIcon ();
    /*

    */
    void SetIcon (PdfPopupIcon value);
    /*
    <summary>
        Gets or sets value whether annotation is initially open or closed
    </summary>
    */
    bool GetOpen ();
    /*

    */
    void SetOpen (bool value);
    /*
    <summary>
        Gets or sets appearance of the annotation.
    </summary>
    */
    intrusive_ptr<PdfAppearance> GetAppearance ();
    /*

    */
    void SetAppearance (intrusive_ptr<PdfAppearance> value);
private:
};
}}