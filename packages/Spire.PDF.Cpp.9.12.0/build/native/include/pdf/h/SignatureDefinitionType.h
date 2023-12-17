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
class EXPORTS SignatureDefinitionType : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<SpotLocationType> GetSpotLocation ();
    /*

    */
    void SetSpotLocation (intrusive_ptr<SpotLocationType> value);
    /*
<remarks />
    */
    LPCWSTR_S GetIntent ();
    /*

    */
    void SetIntent (LPCWSTR_S value);
    /*
<remarks />
    */
    intrusive_ptr<DateTime> GetSignBy ();
    /*

    */
    void SetSignBy (intrusive_ptr<DateTime> value);
    /*
<remarks />
    */
    bool GetSignBySpecified ();
    /*

    */
    void SetSignBySpecified (bool value);
    /*
<remarks />
    */
    LPCWSTR_S GetSigningLocation ();
    /*

    */
    void SetSigningLocation (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetSpotID ();
    /*

    */
    void SetSpotID (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetSignerName ();
    /*

    */
    void SetSignerName (LPCWSTR_S value);
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