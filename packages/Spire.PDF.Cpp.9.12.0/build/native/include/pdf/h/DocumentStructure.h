#pragma once
#include "pch.h"
#include "Story.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS DocumentStructure : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Outline> GetDocumentStructureOutline ();
    /*

    */
    void SetDocumentStructureOutline (intrusive_ptr<Outline> value);
    /*
<remarks />
    */
    std::vector<intrusive_ptr<Story>> GetStory ();
    /*

    */
    void SetStory (std::vector<intrusive_ptr<Story>> value);
private:
};
}}