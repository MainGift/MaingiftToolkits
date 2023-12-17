#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the pdf application data, used to store private data.
    </summary>
*/
class EXPORTS PdfApplicationData : public virtual Object
{
public:
    /*
    <summary>
        The private data of application data dictionary.
            The vaild type: string  Dictionary.
    </summary>
    */
    intrusive_ptr<Object> GetPrivate ();
private:
};
}}