#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ITSAService.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Time Stamp service implementation which must conform to RFC 3161.
    </summary>
*/
class EXPORTS TSAHttpService : public virtual ITSAService
{
public:
    /*
    <summary>
        Generate timestamp token.
    </summary>
    <param name="signature">
            The value of signature field within SignerInfo.
            The value of messageImprint field within TimeStampToken shall be the hash of signature.
            Refrence RFC 3161 APPENDIX A.
    </param>
    <returns>timestamp which must conform to RFC 3161</returns>
    */
    //virtual std::vector<BYTE*> Generate (std::vector<BYTE*> signature);
private:
};
}}