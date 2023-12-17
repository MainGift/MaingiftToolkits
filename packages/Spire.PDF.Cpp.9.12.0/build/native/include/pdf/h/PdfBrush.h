#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the abstract brush, which containing a basic functionality of a brush.
    </summary>
*/
class EXPORTS PdfBrush : public virtual Object
{
public:
    /*
    <summary>
        Creates a new copy of a brush.
    </summary>
    <returns>A new instance of the Brush class.</returns>
    */
    virtual intrusive_ptr<PdfBrush> Clone ();
private:
};
}}