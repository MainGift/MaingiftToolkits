#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Translator factory which can judeg the input file type and initialize
    </summary>
<author>linyaohu</author>
*/
class EXPORTS TranslatorFactory : public virtual Object
{
public:
    /*
    <summary>
        check uof file type
    </summary>
    <param name="srcFileName">source file name</param>
    <returns>document type</returns>
    */
    static DocType CheckUOFFileType (LPCWSTR_S srcFileName);
private:
};
}}