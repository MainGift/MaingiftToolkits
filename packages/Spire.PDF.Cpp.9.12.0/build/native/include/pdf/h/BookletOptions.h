#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The booklet options 
    </summary>
*/
class EXPORTS BookletOptions : public virtual Object
{
public:
    BookletOptions();
    /*
    <summary>
        Get or set BookletBinding,default value Left.
    </summary>
    */
    PdfBookletBindingMode GetBookletBinding ();
    /*

    */
    void SetBookletBinding (PdfBookletBindingMode value);
private:
};
}}