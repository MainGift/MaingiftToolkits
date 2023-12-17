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
class EXPORTS ImageFormat : public virtual Object
{
public:
    //System.Guid GetGuid ();
    static intrusive_ptr<ImageFormat> GetMemoryBmp ();
    static intrusive_ptr<ImageFormat> GetBmp ();
    static intrusive_ptr<ImageFormat> GetEmf ();
    static intrusive_ptr<ImageFormat> GetWmf ();
    static intrusive_ptr<ImageFormat> GetGif ();
    static intrusive_ptr<ImageFormat> GetJpeg ();
    static intrusive_ptr<ImageFormat> GetPng ();
    static intrusive_ptr<ImageFormat> GetTiff ();
    static intrusive_ptr<ImageFormat> GetExif ();
    static intrusive_ptr<ImageFormat> GetIcon ();
    //virtual bool Equals (System.Object o);
    virtual int GetHashCode ();
    virtual LPCWSTR_S ToString ();
private:
};
}}