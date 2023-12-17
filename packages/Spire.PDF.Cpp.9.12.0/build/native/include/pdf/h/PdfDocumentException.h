#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfException.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Base PDF document exception.
    </summary>
*/
class EXPORTS PdfDocumentException : public virtual PdfException
{
public:
    PdfDocumentException();

    //PdfDocumentException(System.Exception innerException);

    PdfDocumentException(LPCWSTR_S message);

    //PdfDocumentException(LPCSTR message, System.Exception innerException);
private:
};
}}