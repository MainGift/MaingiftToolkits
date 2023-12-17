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
class EXPORTS FixedPage : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Resources> GetFixedPageResources ();
    /*

    */
    void SetFixedPageResources (intrusive_ptr<Resources> value);
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
    LPCWSTR_S GetWidth ();
    /*

    */
    void SetWidth (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetHeight ();
    /*

    */
    void SetHeight (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetContentBox ();
    /*

    */
    void SetContentBox (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetBleedBox ();
    /*

    */
    void SetBleedBox (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S Getlang ();
    /*

    */
    void Setlang (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetName ();
    /*

    */
    void SetName (LPCWSTR_S value);
private:
};
}}