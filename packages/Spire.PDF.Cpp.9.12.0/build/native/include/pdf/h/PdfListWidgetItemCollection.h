#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCollection.h"
#include "PdfListWidgetItem.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a collection of list box field items.
    </summary>
*/
class EXPORTS PdfListWidgetItemCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    intrusive_ptr<PdfListWidgetItem> GetItem (int index);
    /*
    <summary>
        Inserts an item at the end of the collection. 
    </summary>
    <param name="widgetItem">a object to be added to collection.</param>
    <returns>The index of item.</returns>
    */
    int Add (intrusive_ptr<PdfListWidgetItem> widgetItem);
    /*
    <summary>
        Inserts the list item at the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="widgetItem">The item.</param>
    */
    void Insert (int index,intrusive_ptr<PdfListWidgetItem> widgetItem);
    /*
    <summary>
        Removes the element at the specified index.
    </summary>
    <param name="index">The index.</param>
<remarks>Throws IndexOutOfRange exception if the index is out of bounds.</remarks>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Clears the item collection.
    </summary>
    */
    void Clear ();
private:
};
}}