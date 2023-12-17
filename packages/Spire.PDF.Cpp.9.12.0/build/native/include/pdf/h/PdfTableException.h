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
        Represents as a message deliverer from PdfTable class to the user.
    </summary>
*/
class EXPORTS PdfTableException : public virtual PdfException
{
public:
private:
};
}}