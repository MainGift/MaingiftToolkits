#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "BeginPageLayoutEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Arguments of BeginPageLayoutEvent.
    </summary>
*/
class EXPORTS PdfGridBeginPageLayoutEventArgs : public virtual BeginPageLayoutEventArgs
{
public:
    /*
    <summary>
        Gets the start row.
    </summary>
<value>The start row.</value>
    */
    int GetStartRowIndex ();
private:
};
}}