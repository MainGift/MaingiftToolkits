#pragma once
#include "common.h"

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
class EXPORTS RectangleF : public virtual Object
{
public:
    RectangleF();
    RectangleF(float x, float y, float width, float height);

    RectangleF(intrusive_ptr<PointF> location, intrusive_ptr<SizeF> size);

    intrusive_ptr<PointF> GetLocation ();
    intrusive_ptr<SizeF> GetSize ();
    float GetRight ();
    float GetBottom ();
    void Inflate (float x,float y);
    static intrusive_ptr<RectangleF> Union (intrusive_ptr<RectangleF> a,intrusive_ptr<RectangleF> b);
    static intrusive_ptr<RectangleF> op_Implicit (intrusive_ptr<Rectangle> r);
    static intrusive_ptr<RectangleF> FromLTRB (float left,float top,float right,float bottom);
    void SetLocation (intrusive_ptr<PointF> value);
    void SetSize (intrusive_ptr<SizeF> value);
    float GetX ();
    void SetX (float value);
    float GetY ();
    void SetY (float value);
    float GetWidth ();
    void SetWidth (float value);
    float GetHeight ();
    void SetHeight (float value);
    float GetLeft ();
    float GetTop ();
    bool GetIsEmpty ();
    //virtual bool Equals (System.Object obj);
    static bool op_Equality (intrusive_ptr<RectangleF> left,intrusive_ptr<RectangleF> right);
    static bool op_Inequality (intrusive_ptr<RectangleF> left,intrusive_ptr<RectangleF> right);
    bool Contains (float x,float y);
    bool Contains (intrusive_ptr<PointF> pt);
    bool Contains (intrusive_ptr<RectangleF> rect);
    virtual int GetHashCode ();
    void Inflate (intrusive_ptr<SizeF> size);
    static intrusive_ptr<RectangleF> Inflate (intrusive_ptr<RectangleF> rect,float x,float y);
    void Intersect (intrusive_ptr<RectangleF> rect);
    static intrusive_ptr<RectangleF> Intersect (intrusive_ptr<RectangleF> a,intrusive_ptr<RectangleF> b);
    bool IntersectsWith (intrusive_ptr<RectangleF> rect);
    void Offset (intrusive_ptr<PointF> pos);
    void Offset (float x,float y);
    virtual LPCWSTR_S ToString ();
    static intrusive_ptr<RectangleF> Empty ();
private:
};
}}