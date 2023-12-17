#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents arguments of the NextRow Event.
    </summary>
*/
class EXPORTS QueryNextRowEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the row data.
    </summary>
    */
    std::vector<LPCWSTR_S> GetRowData ();
    /*

    */
    void SetRowData (std::vector<LPCWSTR_S> value);
    /*
    <summary>
        Gets the column count.
    </summary>
    */
    int GetColumnCount ();
    /*
    <summary>
        Gets the index of the row.
    </summary>
    */
    int GetRowIndex ();
private:
};
}}