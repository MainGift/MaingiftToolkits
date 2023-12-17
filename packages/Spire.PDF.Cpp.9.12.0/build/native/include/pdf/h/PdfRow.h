#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a single column of the table.
    </summary>
*/
class EXPORTS PdfRow : public virtual Object
{
public:
    /*
    <summary>
        The array of values that are used to create the new row.
    </summary>
    */
    std::vector<intrusive_ptr<Object>> GetValues ();
    /*

    */
    void SetValues (std::vector<intrusive_ptr<Object>> value);
private:
};
}}