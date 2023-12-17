#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        This class plays two roles: it's a base class for all bookmarks
            and it's a root of a bookmarks tree.
    </summary>
*/
class EXPORTS PdfBookmarkCollection : public virtual Object
{
public:
    /*
    <summary>
        Gets number of the elements in the collection.
    </summary>
    */
    int GetCount ();
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
<value>index</value>
    */
    intrusive_ptr<PdfBookmark> GetItem (int index);
    /*
    <summary>
        Creates and adds an outline.
    </summary>
    <param name="title">The title of the new outline.</param>
    <returns>The outline created.</returns>
    */
    intrusive_ptr<PdfBookmark> Add (LPCWSTR_S title);
    /*
    <summary>
        Determines whether the specified outline is a direct descendant of the outline base.
    </summary>
    <param name="outline">The outline.</param>
    <returns>
  <c>true</c> if the specified outline is a direct descendant of the outline base;
            otherwise, <c>false</c>.
            </returns>
    */
    bool Contains (intrusive_ptr<PdfBookmark> outline);
    /*
    <summary>
        Removes the specified bookmark from the document.
    </summary>
    <param name="title">The title of the outline.</param>
    */
    void Remove (LPCWSTR_S title);
    /*
    <summary>
        Removes the specified bookmark from the document at the specified index.
    </summary>
    <param name="index">The index.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Removes all the bookmark from the document.
    </summary>
    */
    void Clear ();
    /*
    <summary>
        Inserts a new outline at the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="title">The title of the new outline.</param>
    <returns>The new outline.</returns>
    */
    intrusive_ptr<PdfBookmark> Insert (int index,LPCWSTR_S title);
private:
};
}}