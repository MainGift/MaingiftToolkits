#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents text extraction options
    </summary>
*/
class EXPORTS PdfTextExtractOptions : public virtual Object
{
public:
    PdfTextExtractOptions();
    /// <summary>
    /// Whether is use simple extraction.
    /// default vale: false.
    /// </summary>
    void SetIsSimpleExtraction (bool value);
    /// <summary>
    /// Whether is extract all texts.
    /// default vale: false.
    /// </summary>
    void SetIsExtractAllText (bool value);
    /// <summary>
    /// Whether is show hidden texts.
    /// default vale: true.
    /// </summary>
    void SetIsShowHiddenText (bool value);
    /// <summary>
    /// Specified the text extract area.
    /// default vale: RectangleF.Empty.
    /// </summary>
    void SetExtractArea (intrusive_ptr<RectangleF> value);
private:
};
}}