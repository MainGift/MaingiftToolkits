#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "BeginPageLayoutEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS ListBeginPageLayoutEventArgs : public virtual BeginPageLayoutEventArgs
{
public:
    /*

    */
    intrusive_ptr<PdfListBase> GetList ();
private:
};
}}