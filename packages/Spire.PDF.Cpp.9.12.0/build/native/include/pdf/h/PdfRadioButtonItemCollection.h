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
        Represents collection of radio buttons items.
    </summary>
*/
class EXPORTS PdfRadioButtonItemCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Adds the specified item.
    </summary>
    <param name="item">The  object to be added to collection.</param>
    <returns>The index of the added field.</returns>
    */
    int Add (intrusive_ptr<PdfRadioButtonListItem> item);
    /*
    <summary>
        Inserts an item at the specified index.
    </summary>
    <param name="index">The index where to insert the new item..</param>
    <param name="item">A  object to be added to collection.</param>
    */
    void Insert (int index,intrusive_ptr<PdfRadioButtonListItem> item);
    /*
    <summary>
        Removes the specified item from the collection.
    </summary>
    <param name="item">The  object which is to be removed from the collection.</param>
    */
    void Remove (intrusive_ptr<PdfRadioButtonListItem> item);
    /*
    <summary>
        Removes the item at the specified position.
    </summary>
    <param name="index">The index where to remove the item.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Gets the index of the item within the collection.
    </summary>
    <param name="item">A  object whose index is requested.</param>
    <returns>Index of the item with the collection.</returns>
    */
    int IndexOf (intrusive_ptr<PdfRadioButtonListItem> item);
    /*
    <summary>
        Determines whether the collection contains the specified item.
    </summary>
    <param name="item">Check whether  object is exists in the collection or not.</param>
    <returns>
  <c>true</c> if collection contains specified item; otherwise, <c>false</c>.
            </returns>
    */
    bool Contains (intrusive_ptr<PdfRadioButtonListItem> item);
    /*
    <summary>
        Clears the item collection.
    </summary>
    */
    void Clear ();
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
<value>Returns item at the specified position.</value>
    */
    intrusive_ptr<PdfRadioButtonListItem> GetItem (int index);
private:
};
}}