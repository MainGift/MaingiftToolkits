#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The attribute information is held in one or more attribute objects
            associated with the structure element.
    </summary>
*/
class EXPORTS PdfStructureAttributes : public virtual Object
{
public:
    /*

    */
    intrusive_ptr<PdfAttributeOwner> GetOwner ();
    /*
    <summary>
        Get the attribute value.
    </summary>
    <param name="key">The attribute key.</param>
    <returns>The attribute value.</returns>
    */
    LPCWSTR_S GetNameValue (LPCWSTR_S key);
    /*
    <summary>
        Set attribute value.
    </summary>
    <param name="key">The attribute key.</param>
    <param name="value">The attribute value.</param>
    */
    void SetNameValue (LPCWSTR_S key,LPCWSTR_S value);
    /*
    <summary>
        Get the attribute value.
    </summary>
    <param name="key">The attribute key.</param>
    <returns>The attribute value.</returns>
    */
    std::vector<LPCWSTR_S> GetNameArrayValue (LPCWSTR_S key);
    /*
    <summary>
        Set attribute value.
    </summary>
    <param name="key">The attribute key.</param>
    <param name="value">The attribute value.</param>
    */
    void SetNameArrayValue (LPCWSTR_S key,std::vector<LPCWSTR_S> value);
    /*
    <summary>
        Get the attribute value.
    </summary>
    <param name="key">The attribute key.</param>
    <returns>The attribute value.</returns>
    */
    //System.Nullable`1[[System.Single, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetNumberValue (LPCWSTR_S key);
    /*
    <summary>
        Set attribute value.
    </summary>
    <param name="key">The attribute key.</param>
    <param name="value">The attribute value.</param>
    */
    //void SetNumberValue (LPCWSTR_S key,System.Nullable`1[[System.Single, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
    /*
    <summary>
        Get the attribute value.
    </summary>
    <param name="key">The attribute key.</param>
    <returns>The attribute value.</returns>
    */
    //std::vector<System.Nullable`1[[System.Single, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]]> GetNumberArrayValue (LPCWSTR_S key);
    /*
    <summary>
        Set attribute value.
    </summary>
    <param name="key">The attribute key.</param>
    <param name="value">The attribute value.</param>
    */
    //void SetNumberArrayValue (LPCWSTR_S key,std::vector<System.Nullable`1[[System.Single, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]]> value);
private:
};
}}