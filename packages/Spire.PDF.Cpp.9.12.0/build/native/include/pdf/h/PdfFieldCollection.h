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
        Represents collection of the Pdf fields.
    </summary>
*/
class EXPORTS PdfFieldCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    virtual intrusive_ptr<PdfField> GetItem (int index);
    /*
    <summary>
        Gets the  with thier field name.
    </summary>
    */
    intrusive_ptr<PdfField> GetItem (LPCWSTR_S name);
    /*
    <summary>
        Adds the specified field.
    </summary>
    <param name="field">The field item which is added in the PDF form.</param>
    <returns>The field to be added on the page. </returns>
    */
    int Add (intrusive_ptr<PdfField> field);
    /*
    <summary>
        Inserts the the field at the specified index.
    </summary>
    <param name="index">The index of the field.</param>
    <param name="field">The field which should be inserted at the specified index.</param>
    */
    void Insert (int index,intrusive_ptr<PdfField> field);
    /*
    <summary>
        Determines whether field is contained within the collection.
    </summary>
    <param name="field">Check whether  object is present in the field collection or not.</param>
    <returns>
  <c>true</c> if field is present in the collection, otherwise, <c>false</c>.
            </returns>
    */
    bool Contains (intrusive_ptr<PdfField> field);
    /*
    <summary>
        Gets the index of the field.
    </summary>
    <param name="field">The  object whose index is requested.</param>
    <returns>Index of the field in collection.</returns>
    */
    int IndexOf (intrusive_ptr<PdfField> field);
    /*
    <summary>
        Removes the specified field in the collection.
    </summary>
    <param name="field">The  object to be removed from collection.</param>
    */
    void Remove (intrusive_ptr<PdfField> field);
    /*
    <summary>
        Removes field at the specified position.
    </summary>
    <param name="index">The index where to remove the item.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Clears the form field collection.
    </summary>
    */
    void Clear ();
private:
};
}}