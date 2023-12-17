#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Layouter result.
    </summary>
*/
class EXPORTS PdfStringLayoutResult : public virtual Object
{
public:
    /*
    <summary>
        Gets the text which is not layouted
    </summary>
    */
    LPCWSTR_S GetRemainder ();
    /*
    <summary>
        Gets the actual layouted text bounds
    </summary>
    */
    intrusive_ptr<SizeF> GetActualSize ();
    /*
    <summary>
        Gets layouted lines information.
    </summary>
    */
    std::vector<intrusive_ptr<LineInfo>> GetLines ();
    /*
    <summary>
        Gets the height of the line.
    </summary>
    */
    float GetLineHeight ();
private:
};
}}