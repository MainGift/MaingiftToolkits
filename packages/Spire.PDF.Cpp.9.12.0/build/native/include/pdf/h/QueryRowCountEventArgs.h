#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The arguments of the GettingRowNumber Event.
    </summary>
*/
class EXPORTS QueryRowCountEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the column number.
    </summary>
    */
    int GetRowCount ();
    /*

    */
    void SetRowCount (int value);
private:
};
}}