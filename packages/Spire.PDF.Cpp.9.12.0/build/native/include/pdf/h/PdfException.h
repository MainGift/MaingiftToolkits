#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        General exception class.
    </summary>
*/
class EXPORTS PdfException : public virtual Object
{
public:
    PdfException();

    PdfException(LPCWSTR_S message);

    //PdfException(LPCSTR message, System.Exception innerException);
private:
};
}}