#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS CompressorCreator : public virtual Object
{
public:
    /*

    */
    virtual intrusive_ptr<Stream> Invoke (intrusive_ptr<Stream> outputStream);
    /*

    */
    //virtual System.IAsyncResult BeginInvoke (intrusive_ptr<Stream> outputStream,System.AsyncCallback callback,System.Object object);
    /*

    */
    //virtual intrusive_ptr<Stream> EndInvoke (System.IAsyncResult result);
private:
};
}}