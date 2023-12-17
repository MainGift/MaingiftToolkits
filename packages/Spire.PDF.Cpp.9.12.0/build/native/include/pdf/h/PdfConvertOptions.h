#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The class can be used to set some options when do convert operation.
    </summary>
*/
class EXPORTS PdfConvertOptions : public virtual Object
{
public:
    /*
    <summary>
        Find Text in PDF file by absolute position or operator order.default is true. 
    </summary>
    */
    bool GetFindTextByAbsolutePosition ();
    /*

    */
    void SetFindTextByAbsolutePosition (bool value);
    /*
    <summary>
        Set pdf to image convert options.
    </summary>
    <param name="bgTransparentValue">Alpha values rang from 0 to 255</param>
    */
    void SetPdfToImageOptions (int bgTransparentValue);
    /*
    <summary>
        Set pdf to xlsx convert options
            the parameter is：the implementation class the xlsxOptions class
            The implementation class:XlsxLineLayoutOptions or XlsxTextLayoutOptions
    </summary>
    <param name="options"></param>
    */
    void SetPdfToXlsxOptions (intrusive_ptr<XlsxOptions> options);
    /*
    <summary>
        Set pdf to xps convert options.
            Default usePsMode = true,useInvariantCulture = false,useHighQualityImg = false.
    </summary>
    */
    void SetPdfToXpsOptions ();
    /*
    <summary>
        Set pdf to xps convert options.
    </summary>
    <param name="usePsMode">Indicates whether to use PS mode.</param>
    */
    void SetPdfToXpsOptions (bool usePsMode);
    /*
    <summary>
        Set pdf to xps convert options.
    </summary>
    <param name="usePsMode">Indicates whether to use PS mode.</param>
    <param name="useInvariantCulture">Indicates whether to use invariant culture.</param>
    */
    void SetPdfToXpsOptions (bool usePsMode,bool useInvariantCulture);
    /*
    <summary>
        Set pdf to xps convert options.
    </summary>
    <param name="usePsMode">Indicates whether to use PS mode.</param>
    <param name="useInvariantCulture">Indicates whether to use invariant culture.</param>
    <param name="useHighQualityImg">Indicates whether to use the high qulity image.</param>
    */
    void SetPdfToXpsOptions (bool usePsMode,bool useInvariantCulture,bool useHighQualityImg);
    /*
    <summary>
        Set pdf to doc convert options.
            Default usePsMode = true.
    </summary>
    */
    void SetPdfToDocOptions ();
    /*
    <summary>
        Set pdf to doc convert options.
    </summary>
    <param name="usePsMode">Indicates whether to use PS mode.</param>
    */
    void SetPdfToDocOptions (bool usePsMode);
    /*
    <summary>
        Set pdf to doc convert options.
    </summary>
    <param name="usePsMode">Indicates whether to use PS mode.</param>
    <param name="useFlowRecognitionMode">Indicates whether to use flow recognition mode.</param>
    */
    void SetPdfToDocOptions (bool usePsMode,bool useFlowRecognitionMode);
    /*
    <summary>
        Set xps to pdf convert options.
            Default useHighQualityImg = false.
    </summary>
    */
    void SetXpsToPdfOptions ();
    /*
    <summary>
        Set xps to pdf convert options.
    </summary>
    <param name="useHighQualityImg">Indicates whether to use the high qulity image.</param>
    */
    void SetXpsToPdfOptions (bool useHighQualityImg);
    /*
    <summary>
        Set pdf to html convert options.
            Default useEmbeddedSvg = true, useEmbeddedImg = false, maxPageOneFile = 500, useHighQualityEmbeddedSvg=true.
    </summary>
    */
    void SetPdfToHtmlOptions ();
    /*
    <summary>
        Set pdf to html convert options.
    </summary>
    <param name="useEmbeddedSvg">Indicates whether to use the embedded svg in html file.</param>
    */
    void SetPdfToHtmlOptions (bool useEmbeddedSvg);
    /*
    <summary>
        Set pdf to html convert options.
    </summary>
    <param name="useEmbeddedSvg">Indicates whether to use the embedded svg in html file.</param>
    <param name="useEmbeddedImg">Indicates whether to embed image data in html file, works only when useEmbeddedSvg is set to false.</param>
    */
    void SetPdfToHtmlOptions (bool useEmbeddedSvg,bool useEmbeddedImg);
    /*
    <summary>
        Set pdf to html convert options.
    </summary>
    <param name="useEmbeddedSvg">Indicates whether to use the embedded svg in html file.</param>
    <param name="useEmbeddedImg">Indicates whether to embed image data in html file, works only when useEmbeddedSvg is set to false.</param>
    <param name="maxPageOneFile">Indicates the count of page contents in one html file, works only when useEmbeddedSvg is set to false.</param>
    */
    void SetPdfToHtmlOptions (bool useEmbeddedSvg,bool useEmbeddedImg,int maxPageOneFile);
    /*
    <summary>
        Set pdf to html convert options.
    </summary>
    <param name="useEmbeddedSvg">Indicates whether to use the embedded svg in html file.</param>
    <param name="useEmbeddedImg">Indicates whether to embed image data in html file, works only when useEmbeddedSvg is set to false.</param>
    <param name="maxPageOneFile">Indicates the count of page contents in one html file, works only when useEmbeddedSvg is set to false.</param>
    <param name="useHighQualityEmbeddedSvg">Indicates whether to use the high quality embedded svg in html file, works only when useEmbeddedSvg is set to true.</param>
    */
    void SetPdfToHtmlOptions (bool useEmbeddedSvg,bool useEmbeddedImg,int maxPageOneFile,bool useHighQualityEmbeddedSvg);
    /*
    <summary>
        Set pdf to svg options.
            Default wPixel = -1f, hPixel = -1f, -1f means no change.
    </summary>
    */
    void SetPdfToSvgOptions ();
    /*
    <summary>
        Set pdf to svg options.
    </summary>
    <param name="wPixel">The output svg's width in pixel unit, -1f means no change.</param>
    */
    void SetPdfToSvgOptions (float wPixel);
    /*
    <summary>
        Set pdf to svg options.
    </summary>
    <param name="wPixel">The output svg's width in pixel unit, -1f means no change.</param>
    <param name="hPixel">The output svg's height in pixel unit, -1f means no change.</param>
    */
    void SetPdfToSvgOptions (float wPixel,float hPixel);
private:
};
}}