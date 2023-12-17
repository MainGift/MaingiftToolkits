#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfTextLayout.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfMetafileLayoutFormat : public virtual PdfTextLayout
{
public:
    /*

    */
    bool GetSplitTextLines ();
    /*

    */
    void SetSplitTextLines (bool value);
    /*

    */
    bool GetSplitImages ();
    /*

    */
    void SetSplitImages (bool value);
private:
};
}}