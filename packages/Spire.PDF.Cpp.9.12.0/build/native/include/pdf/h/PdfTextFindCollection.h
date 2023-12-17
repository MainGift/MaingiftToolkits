#pragma once
#include "pch.h"
#include "PdfTextFind.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The class representing all the resuls of searching designated text from PDF page
    </summary>
*/
class EXPORTS PdfTextFindCollection : public virtual Object
{
public:
    /*

    */
    std::vector<intrusive_ptr<PdfTextFind>> GetFinds ();
private:
};
}}