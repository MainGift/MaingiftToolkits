#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents form field with appearance custom support.
    </summary>
*/
class EXPORTS PdfAppearanceField : public virtual PdfStyledField
{
public:
    /*
    <summary>
        Gets the appearance.
    </summary>
<value>The appearance.</value>
    */
    intrusive_ptr<PdfAppearance> GetAppearance ();
private:
};
}}