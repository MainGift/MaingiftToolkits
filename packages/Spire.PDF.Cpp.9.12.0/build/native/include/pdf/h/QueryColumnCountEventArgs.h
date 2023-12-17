#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The arguments of the GettingColumnNumber Event.
    </summary>
*/
class EXPORTS QueryColumnCountEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the column number.
    </summary>
    */
    int GetColumnCount ();
    /*

    */
    void SetColumnCount (int value);
private:
};
}}