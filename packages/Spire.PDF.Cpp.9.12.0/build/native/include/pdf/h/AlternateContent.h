#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS AlternateContent : public virtual Object
{
public:
    /*

    */
    bool GetIgnorable ();
    /*

    */
    void SetIgnorable (bool value);
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