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
        Exception of this type is raised when annotation object is used incorrectly.
    </summary>
*/
class EXPORTS PdfAnnotationException : public virtual PdfDocumentException
{
public:
private:
};
}}