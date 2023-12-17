#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents XMP metadata of the document.
    </summary>
*/
class EXPORTS XmpMetadata : public virtual Object
{
public:
//    /*
//    <summary>
//        Gets XMP data in XML format.
//    </summary>
//    */
//    //System.Xml.XmlDocument GetXmlData ();
//    /*
//    <summary>
//        Gets namespace manager of the Xmp metadata.
//    </summary>
//    */
//    //System.Xml.XmlNamespaceManager GetNamespaceManager ();
//    /*
//    <summary>
//        Adds schema to the XMP in XML format.
//    </summary>
//    <param name="schema">XMP schema in XML format.</param>
//<remarks>If XMP already contains such schema - there will be two equal schemas at the xmp.</remarks>
//    */
//    //void Add (System.Xml.XmlElement schema);
//    /*
//    <summary>
//        Return title if exists; otherwise return null
//    </summary>
//    <returns></returns>
//    */
//    LPCWSTR_S GetTitle ();
//    /*
//    <summary>
//        Return subject if exists; otherwise return null
//    </summary>
//    <returns></returns>
//    */
//    LPCWSTR_S GetSubject ();
//    /*
//    <summary>
//        Return author if exists; otherwise return null
//    </summary>
//    <returns></returns>
//    */
//    LPCWSTR_S GetAuthor ();
//    /*
//    <summary>
//        Return producer if exists; otherwise return null
//    </summary>
//    <returns></returns>
//    */
//    LPCWSTR_S GetProducer ();
//    /*
//    <summary>
//        return keywords if exists; otherwise return null
//    </summary>
//    <returns></returns>
//    */
//    LPCWSTR_S GetKeywords ();
//    /*
//    <summary>
//        Return specified custom field value if exists; otherwise return null
//    </summary>
//    <param name="fieldName"></param>
//    <returns></returns>
//    */
//    LPCWSTR_S GetCustomProperty (LPCWSTR_S fieldName);
//    /*
//    <summary>
//        Return all custom properties if exsit; otherwise return empty Dictionary
//    </summary>
//    <returns></returns>
//    */
//    //System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetAllCustomProperties ();
//    /*
//    <summary>
//        Return create date if exists; otherwise return default DateTime
//    </summary>
//    <returns></returns>
//    */
//    intrusive_ptr<DateTime> GetCreateDate ();
//    /*
//    <summary>
//        Return creator if exists; otherwise return null
//    </summary>
//    <returns></returns>
//    */
//    LPCWSTR_S GetCreator ();
//    /*
//    <summary>
//        Return modify date if exists; otherwise return System.DateTime.MinValue
//    </summary>
//    <returns></returns>
//    */
//    intrusive_ptr<DateTime> GetModifyDate ();
//    /*
//    <summary>
//        Set title to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="value"></param>
//    */
//    void SetTitle (LPCWSTR_S value);
//    /*
//    <summary>
//        Set subject to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="value"></param>
//    */
//    void SetSubject (LPCWSTR_S value);
//    /*
//    <summary>
//        Set subject to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="value"></param>
//    */
//    void SetAuthor (LPCWSTR_S value);
//    /*
//    <summary>
//        Set producer to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="value"></param>
//    */
//    void SetProducer (LPCWSTR_S value);
//    /*
//    <summary>
//        Set keywords to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="value"></param>
//    */
//    void SetKeywords (LPCWSTR_S value);
//    /*
//    <summary>
//        Set custom property to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="field"></param>
//    <param name="value"></param>
//    */
//    void SetCustomProperty (LPCWSTR_S field,LPCWSTR_S value);
//    /*
//    <summary>
//        Set title to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="dt"></param>
//    */
//    void SetCreateDate (intrusive_ptr<DateTime> dt);
//    /*
//    <summary>
//        Set Creator to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="value"></param>
//    */
//    void SetCreator (LPCWSTR_S value);
//    /*
//    <summary>
//        Set ModifyDates to xmpmeta; if value is null, remove the node; if the node is null, create the node
//    </summary>
//    <param name="dt"></param>
//    */
//    void SetModifyDate (intrusive_ptr<DateTime> dt);
private:
};
}}