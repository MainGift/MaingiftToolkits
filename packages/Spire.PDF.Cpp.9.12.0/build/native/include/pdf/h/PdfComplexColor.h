#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the extended color, based on a complex colorspace. 
    </summary>
*/
class EXPORTS PdfComplexColor : public virtual Object
{
public:
    /*
    <summary>
        Gets the Colorspace
    </summary>
    */
    intrusive_ptr<PdfColorSpaces> GetColorSpace ();
private:
};
}}