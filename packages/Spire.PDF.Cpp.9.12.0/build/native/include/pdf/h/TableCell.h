#pragma once
#include "pch.h"
#include "ItemsChoiceType.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS TableCell : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<Object>> GetItems ();
    /*

    */
    void SetItems (std::vector<intrusive_ptr<Object>> value);
    /*
<remarks />
    */
    //std::vector<ItemsChoiceType*> GetItemsElementName ();
    /*

    */
    //todo
    //void SetItemsElementName (std::vector<intrusive_ptr<ItemsChoiceType>> value);
    /*
<remarks />
    */
    int GetRowSpan ();
    /*

    */
    void SetRowSpan (int value);
    /*
<remarks />
    */
    int GetColumnSpan ();
    /*

    */
    void SetColumnSpan (int value);
private:
};
}}