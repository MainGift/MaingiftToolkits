#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(disable:4819)
#include "PdfSignature.h"
#include "IPdfSignatureAppearance.h"
#include "PdfPageBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf signatue maker.
    </summary>
*/
class EXPORTS PdfSignatureMaker : public virtual Object
{
public:
    /*
    <summary>
        The signature.
    </summary>
    */
    intrusive_ptr<PdfSignature> GetSignature ();
    /*
    <summary>
        The name of the person or anthority signing the document
            this value should be used only when it is not possible to extract the name from the signature
            for example, from the certificat of the signer
    </summary>
    <param name="name"></param>
    */
    void SetName (LPCWSTR_S name);
    /*

            Digital Signature Distinguished name.
            Notes: Assigning a stirng value to it directly is not recommended unless you know what is the Distinguish Name exactly.
            One way suggested of value Assignment is using pdfSignature.Certificate.IssuerName.Name,in which, pdfSignature is an instance of PDFSignature class.
                <param name="distinguishedName"></param>
    */
    void SetDistinguishedName (LPCWSTR_S distinguishedName);
    /*
    <summary>
        It is recommended to use "D:{0:yyyyMMddHHmmss}" to format the datetime,for example:String.Format("D:{0:yyyyMMddHHmmss}",DateTime.Now)
            The time of signing. Depending on the signature handler
            this may be a normal unverified computer time or a time generated in a verifiable way from a secure time server
    </summary>
    <param name="date"></param>
    */
    void SetDate (LPCWSTR_S date);
    /*
    <summary>
        The CPU host name or physical location of the signing.
    </summary>
    <param name="location"></param>
    */
    void SetLocation (LPCWSTR_S location);
    /*
    <summary>
        The reason for the signing, such as ( I agree … ).
    </summary>
    <param name="reason"></param>
    */
    void SetReason (LPCWSTR_S reason);
    /*
    <summary>
        Information provided by the signer to enable a recipient to contact the signer to verify the signature
            for example, a phone number.
    </summary>
    <param name="contactInfo"></param>
    */
    void SetContactInfo (LPCWSTR_S contactInfo);
    /*
    <summary>
        The content to the left of property name
    </summary>
    <param name="nameLabel"></param>
    */
    void SetNameLabel (LPCWSTR_S nameLabel);
    /*
    <summary>
        The content to the left of property distinguishedName
    </summary>
    <param name="distinguishedNameLabel"></param>
    */
    void SetDistinguishedNameLabel (LPCWSTR_S distinguishedNameLabel);
    /*
    <summary>
        The content to the left of property reason
    </summary>
    <param name="reasonLabel"></param>
    */
    void SetReasonLabel (LPCWSTR_S reasonLabel);
    /*
    <summary>
        The content to the left of property location
    </summary>
    <param name="locationLabel"></param>
    */
    void SetLocationLabel (LPCWSTR_S locationLabel);
    /*
    <summary>
        The content to the left of property contactInfo
    </summary>
    <param name="contactInfoLabel"></param>
    */
    void SetContactInfoLabel (LPCWSTR_S contactInfoLabel);
    /*
    <summary>
        The content to the left of property date
    </summary>
    <param name="dateLabel"></param>
    */
    void SetDateLabel (LPCWSTR_S dateLabel);
    /*
    <summary>
        Only for compatibility old version.
            Whether move away signature validity visualizations in document.
            Default true.
    </summary>
    <param name="acro6Layers">
            false, display signature validity visualizations in document.
            true, move away signature validity visualizations in document. 
    </param>
    */
    void SetAcro6Layers (bool acro6Layers);
    /*
    <summary>
        Make signature.
    </summary>
    <param name="sigFieldName">The signature filed name.</param>
    */
    void MakeSignature (LPCWSTR_S sigFieldName);
    /*
    <summary>
        Make signature.
    </summary>
    <param name="sigFieldName">The signature filed name.</param>
    <param name="signatureAppearance">Implement a custom signature appearance.</param>
    */
    void MakeSignature (LPCWSTR_S sigFieldName,intrusive_ptr<IPdfSignatureAppearance> signatureAppearance);
    /*
    <summary>
        Make signature.
    </summary>
    <param name="sigFieldName">The signature filed name.</param>
    <param name="page">The page index.</param>
    <param name="x">The x position of the annotation on the page.</param>
    <param name="y">The y position of the annotation on the page.</param>
    <param name="width">The width of the annotation on the page.</param>
    <param name="height">The height of the annotation on the page.</param>
    <param name="rect">The location of the annotation on the page.</param>
    */
    void MakeSignature (LPCWSTR_S sigFieldName,intrusive_ptr<PdfPageBase> page,float x,float y,float width,float height);
    /*
    <summary>
        Make signature.
    </summary>
    <param name="sigFieldName">The signature filed name.</param>
    <param name="page">The page index.</param>
    <param name="x">The x position of the annotation on the page.</param>
    <param name="y">The y position of the annotation on the page.</param>
    <param name="width">The width of the annotation on the page.</param>
    <param name="height">The height of the annotation on the page.</param>
    <param name="signatureAppearance">Implement a custom signature appearance.</param>
    */
    void MakeSignature (LPCWSTR_S sigFieldName,intrusive_ptr<PdfPageBase> page,float x,float y,float width,float height,intrusive_ptr<IPdfSignatureAppearance> signatureAppearance);
private:
};
}}