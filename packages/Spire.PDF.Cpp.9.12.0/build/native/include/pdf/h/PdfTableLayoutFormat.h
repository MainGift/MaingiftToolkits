#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfTextLayout.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the parameters for Light Table layout.
    </summary>
*/
class EXPORTS PdfTableLayoutFormat : public virtual PdfTextLayout
{
public:
    PdfTableLayoutFormat();

    PdfTableLayoutFormat(intrusive_ptr<PdfTextLayout> baseFormat);
    /*
    <summary>
        Gets or sets the start column index.
    </summary>
    */
    int GetStartColumnIndex ();
    /*

    */
    void SetStartColumnIndex (int value);
    /*
    <summary>
        Gets or sets the end column index.
    </summary>
    */
    int GetEndColumnIndex ();
    /*

    */
    void SetEndColumnIndex (int value);
private:
};
}}