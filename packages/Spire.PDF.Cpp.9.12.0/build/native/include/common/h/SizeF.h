#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "../h/PointF.h"
#pragma warning(pop)

namespace Spire{
#ifdef _SPIRE_XLS
namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Presentation{
#else
namespace Xls{
#endif
class EXPORTS SizeF : public virtual Object
{
public:
    SizeF();
    SizeF(intrusive_ptr<SizeF> size);

    SizeF(intrusive_ptr<PointF> pt);

    SizeF(float width, float height);

    static intrusive_ptr<SizeF> op_Addition (intrusive_ptr<SizeF> sz1,intrusive_ptr<SizeF> sz2);
    static intrusive_ptr<SizeF> op_Subtraction (intrusive_ptr<SizeF> sz1,intrusive_ptr<SizeF> sz2);
    static bool op_Equality (intrusive_ptr<SizeF> sz1,intrusive_ptr<SizeF> sz2);
    static bool op_Inequality (intrusive_ptr<SizeF> sz1,intrusive_ptr<SizeF> sz2);
    static intrusive_ptr<PointF> op_Explicit (intrusive_ptr<SizeF> size);
    bool GetIsEmpty ();
    float GetWidth ();
    void SetWidth (float value);
    float GetHeight ();
    void SetHeight (float value);
    static intrusive_ptr<SizeF> Add (intrusive_ptr<SizeF> sz1,intrusive_ptr<SizeF> sz2);
    static intrusive_ptr<SizeF> Subtract (intrusive_ptr<SizeF> sz1,intrusive_ptr<SizeF> sz2);
    //virtual bool Equals (System.Object obj);
    virtual int GetHashCode ();
    intrusive_ptr<PointF> ToPointF ();
    intrusive_ptr<Size> ToSize ();
    virtual LPCWSTR_S ToString ();
    static intrusive_ptr<SizeF> Empty ();
private:
};
}}