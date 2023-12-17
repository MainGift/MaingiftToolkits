#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        OCSP service interface.
    </summary>
*/
class EXPORTS IOCSPService: public virtual Object
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
    //virtual std::vector<System.Byte> Generate (System.Security.Cryptography.X509Certificates.X509Certificate2 checkedCertificate,System.Security.Cryptography.X509Certificates.X509Certificate2 issuerCertificate)=0;
private:
};
}}