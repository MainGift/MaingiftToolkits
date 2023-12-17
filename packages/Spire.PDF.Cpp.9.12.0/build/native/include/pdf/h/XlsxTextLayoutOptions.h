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
        Pdf to excel,the options use text layout
    </summary>
*/
class EXPORTS XlsxTextLayoutOptions : public virtual XlsxOptions
{
public:
    XlsxTextLayoutOptions();

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="convertToMultipleSheet">the pdf document conver to multiple sheet,the default is true</param>
    /// <param name="rotatedText">whether show rotated text,the default is true</param>
    XlsxTextLayoutOptions(bool convertToMultipleSheet, bool rotatedText);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="convertToMultipleSheet">the pdf document conver to multiple sheet,the default is true</param>
    /// <param name="rotatedText">whether show rotated text,the default is true</param>
    /// <param name="overlapText">If you wan to display overlapping text,set the parameter to true</param>
    XlsxTextLayoutOptions(bool convertToMultipleSheet, bool rotatedText, bool overlapText);
private:
};
}}