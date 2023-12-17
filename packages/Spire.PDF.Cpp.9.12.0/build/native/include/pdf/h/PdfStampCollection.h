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
        A collection of stamps that are applied to the page templates.
    </summary>
*/
class EXPORTS PdfStampCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets a stamp element by its index.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetItem (int index);
    /*
    <summary>
        Adds a stamp element to the collection.
    </summary>
    <param name="template">The stamp element.</param>
    <returns>The index of the stamp element.</returns>
    */
    int Add (intrusive_ptr<PdfPageTemplateElement> pdftemplate);
    /*
    <summary>
        Creates a stamp element and adds it to the collection.
    </summary>
    <param name="x">X co-ordinate of the stamp.</param>
    <param name="y">Y co-ordinate of the stamp.</param>
    <param name="width">Width of the stamp.</param>
    <param name="height">Height of the stamp.</param>
    <returns>The created stamp element.</returns>
    */
    intrusive_ptr<PdfPageTemplateElement> Add (float x,float y,float width,float height);
    /*
    <summary>
        Checks whether the stamp element exists in the collection.
    </summary>
    <param name="template">Stamp element.</param>
    <returns>True - if stamp element exists in the collection, False otherwise.</returns>
    */
    bool Contains (intrusive_ptr<PdfPageTemplateElement> pdftemplate);
    /*
    <summary>
        Inserts a stamp element to the collection at the specified position.
    </summary>
    <param name="index">The index of the stamp in the collection.</param>
    <param name="template">The stamp element.</param>
    */
    void Insert (int index,intrusive_ptr<PdfPageTemplateElement> pdftemplate);
    /*
    <summary>
        Removes the stamp element from the collection.
    </summary>
    <param name="template">The stamp element.</param>
    */
    void Remove (intrusive_ptr<PdfPageTemplateElement> pdftemplate);
    /*
    <summary>
        Removes a stamp element from the specified position in the collection.
    </summary>
    <param name="index">The index of the stamp in the collection.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Cleares the collection.
    </summary>
    */
    void Clear ();
    /*

    */
    //System.Collections.IEnumerator GetEnumerator ();
private:
};
}}