#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The handler which generate graphics.
    </summary>
    <param name="graphics">
            The graphics context.
            The visible region is (0,0,signature bounds width,signature bounds height).
    </param>
*/
class EXPORTS GraphicsGenerateHandler : public virtual Object
{
public:
    /*

    */
    virtual void Invoke (intrusive_ptr<PdfCanvas> g);
    /*

    */
    //virtual System.IAsyncResult BeginInvoke (intrusive_ptr<PdfCanvas> g,System.AsyncCallback callback,System.Object object);
    /*

    */
    //virtual void EndInvoke (System.IAsyncResult result);
private:
};
}}