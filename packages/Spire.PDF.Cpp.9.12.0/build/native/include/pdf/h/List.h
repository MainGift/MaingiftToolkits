#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ListItem.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS List : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<ListItem>> GetItems ();
    /*

    */
    void SetItems (std::vector<intrusive_ptr<ListItem>> value);
private:
};
}}