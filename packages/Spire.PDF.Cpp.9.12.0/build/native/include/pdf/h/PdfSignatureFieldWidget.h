#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledFieldWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the signature field of an existing PDF document`s form.
    </summary>
*/
class EXPORTS PdfSignatureFieldWidget : public virtual PdfStyledFieldWidget
{
public:
    /*

    */
    intrusive_ptr<Security_PdfSignature> GetSignature();
    /*

    */
    //void SetSignature (Security_intrusive_ptr<PdfSignature> value);
    /*
    <summary>
        Form field identifier
    </summary>
    */
    //int ObjectID ();
private:
};
}}