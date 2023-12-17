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
        Represents collection of list items.
    </summary>
*/
class EXPORTS PdfListItemCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the PdfListItem from collection at the specified index.
    </summary>
    */
    intrusive_ptr<PdfListItem> GetItem (int index);
    /*
    <summary>
        Adds the specified item.
    </summary>
    <param name="item">The item.</param>
    <returns>The item index in collection.</returns>
    */
    int Add (intrusive_ptr<PdfListItem> item);
    /*
    <summary>
        Adds the specified item.
    </summary>
    <param name="item">The item.</param>
    <param name="itemIndent">The item indent.</param>
    */
    int Add (intrusive_ptr<PdfListItem> item,float itemIndent);
    /*
    <summary>
        Adds the item with a specified text.
    </summary>
    <param name="text">The text.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfListItem> Add (LPCWSTR_S text);
    /*
    <summary>
        Adds the specified text.
    </summary>
    <param name="text">The text.</param>
    <param name="itemIndent">The item indent.</param>
    <returns>List item.</returns>
    */
    intrusive_ptr<PdfListItem> Add (LPCWSTR_S text,float itemIndent);
    /*
    <summary>
        Adds the specified text.
    </summary>
    <param name="text">The text.</param>
    <param name="font">The font.</param>
    <returns>The item index in collection.</returns>
    */
    intrusive_ptr<PdfListItem> Add (LPCWSTR_S text,intrusive_ptr<PdfFontBase> font);
    /*
    <summary>
        Adds the specified text.
    </summary>
    <param name="text">The text.</param>
    <param name="font">The font.</param>
    <param name="itemIndent">The item indent.</param>
    <returns>List item.</returns>
    */
    intrusive_ptr<PdfListItem> Add (LPCWSTR_S text,intrusive_ptr<PdfFontBase> font,float itemIndent);
    /*
    <summary>
        Inserts item at the specified index.
    </summary>
    <param name="index">The specified index.</param>
    <param name="item">The item.</param>
    <returns>The item index </returns>
    */
    void Insert (int index,intrusive_ptr<PdfListItem> item);
    /*
    <summary>
        Inserts the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="item">The item.</param>
    <param name="itemIndent">The item indent.</param>
    */
    void Insert (int index,intrusive_ptr<PdfListItem> item,float itemIndent);
    /*
    <summary>
        Removes the specified item from the list.
    </summary>
    <param name="item">The specified item.</param>
    */
    void Remove (intrusive_ptr<PdfListItem> item);
    /*
    <summary>
        Removes the item at the specified index from the list.
    </summary>
    <param name="index">he specified index.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Determines the index of a specific item in the list.
    </summary>
    <param name="item">The item to locate in the list. </param>
    <returns>The index of item if found in the list; otherwise, -1. </returns>
    */
    int IndexOf (intrusive_ptr<PdfListItem> item);
    /*
    <summary>
        Clears collection.
    </summary>
    */
    void Clear ();
private:
};
}}