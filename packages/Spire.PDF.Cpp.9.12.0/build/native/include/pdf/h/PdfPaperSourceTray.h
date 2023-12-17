#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the paper tray when the document is printed.
    </summary>
*/
class EXPORTS PdfPaperSourceTray : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the page number (non zero-based) of the first page to print.
    </summary>
    */
    int GetStartPage ();
    /*

    */
    void SetStartPage (int value);
    /*
    <summary>
        Gets or sets the page number (non zero-based) of the last page to print.
    </summary>
    */
    int GetEndPage ();
    /*

    */
    void SetEndPage (int value);
    /*
    <summary>
        Specifies the paper tray from which the printer gets paper.
    </summary>
    */
    //System.Drawing.Printing.PaperSource GetPrintPaperSource ();
    /*

    */
    //void SetPrintPaperSource (System.Drawing.Printing.PaperSource value);
private:
};
}}