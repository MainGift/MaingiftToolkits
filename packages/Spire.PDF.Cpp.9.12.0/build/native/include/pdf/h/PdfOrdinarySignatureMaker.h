#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfSignatureMaker.h"
#include "PdfCertificate.h"
#include "PdfDocument.h"
#include "IPdfSignatureFormatter.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf ordinary signature maker.
            A document can contain One or more ordinary signatures.
    </summary>
*/
class EXPORTS PdfOrdinarySignatureMaker : public virtual PdfSignatureMaker
{
public:
    /// <summary>
    /// Initialize a new instance.
    /// </summary>
    /// <param name="document">The pdf document object</param>
    /// <param name="certificate">The certificate.</param>
    PdfOrdinarySignatureMaker(intrusive_ptr<PdfDocument> document, intrusive_ptr<PdfCertificate> certificate);

    /// <summary>
    ///  Initialize a new instance.
    /// </summary>
    /// <param name="document">The pdf document object</param>
    /// <param name="signatureFormatter">The signature formatter.</param>
    PdfOrdinarySignatureMaker(intrusive_ptr<PdfDocument> document, intrusive_ptr<IPdfSignatureFormatter> signatureFormatter);
private:
};
}}