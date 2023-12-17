#pragma once
#include "pch.h"
#include "../h/TableCell.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS TableRow : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<TableCell>> GetItems ();
    /*

    */
    void SetItems (std::vector<intrusive_ptr<TableCell>> value);
private:
};
}}