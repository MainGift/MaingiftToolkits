#pragma once
#include "pch.h"
#include "StoryFragment.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS StoryFragments : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<StoryFragment>> GetStoryFragment ();
    /*

    */
    void SetStoryFragment (std::vector<intrusive_ptr<StoryFragment>> value);
private:
};
}}