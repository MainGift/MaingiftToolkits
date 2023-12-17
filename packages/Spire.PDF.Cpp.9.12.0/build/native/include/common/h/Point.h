#pragma once
#include "common.h"
#include "PointF.h"

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
class EXPORTS Point : public virtual Object
{
public:
    Point();
    Point(int x, int y);

    bool GetIsEmpty ();
    int GetX ();
    void SetX (int value);
    int GetY ();
    void SetY (int value);
    static intrusive_ptr<PointF> op_Implicit (intrusive_ptr<Point> p);
    static intrusive_ptr<Size> op_Explicit (intrusive_ptr<Point> p);
    static intrusive_ptr<Point> op_Addition (intrusive_ptr<Point> pt,intrusive_ptr<Size> sz);
    static intrusive_ptr<Point> op_Subtraction (intrusive_ptr<Point> pt,intrusive_ptr<Size> sz);
    static bool op_Equality (intrusive_ptr<Point> left,intrusive_ptr<Point> right);
    static bool op_Inequality (intrusive_ptr<Point> left,intrusive_ptr<Point> right);
    static intrusive_ptr<Point> Add (intrusive_ptr<Point> pt,intrusive_ptr<Size> sz);
    static intrusive_ptr<Point> Subtract (intrusive_ptr<Point> pt,intrusive_ptr<Size> sz);
    static intrusive_ptr<Point> Ceiling (intrusive_ptr<PointF> value);
    static intrusive_ptr<Point> Truncate (intrusive_ptr<PointF> value);
    static intrusive_ptr<Point> Round (intrusive_ptr<PointF> value);
    //virtual bool Equals (System.Object obj);
    virtual int GetHashCode ();
    void Offset (int dx,int dy);
    void Offset (intrusive_ptr<Point> p);
    virtual LPCWSTR_S ToString ();
    static intrusive_ptr<Point> Empty ();
private:
};
}}