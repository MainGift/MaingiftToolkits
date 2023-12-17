#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#include "../h/IUOFTranslator.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        This is a abstract class base Translator, it provides common functions.
    </summary>
<author>linwei</author>
<modifier>linyaohu</modifier>
*/
class EXPORTS UOFTranslator : public virtual IUOFTranslator
{
public:
    /*

    */
    LPCWSTR_S GetFileGuidName (bool isOoxToUof,bool isInput);
    /*

    */
    //static System.Xml.XPath.XPathDocument GetXPathDoc (LPCWSTR_S xslname,LPCWSTR_S location);
    /*

    */
    //virtual void AddProgressMessageListener (System.EventHandler listener);
    /*

    */
    //virtual void AddFeedbackMessageListener (System.EventHandler listener);
    /*

    */
    virtual void UofToOox (intrusive_ptr<Stream> inputStream,intrusive_ptr<Stream> outputStream);
    /*

    */
    virtual void OoxToUof (intrusive_ptr<Stream> inputStream,intrusive_ptr<Stream> outputStream);
    /*
    <summary>
         get the embeded chart data
    </summary>
    <param name="chartTypeNode">chart type node (eg:c:barChart)</param>
    <param name="nm">name space</param>
    <returns>chart data</returns>
    */
    //static System.Data.DataTable GetChartData (System.Xml.XmlNode chartTypeNode,System.Xml.XmlNamespaceManager nm);
    /*
    <summary>
         get the series name
    </summary>
    <param name="series">series node</param>
    <param name="nm">name space</param>
    <returns>series name</returns>
    */
    //static std::vector<LPCWSTR_S> GetSeriesName (System.Xml.XmlNodeList series,System.Xml.XmlNamespaceManager nm);
    /*
    <summary>
         get the category name
    </summary>
    <param name="ser">series node</param>
    <param name="nm">name space</param>
    <returns>category name</returns>
    */
    //static std::vector<LPCWSTR_S> GetCategoryName (System.Xml.XmlNode ser,System.Xml.XmlNamespaceManager nm);
    /*
    <summary>
         get the series' name
    </summary>
    <param name="chartFile">chart xml file</param>
    <returns>series' name</returns>
    */
    std::vector<LPCWSTR_S> GetSeriesName (LPCWSTR_S chartFile);
    /*
    <summary>
        get the categories name
    </summary>
    <param name="chartFile">chart xml file</param>
    <returns>categories name</returns>
    */
    std::vector<LPCWSTR_S> GetCategoryName (LPCWSTR_S chartFile);
    /*
    <summary>
         Check the chart cotains how many chart Types (Combo type)
    </summary>
    <param name="xdoc">chart file</param>
    <param name="nm">name space manager</param>
    <returns>chart type nodes</returns>
    */
    //static System.Collections.Generic.LinkedList`1[[System.Xml.XmlNode, System.Xml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] ChkChartTypeNodes (System.Xml.XmlDocument xdoc,System.Xml.XmlNamespaceManager nm);
    /*
    <summary>
        get the title's text
    </summary>
    <param name="paragraphNode">a:p</param>
    <param name="nm">name sapce</param>
    <returns>title</returns>
    */
    //static LPCWSTR_S GetTitleText (System.Xml.XmlNode paragraphNode,System.Xml.XmlNamespaceManager nm);
    /*

    */
    //static bool ChkValueShownAsLabel (System.Xml.XmlNode dLbls,System.Xml.XmlNamespaceManager nm);
    /*

    */
    static LPCWSTR_S ASSEMBLY_PATH ();
private:
};
}}