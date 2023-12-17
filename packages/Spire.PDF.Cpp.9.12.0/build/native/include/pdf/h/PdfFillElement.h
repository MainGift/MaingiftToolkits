#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfDrawWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an element that could be drawn and/or filled.
    </summary>
*/
class EXPORTS PdfFillElement : public virtual PdfDrawWidget
{
public:
    /*
    <summary>
        Gets or sets the brush.
    </summary>
    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
private:
};
}}