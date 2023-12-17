#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfDocumentException.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Exception of this type is raised when the document contains object which are not 
            supported by current document standard.
    </summary>
*/
class EXPORTS PdfConformanceException : public virtual PdfDocumentException
{
public:
private:
};
}}