#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Class lay outing the text.
    </summary>
*/
class EXPORTS PdfStringLayouter : public virtual Object
{
public:
    PdfStringLayouter();
    /*
    <summary>
        Layouts the text.
    </summary>
    <param name="text">String text.</param>
    <param name="font">Font for the text.</param>
    <param name="format">String format.</param>
    <param name="size">Bounds of the text.</param>
    <returns>Layout result.</returns>
    */
    intrusive_ptr<PdfStringLayoutResult> Layout (LPCWSTR_S text,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfStringFormat> format,intrusive_ptr<SizeF> size);
private:
};
}}