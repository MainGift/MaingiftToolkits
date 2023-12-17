#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The handler which generate timestamp token.
    </summary>
    <param name="signature">
            The value of signature field within SignerInfo.
            The value of messageImprint field within TimeStampToken shall be the hash of signature.
            Refrence RFC 3161 APPENDIX A.
    </param>
    <returns>timestamp which must conform to RFC 3161</returns>
*/
class EXPORTS TimestampGenerateHandler : public virtual Object
{
public:
    /*

    */
    //virtual std::vector<BYTE*> Invoke (std::vector<BYTE*> signature);
    /*

    */
    //virtual System.IAsyncResult BeginInvoke (std::vector<System.Byte> signature,System.AsyncCallback callback,System.Object object);
    /*

    */
    //virtual std::vector<System.Byte> EndInvoke (System.IAsyncResult result);
private:
};
}}