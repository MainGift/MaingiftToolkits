#pragma once
#include "pch.h"
#include "PdfFontStyle.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the font.
    </summary>
*/
class EXPORTS PdfFontBase : public virtual Object
{
public:
    /*

    */
    virtual void Dispose ();
    /*
    <summary>
        Gets the name.
    </summary>
<value>The name.</value>
    */
    LPCWSTR_S GetName ();
    /*
    <summary>
        Gets the size.
    </summary>
<value>The size.</value>
    */
    float GetSize ();
    /*
    <summary>
        Gets the height of the font in points.
    </summary>
    */
    float GetHeight ();
    /*
    <summary>
        Gets the descent of the font in points.
    </summary>
    */
    float GetDescent ();
    /*
    <summary>
        Gets the style information for this font.
    </summary>
    */
    PdfFontStyle GetStyle ();
    /*
    <summary>
        Gets a value indicating whether this  is bold.
    </summary>
<value>
  <c>true</c> if bold; otherwise, <c>false</c>.</value>
    */
    bool GetBold ();
    /*
    <summary>
        Gets a value indicating whether this  is italic.
    </summary>
<value>
  <c>true</c> if italic; otherwise, <c>false</c>.</value>
    */
    bool GetItalic ();
    /*
    <summary>
        Gets a value indicating whether this  is strikeout.
    </summary>
<value>
  <c>true</c> if strikeout; otherwise, <c>false</c>.</value>
    */
    bool GetStrikeout ();
    /*
    <summary>
        Gets a value indicating whether this  is underline.
    </summary>
<value>
  <c>true</c> if underline; otherwise, <c>false</c>.</value>
    */
    bool GetUnderline ();
    /*
    <summary>
        Measures a string by using this font.
    </summary>
    <param name="text">Text to be measured.</param>
    <returns>Size of the text.</returns>
    */
    intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text);
    /*
    <summary>
        Measures a string by using this font.
    </summary>
    <param name="text">Text to be measured.</param>
    <param name="format">PdfStringFormat that represents formatting information, such as line spacing, for the string.</param>
    <returns>Size of the text.</returns>
    */
    intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text,intrusive_ptr<PdfStringFormat> format);
    /*

    */
    //intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text,intrusive_ptr<PdfStringFormat> format,System.Int32& charactersFitted,System.Int32& linesFilled);
    /*
    <summary>
        Measures a string by using this font.
    </summary>
    <param name="text">Text to be measured.</param>
    <param name="width">Maximum width of the string in points.</param>
    <returns>Size of the text.</returns>
    */
    intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text,float width);
    /*
    <summary>
        Measures a string by using this font.
    </summary>
    <param name="text">Text to be measured.</param>
    <param name="width">Maximum width of the string in points.</param>
    <param name="format">PdfStringFormat that represents formatting information, such as line spacing, for the string.</param>
    <returns>Size of the text.</returns>
    */
    intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text,float width,intrusive_ptr<PdfStringFormat> format);
    /*

    */
    //intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text,float width,intrusive_ptr<PdfStringFormat> format,System.Int32& charactersFitted,System.Int32& linesFilled);
    /*
    <summary>
        Measures a string by using this font.
    </summary>
    <param name="text">Text to be measured.</param>
    <param name="layoutArea">SizeF structure that specifies the maximum layout area for the text in points.</param>
    <returns>Size of the text.</returns>
    */
    intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text,intrusive_ptr<SizeF> layoutArea);
    /*
    <summary>
        Measures a string by using this font.
    </summary>
    <param name="text">Text to be measured.</param>
    <param name="layoutArea">SizeF structure that specifies the maximum layout area for the text in points.</param>
    <param name="format">PdfStringFormat that represents formatting information, such as line spacing, for the string.</param>
    <returns>Size of the text.</returns>
    */
    intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text,intrusive_ptr<SizeF> layoutArea,intrusive_ptr<PdfStringFormat> format);
    /*

    */
    //intrusive_ptr<SizeF> MeasureString (LPCWSTR_S text,intrusive_ptr<SizeF> layoutArea,intrusive_ptr<PdfStringFormat> format,System.Int32& charactersFitted,System.Int32& linesFilled);
private:
};
}}