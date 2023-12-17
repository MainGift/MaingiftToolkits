#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IEnumerator.h"
#include "DictionaryEntry.h"
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
template<typename K, typename V>
class EXPORTS IDictionaryEnumerator : public virtual Object, public virtual IEnumerator<K> , public virtual IEnumerator<V>
{
public:
    /*

    */
    //virtual System.Object GetKey ()=0;
    /*

    */
    //virtual System.Object GetValue ()=0;
    /*

    */
    //template<typename K, typename V>
    DictionaryEntry<K,V>* GetEntry ()
    {
        typedef int* (*myFunc)(int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IDictionaryEnumerator_get_Entry");
        int* p = MyImport(instance);
        DictionaryEntry<K, V>* ret = Object::Create<DictionaryEntry<K, V>>(p, this);
        return ret;
    }
private:
};
}}