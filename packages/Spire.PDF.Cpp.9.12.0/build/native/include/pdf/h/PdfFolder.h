#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        A folder for the purpose of organizing files into a hierarchical structure.
            The structure is represented by a tree with a single root folder acting as
            the common ancestor for all other folders and files in the collection.
    </summary>
*/
class EXPORTS PdfFolder : public virtual Object
{
public:
    /*
    <summary>
        (Required;ExtensionLevel3)A file name representing the name of the
            folder.Two sibling folders shall not share the same name following
            case normalization.
            Note:Descriptions of file name and case normalization follow this
            table.
    </summary>
    */
    LPCWSTR_S GetName ();
    /*
    <summary>
        Add a local file into this folder.
    </summary>
    <param name="filePath">The local file path.</param>
    */
    void AddFile (LPCWSTR_S filePath);
    /*
    <summary>
        Add a stream into this folder.
    </summary>
    <param name="fileName">The file name of the stream.</param>
    <param name="stream">The stream.</param>
    */
    void AddFile (LPCWSTR_S fileName,intrusive_ptr<Stream> stream);
    /*
    <summary>
        Delete the file in this folder.
    </summary>
    <param name="file">The file.</param>
    */
    void DeleteFile (intrusive_ptr<PdfAttachment> file);
    /*
    <summary>
        Get the files in this folder.
    </summary>
    <returns>The file list in this folder.</returns>
    */
    //System.Collections.Generic.List`1[[Spire.Pdf.Attachments.PdfAttachment, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetFiles ();
    /*
    <summary>
        Create an subfolder.
    </summary>
    <param name="folderName">The subfolder name.</param>
    <returns>The PdfFolder.</returns>
    */
    intrusive_ptr<PdfFolder> CreateSubfolder (LPCWSTR_S folderName);
    /*
    <summary>
        Delete an subfolder.
    </summary>
    <param name="folderName">The subfolder name.</param>
    */
    void DeleteSubfolder (LPCWSTR_S folderName);
    /*
    <summary>
        Get the subfolders of this folder.
    </summary>
    <returns>The subfolder list in this folder.</returns>
    */
    //System.Collections.Generic.List`1[[Spire.Pdf.Collections.PdfFolder, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetSubfolders ();
    /*
    <summary>
        Whether has subfolders.
    </summary>
    <returns>True or False</returns>
    */
    bool HasSubfolders ();
    /*
    <summary>
        Clear this folder.
    </summary>
    */
    void Clear ();
    /*
    <summary>
        Add local folder into this folder.
    </summary>
    <param name="folderPath">The local folder path.</param>
    */
    void AddExistFolder (LPCWSTR_S folderPath);
private:
};
}}