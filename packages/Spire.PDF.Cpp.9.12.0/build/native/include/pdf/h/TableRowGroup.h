#pragma once
#include "pch.h"
#include "../h/TableRowGroup.h"
#include "../h/TableRow.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS TableRowGroup : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<TableRow>> GetItems ();
    /*

    */
    void SetItems (std::vector<intrusive_ptr<TableRow>> value);
private:
};
}}