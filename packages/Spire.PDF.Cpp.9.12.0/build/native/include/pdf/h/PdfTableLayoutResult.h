#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfLayoutResult.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfTableLayoutResult : public virtual PdfLayoutResult
{
public:
    /*

    */
    int GetLastRowIndex ();
private:
};
}}