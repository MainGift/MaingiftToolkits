#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#include "PdfFolder.h"
#include "PdfAttachment.h"
#include "CustomFieldType.h"
#include "FileRelatedFieldType.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        A collection specifies the viewing and organizational characteristics
            of portable collections.The intent of portable collections is to present,
            sort, and search collections of related document,such as email archives,
            photo collections, and engineering bidsets.
    </summary>
*/
class EXPORTS Collections_PdfCollection : public virtual Object
{
public:
    /*
    <summary>
        (Required if the collection has folders; ExtensionLevel3)
            An indirect reference to the folder dictionary that is the
            single common ancestor of all other folders in a portable
            collection.
    </summary>
    */
    intrusive_ptr<PdfFolder> GetFolders ();
    /*
    <summary>
        Get the document collection associated files
    </summary>
    */
    //System.Collections.Generic.List`1[[Spire.Pdf.Attachments.PdfAttachment, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetAssociatedFiles ();
    std::vector<intrusive_ptr<PdfAttachment>> GetAssociatedFiles ();
    /*
    <summary>
        Get the document collection associated field names
    </summary>
    */
    //System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetFieldNames ();
    /*
    <summary>
        Add a local file.
    </summary>
    <param name="filePath">The local file path.</param>
    */
    void AddFile (LPCWSTR_S filePath);
    /*
    <summary>
        Add a stream.
    </summary>
    <param name="fileName">The file name of the stream.</param>
    <param name="stream">The stream.</param>
    */
    void AddFile (LPCWSTR_S fileName,intrusive_ptr<Stream> stream);
    /*
    <summary>
        Add an attachment.
    </summary>
    <param name="attachment">The attachment.</param>
    */
    void AddAttachment (intrusive_ptr<PdfAttachment> attachment);
    /*
    <summary>
        Add a custom field.
    </summary>
    <param name="fieldName">Custom field name.</param>
    <param name="displayText">Custom field display name.</param>
    <param name="fieldType">Custom field type.</param>
    */
    void AddCustomField (LPCWSTR_S fieldName,LPCWSTR_S displayText,CustomFieldType fieldType);
    /*
    <summary>
        Add a file related field.
    </summary>
    <param name="fieldName">File related field name.</param>
    <param name="displayText">File related field display name.</param>
    <param name="fieldType">File related field type.</param>
    */
    void AddFileRelatedField (LPCWSTR_S fieldName,LPCWSTR_S displayText,FileRelatedFieldType fieldType);
    /*
    <summary>
        Sort embedded files with field names.
    </summary>
    <param name="fieldNames">The names of fields that the PDF viewer application
            uses to sort the items in the collection.</param>
    <param name="order">Specifies whether the items in the collection are sorted
            in ascending order.</param>
    */
    void Sort (std::vector<LPCWSTR_S> fieldNames, std::vector<bool> order);
    /*
    <summary>
        Clear all files and folders.
    </summary>
    */
    void Clear ();
private:
};
}}