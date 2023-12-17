#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        A class containing the information about the document.
    </summary>
*/
class EXPORTS PdfDocumentInformation : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the creation date.
    </summary>
    */
    intrusive_ptr<DateTime> GetCreationDate ();
    /*

    */
    void SetCreationDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets or sets the modification date.
    </summary>
    */
    intrusive_ptr<DateTime> GetModificationDate ();
    /*

    */
    void SetModificationDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets or sets the title.
    </summary>
    */
    LPCWSTR_S GetTitle ();
    /*

    */
    void SetTitle (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the author.
    </summary>
    */
    LPCWSTR_S GetAuthor ();
    /*

    */
    void SetAuthor (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the subject.
    </summary>
    */
    LPCWSTR_S GetSubject ();
    /*

    */
    void SetSubject (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the keywords.
    </summary>
    */
    LPCWSTR_S GetKeywords ();
    /*

    */
    void SetKeywords (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the creator.
    </summary>
    */
    LPCWSTR_S GetCreator ();
    /*

    */
    void SetCreator (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the producer.
    </summary>
    */
    LPCWSTR_S GetProducer ();
    /*

    */
    void SetProducer (LPCWSTR_S value);
    /*

    */
    //void RemoveCustomerDefined (LPCWSTR_S key);
    /*
    <summary>
        Remove custom property.
    </summary>
    <param name="name">
            The property name.
            Name not be Title,Author,Subject,Keywords,Creator,Producer,CreationDate,ModificationDate,Trap.
    </param>
    */
    void RemoveCustomProperty (LPCWSTR_S name);
    /*

    */
    //bool SetCustomerDefined (LPCWSTR_S key,LPCWSTR_S value);
    /*
    <summary>
        Set custom property.
    </summary>
    <param name="name">
            The property name.
            Name not be Title,Author,Subject,Keywords,Creator,Producer,CreationDate,ModificationDate,Trap.
    </param>
    <param name="value">The property value.</param>
    */
    void SetCustomProperty (LPCWSTR_S name,LPCWSTR_S value);
    /*

    */
    LPCWSTR_S GetCustomerDefined (LPCWSTR_S key);
    /*
    <summary>
        Get custom property.
    </summary>
    <param name="name">
            The property name.
            Name not be Title,Author,Subject,Keywords,Creator,Producer,CreationDate,ModificationDate,Trap.
    </param>
    <returns>The property value.null if property not exist.</returns>
    */
    LPCWSTR_S GetCustomProperty (LPCWSTR_S name);
    /*

    */
    //System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetAllCustomerDefined ();
    /*
    <summary>
        Get all custom properties.
    </summary>
    <returns>The all properties.</returns>
    */
    //System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetAllCustomProperties ();
    /*

    */
    //intrusive_ptr<XmpMetadata> GetMetaData ();
private:
};
}}