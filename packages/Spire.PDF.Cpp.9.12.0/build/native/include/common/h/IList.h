#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IEnumerable.h"
#include "ICollection.h"
#pragma warning(pop)

namespace Spire{
#ifdef _SPIRE_XLS
namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Presentation{
#else
namespace Xls{
#endif
/*

*/
template<typename T>
class EXPORTS IList : public virtual Object, public virtual ICollection<T>
{
public:
    /*

    */
    virtual intrusive_ptr<T> GetItem(int index)
    {
        typedef int* (*myFunc)(int*, int);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_get_Item");
        int* p = MyImport(instance, index);
        intrusive_ptr<T> ret = Object::Create<T>(p, this);
        return ret;
    }
    /*

    */
    virtual void SetItem(int index, intrusive_ptr<T> value)
    {
        int* intPvalue = value->GetIntPtr();
    
        typedef void (*myFunc)(int*,int,int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_set_Item");
        MyImport(instance,index,intPvalue);
    
    } 

    /*

    */
    virtual int IndexOf(intrusive_ptr<T> value)
    {
        int* intPvalue = value->GetIntPtr();
    
        typedef int (*myFunc)(int*,int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_IndexOf");
        return MyImport(instance,intPvalue);
    
    } 
    /*

    */
    virtual void Insert(int index, intrusive_ptr<T> value)
    {
        int* intPvalue = value->GetIntPtr();

        typedef void (*myFunc)(int*,int,int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_Insert");
        MyImport(instance,index,intPvalue);

    } 

    virtual void RemoveAt (int index)
    {
        typedef void (*myFunc)(int*, int);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_RemoveAt");
        MyImport(instance, index);

    }
private:
};
}}