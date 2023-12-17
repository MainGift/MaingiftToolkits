#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The handler which generate OCSP response.
    </summary>
    <param name="checkedCertificate">certificate to checked</param>
    <param name="issuerCertificate">certificate of the issuer</param>
    <returns>OCSP response which must conform to RFC 2560</returns>
*/
class EXPORTS OCSPResponseGenerateHandler : public virtual Object
{
public:
    /*

    */
    //virtual std::vector<System.Byte> Invoke (System.Security.Cryptography.X509Certificates.X509Certificate2 checkedCertificate,System.Security.Cryptography.X509Certificates.X509Certificate2 issuerCertificate);
    /*

    */
    //virtual System.IAsyncResult BeginInvoke (System.Security.Cryptography.X509Certificates.X509Certificate2 checkedCertificate,System.Security.Cryptography.X509Certificates.X509Certificate2 issuerCertificate,System.AsyncCallback callback,System.Object object);
    /*

    */
    //virtual std::vector<System.Byte> EndInvoke (System.IAsyncResult result);
private:
};
}}