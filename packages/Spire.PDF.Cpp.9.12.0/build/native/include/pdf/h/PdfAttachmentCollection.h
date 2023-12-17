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
        Represents a collection of the attachment objects.
    </summary>
*/
class EXPORTS PdfAttachmentCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets attachment by its index in the collection.
    </summary>
    <param name="index">Index of the attachment.</param>
    <returns>Attachment object by its index in the collection.</returns>
    */
    intrusive_ptr<PdfAttachment> GetItem (int index);
    /*
    <summary>
        Adds the specified attachment.
    </summary>
    <param name="attachment">The attachment.</param>
    <returns>Position of the inserted attachment.</returns>
    */
    int Add (intrusive_ptr<PdfAttachment> attachment);
    /*
    <summary>
        Adds the specified attachment.
    </summary>
    <param name="attachment">The attachment.</param>
    <param name="associatedDocument">The associated document.</param>
    <param name="association">The relationship between attachment and associated document.</param>
    <returns>Position of the inserted attachment.</returns>
    */
    int Add (intrusive_ptr<PdfAttachment> attachment,intrusive_ptr<PdfDocument> associatedDocument,PdfAttachmentRelationship association);
    /*
    <summary>
        Inserts the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="attachment">The attachment.</param>
    */
    void Insert (int index,intrusive_ptr<PdfAttachment> attachment);
    /*
    <summary>
        Removes the specified attachment.
    </summary>
    <param name="attachment">The attachment.</param>
    */
    void Remove (intrusive_ptr<PdfAttachment> attachment);
    /*
    <summary>
        Removes attachment at the specified index.
    </summary>
    <param name="index">The index.</param>
    */
    void RemoveAt (int index);
    /*
    <summary>
        Indexes the of attachment.
    </summary>
    <param name="attachment">The attachment.</param>
    <returns></returns>
    */
    int IndexOf (intrusive_ptr<PdfAttachment> attachment);
    /*
    <summary>
        Determines whether 
    </summary>
    <param name="attachment">The attachment.</param>
    <returns>
            if it contains the specified attachment, set to <c>true</c>.
            </returns>
    */
    bool Contains (intrusive_ptr<PdfAttachment> attachment);
    /*
    <summary>
        Clears the collection.
    </summary>
    */
    void Clear ();
private:
};
}}