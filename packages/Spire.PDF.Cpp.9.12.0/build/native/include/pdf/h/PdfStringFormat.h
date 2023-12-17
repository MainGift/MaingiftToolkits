#pragma once
#include "pch.h"
#include "PdfTextAlignment.h"
#include "PdfVerticalAlignment.h"
#include "PdfSubSuperScript.h"
#include "PdfWordWrapType.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the text layout information.
    </summary>
*/
class EXPORTS PdfStringFormat : public virtual Object
{
public:

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    PdfStringFormat();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="alignment">The alignment.</param>
    PdfStringFormat(PdfTextAlignment alignment);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="columnFormat">The column format.</param>
    PdfStringFormat(LPCWSTR_S columnFormat);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="alignment">The alignment.</param>
    /// <param name="lineAlignment">The vertical alignment.</param>
    PdfStringFormat(PdfTextAlignment alignment, PdfVerticalAlignment lineAlignment);
    /*
    <summary>
        Gets or sets the text alignment.
    </summary>
    */
    PdfTextAlignment GetAlignment ();
    /*

    */
    void SetAlignment (PdfTextAlignment value);
    /*
    <summary>
        Gets or sets the vertical text alignment.
    </summary>
    */
    PdfVerticalAlignment GetLineAlignment ();
    /*

    */
    void SetLineAlignment (PdfVerticalAlignment value);
    /*
    <summary>
        Gets or sets the value that indicates text direction mode.
    </summary>
<remarks>Note, that this property doesn't change any alignment of the text. 
             property should be set manually to align the text. This property just enables or disables
            support of right to left approach. 
            If the value is False, the text won't be checked for right to left symbols occurrence.</remarks>
    */
    bool GetRightToLeft ();
    /*

    */
    void SetRightToLeft (bool value);
    /*
    <summary>
        Gets or sets value that indicates a size among the characters in the text.
            When the glyph for each character in the string is rendered, this value is
            added to the the glyphs displacement.
    </summary>
<remarks>
            Default value is 0.</remarks>
    */
    float GetCharacterSpacing ();
    /*

    */
    void SetCharacterSpacing (float value);
    /*
    <summary>
        Gets or sets value that indicates a size among the words in the text.
            Word spacing works the same way as character spacing but applies only to the
            space character, code 32.
    </summary>
<remarks>Default value is 0.</remarks>
    */
    float GetWordSpacing ();
    /*

    */
    void SetWordSpacing (float value);
    /*
    <summary>
        Gets or sets value that indicates the vertical distance between the baselines of adjacent lines of text.
    </summary>
<remarks>Default value is 0.</remarks>
    */
    float GetLineSpacing ();
    /*

    */
    void SetLineSpacing (float value);
    /*
    <summary>
        Gets or sets a value indicating whether the text
            should be a part of the clipping path.
    </summary>
    */
    bool GetClipPath ();
    /*

    */
    void SetClipPath (bool value);
    /*
    <summary>
        Gets or sets value indicating whether the text is in subscript or superscript mode.
    </summary>
    */
    PdfSubSuperScript GetSubSuperScript ();
    /*

    */
    void SetSubSuperScript (PdfSubSuperScript value);
    /*
    <summary>
        Gets or sets the indent of the first line in the paragraph.
    </summary>
    */
    float GetParagraphIndent ();
    /*

    */
    void SetParagraphIndent (float value);
    /*
    <summary>
        Only entire lines are laid out in the formatting rectangle.
            By default layout continues until the end of the text, 
            or until no more lines are visible as a result of clipping, whichever comes first. 
            Note that the default settings allow the last line to be partially obscured by a formatting rectangle that is not a whole multiple of the line height.
            To ensure that only whole lines are seen, specify this value and be careful to provide a formatting rectangle at least as tall as the height of one line.
    </summary>
<value>
  <c>true</c> if [line limit]; otherwise, <c>false</c>.</value>
    */
    bool GetLineLimit ();
    /*

    */
    void SetLineLimit (bool value);
    /*
    <summary>
        Includes the trailing space at the end of each line.
            By default the boundary rectangle returned by the MeasureString method of PdfFont excludes the space at the end of each line.
            Set this flag to include that space in measurement.
    </summary>
<value>
  <c>true</c> if [measure trailing spaces]; otherwise, <c>false</c>.
            </value>
    */
    bool GetMeasureTrailingSpaces ();
    /*

    */
    void SetMeasureTrailingSpaces (bool value);
    /*
    <summary>
        Overhanging parts of glyphs, 
            and unwrapped text reaching outside the formatting rectangle are allowed to show. 
            By default all text and glyph parts reaching outside the formatting rectangle are clipped.
    </summary>
<value>
  <c>true</c> if [no clip]; otherwise, <c>false</c>.</value>
    */
    bool GetNoClip ();
    /*

    */
    void SetNoClip (bool value);
    /*
    <summary>
        Gets or sets value indicating type of the text wrapping.
    </summary>
    */
    PdfWordWrapType GetWordWrap ();
    /*

    */
    void SetWordWrap (PdfWordWrapType value);
    /*
    <summary>
        Clones the object.
    </summary>
    <returns>The new created object.</returns>
    */
    //virtual System.Object Clone ();
private:
};
}}