#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        interface for compression adapter
    </summary>
<author>linwei</author>
*/
class EXPORTS IUofCompressAdapter 
{
public:
    /*
    <summary>
        compress or decompress
    </summary>
    <returns>true if succeeded</returns>
    <returns>false if failed</returns>
<exception cref="T:System.Exception">exceptions happen</exception>
    */
    virtual bool Transform ()=0;
    /*
    <summary>
        input file name
    </summary>
    */
    virtual LPCWSTR_S GetInputFilename ()=0;
    /*

    */
    virtual void SetInputFilename (LPCWSTR_S value)=0;
    /*
    <summary>
        output file name
    </summary>
    */
    virtual LPCWSTR_S GetOutputFilename ()=0;
    /*

    */
    virtual void SetOutputFilename (LPCWSTR_S value)=0;
private:
};
}}