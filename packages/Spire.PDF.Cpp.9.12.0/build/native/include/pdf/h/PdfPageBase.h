#pragma once
#include "pch.h"
#include "PdfTextFindCollection.h"
#include "SimpleTextExtractionStrategy.h"
#include "PdfTextExtractOptions.h"
#include "TabOrder.h"
#include "PdfAnnotationCollection.h"
#include "PdfPieceInfo.h"
//#include "../../common/h/Color.h"
//#include "../../common/h/common.h"
//#include "../../common/h/RectangleF.h"
#include "PdfBlendMode.h"
#include "PdfImageInfo.h"
#include "PdfSection.h"
#include "PdfDocumentBase.h"
#include "PdfPageRotateAngle.h"
#include "Find_TextFindParameter.h"
#include "PdfTextFindOptions.h"
#include "PdfImage.h"
#include "PdfCanvas.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The base class for all pages.
    </summary>
*/
class EXPORTS PdfPageBase : public virtual Object
{
public:
    /*
    <summary>
        Extracts text from the Page.
    </summary>
    */
    LPCWSTR_S ExtractText ();
    /*
    <summary>
        Extracts text from the given PDF Page by SimpleTextExtractionStrategy.
    </summary>
    <returns>The Extracted Text.</returns>
    */
    LPCWSTR_S ExtractText (intrusive_ptr<SimpleTextExtractionStrategy> strategy);
    /*
    <summary>
        Extracts text in the range of rectangle from the given PDF Page.
            The unit is Point,1/72 inch default.
            the coordinate origin is top left corner of the page.
    </summary>
    <param name="rectangleF">Provide a rangle to extract text.</param>
    <returns>The Extracted Text.</returns>
    */
    LPCWSTR_S ExtractText (intrusive_ptr<RectangleF> rectangleF);
    /*
    <summary>
        Extracts text in the range of rectangle from the given PDF page by SimpleTextExtractionStrategy.
            the coordinate origin is top left corner of the page.
    </summary>
    <param name="rectangleF">Provide a rangle to extract text.</param>
    <param name="sim">Provide simple text extraction policy</param>
    <returns>The Extracted Text.</returns>
    */
    LPCWSTR_S ExtractText (intrusive_ptr<RectangleF> rectangleF,intrusive_ptr<SimpleTextExtractionStrategy> sim);
    /*
    <summary>
        Extracts text from the given PDF Page.
    </summary>
    <returns>The Extracted Text.</returns>
    */
    LPCWSTR_S ExtractText (bool keepWhiteSpace);
    /*
    <summary>
        Extracts text from the given PDF Page.
    </summary>
    <param name="options">textExtractContext</param>
    <returns>The Extracted Text.</returns>
    */
    LPCWSTR_S ExtractText (intrusive_ptr<PdfTextExtractOptions> options);
    /*
    <summary>
        Extracts images from the given PDF Page.
            The name of a image in the resources save in the Tag attribute of the iamge.
    </summary>
    <returns>Returns the extracted image as Image[].</returns>
    */
    std::vector<intrusive_ptr<Image>> ExtractImages ();
    /*
    <summary>
        Extracts images from the given PDF Page. and image is not processed.
            The name of a image in the resources save in the Tag attribute of the image.
    </summary>
    <returns>Returns the extracted image as Image[].</returns>
    */
    std::vector<intrusive_ptr<Image>> ExtractImages (bool processImage);
    /*
    <summary>
        Delete an image.
            The value of the image's Tag attribute is the name of the image in the resources.
            If the value of Tag is null,the sample image is an inline image type.
    </summary>
    <param name="image">The image to be delete.</param>
    */
    void DeleteImage (intrusive_ptr<PdfImageInfo> image);
    /*
    <summary>
        Delete an image.
            The value of the image's Tag attribute is the name of the image in the resources.
            If the value of Tag is null,the sample image is an inline image type.
            Warning : You must make sure that the image resource you are removing is the only
            one referenced,otherwise an error will occur.
    </summary>
    <param name="image">The image to be delete.</param>
    <param name="deleteResource">whether to delete the image resource.</param>
    */
    void DeleteImage (intrusive_ptr<PdfImageInfo> image,bool deleteResource);
    /*
    <summary>
         Delete an image by index in a page.
    </summary>
    <param name="imageIndex">The image index.</param>
    */
    void DeleteImage (int imageIndex);
    /*
    <summary>
        Try to compress images(except inline image).
    </summary>
    <param name="index">The image index</param>
    <returns>If success, return true; otherwise false.</returns>
    */
    bool TryCompressImage (int imgIndex);
    /*
    <summary>
        Set tab order.
    </summary>
    <param name="tabOrder">The order name</param>
    */
    void SetTabOrder (TabOrder tabOrder);
    /*
    <summary>
        Insert rich text to page
    </summary>
    <param name="rtf">rich text</param>
    <param name="width">width</param>
    <param name="IsSplitLine">IsSplitLine</param>
    */
    //void LoadFromRTF (LPCWSTR_S rtf,float width,bool IsSplitLine);
    /*
    <summary>
        Insert rich text to page
    </summary>
    <param name="rtf">rich text</param>
    <param name="width">width</param>
    <param name="IsSplitLine">IsSplitLine</param>
    <param name="point">Draw text x,y point</param>
    */
    //void LoadFromRTF (LPCWSTR_S rtf,float width,bool IsSplitLine,intrusive_ptr<PointF> point);
    /*
    <summary>
        Insert rich text to page
    </summary>
    <param name="rtf">rich text</param>
    <param name="width">width</param>
    <param name="IsSplitLine">IsSplitLine</param>
    */
    //void LoadFromRTF (LPCWSTR_S rtf,float width,float height,bool IsSplitLine);
    /*
    <summary>
        Insert rich text to page
    </summary>
    <param name="rtf">rich text</param>
    <param name="width">width</param>
    <param name="IsSplitLine">IsSplitLine</param>
    <param name="point">Draw text x,y point</param>
    */
    //void LoadFromRTF (LPCWSTR_S rtf,float width,float height,bool IsSplitLine,intrusive_ptr<PointF> point);
    /*

    */
    //void add_BeginSave (System.EventHandler value);
    /*

    */
    //void remove_BeginSave (System.EventHandler value);
    /*

    */
    bool GetAllowContainAllDocTemplates ();
    /*

    */
    void SetAllowContainAllDocTemplates (bool value);
    /*

    */
    bool GetAllowContainLeftDocTemplates ();
    /*

    */
    void SetAllowContainLeftDocTemplates (bool value);
    /*

    */
    bool GetAllowContainRightDocTemplates ();
    /*

    */
    void SetAllowContainRightDocTemplates (bool value);
    /*

    */
    bool GetAllowContainTopDocTemplates ();
    /*

    */
    void SetAllowContainTopDocTemplates (bool value);
    /*

    */
    bool GetAllowContainBottomDocTemplates ();
    /*

    */
    void SetAllowContainBottomDocTemplates (bool value);
    /*
    <summary>
        Returns the visible region of the page.
    </summary>
    */
    intrusive_ptr<RectangleF> GetCropBox ();
    /*
    <summary>
        Returns page region after clipping.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBleedBox ();
    /*
    <summary>
        Returns page region mediabox.
    </summary>
    */
    intrusive_ptr<RectangleF> GetMediaBox ();
    /*
    <summary>
        Returns page region after trimming.
    </summary>
    */
    intrusive_ptr<RectangleF> GetTrimBox ();
    /*
    <summary>
        Returns page region containing content.
    </summary>
    */
    intrusive_ptr<RectangleF> GetArtBox ();
    /*
    <summary>
        Gets the field collection.
    </summary>
    */
    intrusive_ptr<PdfAnnotationCollection> GetAnnotationsWidget ();
    /*

    */
    void SetAnnotationsWidget (intrusive_ptr<PdfAnnotationCollection> value);
    /*
    <summary>
        Get the page piece info.
    </summary>
    */
    intrusive_ptr<PdfPieceInfo> GetPagePieceInfo ();
    /*

    */
    void SetPagePieceInfo (intrusive_ptr<PdfPieceInfo> value);
    /*
    <summary>
        Gets or sets page's background color.
    </summary>
    */
    intrusive_ptr<Color> GetBackgroundColor ();
    /*

    */
    void SetBackgroundColor (intrusive_ptr<Color> value);
    /*

    */
    float GetBackgroudOpacity ();
    /*

    */
    void SetBackgroudOpacity (float value);
    /*
    <summary>
        The position and size of the background 
    </summary>
    */
    intrusive_ptr<RectangleF> GetBackgroundRegion ();
    /*

    */
    void SetBackgroundRegion (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets the information about the extracted image.
    </summary>
    */
    std::vector<intrusive_ptr<PdfImageInfo>> GetImagesInfo ();
    /*
    <summary>
        Gets the graphics of the .
    </summary>
    */
    intrusive_ptr<PdfCanvas> GetCanvas ();
    /*
    <summary>
        Gets the parent section of the page.
    </summary>
    */
    intrusive_ptr<PdfSection> GetSection ();
    /*

    */
    virtual intrusive_ptr<PdfDocumentBase> GetDocument ();
    /*
    <summary>
        Gets or sets index of the default layer.
    </summary>
    */
    //int GetDefaultLayerIndex ();
    ///*

    //*/
    //void SetDefaultLayerIndex (int value);
    /*
    <summary>
        Gets the size of the page.
    </summary>
    */
    virtual intrusive_ptr<SizeF> GetSize ();
    /*
    <summary>
        Gets the actual size of the page.
    </summary>
    */
    virtual intrusive_ptr<SizeF> GetActualSize ();
    /*

    */
    PdfPageRotateAngle GetRotation ();
    /*

    */
    void SetRotation (PdfPageRotateAngle value);
    /*
    <summary>
        Gets or sets page's background image.
    </summary>
    */
    intrusive_ptr<Stream> GetBackgroundImage ();
    /*

    */
    void SetBackgroundImage (intrusive_ptr<Stream> value);
    /*
    <summary>
        Get the page label.
    </summary>
    */
    LPCWSTR_S GetPageLabel ();
    /*
    <summary>
        Returns page is blank flag for page's content.
    </summary>
    */
    bool IsBlank ();
    /*
    <summary>
        Returns a page size reduced by page margins and page template dimensions.
    </summary>
<remarks>It's the actual size of the page where some output can be performed.</remarks>
    <returns>Returns a page size reduced by page margins and page template dimensions.</returns>
    */
    intrusive_ptr<SizeF> GetClientSize ();
    /*
    <summary>
        Replace the Image at index's Position.
    </summary>
    <param name="imageIndex">The index of original image.</param>
    <param name="image">The new replace image.</param>
    */
    void ReplaceImage (int imageIndex,intrusive_ptr<PdfImage> image);
    /*
    <summary>
        Replace the Image through the original image.   
    </summary>
    <param name="originalImage">The original image</param>
    <param name="image">The New Replace image</param>
    */
    //void ReplaceImage (intrusive_ptr<Image> originalImage,intrusive_ptr<PdfImage> image);
    /*
    <summary>
        Creates a template from page content and all annotation appearances.
    </summary>
    <returns>The created template.</returns>
    */
    intrusive_ptr<PdfTemplate> CreateTemplate ();
    /*
    <summary>
        Find text 
    </summary>
    <param name="searchPatternText"> The text intends to search. </param>
    <param name="isSearchWholeWord">
            Indicate the expected result is the whole word or not, which means, if it is true, only the word is exactly the same with the 
            searching word will be found;if it is false, any word including the searching word will be found. For instance,the text is "is this a pen?" 
            and the target is "is", if true, one result will be returned; if false, two results will be returned.
    </param>
    <returns></returns>
    */
    intrusive_ptr<PdfTextFindCollection> FindText (LPCWSTR_S searchPatternText,bool isSearchWholeWord);
    /*
    <summary>
        Find text
    </summary>
    <param name="searchPatternText">string searchPatternText</param>
    <returns></returns>
    */
    intrusive_ptr<PdfTextFindCollection> FindText (LPCWSTR_S searchPatternText);
    /*
    <summary>
        Find text
    </summary>
    <param name="searchPatternText"></param>
    <param name="isSearchWholeWord"></param>
    <param name="ignoreCase"></param>
    <returns></returns>
    */
    intrusive_ptr<PdfTextFindCollection> FindText (LPCWSTR_S searchPatternText,bool isSearchWholeWord,bool ignoreCase);
    /*

    */
    intrusive_ptr<PdfTextFindCollection> FindText (LPCWSTR_S searchPatternText,Find_TextFindParameter parameter);
    /*

    */
    intrusive_ptr<PdfTextFindCollection> FindText (LPCWSTR_S searchPatternText,Find_TextFindParameter parameter,intrusive_ptr<PdfTextFindOptions> options);
    /*

    */
    intrusive_ptr<PdfTextFindCollection> FindText (intrusive_ptr<RectangleF> rectangleF,LPCWSTR_S searchPatternText,Find_TextFindParameter parameter);
    /*

    */
    intrusive_ptr<PdfTextFindCollection> FindText (LPCWSTR_S searchPatternText,bool isEmbedTable,Find_TextFindParameter parameter);
    /*
    <summary>
        Find all text and position.
    </summary>
    <returns>All text find in the page.</returns>
    */
    intrusive_ptr<PdfTextFindCollection> FindAllText ();
private:
};
}}