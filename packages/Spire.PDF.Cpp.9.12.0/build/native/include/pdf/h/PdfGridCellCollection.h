#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGridCellCollection : public virtual Object
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
<value></value>
    */
    intrusive_ptr<PdfGridCell> GetItem (int index);
    /*
    <summary>
        Gets the count.
    </summary>
<value>The count.</value>
    */
    int GetCount ();
    /*
    <summary>
        Returns the index of a particular cell in the collection.
    </summary>
    <param name="cell">The cell.</param>
    <returns></returns>
    */
    int IndexOf (intrusive_ptr<PdfGridCell> cell);
    /*

    */
    //virtual System.Collections.IEnumerator GetEnumerator ();
private:
};
}}