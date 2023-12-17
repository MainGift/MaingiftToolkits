#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Delegate for handling StartRowLayoutEvent.
    </summary>
    <param name="sender">The sender of the event.</param>
    <param name="args">The arguments of the event.</param>
<remarks>This event is raised when starting a row in a layout.</remarks>
*/
class EXPORTS BeginRowLayoutEventHandler : public virtual Object
{
public:
    /*

    */
    virtual void Invoke (intrusive_ptr<Object> sender,intrusive_ptr<BeginRowLayoutEventArgs> args);
    /*

    */
    //virtual System.IAsyncResult BeginInvoke (System.Object sender,intrusive_ptr<BeginRowLayoutEventArgs> args,System.AsyncCallback callback,System.Object object);
    /*

    */
    //virtual void EndInvoke (System.IAsyncResult result);
private:
};
}}