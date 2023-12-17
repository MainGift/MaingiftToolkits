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
class EXPORTS FixedDocumentSequence : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector< intrusive_ptr<DocumentReference>> GetDocumentReference ();
    /*

    */
    void SetDocumentReference (std::vector< intrusive_ptr<DocumentReference>> value);
private:
};
}}