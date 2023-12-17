#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS Relationships : public virtual Object
{
public:
    /*

    */
    intrusive_ptr<Relationship> GetRelationship ();
    /*

    */
    void SetRelationship (intrusive_ptr<Relationship> value);
private:
};
}}