#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the pdf structure element.
    </summary>
*/
class EXPORTS PdfStructureElement : public virtual Object
{
public:
    /*
    <summary>
        The title of the structure element.
    </summary>
    */
    LPCWSTR_S GetTitle ();
    /*

    */
    void SetTitle (LPCWSTR_S value);
    /*
    <summary>
        An alternate description of the structure element and
            its children in human-readable form, which is useful 
            when extracting the document’s contents in support of 
            accessibility to users with disabilities or for other purposes.
    </summary>
    */
    LPCWSTR_S GetAlt ();
    /*

    */
    void SetAlt (LPCWSTR_S value);
    /*
    <summary>
        Text that is an exact replacement for the structure element 
            and its children. This replacement text (which should apply 
            to as small a piece of content as possible) is useful when 
            extracting the document’s contents in support of accessibility 
            to users with disabilities or for other purposes.
    </summary>
    */
    LPCWSTR_S GetActualText ();
    /*

    */
    void SetActualText (LPCWSTR_S value);
    /*
    <summary>
        Get the children of this structure element.
    </summary>
    <returns>
            The children of this structure element.
            The value of list may be one of the following objects:
            structure element or marked-content identifier or 
            marked-content reference, object reference.
            </returns>
    */
    //System.Collections.Generic.List`1[[Spire.Pdf.Interchange.TaggedPdf.IStructureNode, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetChildNodes ();
    /*
    <summary>
        Append structure type element.
    </summary>
    <param name="structureType">The structure type.</param>
    <returns>The pdf structure type element.</returns>
    */
    intrusive_ptr<PdfStructureElement> AppendChildElement (LPCWSTR_S structureType);
    /*
    <summary>
        Get all owner's attributes.
    </summary>
    <returns></returns>
    */
    //System.Collections.Generic.IEnumerable`1[[Spire.Pdf.Interchange.TaggedPdf.PdfStructureAttributes, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetAttributes ();
    /*
    <summary>
        Get the owner's attributes.
    </summary>
    <param name="owner">The owner.</param>
    <returns>The owner's attributes.</returns>
    */
    intrusive_ptr<PdfStructureAttributes> GetAttributes (intrusive_ptr<PdfAttributeOwner> owner);
    /*
    <summary>
        Add the owner's attributes.
    </summary>
    <param name="owner">The owner.</param>
    <returns>The owner's attributes.</returns>
    */
    intrusive_ptr<PdfStructureAttributes> AddAttributes (intrusive_ptr<PdfAttributeOwner> owner);
    /*
    <summary>
        Begin a marked-content sequence of objects within the content stream.
    </summary>
    <param name="page">The pdf page.</param>
    */
    void BeginMarkedContent (intrusive_ptr<PdfPageBase> page);
    /*
    <summary>
        Begin a marked-content sequence of objects within the content stream.
    </summary>
    <param name="page">The pdf page.</param>
    <param name="artifactPropertyList">The artifact property list.</param>
    */
    void BeginMarkedContent (intrusive_ptr<PdfPageBase> page,intrusive_ptr<ArtifactPropertyList> artifactPropertyList);
    /*
    <summary>
        End a marked-content sequence of objects within the content stream.
    </summary>
    <param name="page">The pdf page.</param>
    */
    void EndMarkedContent (intrusive_ptr<PdfPageBase> page);
private:
};
}}