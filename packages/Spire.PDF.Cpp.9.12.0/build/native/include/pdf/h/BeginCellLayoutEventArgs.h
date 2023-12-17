#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "CellLayoutEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents arguments of StartCellLayout Event.
    </summary>
*/
class EXPORTS BeginCellLayoutEventArgs : public virtual CellLayoutEventArgs
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether the value of this cell should be skipped.
    </summary>
    */
    bool GetSkip ();
    /*

    */
    void SetSkip (bool value);
private:
};
}}