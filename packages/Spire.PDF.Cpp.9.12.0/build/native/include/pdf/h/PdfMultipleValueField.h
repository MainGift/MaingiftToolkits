#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfDynamicField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents automatic field which has the same value within the 
    </summary>
*/
class EXPORTS PdfMultipleValueField : public virtual PdfDynamicField
{
public:
private:
};
}}