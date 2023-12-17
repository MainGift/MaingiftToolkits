#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGridColumnCollection : public virtual Object
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
<value></value>
    */
    intrusive_ptr<PdfGridColumn> GetItem (int index);
    /*
    <summary>
        Gets the count.
    </summary>
<value>The count.</value>
    */
    int GetCount ();
    /*
    <summary>
        Adds this instance.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<PdfGridColumn> Add ();
    /*
    <summary>
        Adds the specified count.
    </summary>
    <param name="count">The count.</param>
    */
    void Add (int count);
    /*
    <summary>
        Adds the specified column.
    </summary>
    <param name="column">The column.</param>
    */
    void Add (intrusive_ptr<PdfGridColumn> column);
    /*
    <summary>
        Removes the first occurrence of a specific object from the PdfGridColumnCollection.
    </summary>
    <param name="item">The object to remove from the PdfGridColumnCollection.
    </param>
    <returns>true if item is successfully removed; otherwise, false</returns>
    */
    bool Remove (intrusive_ptr<PdfGridColumn> item);
    /*
    <summary>
        Removes the element at the specified index of the PdfGridColumnCollection.
    </summary>
    <param name="index">The zero-based index of the element to remove.</param>
    */
    void RemoveAt (int index);
    /*

    */
    //virtual System.Collections.IEnumerator GetEnumerator ();
private:
};
}}