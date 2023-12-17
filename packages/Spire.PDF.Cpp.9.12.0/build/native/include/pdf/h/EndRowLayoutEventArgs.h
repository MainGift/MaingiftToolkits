#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents arguments of EndRowLayoutEvent.
    </summary>
*/
class EXPORTS EndRowLayoutEventArgs : public virtual Object
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
        Gets a value indicating whether the row was drawn completely
            (nothing should be printed on the next page).
    </summary>
    */
    bool GetLayoutCompleted ();
    /*
    <summary>
        Gets or sets a value indicating whether this row should be the last one printed.
    </summary>
    */
    bool GetCancel ();
    /*

    */
    void SetCancel (bool value);
    /*
    <summary>
        Gets or sets the row bounds.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
private:
};
}}