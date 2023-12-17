#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Shows the saving progress.
    </summary>
*/
class EXPORTS ProgressEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets the total number of the elements (pages) that need to be saved.
    </summary>
    */
    int GetTotal ();
    /*
    <summary>
        Gets the current element (page) index that just was saved.
    </summary>
<remarks>The index value increases constantly from 0 to Total.</remarks>
    */
    int GetCurrent ();
    /*
    <summary>
        Gets the progress.
    </summary>
<remarks>Progress constantly increases from 0.0 to 1.0.
            1.0 value means that entire document has been saved.</remarks>
    */
    float GetProgress ();
private:
};
}}