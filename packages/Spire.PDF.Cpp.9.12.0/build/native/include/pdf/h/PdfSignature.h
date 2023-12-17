#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(disable:4819)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The pdf signature.
    </summary>
*/
class EXPORTS PdfSignature : public virtual Object
{
public:
    /*
    <summary>
        The name of the preferred signature handler to use when validating this signature.
    </summary>
    */
    LPCWSTR_S GetFilter();
    /*
    <summary>
        A name that describes the encoding of the signature value.
    </summary>
    */
    LPCWSTR_S GetSubFilter();
    /*
    <summary>
        The name of the person or anthority signing the document
            this value should be used only when it is not possible to extract the name from the signature
            for example, from the certificat of the signer
    </summary>
    <param name="name"></param>
    */
    LPCWSTR_S GetName();
    /*

    */
    void SetName(LPCWSTR_S value);
    /*
    <summary>
        The time of signing. Depending on the signature handler
            this may be a normal unverified computer time or a time generated in a verifiable way from a secure time server
    </summary>
    */
    //System.Nullable`1[[System.DateTime, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetDate ();
    /*
    <summary>
        Gets or sets the physical location of the signing.
    </summary>
    */
    LPCWSTR_S GetLocation();
    /*

    */
    void SetLocation(LPCWSTR_S value);
    /*
    <summary>
        Gets or sets reason of signing.
            The reason for the signing, such as ( I agree … ).
    </summary>
    */
    LPCWSTR_S GetReason();
    /*

    */
    void SetReason(LPCWSTR_S value);
    /*
    <summary>
        Gets or sets a phone number of signer
            Information provided by the signer to enable a recipient to contact the signer to verify the signature; for example, a phone number.
    </summary>
    */
    LPCWSTR_S GetContactInfo();
    /*

    */
    void SetContactInfo(LPCWSTR_S value);
private:
};
}}