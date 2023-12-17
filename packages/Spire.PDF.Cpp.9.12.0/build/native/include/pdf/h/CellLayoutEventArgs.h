#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The base class for cell layout arguments.
    </summary>
*/
class EXPORTS CellLayoutEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets the index of the row.
    </summary>
    */
    int GetRowIndex ();
    /*
    <summary>
        Gets the index of the cell.
    </summary>
    */
    int GetCellIndex ();
    /*
    <summary>
        Gets the value.
    </summary>
<remarks>The value might be null or an empty string,
            which means that either no text were acquired or all
            text was on the previous page.</remarks>
    */
    LPCWSTR_S GetValue ();
    /*
    <summary>
        Gets the bounds of the cell.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*
    <summary>
        Gets the graphics, on which the cell should be drawn.
    </summary>
    */
    intrusive_ptr<PdfCanvas> GetGraphics ();
private:
};
}}