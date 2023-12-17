#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAutomaticField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents automatic field which value is dynamically evaluated.
    </summary>
*/
class EXPORTS PdfDynamicField : public virtual PdfAutomaticField
{
public:
private:
};
}}