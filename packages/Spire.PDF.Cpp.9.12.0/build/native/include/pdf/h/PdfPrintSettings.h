#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The page print settings.
    </summary>
*/
class EXPORTS PdfPrintSettings : public virtual Object
{
public:
    /*
    <summary>
        Get or set the name of printer which is on printing pdf document.
    </summary>
    */
    LPCWSTR_S GetPrinterName ();
    /*

    */
    void SetPrinterName (LPCWSTR_S value);
    /*
    <summary>
         Get or set the document name to display (for example, in a print status dialog box or printer queue) while printing the document.
    </summary>
    */
    LPCWSTR_S GetDocumentName ();
    /*

    */
    void SetDocumentName (LPCWSTR_S value);
    /*
    <summary>
        Get or set the size of a piece of paper.
    </summary>
    */
    //System.Drawing.Printing.PaperSize GetPaperSize ();
    /*

    */
    //void SetPaperSize (System.Drawing.Printing.PaperSize value);
    /*
    <summary>
        Get or set the number of copies of the document to print.
    </summary>
    */
    //System.Int16 GetCopies ();
    /*

    */
    //void SetCopies (System.Int16 value);
    /*
    <summary>
        Get or set a value indicating whether the page should be printed in color.
            true if the page should be printed in color; otherwise, false. The default
            is determined by the printer.
    </summary>
    */
    bool GetColor ();
    /*

    */
    void SetColor (bool value);
    /*
    <summary>
        Get or set a value indicating whether the printed document is collated.
    </summary>
    */
    bool GetCollate ();
    /*

    */
    void SetCollate (bool value);
    /*
    <summary>
        Get or set a value indicating whether the page is printed in landscape or portrait orientation.
            Returns:
            True if the page should be printed in landscape orientation; otherwise, false.
    </summary>
    */
    bool GetLandscape ();
    /*

    */
    void SetLandscape (bool value);
    /*
    <summary>
        Get or set the print controller that guides the printing process.
    </summary>
    */
    //System.Drawing.Printing.PrintController GetPrintController ();
    /*

    */
    //void SetPrintController (System.Drawing.Printing.PrintController value);
    /*
    <summary>
        Get a value indicating whether the printer supports double-sided printing.
    </summary>
    */
    bool GetCanDuplex ();
    /*
    <summary>
         Get or set the printer setting for double-sided printing.
    </summary>
    */
    //System.Drawing.Printing.Duplex GetDuplex ();
    /*

    */
    //void SetDuplex (System.Drawing.Printing.Duplex value);
    /*
    <summary>
         Get or set the printer resolution kind.
    </summary>
    */
    PdfPrinterResolutionKind GetPrinterResolutionKind ();
    /*

    */
    void SetPrinterResolutionKind (PdfPrinterResolutionKind value);
    /*
    <summary>
        Get the pagenumber which you choose as the start page to printing.
    </summary>
    */
    int GetPrintFromPage ();
    /*
    <summary>
        Get the pagenumber which you choose as the final page to printing.
    </summary>
    */
    int GetPrintToPage ();
    /*
    <summary>
        Gets a value indicating whether the System.Drawing.Printing.PrinterSettings.PrinterName property designates a valid printer.
    </summary>
    */
    bool GetIsValid ();
    /*
    <summary>
        Get the user has specified print pages.
    </summary>
    */
    std::vector<int> GetPrintPages ();
    /*

    */
    void add_PaperSettings (intrusive_ptr<PdfPaperSettingsEventHandler> value);
    /*

    */
    void remove_PaperSettings (intrusive_ptr<PdfPaperSettingsEventHandler> value);
    /*

    */
    //void add_BeginPrint (System.Drawing.Printing.PrintEventHandler value);
    /*

    */
    //void remove_BeginPrint (System.Drawing.Printing.PrintEventHandler value);
    /*

    */
    //void add_EndPrint (System.Drawing.Printing.PrintEventHandler value);
    /*

    */
    //void remove_EndPrint (System.Drawing.Printing.PrintEventHandler value);
    /*

    */
    //void add_PrintPage (System.Drawing.Printing.PrintPageEventHandler value);
    /*

    */
    //void remove_PrintPage (System.Drawing.Printing.PrintPageEventHandler value);
    /*

    */
    //void add_QueryPageSettings (System.Drawing.Printing.QueryPageSettingsEventHandler value);
    /*

    */
    //void remove_QueryPageSettings (System.Drawing.Printing.QueryPageSettingsEventHandler value);
    /*
    <summary>
        Set print page range.
    </summary>
    <param name="fromPage">From page.</param>
    <param name="toPage">To page.</param>
    */
    void SelectPageRange (int fromPage,int toPage);
    /*
    <summary>
        Set print some pages.
    </summary>
    <param name="pages">Selection pages.</param>
    */
    void SelectSomePages (std::vector<int> pages);
    /*
    <summary>
        Select one page to one paper layout.
            Default pageScalingMode = PdfSinglePageScalingMode.FitSize, autoPortraitOrLandscape = true, customScaling = 100f.
    </summary>
    */
    void SelectSinglePageLayout ();
    /*
    <summary>
        Select one page to one paper layout.
    </summary>
    <param name="pageScalingMode">Page scaling mode.</param>
    */
    void SelectSinglePageLayout (PdfSinglePageScalingMode pageScalingMode);
    /*
    <summary>
        Select one page to one paper layout.
    </summary>
    <param name="pageScalingMode">Page scaling mode.</param>
    <param name="autoPortraitOrLandscape">Indicating whether automatic portrait and landscape.</param>
    */
    void SelectSinglePageLayout (PdfSinglePageScalingMode pageScalingMode,bool autoPortraitOrLandscape);
    /*
    <summary>
        Select one page to one paper layout.
    </summary>
    <param name="pageScalingMode">Page scaling mode.</param>
    <param name="autoPortraitOrLandscape">Indicating whether automatic portrait and landscape.</param>
    <param name="customScaling">Custom scaling(unit:percent),default value 100f.Valid only if pageScalingMode== PdfSinglePageScalingMode.CustomScale.</param>
    */
    void SelectSinglePageLayout (PdfSinglePageScalingMode pageScalingMode,bool autoPortraitOrLandscape,float customScaling);
    /*
    <summary>
        Select muti page to one paper layout.
            Default rows = 2, columns = 2, hasPageBorder = false, pageOrder = PdfMultiPageOrder.Horizontal.
    </summary>
    */
    void SelectMultiPageLayout ();
    /*
    <summary>
        Select muti page to one paper layout.
    </summary>
    <param name="rows">The number of rows for the paper layout.</param>
    */
    void SelectMultiPageLayout (int rows);
    /*
    <summary>
        Select muti page to one paper layout.
    </summary>
    <param name="rows">The number of rows for the paper layout.</param>
    <param name="columns">The number of columns for the paper layout.</param>
    */
    void SelectMultiPageLayout (int rows,int columns);
    /*
    <summary>
        Select muti page to one paper layout.
    </summary>
    <param name="rows">The number of rows for the paper layout.</param>
    <param name="columns">The number of columns for the paper layout.</param>
    <param name="hasPageBorder">A value indicating whether the pages has the page border.</param>
    */
    void SelectMultiPageLayout (int rows,int columns,bool hasPageBorder);
    /*
    <summary>
        Select muti page to one paper layout.
    </summary>
    <param name="rows">The number of rows for the paper layout.</param>
    <param name="columns">The number of columns for the paper layout.</param>
    <param name="hasPageBorder">A value indicating whether the pages has the page border.</param>
    <param name="pageOrder">Multiple pages order.</param>
    */
    void SelectMultiPageLayout (int rows,int columns,bool hasPageBorder,PdfMultiPageOrder pageOrder);
    /*
    <summary>
        Select split page to muti paper layout.
    </summary>
    */
    void SelectSplitPageLayout ();
    /*
    <summary>
        Select booklet layout.
    </summary>
    */
    void SelectBookletLayout ();
    /*
    <summary>
        Select booklet layout.
    </summary>
    <param name="bookletSubset">The mode of BookletSubset.</param>
    */
    void SelectBookletLayout (PdfBookletSubsetMode bookletSubset);
    /*
    <summary>
        Select booklet layout.
    </summary>
    <param name="bookletBinding">The mode of BookletBinding.</param>
    */
    void SelectBookletLayout (Print_PdfBookletBindingMode bookletBinding);
    /*
    <summary>
        Select booklet layout.
    </summary>
    <param name="bookletSubset">The mode of BookletSubset.</param>
    <param name="bookletBinding">The mode of BookletBinding.</param>
    */
    void SelectBookletLayout (PdfBookletSubsetMode bookletSubset,Print_PdfBookletBindingMode bookletBinding);
    /*
    <summary>
        Set paper margins,measured in hundredths of an inch.
    </summary>
    <param name="top">Paper margin top(unit:hundredths of an inch).</param>
    <param name="bottom">Paper margin bottom(unit:hundredths of an inch).</param>
    <param name="left">Paper margin left(unit:hundredths of an inch).</param>
    <param name="right">Paper margin right(unit:hundredths of an inch).</param>
    */
    void SetPaperMargins (int top,int bottom,int left,int right);
    /*
    <summary>
        Set printing to file.
    </summary>
    <param name="fileName">File name.</param>
    */
    void PrintToFile (LPCWSTR_S fileName);
    /*
    <summary>
        Releases all resources used.
    </summary>
    */
    virtual void Dispose ();
private:
};
}}