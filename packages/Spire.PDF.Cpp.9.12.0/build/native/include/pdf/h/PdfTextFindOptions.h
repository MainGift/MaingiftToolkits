#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
         Represents text search options
    </summary>
*/
class EXPORTS PdfTextFindOptions : public virtual Object
{
public:
    PdfTextFindOptions();
    /*

    */
    void SetArea (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Whether is show hidden texts.
            default vale: false.
    </summary>
    */
    bool GetIsShowHiddenText ();
    /*

    */
    void SetIsShowHiddenText (bool value);
    /*
    <summary>
        Specified the text find parameter. Default value : TextFindParameter.None
    </summary>
    */
    TextFindParameter GetParameter ();
    /*

    */
    void SetParameter (TextFindParameter value);
private:
};
}}