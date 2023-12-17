#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Provides data for paper setting event.
    </summary>
*/
class EXPORTS PdfPaperSettingsEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Get current paper index,from 1.
    </summary>
    */
    int GetCurrentPaper ();
    /*
    <summary>
         Gets the paper source trays that are available on the printer.
    </summary>
    */
   // std::vector<System.Drawing.Printing.PaperSource> GetPaperSources ();
    /*
    <summary>
        Get or set current paper source on the printer.
    </summary>
    */
    //System.Drawing.Printing.PaperSource GetCurrentPaperSource ();
    /*

    */
    //void SetCurrentPaperSource (System.Drawing.Printing.PaperSource value);
private:
};
}}