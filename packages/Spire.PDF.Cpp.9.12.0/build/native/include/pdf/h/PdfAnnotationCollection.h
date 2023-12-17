#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCollection.h"
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents collection of  objects.
    </summary>
*/
class EXPORTS PdfAnnotationCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  object at the specified position.
    </summary>
    <param name="index">The index value of the annotation in the collection. </param>
    <returns>Annotation object at the specified position.</returns>
    */
    virtual intrusive_ptr<PdfAnnotation> GetItem (int index);
    /*
    <summary>
        Adds a new annotation to collection. 
    </summary>
    <param name="annotation">The new annotation to be added to collection.</param>
    <returns>Position of the annotation in collection.</returns>
    */
    virtual int Add (intrusive_ptr<PdfAnnotation> annotation);
    /*
    <summary>
        Cleares the collection.
    </summary>
    */
    void Clear ();
    /*
    <summary>
        Searches the collection for the specified annotation. 
    </summary>
    <param name="annotation">The annotation to search for.</param>
    <returns>True, if annotation is contained in collection. Otherwise - false.</returns>
    */
    bool Contains (intrusive_ptr<PdfAnnotation> annotation);
    /*
    <summary>
        Searches the collection for the specified annotation. 
    </summary>
    <param name="annotation">The Annotation to search.</param>
    <returns>Index of the element in the collection, if exists, or -1 if the element does not exist in the collection.</returns>
    */
    int IndexOf (intrusive_ptr<PdfAnnotation> annotation);
    /*
    <summary>
        Inserts annotation to the collection at the specified index.
    </summary>
    <param name="index">Index where to insert the element.</param>
    <param name="annotation">The annotation to insert in the collection.</param>
    */
    void Insert (int index,intrusive_ptr<PdfAnnotation> annotation);
    /*
    <summary>
        Removes the element at the specified field.
    </summary>
    <param name="index">The index of the element to remove.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Removes the element from the collection. 
    </summary>
    <param name="field">The element to remove.</param>
    */
    void Remove (intrusive_ptr<PdfAnnotation> annot);
private:
    intrusive_ptr<PdfAnnotation> Create(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
};
}}