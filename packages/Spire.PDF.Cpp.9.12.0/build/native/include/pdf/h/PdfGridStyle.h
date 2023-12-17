#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfGridStyleBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Grid style
    </summary>
*/
class EXPORTS PdfGridStyle : public virtual PdfGridStyleBase
{
public:
    /*
    <summary>
        Gets or sets the cell spacing.
    </summary>
<value>The cell spacing.</value>
    */
    float GetCellSpacing ();
    /*

    */
    void SetCellSpacing (float value);
    /*
    <summary>
        Gets or sets the cell padding.
    </summary>
<value>The cell padding.</value>
    */
    intrusive_ptr<PdfPaddings> GetCellPadding ();
    /*

    */
    void SetCellPadding (intrusive_ptr<PdfPaddings> value);
    /*
    <summary>
        Gets or sets the border overlap style.
    </summary>
<value>The border overlap style.</value>
    */
    PdfBorderOverlapStyle GetBorderOverlapStyle ();
    /*

    */
    void SetBorderOverlapStyle (PdfBorderOverlapStyle value);
    /*
    <summary>
        Gets or sets a value indicating whether to allow horizontal overflow.
    </summary>
<value>
  <c>true</c> if [allow horizontal overflow]; otherwise, <c>false</c>.
            </value>
    */
    bool GetAllowHorizontalOverflow ();
    /*

    */
    void SetAllowHorizontalOverflow (bool value);
    /*
    <summary>
        Gets or sets the type of the horizontal overflow.
    </summary>
<value>The type of the horizontal overflow.</value>
    */
    PdfHorizontalOverflowType GetHorizontalOverflowType ();
    /*

    */
    void SetHorizontalOverflowType (PdfHorizontalOverflowType value);
private:
};
}}