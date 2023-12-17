#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfGridStyleBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Grid row style
    </summary>
*/
class EXPORTS PdfGridRowStyle : public virtual PdfGridStyleBase
{
public:
    /*
    <summary>
        Get or sets the cell padding.
    </summary>
    <returns>The cell padding.</returns>
    */
    intrusive_ptr<PdfPaddings> GetCellPadding ();
    /*

    */
    void SetCellPadding (intrusive_ptr<PdfPaddings> value);
private:
};
}}