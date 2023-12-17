#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Implements routines for manipulation with loaded pages.
    </summary>
*/
class EXPORTS PdfPageCollection : public virtual Object
{
public:
    /*

    */
    void add_PageAdded (intrusive_ptr<PageAddedEventHandler> value);
    /*

    */
    void remove_PageAdded (intrusive_ptr<PageAddedEventHandler> value);
    /*
    <summary>
        Get the Section Count.
    </summary>
    */
    //int GetSectionCount ();
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetItem (int index);
    /*
    <summary>
        Gets the count.
    </summary>
    */
    int GetCount ();
    /*
    <summary>
        Creates a new page and adds it to the collection.
    </summary>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Add ();
    /*
    <summary>
        Creates a new page of the specified size and adds it to the collection.
    </summary>
    <param name="size">The size of the new page.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Add (intrusive_ptr<SizeF> size);
    /*
    <summary>
        Creates a new page of the specified size and with the specified margins
            and adds it to the collection.
    </summary>
    <param name="size">The size of the new page.</param>
    <param name="margins">The margins of the new page.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Add (intrusive_ptr<SizeF> size,intrusive_ptr<PdfMargins> margins);
    /*
    <summary>
        Creates a new page of the specified size and with the specified margins
            and adds it to the collection.
    </summary>
    <param name="size">The size of the new page.</param>
    <param name="margins">The margins of the new page.</param>
    <param name="rotation">The rotation of the new page.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Add (intrusive_ptr<SizeF> size,intrusive_ptr<PdfMargins> margins,PdfPageRotateAngle rotation);
    /*
    <summary>
        Creates a new page of the specified size and with the specified margins
            and adds it to the collection.
    </summary>
    <param name="size">The size of the page.</param>
    <param name="margins">The margins of the page.</param>
    <param name="rotation">The rotation of the new page.</param>
    <param name="orientation">The orientation of the new page.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Add (intrusive_ptr<SizeF> size,intrusive_ptr<PdfMargins> margins,PdfPageRotateAngle rotation,PdfPageOrientation orientation);
    /*
    <summary>
        Creates a new page and inserts it at the specified index.
    </summary>
    <param name="index">The index.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Insert (int index);
    /*
    <summary>
        Creates a new page and inserts it at the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="size">The size of the page.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Insert (int index,intrusive_ptr<SizeF> size);
    /*
    <summary>
        Creates a new page and inserts it at the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="size">The size of the page.</param>
    <param name="margins">The margins of the page.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Insert (int index,intrusive_ptr<SizeF> size,intrusive_ptr<PdfMargins> margins);
    /*
    <summary>
        Creates a new page and inserts it at the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="size">The size of the page.</param>
    <param name="margins">The margins of the page.</param>
    <param name="rotation">The rotation of the new page.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Insert (int index,intrusive_ptr<SizeF> size,intrusive_ptr<PdfMargins> margins,PdfPageRotateAngle rotation);
    /*
    <summary>
        Removes the page at the given specified index.
    </summary>
    <param name="index"> Index of the page.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Removes the specified page.
    </summary>
    <param name="page">The page to be remove.</param>
    */
    void Remove (intrusive_ptr<PdfPageBase> page);
    /*
    <summary>
        ReArrange the Pages in the Loaded Document.
    </summary>
    <param name="orderArray">The page sequence to arrange the pages.</param>
    */
    void ReArrange (std::vector<int> orderArray);
    /*
    <summary>
        Creates a new page and inserts it at the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="size">The size of the page.</param>
    <param name="margins">The margins of the page.</param>
    <param name="rotation">The rotation of the new page.</param>
    <param name="orientation">The orientation of the new page.</param>
    <returns>The created page.</returns>
    */
    intrusive_ptr<PdfPageBase> Insert (int index,intrusive_ptr<SizeF> size,intrusive_ptr<PdfMargins> margins,PdfPageRotateAngle rotation,PdfPageOrientation orientation,bool existsPage);
    /*

    */
    intrusive_ptr<PdfPageBase> Insert (int index,intrusive_ptr<PdfNewPage> page,intrusive_ptr<PdfPageSettings> settings,bool existsPage);
    /*

    */
    intrusive_ptr<PdfPageBase> Insert (int index,intrusive_ptr<PdfPageSettings> settings,bool existsPage);
    /*
    <summary>
        Gets the index of the page in the document.
    </summary>
    <param name="page">The current page.</param>
    <returns>Index of the page in the document if exists, -1 otherwise.</returns>
    */
    int IndexOf (intrusive_ptr<PdfPageBase> page);
    /*

    */
    //virtual System.Collections.IEnumerator GetEnumerator ();
private:
};
}}