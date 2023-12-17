#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsxOptions.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf to excel,the options use line layout
    </summary>
*/
class EXPORTS XlsxLineLayoutOptions : public virtual XlsxOptions
{
public:
    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    XlsxLineLayoutOptions();
    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="convertToMultipleSheet">the pdf document conver to multiple sheet,the default is true</param>
    /// <param name="rotatedText">whether show rotated text,the default is true</param>
    /// <param name="splitCell">In PDF document table,there are multiple lines of text in the cell.Whether it is split into multiple lines.the default is true</param>
    XlsxLineLayoutOptions(bool convertToMultipleSheet, bool rotatedText, bool splitCell);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="convertToMultipleSheet">the pdf document conver to multiple sheet,the default is true</param>
    /// <param name="rotatedText">whether show rotated text,the default is true</param>
    /// <param name="splitCell">In PDF document table,there are multiple lines of text in the cell.Whether it is split into multiple lines.the default is true</param>
    /// <param name="warpText">This value is true if you wrap the text of an object in Microsoft Excel</param>
    XlsxLineLayoutOptions(bool convertToMultipleSheet, bool rotatedText, bool splitCell, bool wrapText);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="convertToMultipleSheet">the pdf document conver to multiple sheet,the default is true</param>
    /// <param name="rotatedText">whether show rotated text,the default is true</param>
    /// <param name="splitCell">In PDF document table,there are multiple lines of text in the cell.Whether it is split into multiple lines.the default is true</param>
    /// <param name="warpText">This value is true if you wrap the text of an object in Microsoft Excel</param>
    /// <param name="overlapText">If you wan to display overlapping text,set the parameter to true</param>
    XlsxLineLayoutOptions(bool convertToMultipleSheet, bool rotatedText, bool splitCell, bool wrapText, bool overlapText);

private:
};
}}