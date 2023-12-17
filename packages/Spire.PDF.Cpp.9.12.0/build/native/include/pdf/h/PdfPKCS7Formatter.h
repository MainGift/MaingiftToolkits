#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPdfSignatureFormatter.h"
#include "Security_IPdfSignatureFormatter.h"
#include "PdfSignatureProperties.h"
#include "IOCSPService.h"
#include "ITSAService.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf pkcs7 signature implementation.
    </summary>
*/
class EXPORTS PdfPKCS7Formatter : public virtual IPdfSignatureFormatter,public virtual Security_IPdfSignatureFormatter, public virtual Object
{
public:
    /*
    <summary>
        The signature properties.
    </summary>
    */
    virtual intrusive_ptr<PdfSignatureProperties> GetProperties ();
    /*
    <summary>
        Parameters for the encoding of the signature.
    </summary>
    */
    //virtual System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Object, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetParameters ();
    /*
    <summary>
        The service which generate OCSP response.
    </summary>
    */
    intrusive_ptr<IOCSPService> GetOCSPService ();
    /*

    */
    void SetOCSPService (intrusive_ptr<IOCSPService> value);
    /*
    <summary>
        The provider which generate timestamp token.
    </summary>
    */
    intrusive_ptr<ITSAService> GetTimestampService ();
    /*

    */
    void SetTimestampService (intrusive_ptr<ITSAService> value);
    /*
    <summary>
        Represents an additional collection of certificates that can be searched
            by the chaining engine when validating a certificate chain.
    </summary>
    */
    //System.Security.Cryptography.X509Certificates.X509Certificate2Collection GetExtraCertificateStore ();
    /*

    */
    //void SetExtraCertificateStore (System.Security.Cryptography.X509Certificates.X509Certificate2Collection value);
    /*
    <summary>
        Sign.
    </summary>
    <param name="content">The data to be signed.</param>
    <returns>The signature.</returns>
    */
    //todo
    //virtual std::vector<BYTE*> Sign (std::vector<BYTE*> content);
private:
};
}}