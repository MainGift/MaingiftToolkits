#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IEnumerator.h"
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
    template<typename T>
class EXPORTS IEnumerable : public virtual Object
{
public:
    /*

    */
    virtual intrusive_ptr<IEnumerator<T>> GetEnumerator()
    {
        typedef int* (*myFunc)(int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IEnumerable_GetEnumerator");
        int* p = MyImport(instance);
        intrusive_ptr<IEnumerator<T>> ret = Object::Create<IEnumerator<T>>(p, this);
        return ret;

    }
private:
};
}}