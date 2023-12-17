#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "NamedElement.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS Paragraph : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<NamedElement>> GetItems ();
    /*

    */
    void SetItems (std::vector<intrusive_ptr<NamedElement>> value);
private:
};
}}