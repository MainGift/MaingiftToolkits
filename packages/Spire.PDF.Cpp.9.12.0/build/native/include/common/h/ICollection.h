#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IEnumerable.h"
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
class EXPORTS ICollection : public virtual Object, public virtual IEnumerable<T>
{
public:
    /*
     summary:
         Gets the number of elements contained in the System.Collections.Generic.ICollection`1.
    
     result:
         The number of elements contained in the System.Collections.Generic.ICollection`1.
    */
    virtual int GetCount ()
    {
        typedef int (*myFunc)(int*, LPCWSTR_S);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_get_Count");
        return MyImport(instance, netName);
    }
    virtual bool Contains(T* value)
    {
        int* intPvalue = value->GetIntPtr();
    
        typedef bool (*myFunc)(int*,int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_Contains");
        return MyImport(instance,intPvalue);
    
    } 
    /*

    */
    virtual void Add(T* value)
    {
        int* intPvalue = value->GetIntPtr();

        typedef void (*myFunc)(int*, int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_Add");
        MyImport(instance, intPvalue);

    }
    virtual void Clear()
    {
        typedef void (*myFunc)(int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_Clear");
        MyImport(instance);

    }
    /*
     summary:
         Gets a value indicating whether the System.Collections.Generic.ICollection`1
         is read-only.

     result:
         true if the System.Collections.Generic.ICollection`1 is read-only; otherwise,
         false.
    */
    virtual bool GetIsReadOnly()
    {
        typedef bool (*myFunc)(int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_get_IsReadOnly");
        return MyImport(instance);
    }
    virtual bool Remove(T* value)
    {
        int* intPvalue = value->GetIntPtr();

        typedef bool (*myFunc)(int*,int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_Remove");
        return MyImport(instance,intPvalue);

    }
    virtual void CopyTo(std::vector<intrusive_ptr<T>> array, int arrayIndex)
    {
        int** intP = GetObjIntPtrArrayFromVector<T>(array);

        typedef void (*myFunc)(int*, int**, int, int);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_CopyTo");
        MyImport(instance, intP, (int)array.size(), arrayIndex);

    }

private:
};
}}