#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The document’s labeling ranges.
    </summary>
*/
class EXPORTS PdfPageLabels : public virtual Object
{
public:
    PdfPageLabels();
    /*
    <summary>
        Add labeling range which is a series of consecutive pages using the same numbering system.
    </summary>
    <param name="indexOfFirstPage">
            the page index of the first page in the labeling range.
    </param>
    <param name="numberStyle">
            The numbering style to be used for the numeric portion of each page label.
            As follow:
            Decimal_Arabic_Numerals/Uppercase_Roman_Numerals/Lowercase_Roman_Numerals/Uppercase_Letters/Lowercase_Letters
    </param>
    <param name="prefix">
            The label prefix for page labels in the labeling range.
    </param>
    */
    void AddRange (int indexOfFirstPage,LPCWSTR_S numberStyle,LPCWSTR_S prefix);
    /*
    <summary>
        Add labeling range which is a series of consecutive pages using the same numbering system.
    </summary>
    <param name="indexOfFirstPage">
            the page index of the first page in the labeling range.
    </param>
    <param name="numberStyle">
            The numbering style to be used for the numeric portion of each page label.
            As follow:
            Decimal_Arabic_Numerals/Uppercase_Roman_Numerals/Lowercase_Roman_Numerals/Uppercase_Letters/Lowercase_Letters
    </param>
    <param name="prefix">
            The label prefix for page labels in the labeling range.
    </param>
    <param name="numberOfFirstPage">
            The value of the numeric portion for the first page label in the range. 
            Subsequent pages are numbered sequentially from this value, which must be greater than or equal to 1. Default value: 1.
    </param>
    */
    void AddRange (int indexOfFirstPage,LPCWSTR_S numberStyle,LPCWSTR_S prefix,int numberOfFirstPage);
    /*
    <summary>
        Get page label.
    </summary>
    <param name="index">The page index.</param>
    <returns>The page label.</returns>
    */
    LPCWSTR_S GetPageLabel (int index);
    /*
    <summary>
        Decimal arabic numerals style to be used for the numeric portion of each page label.
    </summary>
    */
    static LPCWSTR_S Decimal_Arabic_Numerals_Style ();
    /*
    <summary>
        Uppercase roman numerals style to be used for the numeric portion of each page label.
    </summary>
    */
    static LPCWSTR_S Uppercase_Roman_Numerals_Style ();
    /*
    <summary>
        Lowercase roman numerals style to be used for the numeric portion of each page label.
    </summary>
    */
    static LPCWSTR_S Lowercase_Roman_Numerals_Style ();
    /*
    <summary>
        Uppercase letters style to be used for the numeric portion of each page label.
    </summary>
    */
    static LPCWSTR_S Uppercase_Letters_Style ();
    /*
    <summary>
        Lowercase letters style to be used for the numeric portion of each page label.
    </summary>
    */
    static LPCWSTR_S Lowercase_Letters_Style ();
private:
};
}}