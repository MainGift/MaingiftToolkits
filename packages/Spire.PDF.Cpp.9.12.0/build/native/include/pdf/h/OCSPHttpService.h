#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IOCSPService.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Ocsp http service implementation.
     </summary>
*/
class EXPORTS OCSPHttpService : public virtual IOCSPService
{
public:
    /*
    <summary>
        Generate OCSP response.
    </summary>
    <param name="checkedCertificate">certificate to checked</param>
    <param name="issuerCertificate">certificate of the issuer</param>
    <returns>OCSP response which must conform to RFC 2560</returns>
    */
    //virtual std::vector<System.Byte> Generate (System.Security.Cryptography.X509Certificates.X509Certificate2 checkedCertificate,System.Security.Cryptography.X509Certificates.X509Certificate2 issuerCertificate);
private:
};
}}