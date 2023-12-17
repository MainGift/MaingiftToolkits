#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the pdf piece info can used to hold private application datas.
    </summary>
*/
class EXPORTS PdfPieceInfo : public virtual Object
{
public:
    PdfPieceInfo();
    /*
    <summary>
        Get the application datas.
    </summary>
    */
    //System.Collections.Generic.IDictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[Spire.Pdf.PdfApplicationData, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetApplicationDatas ();
    /*
    <summary>
        Add application data.
    </summary>
    <param name="applicationName">The application name</param>
    <param name="privateData">The private data</param>
    */
    void AddApplicationData (LPCWSTR_S applicationName,LPCWSTR_S privateData);
    /*
    <summary>
        Remove the application data.
    </summary>
    <param name="applicationName">The application name</param>
    */
    void RemoveApplicationData (LPCWSTR_S applicationName);
private:
};
}}