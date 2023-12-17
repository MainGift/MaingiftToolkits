#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Manipulates pages within a section.
    </summary>
*/
class EXPORTS PdfSectionPageCollection : public virtual Object
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    intrusive_ptr<PdfNewPage> GetItem (int index);
    /*
    <summary>
        Gets the count of the pages.
    </summary>
    */
    int GetCount ();
    /*
    <summary>
        Creates a new page and adds it into the collection.
    </summary>
    <returns>The new page.</returns>
    */
    intrusive_ptr<PdfNewPage> Add ();
    /*
    <summary>
        Adds a page into collection.
    </summary>
    <param name="page">The page.</param>
    */
    void Add (intrusive_ptr<PdfNewPage> page);
    /*
    <summary>
        Inserts a page at the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="page">The page.</param>
    */
    void Insert (int index,intrusive_ptr<PdfNewPage> page);
    /*
    <summary>
        Returns the index of the specified page.
    </summary>
    <param name="page">The page.</param>
    <returns>The index of the page.</returns>
    */
    int IndexOf (intrusive_ptr<PdfNewPage> page);
    /*
    <summary>
        Determines whether the specified page is within the collection.
    </summary>
    <param name="page">The page.</param>
    <returns>
  <c>true</c> if the collection contains the specified page; otherwise, <c>false</c>.
            </returns>
    */
    bool Contains (intrusive_ptr<PdfNewPage> page);
    /*
    <summary>
        Removes the specified page.
    </summary>
    <param name="page">The page.</param>
    */
    void Remove (intrusive_ptr<PdfNewPage> page);
    /*
    <summary>
        Removes a page at the index specified.
    </summary>
    <param name="index">The index.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Clears this collection.
    </summary>
    */
    void Clear ();
private:
};
}}