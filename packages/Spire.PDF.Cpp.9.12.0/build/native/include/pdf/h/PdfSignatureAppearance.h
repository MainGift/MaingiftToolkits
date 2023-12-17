#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "SignImageLayout.h"
#include "IPdfSignatureAppearance.h"
#include "GraphicMode.h"
#include "PdfImage.h"
#include "PdfCanvas.h"
#include "PdfSignature.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
         Provide a custom signature appearance implemation.
    </summary>
*/
class EXPORTS PdfSignatureAppearance : public virtual IPdfSignatureAppearance
{
public:
    PdfSignatureAppearance();
    PdfSignatureAppearance(intrusive_ptr<PdfSignature> signature);
    /*
    <summary>
        The label of The name of the person or authority signing the document.
    </summary>
    */
    LPCWSTR_S GetNameLabel ();
    /*

    */
    void SetNameLabel (LPCWSTR_S value);
    /*
    <summary>
        The label of signature's reason
    </summary>
    */
    LPCWSTR_S GetReasonLabel ();
    /*

    */
    void SetReasonLabel (LPCWSTR_S value);
    /*
    <summary>
        The label of signature's location
    </summary>
    */
    LPCWSTR_S GetLocationLabel ();
    /*

    */
    void SetLocationLabel (LPCWSTR_S value);
    /*
    <summary>
        The label of signature's contactInfo
    </summary>
    */
    LPCWSTR_S GetContactInfoLabel ();
    /*

    */
    void SetContactInfoLabel (LPCWSTR_S value);
    /*
    <summary>
        The label of signature's date
    </summary>
    */
    LPCWSTR_S GetDateLabel ();
    /*

    */
    void SetDateLabel (LPCWSTR_S value);
    /*

    */
    intrusive_ptr<PdfImage> GetSignatureImage ();
    /*

    */
    void SetSignatureImage (intrusive_ptr<PdfImage> value);
    /*
    <summary>
        The Grapphic render/display mode.
    </summary>
    */
    GraphicMode GetGraphicMode ();
    /*

    */
    void SetGraphicMode (GraphicMode value);
    /*
    <summary>
        Set or get the sign image layout. 
    </summary>
    */
    SignImageLayout GetSignImageLayout ();
    /*

    */
    void SetSignImageLayout (SignImageLayout value);
    /*
    <summary>
        Generate custom signature appearance by a graphics context.
    </summary>
    <param name="g">A graphics context of signature appearance.</param>
    */
    virtual void Generate (intrusive_ptr<PdfCanvas> g);
private:
};
}}