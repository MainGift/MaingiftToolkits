#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the data for a cancelable event.
    </summary>
*/
class EXPORTS PdfCancelEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether this  is cancel.
    </summary>
<value>
  <c>true</c> if cancel; otherwise, <c>false</c>.</value>
    */
    bool GetCancel ();
    /*

    */
    void SetCancel (bool value);
private:
};
}}