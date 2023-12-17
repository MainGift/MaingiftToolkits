#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
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
class EXPORTS IEnumerator : public virtual Object
{
public:
    bool MoveNext()
    {
        typedef bool (*myFunc)(int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IEnumerator_MoveNext");
        return MyImport(instance);

    }
    T* GetCurrent()
    {
        typedef int* (*myFunc)(int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IEnumerator_get_Current");
        int* p = MyImport(instance);
        T* ret = Object::Create<T>(p, this);
        return ret;
    }
    void Reset()
    {
        typedef void (*myFunc)(int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IEnumerator_Reset");
        MyImport(instance);

    }
private:
};
}}