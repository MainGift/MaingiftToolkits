#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        the pdf document convert to docx document,set the options
    </summary>
*/
class EXPORTS DocxOptions : public virtual Object
{
public:
    // <summary>
    // The document¡¯s title.
    // </summary>
    LPCWSTR_S GetTitle ();
    /*

    */
    void SetTitle (LPCWSTR_S value);
    // <summary>
    // The subject of the document.
    // </summary>
    LPCWSTR_S GetSubject ();
    /*

    */
    void SetSubject (LPCWSTR_S value);
    // <summary>
    // Gets the tags of the document.
    // </summary>
    LPCWSTR_S GetTags ();
    // <summary>
    // Sets the tags of the document.
    // </summary>
    void SetTags (LPCWSTR_S value);
    // <summary>
    // Gets the category of the document.
    // </summary>
    LPCWSTR_S GetCategories ();
    // <summary>
    // Sets the category of the document.
    // </summary>
    void SetCategories (LPCWSTR_S value);
    // <summary>
    // the comment of the document.
    // </summary>
    LPCWSTR_S GetCommments ();
    /*

    */
    void SetCommments (LPCWSTR_S value);
    // <summary>
    // The name of the person who created the document.
    // </summary>
    LPCWSTR_S GetAuthors ();
    /*

    */
    void SetAuthors (LPCWSTR_S value);
    // <summary>
    // The name of the person who modified the document last time.
    // </summary>
    LPCWSTR_S GetLastSavedBy ();
    /*

    */
    void SetLastSavedBy (LPCWSTR_S value);
    // <summary>
    // Gets the document revision number. 
    // </summary>
    int GetRevision ();
    // <summary>
    // Sets the document revision number. 
    // </summary>
    void SetRevision (int value);
    /*

    */
    LPCWSTR_S GetVersion ();
    /*

    */
    void SetVersion (LPCWSTR_S value);
    // <summary>
    // The program that creates the document.
    // </summary>
    LPCWSTR_S GetProgramName ();
    /*

    */
    void SetProgramName (LPCWSTR_S value);
    // <summary>
    // Gets the category of the document.
    // </summary>
    LPCWSTR_S GetCompany ();
    // <summary>
    // Sets the category of the document.
    // </summary>
    void SetCompany (LPCWSTR_S value);
    // <summary>
    // Gets who is the document manager.
    // </summary>
    LPCWSTR_S GetManager ();
    // <summary>
    // Sets who is the document manager.
    // </summary>
    void SetManager (LPCWSTR_S value);
private:
};
}}