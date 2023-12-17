#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent the recommended order for presentation of optional content
            groups in user interface.
            Refrence "Optional content configuration dictionary's entry order".
    </summary>
*/
class EXPORTS PdfLayerOutline : public virtual Object
{
public:
    /*
    <summary>
        Add a sub group outline.
    </summary>
    <param name="name">Group name.</param>
    <returns>Sub group outline.</returns>
    */
    intrusive_ptr<PdfLayerOutline> AddGroup (LPCWSTR_S name);
    /*
    <summary>
        Add a outline entry of the pdf layer with a sub group outline.
    </summary>
    <param name="layer">Pdf layer</param>
    <returns>Sub group outline.</returns>
    */
    intrusive_ptr<PdfLayerOutline> AddGroup (intrusive_ptr<PdfLayer> layer);
    /*
    <summary>
        Add a outline entry of the pdf layer.
    </summary>
    <param name="layer">Pdf layer</param>
    */
    void AddEntry (intrusive_ptr<PdfLayer> layer);
private:
};
}}