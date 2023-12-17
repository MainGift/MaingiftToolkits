#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS SignatureDefinitionsType : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<SignatureDefinitionType>> GetSignatureDefinition ();
    /*

    */
    void SetSignatureDefinition (std::vector<intrusive_ptr<SignatureDefinitionType>> value);
private:
};
}}