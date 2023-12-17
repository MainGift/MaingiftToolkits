#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS Choice : public virtual Object
{
public:
    /*

    */
    LPCWSTR_S GetRequires ();
    /*

    */
    void SetRequires (LPCWSTR_S value);
    /*
<remarks />
    */
    std::vector<intrusive_ptr<Object>> GetItems ();
    /*

    */
    void SetItems (std::vector<intrusive_ptr<Object>> value);
private:
};
}}