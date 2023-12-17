#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Signature formatter interface.
    </summary>
*/
class EXPORTS Security_IPdfSignatureFormatter : public virtual Object
{
public:
    /*

    */
    //virtual System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Object, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetParameters ()=0;
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