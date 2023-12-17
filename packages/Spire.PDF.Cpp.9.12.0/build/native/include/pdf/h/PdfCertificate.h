#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "StoreType.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the Certificate object.
    </summary>
*/
class EXPORTS PdfCertificate : public virtual Object
{
public:
    //PdfCertificate(System.Security.Cryptography.X509Certificates.X509Certificate certificate);
    PdfCertificate();
   
    /// <summary>
    /// Creates new PdfCertificate from PFX file.
    /// </summary>
    /// <param name="pfxPath">The path to pfx file.</param>
    /// <param name="password">The password for pfx file.</param>
    PdfCertificate(LPCWSTR_S pfxPath, LPCWSTR_S password);

    //PdfCertificate(LPCWSTR_S pfxPath, LPCWSTR_S password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags storageFlags);

    //PdfCertificate(std::vector<System.Byte> signData);

    //PdfCertificate(std::vector<System.Byte> signData, LPCWSTR_S password);

    //PdfCertificate(std::vector<System.Byte> signData, LPCWSTR_S password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags storageFlags);
    /*
    <summary>
        Gets the certificates in all storages.
    </summary>
    <returns>
            PdfCertificate array.
            </returns>
    */
    //static std::vector<PdfCertificate*> GetCertificates ();
    /*
    <summary>
        Finds the certificate by subject.
    </summary>
    <param name="storeName">The store name.</param>
    <param name="subject">The certificate subject.</param>
    <returns>The certificate.</returns>
    */
    //static intrusive_ptr<PdfCertificate> FindBySubject (StoreType storeName,LPCWSTR_S subject);
    /*
    <summary>
        Finds the certificate by issuer.
    </summary>
    <param name="storeName">The store name.</param>
    <param name="issuer">The certificate issuer.</param>
    <returns>The certificate.</returns>
    */
    //static intrusive_ptr<PdfCertificate> FindByIssuer (StoreType storeName,LPCWSTR_S issuer);
    /*
    <summary>
        Finds the certificate by serial number.
    </summary>
    <param name="type">The certification system store type.</param>
    <param name="certId">The certificate id.</param>
    <returns></returns>
    */
    //static intrusive_ptr<PdfCertificate> FindBySerialId (StoreType storeName,std::vector<BYTE*> certId);
private:
};
}}