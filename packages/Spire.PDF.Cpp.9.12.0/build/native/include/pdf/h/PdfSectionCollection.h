#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The collection of the sections.
    </summary>
*/
class EXPORTS PdfSectionCollection : public virtual Object
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
<value></value>
    */
    intrusive_ptr<PdfSection> GetItem (int index);
    /*
    <summary>
        Gets the count.
    </summary>
<value>The count.</value>
    */
    int GetCount ();
    /*
    <summary>
        Creates a section and adds it to the collection.
    </summary>
    <returns>Created section object.</returns>
    */
    intrusive_ptr<PdfSection> Add (intrusive_ptr<PdfPageSettings> pageSettings);
    /*

    */
    intrusive_ptr<PdfSection> Add ();
    /*
    <summary>
        Determines the index of the section.
    </summary>
    <param name="section">The section.</param>
    <returns>The index of the section.</returns>
    */
    int IndexOf (intrusive_ptr<PdfSection> section);
    /*
    <summary>
        Inserts the section at the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="section">The section.</param>
    */
    void Insert (int index,intrusive_ptr<PdfSection> section);
    /*
    <summary>
        Checks whether the collection contains the section.
    </summary>
    <param name="section">The section object.</param>
    <returns>True - if the sections belongs to the collection, False otherwise.</returns>
    */
    bool Contains (intrusive_ptr<PdfSection> section);
    /*

    */
    //virtual System.Collections.IEnumerator GetEnumerator ();
private:
};
}}