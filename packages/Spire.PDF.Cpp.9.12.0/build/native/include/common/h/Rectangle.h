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
class EXPORTS Rectangle : public virtual Object
{
public:

    Rectangle();
    Rectangle(int x, int y, int width, int height);

    Rectangle(intrusive_ptr<Point> location, intrusive_ptr<Size> size);

    static intrusive_ptr<Rectangle> FromLTRB (int left,int top,int right,int bottom);
    intrusive_ptr<Point> GetLocation ();
    void SetLocation(intrusive_ptr<Point> value);
    intrusive_ptr<Size> GetSize ();
    void SetSize (intrusive_ptr<Size> value);
    int GetX ();
    void SetX (int value);
    int GetY ();
    void SetY (int value);
    int GetWidth ();
    void SetWidth (int value);
    int GetHeight ();
    void SetHeight (int value);
    int GetLeft ();
    int GetRight ();
    int GetBottom ();
    static bool op_Equality (intrusive_ptr<Rectangle> left,intrusive_ptr<Rectangle> right);
    static intrusive_ptr<Rectangle> Truncate (intrusive_ptr<RectangleF> value);
    bool Contains (int x,int y);
    bool Contains (intrusive_ptr<Point> pt);
    bool Contains (intrusive_ptr<Rectangle> rect);
    void Inflate (int width,int height);
    void Intersect (intrusive_ptr<Rectangle> rect);
    static intrusive_ptr<Rectangle> Intersect (intrusive_ptr<Rectangle> a,intrusive_ptr<Rectangle> b);
    bool IntersectsWith (intrusive_ptr<Rectangle> rect);
    static intrusive_ptr<Rectangle> Union (intrusive_ptr<Rectangle> a,intrusive_ptr<Rectangle> b);
    int GetTop ();
    bool GetIsEmpty ();
    //virtual bool Equals (System.Object obj);
    static bool op_Inequality (intrusive_ptr<Rectangle> left,intrusive_ptr<Rectangle> right);
    static intrusive_ptr<Rectangle> Ceiling (intrusive_ptr<RectangleF> value);
    static intrusive_ptr<Rectangle> Round (intrusive_ptr<RectangleF> value);
    virtual int GetHashCode ();
    void Inflate (intrusive_ptr<Size> size);
    static intrusive_ptr<Rectangle> Inflate (intrusive_ptr<Rectangle> rect,int x,int y);
    void Offset (intrusive_ptr<Point> pos);
    void Offset (int x,int y);
    virtual LPCWSTR_S ToString ();
    static intrusive_ptr<Rectangle> Empty ();
private:
};
}}