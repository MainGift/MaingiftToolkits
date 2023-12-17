#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        This extractor keeps track of the current Y position of each string. If it detectsthat the y position has changed, it inserts a line break into the output.If the PDF extractor text in a non-top-to-bottom fashion, this will result in the text not being a true representation of how it appears in the PDF.
    </summary>
    <returns>The Extracted Text.</returns>
*/
class EXPORTS SimpleTextExtractionStrategy : public virtual Object
{
public:
private:
};
}}