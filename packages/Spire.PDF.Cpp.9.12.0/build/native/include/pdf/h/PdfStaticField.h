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
        Represents automatic field which value can be evaluated in the moment of creation.
    </summary>
*/
class EXPORTS PdfStaticField : public virtual PdfAutomaticField
{
public:
private:
};
}}