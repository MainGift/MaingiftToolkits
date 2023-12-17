#pragma once
#include "pch.h"
#include "XfaField.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents XML Forms Architecture (XFA).
    </summary>
*/
class EXPORTS XFAForm : public virtual Object
{
public:
    /*
    <summary>
        XFA Template.
    </summary>
    */
    //System.Xml.XmlNode GetXmlTemplate ();
    /*
    <summary>
        XFA Datasets.
    </summary>
    */
    //System.Xml.XmlNode GetXmlDatasets ();
    /*
    <summary>
        XFA Config.
    </summary>
    */
    //System.Xml.XmlNode GetXmlConfig ();
    /*
    <summary>
        XML Data Package
    </summary>
    */
    //System.Xml.XmlDocument GetXmlDataPackage ();
    /*
    <summary>
        Gets of sets data node value.deprecated to use,instead use xfaField to set field value.
    </summary>
    */
    LPCWSTR_S GetItem (LPCWSTR_S XmlPath);
    /*

    */
    void SetItem (LPCWSTR_S XmlPath,LPCWSTR_S value);
    /*

    */
    //System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetFields ();
    std::vector<LPCWSTR_S> GetFields();
    /*

    */
    //System.Collections.Generic.List`1[[Spire.Pdf.Widget.XfaField, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetXfaFields ();
    std::vector<intrusive_ptr<XfaField>> GetXfaFields();
    /*

    */
    int GetCount ();
    /*
    <summary>
        Returns XML node of field tempalte. 
    </summary>
    */
    //System.Xml.XmlNode GetTemplate (LPCWSTR_S fieldName);
    /*

    */
    bool CheckFieldExists (LPCWSTR_S fieldName);
    /*

    */
    //System.Xml.XmlNode GetDataSets ();
    /*

    */
    //System.Xml.XmlNode GetConfig ();
    /*
    <summary>
        Added by Henry Zhou. 
            To get the xfaField through its name. Notes: the param 'name' is the name have been midified by codes instead of originals.
    </summary>
    <param name="name"></param>
    <returns></returns>
    */
    intrusive_ptr<XfaField> getField (LPCWSTR_S name);
    /*

    */
    //static System.Char FieldNameEscape ();
private:
};
}}