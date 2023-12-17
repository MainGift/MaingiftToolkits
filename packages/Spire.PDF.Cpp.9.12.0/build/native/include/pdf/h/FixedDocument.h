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
class EXPORTS FixedDocument : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<PageContent>> GetPageContent ();
    /*

    */
    void SetPageContent (std::vector<intrusive_ptr<PageContent>> value);
    /*

    */
    LPCWSTR_S GetDocumentReferenceRoot ();
    /*

    */
    void SetDocumentReferenceRoot (LPCWSTR_S value);
private:
};
}}