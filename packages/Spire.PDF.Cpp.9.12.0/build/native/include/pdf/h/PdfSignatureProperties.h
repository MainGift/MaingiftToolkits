#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Signature properties.
    </summary>
*/
class EXPORTS PdfSignatureProperties : public virtual Object
{
public:
    /*
    <summary>
        Set the name of the preferred signature handler to use when validating this signature.
            (Required)
    </summary>
    <param name="filter">the name of the preferred signature handler.</param>
    */
    void SetFilter (LPCWSTR_S filter);
    /*
    <summary>
        Set a name that describes the encoding of the signature value.
            (Required)
    </summary>
    <param name="subFilter">a name that describes the encoding of the signature value.</param>
    */
    void SetSubFilter (LPCWSTR_S subFilter);
    /*
    <summary>
        Set the X.509 certificate used when signing and verifying signatures that use public-key cryptography.
            (Required when SubFilter is adbe.x509.rsa_sha1)
    </summary>
    <param name="cert">the X.509 certificate.</param>
    */
    //void SetCert (System.Security.Cryptography.X509Certificates.X509Certificate2 cert);
    /*
    <summary>
        Set the X.509 certificate chain used when signing and verifying signatures that use public-key cryptography.
            (Required when SubFilter is adbe.x509.rsa_sha1)
    </summary>
    <param name="certs">the X.509 certificate chain.</param>
    */
    //void SetCert (System.Collections.Generic.IList`1[[System.Security.Cryptography.X509Certificates.X509Certificate2, System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] certs);
    /*
    <summary>
        Set signature length.
            (Option)
            Default, signature need to call twice "Sign" method, one is to calculate signature length.
            If the signature length is known, avoid to calculate signature length by "Sign" method.
            The signature length.
    </summary>
    <param name="signatureLength">the signature length.</param>
    */
    //void SetSignatureLength (System.UInt32 signatureLength);
    /*
    <summary>
        Set the name of the software module used to create the signature.
            (Option)
    </summary>
    <param name="softwareModuleName">the name of the software module.</param>
    */
    void SetSoftwareModuleName (LPCWSTR_S softwareModuleName);
private:
};
}}