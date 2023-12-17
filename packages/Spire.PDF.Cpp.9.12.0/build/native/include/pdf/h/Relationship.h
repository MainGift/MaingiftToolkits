#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS Relationship : public virtual Object
{
public:
    /*

    */
    LPCWSTR_S GetType ();
    /*

    */
    void SetType (LPCWSTR_S value);
    /*

    */
    LPCWSTR_S GetTarget ();
    /*

    */
    void SetTarget (LPCWSTR_S value);
    /*

    */
    LPCWSTR_S GetId ();
    /*

    */
    void SetId (LPCWSTR_S value);
private:
};
}}