#pragma once
#include "pch.h"
#include "Security_GraphicMode.h"
#include "PdfNewPage.h"
#include "PdfCertificate.h"
#include "Security_IPdfSignatureFormatter.h"
#include "PdfSignatureFieldWidget.h"
#include "PdfDocumentBase.h"
#include "PdfDocument.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a digital signature used for signing a PDF document.
    </summary>
*/
class EXPORTS Security_PdfSignature : public virtual Object
{
public:
    Security_PdfSignature();

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="page">The current pdf page where signature will be replaced.</param>
    /// <param name="cert">The pdf certificate.</param>
    /// <param name="signatureName">Name of the signature.</param>
    Security_PdfSignature(intrusive_ptr<PdfNewPage> page, intrusive_ptr<PdfCertificate> cert, LPCWSTR_S signatureName);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="page">The current pdf page where signature will be replaced.</param>
    /// <param name="signatureFormatter">The Signature formatter.</param>
    /// <param name="signatureName">Name of the signature.</param>
    Security_PdfSignature(intrusive_ptr<PdfNewPage> page, intrusive_ptr<Security_IPdfSignatureFormatter> signatureFormatter, LPCWSTR_S signatureName);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="document">The document, which has the page.</param>
    /// <param name="page">The page.</param>
    /// <param name="certificate">The certificate.</param>
    /// <param name="signatureName">The name of the signature.</param>
    Security_PdfSignature(intrusive_ptr<PdfDocumentBase> document, intrusive_ptr<PdfPageBase> page, intrusive_ptr<PdfCertificate> certificate, LPCWSTR_S signatureName);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="document">The document, which has the page.</param>
    /// <param name="page">The page.</param>
    /// <param name="signatureFormatter">The Signature formatter.</param>
    /// <param name="signatureName">The name of the signature.</param>
    Security_PdfSignature(intrusive_ptr<PdfDocumentBase> document, intrusive_ptr<PdfPageBase> page, intrusive_ptr<Security_IPdfSignatureFormatter> signatureFormatter, LPCWSTR_S signatureName);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="document">The loaded document, which has the page.</param>
    /// <param name="page">The page.</param>
    /// <param name="certificate">The certificate.</param>
    /// <param name="signatureName">The name of the signature.</param>
    /// <param name="fieldWidget">The name of the loaded signature field</param>
    Security_PdfSignature(intrusive_ptr<PdfDocumentBase> document, intrusive_ptr<PdfPageBase> page, intrusive_ptr<PdfCertificate> certificate, LPCWSTR_S signatureName, intrusive_ptr<PdfSignatureFieldWidget> fieldWidget);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="document">The loaded document, which has the page.</param>
    /// <param name="page">The page.</param>
    /// <param name="signatureFormatter">The Signature formatter.</param>
    /// <param name="signatureName">The name of the signature.</param>
    /// <param name="fieldWidget">The name of the loaded signature field</param>
    Security_PdfSignature(intrusive_ptr<PdfDocumentBase> document, intrusive_ptr<PdfPageBase> page, intrusive_ptr<Security_IPdfSignatureFormatter> signatureFormatter, LPCWSTR_S signatureName, intrusive_ptr<PdfSignatureFieldWidget> fieldWidget);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="document">The document or loaded document, which has the page.</param>
    /// <param name="page">The page.</param>
    /// <param name="certificate">The certificate.</param>
    /// <param name="signatureName">The name of the signature.</param>
    Security_PdfSignature(intrusive_ptr<PdfDocument> document, intrusive_ptr<PdfPageBase> page, intrusive_ptr<PdfCertificate> certificate, LPCWSTR_S signatureName);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="document">The document or loaded document, which has the page.</param>
    /// <param name="page">The page.</param>
    /// <param name="signatureFormatter">The Signature formatter.</param>
    /// <param name="signatureName">The name of the signature.</param>
    Security_PdfSignature(intrusive_ptr<PdfDocument> document, intrusive_ptr<PdfPageBase> page, intrusive_ptr<Security_IPdfSignatureFormatter> signatureFormatter, LPCWSTR_S signatureName);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="document">The loaded document, which has the page.</param>
    /// <param name="page">The page.</param>
    /// <param name="certificate">The certificate.</param>
    /// <param name="signatureName">The name of the signature.</param>
    /// <param name="fieldWidget">The name of the loaded signature field</param>
    Security_PdfSignature(intrusive_ptr<PdfDocument> document, intrusive_ptr<PdfPageBase> page, intrusive_ptr<PdfCertificate> certificate, LPCWSTR_S signatureName, intrusive_ptr<PdfSignatureFieldWidget> fieldWidget);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="document">The loaded document, which has the page.</param>
    /// <param name="page">The page.</param>
    /// <param name="signatureFormatter">The Signature formatter.</param>
    /// <param name="signatureName">The name of the signature.</param>
    /// <param name="fieldWidget">The name of the loaded signature field</param>
    Security_PdfSignature(intrusive_ptr<PdfDocument> document, intrusive_ptr<PdfPageBase> page, intrusive_ptr<Security_IPdfSignatureFormatter> signatureFormatter, LPCWSTR_S signatureName, intrusive_ptr<PdfSignatureFieldWidget> fieldWidget);
    /*
    <summary>
        Get all certificates.
    </summary>
    */
    //System.Security.Cryptography.X509Certificates.X509Certificate2Collection GetCertificates ();
    /*
    <summary>
        Gets the signature Appearance.
    </summary>
<value>An object defines signature`s appearance.</value>
    */
    intrusive_ptr<PdfAppearance> GetAppearence ();
    /*
    <summary>
        Gets or sets signature location on the page.
    </summary>
    */
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets bounds of signature.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets or sets information provided by the signer to enable a recipient to contact
            the signer to verify the signature; for example, a phone number.
    </summary>
    */
    LPCWSTR_S GetContactInfo ();
    /*

    */
    void SetContactInfo (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets reason of signing.
    </summary>
    */
    LPCWSTR_S GetReason ();
    /*

    */
    void SetReason (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the physical location of the signing.
    </summary>
    */
    LPCWSTR_S GetLocationInfo ();
    /*

    */
    void SetLocationInfo (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets a value indicating certificate document or not.
            NOTE: Works only with Adobe Reader 7.0.8 or higher.
    </summary>
<value>certificate document if true.</value>
    */
    bool GetCertificated ();
    /*

    */
    void SetCertificated (bool value);
    /*
    <summary>
        Gets or sets the permission for certificated document.
    </summary>
<value>The document permission.</value>
    */
    PdfCertificationFlags GetDocumentPermissions ();
    /*

    */
    void SetDocumentPermissions (PdfCertificationFlags value);
    /*
    <summary>
        Gets signing certificate.
    </summary>
    */
    intrusive_ptr<PdfCertificate> GetCertificate ();
    /*

    */
    void SetCertificate (intrusive_ptr<PdfCertificate> value);
    /*
    <summary>
        Sets the alignment of signature text 
    </summary>
    */
    SignTextAlignment GetSignTextAlignment ();
    /*

    */
    void SetSignTextAlignment (SignTextAlignment value);
    /*
    <summary>
        Gets a value indicating whether signature visible or not.
    </summary>
<remarks>Signature can be set as invisible when its  size is set to empty.</remarks>
    */
    bool GetVisible ();
    /*
    <summary>
        Get Signature Datetime
    </summary>
    */
    intrusive_ptr<DateTime> GetDate ();
    /*

    */
    void SetDate (intrusive_ptr<DateTime> value);
    /*

    */
    void SetSignNameFont (intrusive_ptr<PdfFontBase> value);
    /*

    */
    void SetSignFontColor (intrusive_ptr<Color> value);
    /*

    */
    void SetSignDetailsFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Set signature info font
    </summary>
    */
    //System.Collections.Generic.Dictionary`2[[Spire.Pdf.Security.SignInfoType, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null],[System.Object, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetSignInfoFont ();
    /*

    */
    //void SetSignInfoFont (System.Collections.Generic.Dictionary`2[[Spire.Pdf.Security.SignInfoType, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null],[System.Object, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
    /*
    <summary>
        The name of the person or authority signing the document, usually called signer. 
     </summary>
    */
    LPCWSTR_S GetDigitalSigner ();
    /*

    */
    void SetDigitalSigner (LPCWSTR_S value);
    /*
    <summary>
        Digital Signature Common name label
    </summary>
    */
    LPCWSTR_S GetDigitalSignerLable ();
    /*

    */
    void SetDigitalSignerLable (LPCWSTR_S value);
    /*
    <summary>
        The name of the person or authority signing the document.
     </summary>
    */
    LPCWSTR_S GetName ();
    /*

    */
    void SetName (LPCWSTR_S value);
    /*
    <summary>
        Name label
    </summary>
    */
    LPCWSTR_S GetNameLabel ();
    /*

    */
    void SetNameLabel (LPCWSTR_S value);
    /*
    <summary>
        Signature Distinguished Name label
    </summary>
    */
    LPCWSTR_S GetDistinguishedNameLabel ();
    /*

    */
    void SetDistinguishedNameLabel (LPCWSTR_S value);
    /*
    <summary>
        Digital Signature Distinguished name.
            Notes: Assigning a stirng value to it directly is not recommended unless you know what is the Distinguish Name exactly.
            One way suggested of value Assignment is using pdfSignature.Certificate.IssuerName.Name,in which, pdfSignature is an instance of PDFSignature class.
    </summary>
    */
    LPCWSTR_S GetDistinguishedName ();
    /*

    */
    void SetDistinguishedName (LPCWSTR_S value);
    /*
    <summary>
        Flag determine whether to display the labels
    </summary>
    */
    bool GetIsTag ();
    /*

    */
    void SetIsTag (bool value);
    /*
    <summary>
        Show Digital Signature,Configuer Text 
    </summary>
    */
    SignatureConfiguerText GetShowConfiguerText ();
    /*

    */
    void SetShowConfiguerText (SignatureConfiguerText value);
    /*
    <summary>
        The Grapphic render/display mode.
    </summary>
    */
    Security_GraphicMode GetGraphicsMode ();
    /*

    */
    void SetGraphicsMode (Security_GraphicMode value);
    /*
    <summary>
        Digital Signature Graphic Type
    </summary>
    */
    ConfiguerGraphicType GetConfigGraphicType ();
    /*

    */
    void SetConfigGraphicType (ConfiguerGraphicType value);
    /*
    <summary>
        Digital Signature Configuer Graphic file Path
    </summary>
    */
    LPCWSTR_S GetConfiguerGraphicPath ();
    /*

    */
    void SetConfiguerGraphicPath (LPCWSTR_S value);
    /*
    <summary>
        Signature Image Source 
    </summary>
    */
    intrusive_ptr<PdfImage> GetSignImageSource ();
    /*

    */
    void SetSignImageSource (intrusive_ptr<PdfImage> value);
    /*
    <summary>
        Digital Signature Configuer Graphic is filled bounds.
    </summary>
    */
    bool GetIsConfiguerGraphicFilledBounds ();
    /*

    */
    void SetIsConfiguerGraphicFilledBounds (bool value);
    /*
    <summary>
        Set or get the sign image layout. 
    </summary>
    */
    Security_SignImageLayout GetSignImageLayout ();
    /*

    */
    void SetSignImageLayout (Security_SignImageLayout value);
    /*
    <summary>
        Digital Signature Reason  Label
    </summary>
    */
    LPCWSTR_S GetReasonLabel ();
    /*

    */
    void SetReasonLabel (LPCWSTR_S value);
    /*
    <summary>
        Digital Signature Date Label
    </summary>
    */
    LPCWSTR_S GetDateLabel ();
    /*

    */
    void SetDateLabel (LPCWSTR_S value);
    /*
    <summary>
        Digital Signature ContactInfo Label
    </summary>
    */
    LPCWSTR_S GetContactInfoLabel ();
    /*

    */
    void SetContactInfoLabel (LPCWSTR_S value);
    /*
    <summary>
        Digital Signature LocationInfo Label
    </summary>
    */
    LPCWSTR_S GetLocationInfoLabel ();
    /*

    */
    void SetLocationInfoLabel (LPCWSTR_S value);
    /*
    <summary>
        check thie validity of the signature
    </summary>
    <returns></returns>
    */
    bool VerifySignature ();
    /*
    <summary>
        Check if the document was altered after signed. True if modified; otherwise false.
    </summary>
    <returns></returns>
    */
    bool VerifyDocModified ();
    /*
    <summary>
        Set the Sign Name Width
    </summary>
    <returns></returns>
    */
    void SetSignNameWidth (float width);
    /*
    <summary>
        Configure custom graphics.
    </summary>
    <param name="handler">the handler which generate graphics.</param>
    */
    void ConfigureCustomGraphics (intrusive_ptr<GraphicsGenerateHandler> handler);
    /*
    <summary>
        Configure timestamp which must conform to RFC 3161.
    </summary>
    <param name="tsaUrl">TSA url</param>
    */
    void ConfigureTimestamp (LPCWSTR_S tsaUrl);
    /*
    <summary>
        Configure timestamp which must conform to RFC 3161.
    </summary>
    <param name="tsaUrl">The tsa url.</param>
    <param name="user">The user(account) name.</param>
    <param name="password">The password.</param>
    */
    void ConfigureTimestamp (LPCWSTR_S tsaUrl,LPCWSTR_S user,LPCWSTR_S password);
    /*
    <summary>
        Configure timestamp which must conform to RFC 3161.
    </summary>
    <param name="handler">the handler which generate timestamp token</param>
    */
    void ConfigureTimestamp (intrusive_ptr<TimestampGenerateHandler> handler);
    /*
    <summary>
        Configure OCSP which must conform to RFC 2560.
    </summary>
    <param name="ocspUrl">
            OCSP url. It it's null it will be taken from the checked cert.
    </param>
    <param name="extraCertificates">
            Represents an additional collection of certificates that can be searched.
            if null,only use windows cert store.
    </param>
    */
    //void ConfigureHttpOCSP (LPCWSTR_S ocspUrl,System.Security.Cryptography.X509Certificates.X509Certificate2Collection extraCertificates);
    /*
    <summary>
        Configure OCSP which must conform to RFC 2560.
    </summary>
    <param name="extraCertificates">
            Represents an additional collection of certificates that can be searched
            if null,only use windows cert store.
    </param>
    <param name="handler">the handler which generate OCSP response.</param>
    */
    //void ConfigureCustomOCSP (intrusive_ptr<OCSPResponseGenerateHandler> handler,System.Security.Cryptography.X509Certificates.X509Certificate2Collection extraCertificates);
private:
};
}}