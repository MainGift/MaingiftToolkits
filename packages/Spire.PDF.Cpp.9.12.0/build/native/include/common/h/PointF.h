#pragma once
#include "common.h"
#include "SizeF.h"

#pragma warning(push)
#pragma warning(disable:4250)
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
class EXPORTS PointF : public virtual Object
{
public:
    PointF();
    PointF(float x, float y);
    bool GetIsEmpty ();
    float GetX ();
    void SetX (float value);
    float GetY ();
    void SetY (float value);
    static intrusive_ptr<PointF> op_Addition (intrusive_ptr<PointF> pt,intrusive_ptr<Size> sz);
    static intrusive_ptr<PointF> op_Subtraction (intrusive_ptr<PointF> pt,intrusive_ptr<Size> sz);
    static intrusive_ptr<PointF> op_Addition (intrusive_ptr<PointF> pt,intrusive_ptr<SizeF> sz);
    static intrusive_ptr<PointF> op_Subtraction (intrusive_ptr<PointF> pt,intrusive_ptr<SizeF> sz);
    static bool op_Equality (intrusive_ptr<PointF> left,intrusive_ptr<PointF> right);
    static bool op_Inequality (intrusive_ptr<PointF> left,intrusive_ptr<PointF> right);
    static intrusive_ptr<PointF> Add (intrusive_ptr<PointF> pt,intrusive_ptr<Size> sz);
    static intrusive_ptr<PointF> Subtract (intrusive_ptr<PointF> pt,intrusive_ptr<Size> sz);
    static intrusive_ptr<PointF> Add (intrusive_ptr<PointF> pt,intrusive_ptr<SizeF> sz);
    static intrusive_ptr<PointF> Subtract (intrusive_ptr<PointF> pt,intrusive_ptr<SizeF> sz);
    //virtual bool Equals (System.Object obj);
    virtual int GetHashCode ();
    virtual LPCWSTR_S ToString ();
    static intrusive_ptr<PointF> Empty ();
private:
};
}}