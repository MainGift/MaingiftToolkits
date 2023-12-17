#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAnnotationCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded annotation colllection.
    </summary>
*/
class EXPORTS PdfAnnotationWidgetCollection : public virtual PdfAnnotationCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    virtual intrusive_ptr<PdfAnnotation> GetItem (int index);
    /*
    <summary>
        Represents the annotation with specified name.
    </summary>
    <param name="name">The specified annotation name.</param>
    */
    intrusive_ptr<PdfAnnotation> GetItem (LPCWSTR_S text);
    /*
    <summary>
        Gets or sets the page.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPageWidget ();
    /*

    */
    void SetPageWidget (intrusive_ptr<PdfPageBase> value);
    /*
    <summary>
        Adds annotation to collection.
    </summary>
    <param name="annotation">Annotation to be added to collection.</param>
    <returns>Position of the annotation in collection.</returns>
    */
    virtual int Add (intrusive_ptr<PdfAnnotation> annotation);
private:
};
}}