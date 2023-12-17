#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Provide a custom signature appearance interface
    </summary>
*/
class EXPORTS IPdfSignatureAppearance : public virtual Object
{
public:
    /*
    <summary>
        Generate custom signature appearance by a graphics context.
    </summary>
    <param name="g">A graphics context of signature appearance.</param>
    */
    virtual void Generate (intrusive_ptr<PdfCanvas> g)=0;
private:
};
}}