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
class EXPORTS Size : public virtual Object
{
public:
    Size();
    Size(intrusive_ptr<Size> size);

    Size(intrusive_ptr<Point> pt);

    Size(int width, int height);

    static intrusive_ptr<SizeF> op_Implicit (intrusive_ptr<Size> p);
    static intrusive_ptr<Size> op_Addition (intrusive_ptr<Size> sz1,intrusive_ptr<Size> sz2);
    static intrusive_ptr<Size> op_Subtraction (intrusive_ptr<Size> sz1,intrusive_ptr<Size> sz2);
    static bool op_Equality (intrusive_ptr<Size> sz1,intrusive_ptr<Size> sz2);
    static bool op_Inequality (intrusive_ptr<Size> sz1,intrusive_ptr<Size> sz2);
    static intrusive_ptr<Point> op_Explicit (intrusive_ptr<Size> size);
    bool GetIsEmpty ();
    int GetWidth ();
    void SetWidth (int value);
    int GetHeight ();
    void SetHeight (int value);
    static intrusive_ptr<Size> Add (intrusive_ptr<Size> sz1,intrusive_ptr<Size> sz2);
    static intrusive_ptr<Size> Ceiling (intrusive_ptr<SizeF> value);
    static intrusive_ptr<Size> Subtract (intrusive_ptr<Size> sz1,intrusive_ptr<Size> sz2);
    static intrusive_ptr<Size> Truncate (intrusive_ptr<SizeF> value);
    static intrusive_ptr<Size> Round (intrusive_ptr<SizeF> value);
    //virtual bool Equals (System.Object obj);
    virtual int GetHashCode ();
    virtual LPCWSTR_S ToString ();
    static intrusive_ptr<Size> Empty ();
private:
};
}}