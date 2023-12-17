#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfSignatureMaker.h"
#include "PdfCertificate.h"
#include "PdfDocument.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf MDP (modification detection and prevention) signature maker.
            A document can contain only one MDP signature, it must be the first signed in the document.
            It enables the author to specify what changes are permitted to be made the document and 
            what changes invalidate the author’s signature.
    </summary>
*/
class EXPORTS PdfMDPSignatureMaker : public virtual PdfSignatureMaker
{
public:
    PdfMDPSignatureMaker(intrusive_ptr<PdfDocument> document, intrusive_ptr<PdfCertificate> certificate);

    PdfMDPSignatureMaker(intrusive_ptr<PdfDocument> document, intrusive_ptr<PdfCertificate> certificate, int permissions);

    /*
    <summary>
        No changes to the document are permitted; 
            any change to the document invalidates the signature.
    </summary>
    */
    static int Level1Permissions ();
    /*
    <summary>
        Permitted changes are filling in forms, instantiating page templates, 
            and signing; other changes invalidate the signature.
    </summary>
    */
    static int Level2Permissions ();
    /*
    <summary>
        Permitted changes are the same as for 2, as well as annotation creation, 
            deletion, and modification; other changes invalidate the signature
    </summary>
    */
    static int Level3Permissions ();
private:
};
}}