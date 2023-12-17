#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        define a pdf table
    </summary>
*/
class EXPORTS Utilities_PdfTable : public virtual Object
{
public:
    /*
    <summary>
        Get the current table row count
    </summary>
    <returns></returns>
    */
    int GetRowCount ();
    /*
    <summary>
        Get the current table column count
    </summary>
    <returns></returns>
    */
    int GetColumnCount ();
    /*
    <summary>
        Get value from the current table
    </summary>
    <param name="rowIndex">the row index,the index starts at 0</param>
    <param name="columnIndex">the column index,the index starts at 0</param>
    <returns>the text</returns>
    */
    LPCWSTR_S GetText (int rowIndex,int columnIndex);
private:
};
}}