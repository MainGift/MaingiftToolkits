#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded markup annotation class.
    </summary>
*/
class EXPORTS PdfMarkUpAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the intent
    </summary>
    */
    LPCWSTR_S GetIntent ();
    /*

    */
    void SetIntent (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the annotation's author.
    </summary>
    */
    LPCWSTR_S GetAuthor ();
    /*

    */
    void SetAuthor (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the date and time when the annotation was created.
    </summary>
    */
    intrusive_ptr<DateTime> GetCreationDate ();
    /*

    */
    void SetCreationDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets or sets the annotation's subject.
    </summary>
    */
    LPCWSTR_S GetSubject ();
    /*

    */
    void SetSubject (LPCWSTR_S value);
    /*
    <summary>
        Gets the opacity value to be used.
    </summary>
    */
    float GetOpacity ();
    /*
    <summary>
        Sets the name of the annotation,the entry is deleted by default when the input
            value is an empty string
    </summary>
    <param name="text">New name of the annotation.</param>
    */
    void SetTitleText (LPCWSTR_S text);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}