#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Contains information about the line.
    </summary>
*/
class EXPORTS LineInfo : public virtual Object
{
public:
    /*
    <summary>
        Gets width of the line text.
    </summary>
    */
    LineType GetLineType ();
    /*
    <summary>
        Gets line text.
    </summary>
    */
    LPCWSTR_S GetText ();
    /*
    <summary>
        Gets width of the line text.
    </summary>
    */
    float GetWidth ();
private:
};
}}