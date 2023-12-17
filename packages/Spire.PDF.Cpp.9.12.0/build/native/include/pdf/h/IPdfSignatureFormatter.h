#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Signature formatter.
    </summary>
*/
class EXPORTS IPdfSignatureFormatter : public virtual Object
{
public:
    /*
    <summary>
        Signature properties.
    </summary>
    */
    virtual intrusive_ptr<PdfSignatureProperties> GetProperties ()=0;
    /*
    <summary>
        Sign.
    </summary>
    <param name="content">The data to be signed.</param>
    <returns>The signature.</returns>
    */
    virtual std::vector<BYTE*> Sign (std::vector<BYTE*> content)=0;
private:
};
}}