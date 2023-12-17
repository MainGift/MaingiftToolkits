#pragma once
#include "pch.h"
#include "Discard.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS DiscardControl : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<Discard>> GetDiscard ();
    /*

    */
    void SetDiscard (std::vector<intrusive_ptr<Discard>> value);
private:
};
}}