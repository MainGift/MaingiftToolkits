#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        This is the interface of pre and post processors
    </summary>
<author>linwei</author>
*/
class EXPORTS IProcessor 
{
public:
    /*

    */
    virtual bool transform ()=0;
    /*

    */
    virtual LPCWSTR_S GetInputFilename ()=0;
    /*

    */
    virtual void SetInputFilename (LPCWSTR_S value)=0;
    /*

    */
    virtual LPCWSTR_S GetOutputFilename ()=0;
    /*

    */
    virtual void SetOutputFilename (LPCWSTR_S value)=0;
    /*

    */
    virtual LPCWSTR_S GetOriginalFilename ()=0;
    /*

    */
    virtual void SetOriginalFilename (LPCWSTR_S value)=0;
    /*

    */
    virtual LPCWSTR_S GetResourceDir ()=0;
    /*

    */
    virtual void SetResourceDir (LPCWSTR_S value)=0;
private:
};
}}