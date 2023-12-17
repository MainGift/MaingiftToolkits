#pragma once
#include "pch.h"

#include "../h/FragmentType.h"
#include "../h/Break.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS StoryFragment : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Break> GetStoryBreak ();
    /*

    */
    void SetStoryBreak (intrusive_ptr<Break> value);
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
    intrusive_ptr<Break> GetStoryBreak1 ();
    /*

    */
    void SetStoryBreak1 (intrusive_ptr<Break> value);
    /*
<remarks />
    */
    LPCWSTR_S GetStoryName ();
    /*

    */
    void SetStoryName (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetFragmentName ();
    /*

    */
    void SetFragmentName (LPCWSTR_S value);
    /*
<remarks />
    */
    FragmentType GetFragmentType ();
    /*

    */
    void SetFragmentType (FragmentType value);
private:
};
}}