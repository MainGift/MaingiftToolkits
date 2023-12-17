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
class EXPORTS LinkTargets : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<LinkTarget>> GetLinkTarget ();
    /*

    */
    void SetLinkTarget (std::vector<intrusive_ptr<LinkTarget>> value);
private:
};
}}