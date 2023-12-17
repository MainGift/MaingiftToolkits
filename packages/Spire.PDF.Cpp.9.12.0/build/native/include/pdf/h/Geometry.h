#pragma once
#include "pch.h"
#include "PathGeometry.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS Geometry : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<PathGeometry> GetPathGeometry ();
    /*

    */
    void SetPathGeometry (intrusive_ptr<PathGeometry> value);
private:
};
}}