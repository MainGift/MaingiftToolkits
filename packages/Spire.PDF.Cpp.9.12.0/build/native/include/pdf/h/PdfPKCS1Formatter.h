#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPdfSignatureFormatter.h"
#include "Security_IPdfSignatureFormatter.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf pkcs1 signature implementation.
    </summary>
*/
class EXPORTS PdfPKCS1Formatter : public virtual IPdfSignatureFormatter,public virtual Security_IPdfSignatureFormatter
{
public:
    /*
    <summary>
        The signature properties.
    </summary>
    */
    virtual intrusive_ptr<PdfSignatureProperties> GetProperties ();
    /*
    <summary>
        Parameters for the encoding of the signature.
    </summary>
    */
    //virtual System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Object, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetParameters ();
    /*
    <summary>
        Sign.
    </summary>
    <param name="content">The data to be signed.</param>
    <returns>The signature.</returns>
    */
    //virtual std::vector<BYTE*> Sign (std::vector<BYTE*> content);
private:
};
}}