#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents list field item collection.
    </summary>
*/
class EXPORTS PdfListFieldItemCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
<value>The  object.</value>
    */
    intrusive_ptr<PdfListFieldItem> GetItem (int index);
    /*
    <summary>
        Adds the specified item in the collection.
    </summary>
    <param name="item">The  object which to be added in the collection.</param>
    <returns>item</returns>
    */
    int Add (intrusive_ptr<PdfListFieldItem> item);
    /*
    <summary>
        Inserts the list item field at the specified index.
    </summary>
    <param name="index">The index where to insert the new item.</param>
    <param name="item">The  object to be added to collection.</param>
    */
    void Insert (int index,intrusive_ptr<PdfListFieldItem> item);
    /*
    <summary>
        Removes the specified item.
    </summary>
    <param name="item">The  object which to be removed in the collection.</param>
    */
    void Remove (intrusive_ptr<PdfListFieldItem> item);
    /*
    <summary>
        Removes the item at the specified position.
    </summary>
    <param name="index">The index where to remove the item.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Determines whether the item is contained by the collection.
    </summary>
    <param name="item">Check whether  object is exists in the collection or not.</param>
    <returns>
  <c>true</c> if the item is contained within the collection; otherwise, <c>false</c>.
            </returns>
    */
    bool Contains (intrusive_ptr<PdfListFieldItem> item);
    /*
    <summary>
        Gets the index of the specified item.
    </summary>
    <param name="item">A  object whose index is requested.</param>
    <returns>The index of the given item, -1 if the item does not exist.</returns>
    */
    int IndexOf (intrusive_ptr<PdfListFieldItem> item);
    /*
    <summary>
        Clears the collection.
    </summary>
    */
    void Clear ();
private:
};
}}