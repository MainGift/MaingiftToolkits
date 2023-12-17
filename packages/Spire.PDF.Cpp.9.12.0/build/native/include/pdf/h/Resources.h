#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS Resources : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<ResourceDictionary> GetResourceDictionary ();
    /*

    */
    void SetResourceDictionary (intrusive_ptr<ResourceDictionary> value);
private:
};
}}