#pragma once
#include "pch.h"
#include "StoryFragmentReference.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS Story : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector< intrusive_ptr<StoryFragmentReference>> GetStoryFragmentReference ();
    /*

    */
    void SetStoryFragmentReference (std::vector< intrusive_ptr<StoryFragmentReference>> value);
    /*
<remarks />
    */
    LPCWSTR_S GetStoryName ();
    /*

    */
    void SetStoryName (LPCWSTR_S value);
private:
};
}}