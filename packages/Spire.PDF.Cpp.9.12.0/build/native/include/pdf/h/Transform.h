#pragma once
#include "pch.h"
#include "MatrixTransform.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS Transform : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<MatrixTransform> GetMatrixTransform ();
    /*

    */
    void SetMatrixTransform (intrusive_ptr<MatrixTransform> value);
private:
};
}}