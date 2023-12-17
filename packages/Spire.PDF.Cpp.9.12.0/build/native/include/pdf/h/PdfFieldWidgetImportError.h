#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFieldWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfFieldWidgetImportError : public virtual Object
{
public:
    /*

    */
    //System.Exception GetException ();
    /*

    */
    intrusive_ptr<PdfFieldWidget> GetFieldWidget ();
private:
};
}}