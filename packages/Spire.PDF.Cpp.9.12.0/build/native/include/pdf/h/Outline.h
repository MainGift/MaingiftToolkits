#pragma once
#include "pch.h"
#include "DocumentOutline.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS Outline : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<DocumentOutline> GetDocumentOutline ();
    /*

    */
    void SetDocumentOutline (intrusive_ptr<DocumentOutline> value);
private:
};
}}