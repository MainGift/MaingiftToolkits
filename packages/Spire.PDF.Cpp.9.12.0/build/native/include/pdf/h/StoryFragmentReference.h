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
class EXPORTS StoryFragmentReference : public virtual Object
{
public:
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
    int GetPage ();
    /*

    */
    void SetPage (int value);
private:
};
}}