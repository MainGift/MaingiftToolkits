#pragma once
#include "pch.h"
#include "OutlineEntry.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS DocumentOutline : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<OutlineEntry>> GetOutlineEntry ();
    /*

    */
    void SetOutlineEntry (std::vector<intrusive_ptr<OutlineEntry>> value);
    /*
<remarks />
    */
    LPCWSTR_S Getlang ();
    /*

    */
    void Setlang (LPCWSTR_S value);
private:
};
}}