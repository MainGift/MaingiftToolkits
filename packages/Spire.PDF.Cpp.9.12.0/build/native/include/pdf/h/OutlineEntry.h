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
class EXPORTS OutlineEntry : public virtual Object
{
public:
    /*
<remarks />
    */
    int GetOutlineLevel ();
    /*

    */
    void SetOutlineLevel (int value);
    /*
<remarks />
    */
    LPCWSTR_S GetOutlineTarget ();
    /*

    */
    void SetOutlineTarget (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetDescription ();
    /*

    */
    void SetDescription (LPCWSTR_S value);
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