#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "EndPageLayoutEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS ListEndPageLayoutEventArgs : public virtual EndPageLayoutEventArgs
{
public:
    /*

    */
    intrusive_ptr<PdfListBase> GetList ();
private:
};
}}