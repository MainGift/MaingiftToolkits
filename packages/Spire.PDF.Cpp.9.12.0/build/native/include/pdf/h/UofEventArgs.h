#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The event arguments passed between TranslatorLib and Add-in
    </summary>
<author>linwei</author>
*/
class EXPORTS UofEventArgs : public virtual Object
{
public:
    /*

    */
    LPCWSTR_S GetMessage ();
private:
};
}}