#pragma once
#define FOR_OUT
#define _SPIRE_PDF
#undef _SPIRE_XLS
#undef _SPIRE_DOC
#undef _SPIRE_PPT
#undef REFERENCE_COUNTER_H

#include "pdf/h/pch.h"
#include "common/h/Object.h"
#include "common/h/common.h"
#include "common/h/license.h"

#include "common/h/Stream.h"
#include "common/h/EmfType.h"
#include "common/h/ImageFormat.h"
#include "common/h/FontStyle.h"
#include "common/h/GraphicsUnit.h"
#include "common/h/Point.h"
#include "common/h/PointF.h"
#include "common/h/Size.h"
#include "common/h/SizeF.h"
#include "common/h/Rectangle.h"
#include "common/h/RectangleF.h"
#include "common/h/Encoding.h"
#include "common/h/Color.h"
#include "common/h/Font.h"
#include "common/h/CultureInfo.h"
#include "common/h/Image.h"
#include "common/h/Bitmap.h"
#include "common/h/DateTime.h"
#include "common/h/TimeSpan.h"
#include "common/h/TimeSpan.h"
#include "common/h/IEnumerator.h"
#include "common/h/IEnumerable.h"
#include "common/h/IList.h"
#include "common/h/ICollection.h"
#include "common/h/IDictionary.h"
#include "common/h/IDictionaryEnumerator.h"
#include "common/h/Single.h"
#include "common/h/Int16.h"
#include "common/h/Int32.h"
#include "common/h/Int64.h"
#include "common/h/UInt16.h"
#include "common/h/UInt32.h"
#include "common/h/UInt64.h"
#include "common/h/Double.h"
#include "common/h/SpireString.h"
#include "common/h/Boolean.h"
#include "common/h/Byte.h"
#include "common/h/Char.h"
#include "common/h/Regex.h"
#include "common/h/RegexOptions.h"
#include "common/h/ReferenceCounter.h"


namespace Spire {
	namespace Pdf {
		enum class EmfType;
		enum class FontStyle;
		enum class GraphicsUnit;
		enum class PixelFormat;
		enum class RegexOptions;
		class CultureInfo;
		class Color;
		class Font;
		class Bitmap;
		class Stream;
		class Encoding;
		class Image;
		class ImageFormat;
		class Point;
		class PointF;
		class Size;
		class SizeF;
		class Rectangle;
		class RectangleF;
		class DateTime;
		class TimeSpan;
		class Int16;
		class Int32;
		class Int64;
		class UInt16;
		class UInt32;
		class UInt64;
		class Single;
		class Double;
		class Char;
		class SpireString;
		class Byte;
		class Regex;
		template<typename T> class IEnumerator;
		template<typename T> class IEnumerable;
		template<typename T> class IList;
		template<typename T> class ICollection;
		template<typename K, typename V> class IDictionary;
		template<typename K, typename V> class IDictionaryEnumerator;

		class ReferenceCounter;

		enum class Find_TextFindParameter;
		enum class AspectRatio;
		enum class ClrIntMode;
		enum class CompressionLevel;
		enum class CompressionMethod;
		enum class ConfiguerGraphicType;
		enum class CustomFieldType;
		enum class Clip;
		enum class DashCap;
		enum class DataFormat;
		enum class DocType;
		enum class EdgeMode;
		enum class FileFormat;
		enum class FileRelatedFieldType;
		enum class FillRule;
		enum class Find_TextFindParameter;
		enum class FragmentType;
		enum class GeneralPurposeBitFlags;
		enum class GraphicMode;
		enum class HttpMethod;
		enum class HttpReadType;
		enum class ImageFormatType;
		enum class ImageType;
		enum class ImageQuality;
		enum class ItemsChoiceType;
		enum class LayerExportState;
		enum class LayerPrintState;
		enum class LayerViewState;
		enum class LineCap;
		enum class LineJoin;
		enum class LineType;
		enum class LoadHtmlType;
		enum class MappingMode;
		enum class Pdf3DActivationMode;
		enum class Pdf3DActivationState;
		enum class PDF3DAnimationType;
		enum class Pdf3DDeactivationMode;
		enum class Pdf3DDeactivationState;
		enum class Pdf3DLightingStyle;
		enum class Pdf3DProjectionClipStyle;
		enum class Pdf3DProjectionOrthoScaleMode;
		enum class Pdf3DProjectionType;
		enum class Pdf3DRenderStyle;
		enum class PdfActionDestination;
		enum class PdfAlignmentStyle;
		enum class PdfAnnotationFlags;
		enum class PdfAnnotationIntent;
		enum class PdfAnnotationWidgetTypes;
		enum class PdfAttachmentIcon;
		enum class PdfAttachmentRelationship;
		enum class PdfBarcodeTextAlignment;
		enum class PdfBlendMode;
		enum class PdfBookletBindingMode;
		enum class PdfBookletSubsetMode;
		enum class PdfBorderEffect;
		enum class PdfBorderOverlapStyle;
		enum class PdfBorderStyle;
		enum class PdfButtonIconScaleMode;
		enum class PdfButtonIconScaleReason;
		enum class PdfButtonLayoutMode;
		enum class PdfCertificationFlags;
		enum class PdfCheckBoxStyle;
		enum class PdfCjkFontFamily;
		enum class PdfColorSpace;
		enum class PdfCompressionLevel;
		enum class PdfConformanceLevel;
		enum class PdfCrossReferenceType;
		enum class PdfDashStyle;
		enum class PdfDestinationMode;
		enum class PdfDockStyle;
		enum class PdfEncryptionAlgorithm;
		enum class PdfEncryptionKeySize;
		enum class PdfExtend;
		enum class PdfFilePathType;
		enum class PdfFillMode;
		enum class PdfFontFamily;
		enum class PdfFontStyle;
		enum class PdfFontType;
		enum class PdfGraphicsUnit;
		enum class PdfHeaderSource;
		enum class PdfHighlightMode;
		enum class PdfHorizontalAlignment;
		enum class PdfHorizontalOverflowType;
		enum class PdfImageType;
		enum class PdfLayoutBreakType;
		enum class PdfLayoutType;
		enum class PdfLinearGradientMode;
		enum class PdfLineBorderStyle;
		enum class PdfLineCap;
		enum class PdfLineCaptionType;
		enum class PdfLineEndingStyle;
		enum class PdfLineIntent;
		enum class PdfLineJoin;
		enum class PdfListMarkerAlignment;
		enum class PdfMatrixOrder;
		enum class PdfMultiPageOrder;
		enum class PdfNumberStyle;
		enum class PdfPageLayout;
		enum class PdfPageMode;
		enum class PdfPageOrientation;
		enum class PdfPageRotateAngle;
		enum class PdfPermissionsFlags;
		enum class PdfPopupIcon;
		enum class PdfPrinterResolutionKind;
		enum class PdfRubberStampAnnotationIcon;
		enum class PdfSinglePageScalingMode;
		enum class PdfSoundChannels;
		enum class PdfSoundEncoding;
		enum class PdfSoundIcon;
		enum class PdfSubmitFormFlags;
		enum class PdfSubSuperScript;
		enum class PdfTableDataSourceType;
		enum class PdfTextAlignment;
		enum class PdfTextAnnotationIcon;
		enum class PdfTextMarkupAnnotationType;
		enum class PdfTextStyle;
		enum class PdfTransitionDimension;
		enum class PdfTransitionDirection;
		enum class PdfTransitionMotion;
		enum class PdfTransitionStyle;
		enum class PdfUnorderedMarkerStyle;
		enum class PdfVersion;
		enum class PdfVerticalAlignment;
		enum class PdfVisibility;
		enum class PdfWordWrapType;
		enum class PrintScalingMode;
		enum class Print_PdfBookletBindingMode;
		enum class Security_GraphicMode;
		enum class Security_SignImageLayout;
		enum class SignatureConfiguerText;
		enum class SignImageLayout;
		enum class SignInfoType;
		enum class SignTextAlignment;
		enum class SpreadMethod;
		enum class StoreType;
		enum class StyleSimulations;
		enum class SubmitDataFormat;
		enum class SweepDirection;
		enum class TableWidthType;
		enum class TabOrder;
		enum class TextAlign;
		enum class TextFindParameter;
		enum class TextLocation;
		enum class TileMode;
		enum class TypeEncodingCmap;
		enum class ViewUnits;
		enum class XmpArrayType;
		enum class XmpSchemaType;
		enum class XmpStructureType;

		class Constants;
		class IFileNamePreprocessor;
		class ZipArchive;
		class ZipArchiveItem;
		class ZippedContentStream;
		class PdfPageLabels;
		class PdfApplicationData;
		class PdfPieceInfo;
		class PdfConvertOptions;
		class PdfDocument;
		class PdfDocumentBase;
		class PdfFileInfo;
		class DrawPageInBookletEventHandler;
		class DrawPageInBookletEventArgs;
		class HebrewConvert;
		class PageAddedEventHandler;
		class PageAddedEventArgs;
		class PdfDocumentTemplate;
		class PdfPageBase;
		class PdfPageTransition;
		class PdfSectionPageCollection;
		class PdfSectionTemplate;
		class PdfStampCollection;
		class PdfNewDocument;
		class ProgressEventArgs;
		class PdfDocumentInformation;
		class PdfViewerPreferences;
		class PdfCollection;
		class PdfPageSize;
		class PdfPageWidget;
		class PdfNewPage;
		class PdfDocumentPageCollection;
		class PdfPageSettings;
		class PdfPaperSourceTray;
		class PdfPageTemplateElement;
		class PdfSection;
		class PdfSectionCollection;
		class PdfBorders;
		class PdfEdges;
		class PdfPaddings;
		class CustomMetadata;
		class XmpEntityBase;
		class XmpMetadata;
		class XmpType;
		class XmpSchema;
		class XmpStructure;
		class PdfTableLayoutResult;
		class LightTableBeginPageLayoutEventArgs;
		class LightTableEndPageLayoutEventArgs;
		class PdfTable;
		class PdfTableStyle;
		class PdfCellStyle;
		class PdfColumnCollection;
		class PdfColumn;
		class PdfRow;
		class PdfRowCollection;
		class PdfTableException;
		class PdfTableLayoutFormat;
		class BeginRowLayoutEventHandler;
		class EndRowLayoutEventHandler;
		class BeginCellLayoutEventHandler;
		class EndCellLayoutEventHandler;
		class QueryNextRowEventHandler;
		class QueryColumnCountEventHandler;
		class QueryRowCountEventHandler;
		class BeginRowLayoutEventArgs;
		class EndRowLayoutEventArgs;
		class CellLayoutEventArgs;
		class BeginCellLayoutEventArgs;
		class EndCellLayoutEventArgs;
		class QueryNextRowEventArgs;
		class QueryColumnCountEventArgs;
		class QueryRowCountEventArgs;
		class PdfMarkerBase;
		class PdfOrderedMarker;
		class PdfMarker;
		class PdfListBase;
		class PdfListItem;
		class PdfListItemCollection;
		class ListBeginPageLayoutEventArgs;
		class ListEndPageLayoutEventArgs;
		class PdfSortedList;
		class PdfList;
		class BeginItemLayoutEventHandler;
		class EndItemLayoutEventHandler;
		class BeginItemLayoutEventArgs;
		class EndItemLayoutEventArgs;
		class PdfGridLayoutFormat;
		class PdfGridLayoutResult;
		class PdfGrid;
		class PdfGridCell;
		class PdfGridCellCollection;
		class PdfGridColumn;
		class PdfGridColumnCollection;
		class PdfGridRow;
		class PdfGridRowCollection;
		class PdfGridHeaderCollection;
		class PdfGridStyleBase;
		class PdfGridStyle;
		class PdfGridRowStyle;
		class PdfGridCellStyle;
		class PdfGridCellContent;
		class PdfGridCellContentList;
		class PdfGridBeginPageLayoutEventArgs;
		class PdfGridEndPageLayoutEventArgs;
		class HtmlToPdfLayoutParams;
		class HtmlToPdfResult;
		class HtmlConverter;
		class PdfHtmlLayoutFormat;
		class Qt_HtmlConverter;
		class PdfBlend;
		class PdfBlendBase;
		class PdfBrushes;
		class PdfColorBlend;
		class PdfDrawWidget;
		class PdfTextLayout;
		class PdfLayoutResult;
		class PdfLayoutHTMLResult;
		class PdfLayoutParams;
		class PdfFillElement;
		class PdfGraphicsWidget;
		class PdfLayoutWidget;
		class PdfMetafileLayoutFormat;
		class PdfShapeWidget;
		class PdfTextLayoutResult;
		class PdfHTMLTextElement;
		class PdfTextWidget;
		class PdfCancelEventArgs;
		class BeginPageLayoutEventArgs;
		class EndPageLayoutEventArgs;
		class EndTextPageLayoutEventArgs;
		class BeginPageLayoutEventHandler;
		class EndPageLayoutEventHandler;
		class EndTextPageLayoutEventHandler;
		class PdfCjkStandardFont;
		class PdfStringFormat;
		class PdfTrueTypeFont;
		class PdfStringLayouter;
		class PdfStringLayoutResult;
		class LineInfo;
		class PdfMatrix;
		class PdfPens;
		class PdfRGBColor;
		class PdfCanvas;
		class PdfGraphicsState;
		class PdfMargins;
		class PdfPen;
		class PdfUnitConvertor;
		class PdfBrush;
		class PdfGradientBrush;
		class PdfLinearGradientBrush;
		class PdfRadialGradientBrush;
		class PdfSolidBrush;
		class PdfTilingBrush;
		class PdfPath;
		class PdfTemplate;
		class PdfBitmap;
		class PdfColorMask;
		class PdfImage;
		class PdfImageMask;
		class PdfMask;
		class PdfMetafile;
		class PdfLayer;
		class PdfLayerCollection;
		class PdfLayerOutline;
		class PdfUsedFont;
		class Coord;
		class ImgData;
		class XFAForm;
		class XfaField;
		class XfaTextField;
		class XfaCheckButtonField;
		class XfaDateTimeField;
		class XfaChoiceListField;
		class XfaSignatureField;
		class XfaButtonField;
		class XfaImageField;
		class XfaBarcodeField;
		class XfaIntField;
		class XfaFloatField;
		class XfaDoubleField;
		class PdfPageCollection;
		class PdfPageWidgetEnumerator;
		class PdfAnnotationWidgetCollection;
		class IPdfTextBoxField;
		class PdfButtonWidgetFieldWidget;
		class PdfButtonWidgetWidgetItem;
		class PdfStateFieldWidget;
		class PdfStateWidgetItem;
		class PdfButtonWidgetItemCollection;
		class PdfCheckBoxWidgetFieldWidget;
		class PdfCheckBoxWidgetWidgetItemCollection;
		class PdfCheckBoxWidgetWidgetItem;
		class PdfChoiceWidgetFieldWidget;
		class PdfComboBoxWidgetFieldWidget;
		class PdfComboBoxWidgetWidgetItem;
		class PdfComboBoxWidgetItemCollection;
		class PdfStateItemCollection;
		class PdfFieldWidget;
		class PdfFieldWidgetItem;
		class PdfFormWidget;
		class PdfFieldWidgetImportError;
		class PdfFormFieldWidgetCollection;
		class PdfListBoxWidgetFieldWidget;
		class PdfListFieldWidgetItem;
		class PdfListWidgetFieldItemCollection;
		class PdfListWidgetItem;
		class PdfListWidgetItemCollection;
		class PdfRadioButtonWidgetWidgetItemCollection;
		class PdfRadioButtonWidgetItem;
		class PdfRadioButtonListFieldWidget;
		class PdfSignatureFieldWidget;
		class PdfStateWidgetItemCollection;
		class PdfStyledFieldWidget;
		class PdfTexBoxWidgetItem;
		class PdfTextBoxFieldWidget;
		class PdfTextBoxWidgetItemCollection;
		class IPdfComboBoxField;
		class PdfSignatureStyledField;
		class PdfAppearanceField;
		class PdfButtonField;
		class PdfButtonIconLayout;
		class PdfCheckBoxField;
		class PdfCheckFieldBase;
		class PdfComboBoxField;
		class PdfField;
		class PdfFieldCollection;
		class PdfForm;
		class PdfFormFieldCollection;
		class PdfListBoxField;
		class PdfListField;
		class PdfListFieldItem;
		class PdfListFieldItemCollection;
		class PdfRadioButtonListField;
		class PdfRadioButtonListItem;
		class PdfRadioButtonItemCollection;
		class PdfSignatureAppearanceField;
		class PdfSignatureField;
		class PdfStyledField;
		class PdfTextBoxField;
		class PdfBookmark;
		class PdfBookmarkCollection;
		class PdfBookmarkWidget;
		class Collections_PdfCollection;
		class PdfFolder;
		class PdfAutomaticField;
		class PdfCreationDateField;
		class PdfDateTimeField;
		class PdfDestinationPageNumberField;
		class PdfDocumentAuthorField;
		class PdfDynamicField;
		class PdfCompositeField;
		class PdfMultipleNumberValueField;
		class PdfMultipleValueField;
		class PdfPageCountField;
		class PdfPageNumberField;
		class PdfSectionNumberField;
		class PdfSectionPageCountField;
		class PdfSectionPageNumberField;
		class PdfSingleValueField;
		class PdfStaticField;
		class PdfAttachment;
		class PdfAttachmentCollection;
		class PdfBarcode;
		class PdfBarcodeException;
		class PdfBarcodeQuietZones;
		class PdfCodabarBarcode;
		class PdfCode11Barcode;
		class PdfCode128ABarcode;
		class PdfCode128BBarcode;
		class PdfCode128CBarcode;
		class PdfCode32Barcode;
		class PdfCode39Barcode;
		class PdfCode39ExtendedBarcode;
		class PdfCode93Barcode;
		class PdfCode93ExtendedBarcode;
		class PdfUnidimensionalBarcode;
		class PdfImageInfo;
		class DiscardControl;
		class Discard;
		class DocumentStructure;
		class Outline;
		class DocumentOutline;
		class OutlineEntry;
		class Story;
		class StoryFragmentReference;
		class StoryFragments;
		class StoryFragment;
		class Break;
		class Figure;
		class NamedElement;
		class List;
		class ListItem;
		class Paragraph;
		class Table;
		class TableRowGroup;
		class TableRow;
		class TableCell;
		class Section;
		class MatrixTransform;
		class SolidColorBrush;
		class ImageBrush;
		class Transform;
		class VisualBrush;
		class Visual;
		class Canvas;
		class Resources;
		class ResourceDictionary;
		class Glyphs;
		class Geometry;
		class PathGeometry;
		class PathFigure;
		class ArcSegment;
		class PolyBezierSegment;
		class PolyLineSegment;
		class PolyQuadraticBezierSegment;
		class Brush;
		class LinearGradientBrush;
		class GradientStop;
		class RadialGradientBrush;
		class Path;
		class FixedPage;
		class FixedDocument;
		class PageContent;
		class LinkTarget;
		class FixedDocumentSequence;
		class DocumentReference;
		class LinkTargets;
		class PdfFontBase;
		class PdfFont;
		class GradientStops;
		class Relationships;
		class Relationship;
		class SignatureDefinitionsType;
		class SignatureDefinitionType;
		class SpotLocationType;
		class AlternateContent;
		class Choice;
		class Fallback;
		class Baloo;
		class PdfToHtmlParameter;
		class SimpleTextExtractionStrategy;
		class Pdf3DActivation;
		class Pdf3DAnimation;
		class Pdf3DBackground;
		class Pdf3DCrossSection;
		class Pdf3DCrossSectionCollection;
		class Pdf3DLighting;
		class Pdf3DNode;
		class Pdf3DNodeCollection;
		class Pdf3DProjection;
		class Pdf3DRendermode;
		class Pdf3DView;
		class Pdf3DViewCollection;
		class PdfActionAnnotation;
		class PdfActionLinkAnnotation;
		class PdfFreeTextAnnotation;
		class PdfLineAnnotation;
		class LineBorder;
		class PdfLinkAnnotation;
		class Pdf3DAnnotation;
		class PdfInkAnnotation;
		class PdfInkAnnotationWidget;
		class PdfPolygonAnnotation;
		class PdfPolyLineAnnotation;
		class PdfRubberStampAnnotation;
		class PdfWatermarkAnnotation;
		class PdfTextWebLink;
		class PdfTextMarkupAnnotation;
		class PdfAnnotationWidget;
		class PdfAttachmentAnnotationWidget;
		class PdfCaretAnnotationWidget;
		class PdfDocumentLinkAnnotationWidget;
		class PdfFileLinkAnnotationWidget;
		class PdfFreeTextAnnotationWidget;
		class PdfLineAnnotationWidget;
		class PdfMarkUpAnnotationWidget;
		class PdfPolygonAndPolyLineAnnotationWidget;
		class PdfPolygonAnnotationWidget;
		class PdfPolyLineAnnotationWidget;
		class PdfPopupAnnotationWidget;
		class PdfRubberStampAnnotationWidget;
		class PdfSoundAnnotationWidget;
		class PdfSquareAnnotationWidget;
		class PdfStyledAnnotationWidget;
		class PdfTextAnnotationWidget;
		class PdfTextMarkupAnnotationWidget;
		class PdfTextWebLinkAnnotationWidget;
		class PdfUriAnnotationWidget;
		class PdfWatermarkAnnotationWidget;
		class PdfWebLinkAnnotationWidget;
		class PdfAnnotation;
		class PdfAnnotationBorder;
		class PdfAnnotationCollection;
		class PdfAttachmentAnnotation;
		class PdfDocumentLinkAnnotation;
		class PdfFileAnnotation;
		class PdfFileLinkAnnotation;
		class PdfPopupAnnotation;
		class PdfSoundAnnotation;
		class PdfUriAnnotation;
		class PdfAppearanceState;
		class PdfAppearance;
		class PdfExtendedAppearance;
		class PdfAction;
		class PdfActionCollection;
		class PdfFormAction;
		class PdfGoToAction;
		class PdfGotoNameAction;
		class PdfJavaScriptAction;
		class PdfJavaScript;
		class PdfLaunchAction;
		class PdfNamedAction;
		class PdfAnnotationActions;
		class PdfDocumentActions;
		class PdfEmbeddedGoToAction;
		class PdfFieldActions;
		class PdfResetAction;
		class PdfSoundAction;
		class PdfSubmitAction;
		class PdfUriAction;
		class BookletOptions;
		class MergerOptions;
		class PdfBookletCreator;
		class Utilities_PdfImageInfo;
		class PdfImageHelper;
		class PdfMerger;
		class Utilities_PdfTable;
		class PdfTableExtractor;
		class PdfTextFragment;
		class PdfTextFindOptions;
		class PdfTextFinder;
		class PdfTextExtractor;
		class PdfTextReplacer;
		class PdfTextExtractOptions;
		class PdfPaperSizes;
		class PdfPaperSettingsEventArgs;
		class PdfPaperSettingsEventHandler;
		class PdfPrintSettings;
		class PdfTaggedContent;
		class PdfStructureTreeRoot;
		class ArtifactPropertyList;
		class PdfStandardStructTypes;
		class PdfAttributeOwner;
		class PdfStructureAttributes;
		class PdfStructContentItem;
		class IStructureNode;
		class PdfStructureElement;
		class PdfSignatureProperties;
		class IPdfSignatureFormatter;
		class PdfPKCS1Formatter;
		class PdfPKCS7Formatter;
		class TSAHttpService;
		class OCSPHttpService;
		class IOCSPService;
		class ITSAService;
		class PdfSignatureAppearance;
		class IPdfSignatureAppearance;
		class PdfOrdinarySignatureMaker;
		class PdfMDPSignatureMaker;
		class PdfSignature;
		class PdfSignatureMaker;
		class Security_PdfSignature;
		class DocxOptions;
		class OfdConverter;
		class PdfToDocConverter;
		class PdfToLinearizedPdfConverter;
		class PdfGrayConverter;
		class PdfStandardsConverter;
		class PdfCompressor;
		class OptimizationOptions;
		class XlsxLineLayoutOptions;
		class XlsxOptions;
		class XlsxTextLayoutOptions;
		class PdfConformanceException;
		class PdfAnnotationException;
		class PdfException;
		class PdfDocumentException;
		class PdfSound;
		class PdfDestination;
		class PdfEmbeddedFileSpecification;
		class PdfFileSpecificationBase;
		class PdfTextFind;
		class PdfTextFindCollection;
		class IProcessor;
		class IUofCompressAdapter;
		class IUOFTranslator;
		class NotAnOoxDocumentException;
		class NotAnUofDocumentException;
		class TranslatorFactory;
		class UofEventArgs;
		class UOFTranslator;
		class ZipEntryNotFoundException;
		class ZipException;
		class ZipFactory;
		class ZipReader;
		class ZipWriter;
		class ZlibZipWriter;
		class PdfCalGrayColor;
		class PdfCalGrayColorSpace;
		class PdfCalRGBColor;
		class PdfCalRGBColorSpace;
		class PdfColorSpaces;
		class PdfDeviceColorSpace;
		class PdfComplexColor;
		class PdfICCColor;
		class PdfICCColorSpace;
		class PdfKnownColor;
		class PdfKnownColorSpace;
		class PdfLabColor;
		class PdfLabColorSpace;
		class PdfSeparationColor;
		class PdfSeparationColorSpace;
		class Security_IPdfSignatureFormatter;
		class PdfCertificate;
		class PdfSecurity;
		class CompressorCreator;
		class ProgressEventHandler;
		class GraphicsGenerateHandler;
		class TimestampGenerateHandler;
		class OCSPResponseGenerateHandler;

	}
}

#include "pdf/h/AlternateContent.h" 
#include "pdf/h/ArcSegment.h" 
#include "pdf/h/ArtifactPropertyList.h" 
#include "pdf/h/AspectRatio.h" 
#include "pdf/h/Baloo.h" 
#include "pdf/h/CellLayoutEventArgs.h" 
#include "pdf/h/BeginCellLayoutEventArgs.h" 
#include "pdf/h/BeginCellLayoutEventHandler.h" 
#include "pdf/h/BeginItemLayoutEventArgs.h" 
#include "pdf/h/BeginItemLayoutEventHandler.h" 
#include "pdf/h/BeginPageLayoutEventArgs.h" 
#include "pdf/h/BeginPageLayoutEventHandler.h" 
#include "pdf/h/BeginRowLayoutEventArgs.h" 
#include "pdf/h/BeginRowLayoutEventHandler.h" 
#include "pdf/h/BookletOptions.h" 
#include "pdf/h/Break.h" 
#include "pdf/h/Brush.h" 
#include "pdf/h/Canvas.h" 
#include "pdf/h/Choice.h" 
#include "pdf/h/Clip.h" 
#include "pdf/h/ClrIntMode.h" 
#include "pdf/h/Collections_PdfCollection.h" 
#include "pdf/h/CompressionLevel.h" 
#include "pdf/h/CompressionMethod.h" 
#include "pdf/h/CompressorCreator.h" 
#include "pdf/h/ConfiguerGraphicType.h" 
#include "pdf/h/Constants.h" 
#include "pdf/h/Coord.h" 
#include "pdf/h/CustomFieldType.h" 
#include "pdf/h/CustomMetadata.h" 
#include "pdf/h/DashCap.h" 
#include "pdf/h/DataFormat.h" 
#include "pdf/h/Discard.h" 
#include "pdf/h/DiscardControl.h" 
#include "pdf/h/DocType.h" 
#include "pdf/h/DocumentOutline.h" 
#include "pdf/h/DocumentReference.h" 
#include "pdf/h/DocumentStructure.h" 
#include "pdf/h/DocxOptions.h" 
#include "pdf/h/DrawPageInBookletEventArgs.h" 
#include "pdf/h/DrawPageInBookletEventHandler.h" 
#include "pdf/h/EdgeMode.h" 
#include "pdf/h/EndCellLayoutEventArgs.h" 
#include "pdf/h/EndCellLayoutEventHandler.h" 
#include "pdf/h/EndItemLayoutEventArgs.h" 
#include "pdf/h/EndItemLayoutEventHandler.h" 
#include "pdf/h/EndPageLayoutEventArgs.h" 
#include "pdf/h/EndPageLayoutEventHandler.h" 
#include "pdf/h/EndRowLayoutEventArgs.h" 
#include "pdf/h/EndRowLayoutEventHandler.h" 
#include "pdf/h/EndTextPageLayoutEventArgs.h" 
#include "pdf/h/EndTextPageLayoutEventHandler.h" 
#include "pdf/h/Fallback.h" 
#include "pdf/h/Figure.h" 
#include "pdf/h/FileFormat.h" 
#include "pdf/h/FileRelatedFieldType.h" 
#include "pdf/h/FillRule.h" 
#include "pdf/h/Find_TextFindParameter.h" 
#include "pdf/h/FixedDocument.h" 
#include "pdf/h/FixedDocumentSequence.h" 
#include "pdf/h/FixedPage.h" 
#include "pdf/h/FragmentType.h" 
#include "pdf/h/GeneralPurposeBitFlags.h" 
#include "pdf/h/Geometry.h" 
#include "pdf/h/Glyphs.h" 
#include "pdf/h/GradientStop.h" 
#include "pdf/h/GradientStops.h" 
#include "pdf/h/GraphicMode.h" 
#include "pdf/h/GraphicsGenerateHandler.h" 
#include "pdf/h/HebrewConvert.h" 
#include "pdf/h/HtmlConverter.h" 
#include "pdf/h/HtmlToPdfLayoutParams.h" 
#include "pdf/h/HtmlToPdfResult.h" 
#include "pdf/h/HttpMethod.h" 
#include "pdf/h/HttpReadType.h" 
#include "pdf/h/IFileNamePreprocessor.h" 
#include "pdf/h/ImageBrush.h" 
#include "pdf/h/ImageFormatType.h" 
#include "pdf/h/ImageType.h" 
#include "pdf/h/ImageQuality.h" 
#include "pdf/h/ImgData.h" 
#include "pdf/h/IOCSPService.h" 
#include "pdf/h/IPdfComboBoxField.h" 
#include "pdf/h/IPdfSignatureAppearance.h" 
#include "pdf/h/IPdfSignatureFormatter.h" 
#include "pdf/h/IPdfTextBoxField.h" 
#include "pdf/h/IProcessor.h" 
#include "pdf/h/IStructureNode.h" 
#include "pdf/h/ItemsChoiceType.h" 
#include "pdf/h/ITSAService.h" 
#include "pdf/h/IUofCompressAdapter.h" 
#include "pdf/h/IUOFTranslator.h" 
#include "pdf/h/LayerExportState.h" 
#include "pdf/h/LayerPrintState.h" 
#include "pdf/h/LayerViewState.h" 
#include "pdf/h/LightTableBeginPageLayoutEventArgs.h" 
#include "pdf/h/LightTableEndPageLayoutEventArgs.h" 
#include "pdf/h/LinearGradientBrush.h" 
#include "pdf/h/LineBorder.h" 
#include "pdf/h/LineCap.h" 
#include "pdf/h/LineInfo.h" 
#include "pdf/h/LineJoin.h" 
#include "pdf/h/LineType.h" 
#include "pdf/h/LinkTarget.h" 
#include "pdf/h/LinkTargets.h" 
#include "pdf/h/List.h" 
#include "pdf/h/ListBeginPageLayoutEventArgs.h" 
#include "pdf/h/ListEndPageLayoutEventArgs.h" 
#include "pdf/h/ListItem.h" 
#include "pdf/h/LoadHtmlType.h" 
#include "pdf/h/MappingMode.h" 
#include "pdf/h/MatrixTransform.h" 
#include "pdf/h/MergerOptions.h" 
#include "pdf/h/NamedElement.h" 
#include "pdf/h/NotAnOoxDocumentException.h" 
#include "pdf/h/NotAnUofDocumentException.h" 
#include "pdf/h/OCSPHttpService.h" 
#include "pdf/h/OCSPResponseGenerateHandler.h" 
#include "pdf/h/OfdConverter.h" 
#include "pdf/h/Outline.h" 
#include "pdf/h/OutlineEntry.h" 
#include "pdf/h/OptimizationOptions.h" 
#include "pdf/h/PageAddedEventArgs.h" 
#include "pdf/h/PageAddedEventHandler.h" 
#include "pdf/h/PageContent.h" 
#include "pdf/h/Paragraph.h" 
#include "pdf/h/Path.h" 
#include "pdf/h/PathFigure.h" 
#include "pdf/h/PathGeometry.h" 
#include "pdf/h/pch.h" 
#include "pdf/h/Pdf3DActivation.h" 
#include "pdf/h/Pdf3DActivationMode.h" 
#include "pdf/h/Pdf3DActivationState.h" 
#include "pdf/h/Pdf3DAnimation.h" 
#include "pdf/h/PDF3DAnimationType.h" 
#include "pdf/h/Pdf3DAnnotation.h" 
#include "pdf/h/Pdf3DBackground.h" 
#include "pdf/h/Pdf3DCrossSection.h" 
#include "pdf/h/Pdf3DCrossSectionCollection.h" 
#include "pdf/h/Pdf3DDeactivationMode.h" 
#include "pdf/h/Pdf3DDeactivationState.h" 
#include "pdf/h/Pdf3DLighting.h" 
#include "pdf/h/Pdf3DLightingStyle.h" 
#include "pdf/h/Pdf3DNode.h" 
#include "pdf/h/Pdf3DNodeCollection.h" 
#include "pdf/h/Pdf3DProjection.h" 
#include "pdf/h/Pdf3DProjectionClipStyle.h" 
#include "pdf/h/Pdf3DProjectionOrthoScaleMode.h" 
#include "pdf/h/Pdf3DProjectionType.h" 
#include "pdf/h/Pdf3DRendermode.h" 
#include "pdf/h/Pdf3DRenderStyle.h" 
#include "pdf/h/Pdf3DView.h" 
#include "pdf/h/Pdf3DViewCollection.h" 
#include "pdf/h/PdfAction.h" 
#include "pdf/h/PdfActionAnnotation.h" 
#include "pdf/h/PdfActionCollection.h" 
#include "pdf/h/PdfActionDestination.h" 
#include "pdf/h/PdfActionLinkAnnotation.h" 
#include "pdf/h/PdfAlignmentStyle.h" 
#include "pdf/h/PdfAnnotation.h" 
#include "pdf/h/PdfAnnotationActions.h" 
#include "pdf/h/PdfAnnotationBorder.h" 
#include "pdf/h/PdfAnnotationCollection.h" 
#include "pdf/h/PdfAnnotationException.h" 
#include "pdf/h/PdfAnnotationFlags.h" 
#include "pdf/h/PdfAnnotationIntent.h" 
#include "pdf/h/PdfAnnotationWidget.h" 
#include "pdf/h/PdfAnnotationWidgetCollection.h" 
#include "pdf/h/PdfAnnotationWidgetTypes.h" 
#include "pdf/h/PdfAppearance.h" 
#include "pdf/h/PdfAppearanceField.h" 
#include "pdf/h/PdfAppearanceState.h" 
#include "pdf/h/PdfApplicationData.h" 
#include "pdf/h/PdfAttachment.h" 
#include "pdf/h/PdfAttachmentAnnotation.h" 
#include "pdf/h/PdfAttachmentAnnotationWidget.h" 
#include "pdf/h/PdfAttachmentCollection.h" 
#include "pdf/h/PdfAttachmentIcon.h" 
#include "pdf/h/PdfAttachmentRelationship.h" 
#include "pdf/h/PdfAttributeOwner.h" 
#include "pdf/h/PdfAutomaticField.h" 
#include "pdf/h/PdfBarcode.h" 
#include "pdf/h/PdfBarcodeException.h" 
#include "pdf/h/PdfBarcodeQuietZones.h" 
#include "pdf/h/PdfBarcodeTextAlignment.h" 
#include "pdf/h/PdfBitmap.h" 
#include "pdf/h/PdfBlend.h" 
#include "pdf/h/PdfBlendBase.h" 
#include "pdf/h/PdfBlendMode.h" 
#include "pdf/h/PdfBookletBindingMode.h" 
#include "pdf/h/PdfBookletCreator.h" 
#include "pdf/h/PdfBookletSubsetMode.h" 
#include "pdf/h/PdfBookmark.h" 
#include "pdf/h/PdfBookmarkCollection.h" 
#include "pdf/h/PdfBookmarkWidget.h" 
#include "pdf/h/PdfBorderEffect.h" 
#include "pdf/h/PdfBorderOverlapStyle.h" 
#include "pdf/h/PdfBorders.h" 
#include "pdf/h/PdfBorderStyle.h" 
#include "pdf/h/PdfBrush.h" 
#include "pdf/h/PdfBrushes.h" 
#include "pdf/h/PdfButtonField.h" 
#include "pdf/h/PdfButtonIconLayout.h" 
#include "pdf/h/PdfButtonIconScaleMode.h" 
#include "pdf/h/PdfButtonIconScaleReason.h" 
#include "pdf/h/PdfButtonLayoutMode.h" 
#include "pdf/h/PdfButtonWidgetFieldWidget.h" 
#include "pdf/h/PdfButtonWidgetItemCollection.h" 
#include "pdf/h/PdfButtonWidgetWidgetItem.h" 
#include "pdf/h/PdfCalGrayColor.h" 
#include "pdf/h/PdfCalGrayColorSpace.h" 
#include "pdf/h/PdfCalRGBColor.h" 
#include "pdf/h/PdfCalRGBColorSpace.h" 
#include "pdf/h/PdfCancelEventArgs.h" 
#include "pdf/h/PdfCanvas.h" 
#include "pdf/h/PdfCaretAnnotationWidget.h" 
#include "pdf/h/PdfCellStyle.h" 
#include "pdf/h/PdfCertificate.h" 
#include "pdf/h/PdfCertificationFlags.h" 
#include "pdf/h/PdfCheckBoxField.h" 
#include "pdf/h/PdfCheckBoxStyle.h" 
#include "pdf/h/PdfCheckBoxWidgetFieldWidget.h" 
#include "pdf/h/PdfCheckBoxWidgetWidgetItem.h" 
#include "pdf/h/PdfCheckBoxWidgetWidgetItemCollection.h" 
#include "pdf/h/PdfCheckFieldBase.h" 
#include "pdf/h/PdfChoiceWidgetFieldWidget.h" 
#include "pdf/h/PdfCjkFontFamily.h" 
#include "pdf/h/PdfCjkStandardFont.h" 
#include "pdf/h/PdfCodabarBarcode.h" 
#include "pdf/h/PdfCode11Barcode.h" 
#include "pdf/h/PdfCode128ABarcode.h" 
#include "pdf/h/PdfCode128BBarcode.h" 
#include "pdf/h/PdfCode128CBarcode.h" 
#include "pdf/h/PdfCode32Barcode.h" 
#include "pdf/h/PdfCode39Barcode.h" 
#include "pdf/h/PdfCode39ExtendedBarcode.h" 
#include "pdf/h/PdfCode93Barcode.h" 
#include "pdf/h/PdfCode93ExtendedBarcode.h" 
#include "pdf/h/PdfCollection.h" 
#include "pdf/h/PdfColorBlend.h" 
#include "pdf/h/PdfColorMask.h" 
#include "pdf/h/PdfColorSpace.h" 
#include "pdf/h/PdfColorSpaces.h" 
#include "pdf/h/PdfColumn.h" 
#include "pdf/h/PdfColumnCollection.h" 
#include "pdf/h/PdfComboBoxField.h" 
#include "pdf/h/PdfComboBoxWidgetFieldWidget.h" 
#include "pdf/h/PdfComboBoxWidgetItemCollection.h" 
#include "pdf/h/PdfComboBoxWidgetWidgetItem.h" 
#include "pdf/h/PdfComplexColor.h" 
#include "pdf/h/PdfCompositeField.h" 
#include "pdf/h/PdfCompressionLevel.h" 
#include "pdf/h/PdfCompressor.h"
#include "pdf/h/PdfConformanceException.h" 
#include "pdf/h/PdfConformanceLevel.h" 
#include "pdf/h/PdfConvertOptions.h" 
#include "pdf/h/PdfCreationDateField.h" 
#include "pdf/h/PdfCrossReferenceType.h" 
#include "pdf/h/PdfDashStyle.h" 
#include "pdf/h/PdfDateTimeField.h" 
#include "pdf/h/PdfDestination.h" 
#include "pdf/h/PdfDestinationMode.h" 
#include "pdf/h/PdfDestinationPageNumberField.h" 
#include "pdf/h/PdfDeviceColorSpace.h" 
#include "pdf/h/PdfDockStyle.h" 
#include "pdf/h/PdfDocument.h" 
#include "pdf/h/PdfDocumentActions.h" 
#include "pdf/h/PdfDocumentAuthorField.h" 
#include "pdf/h/PdfDocumentBase.h" 
#include "pdf/h/PdfDocumentException.h" 
#include "pdf/h/PdfDocumentInformation.h" 
#include "pdf/h/PdfDocumentLinkAnnotation.h" 
#include "pdf/h/PdfDocumentLinkAnnotationWidget.h" 
#include "pdf/h/PdfDocumentPageCollection.h" 
#include "pdf/h/PdfDocumentTemplate.h" 
#include "pdf/h/PdfDrawWidget.h" 
#include "pdf/h/PdfDynamicField.h" 
#include "pdf/h/PdfEdges.h" 
#include "pdf/h/PdfEmbeddedFileSpecification.h" 
#include "pdf/h/PdfEmbeddedGoToAction.h" 
#include "pdf/h/PdfEncryptionAlgorithm.h" 
#include "pdf/h/PdfEncryptionKeySize.h" 
#include "pdf/h/PdfException.h" 
#include "pdf/h/PdfExtend.h" 
#include "pdf/h/PdfExtendedAppearance.h" 
#include "pdf/h/PdfField.h" 
#include "pdf/h/PdfFieldActions.h" 
#include "pdf/h/PdfFieldCollection.h" 
#include "pdf/h/PdfFieldWidget.h" 
#include "pdf/h/PdfFieldWidgetImportError.h" 
#include "pdf/h/PdfFieldWidgetItem.h" 
#include "pdf/h/PdfFileAnnotation.h" 
#include "pdf/h/PdfFileInfo.h" 
#include "pdf/h/PdfFileLinkAnnotation.h" 
#include "pdf/h/PdfFileLinkAnnotationWidget.h" 
#include "pdf/h/PdfFilePathType.h" 
#include "pdf/h/PdfFileSpecificationBase.h" 
#include "pdf/h/PdfFillElement.h" 
#include "pdf/h/PdfFillMode.h" 
#include "pdf/h/PdfFolder.h" 
#include "pdf/h/PdfFont.h" 
#include "pdf/h/PdfFontBase.h" 
#include "pdf/h/PdfFontFamily.h" 
#include "pdf/h/PdfFontStyle.h" 
#include "pdf/h/PdfFontType.h" 
#include "pdf/h/PdfForm.h" 
#include "pdf/h/PdfFormAction.h" 
#include "pdf/h/PdfFormFieldCollection.h" 
#include "pdf/h/PdfFormFieldWidgetCollection.h" 
#include "pdf/h/PdfFormWidget.h" 
#include "pdf/h/PdfFreeTextAnnotation.h" 
#include "pdf/h/PdfFreeTextAnnotationWidget.h" 
#include "pdf/h/PdfGoToAction.h" 
#include "pdf/h/PdfGotoNameAction.h" 
#include "pdf/h/PdfGradientBrush.h" 
#include "pdf/h/PdfGraphicsState.h" 
#include "pdf/h/PdfGraphicsUnit.h" 
#include "pdf/h/PdfGraphicsWidget.h" 
#include "pdf/h/PdfGrayConverter.h" 
#include "pdf/h/PdfGrid.h" 
#include "pdf/h/PdfGridBeginPageLayoutEventArgs.h" 
#include "pdf/h/PdfGridCell.h" 
#include "pdf/h/PdfGridCellCollection.h" 
#include "pdf/h/PdfGridCellContent.h" 
#include "pdf/h/PdfGridCellContentList.h" 
#include "pdf/h/PdfGridCellStyle.h" 
#include "pdf/h/PdfGridColumn.h" 
#include "pdf/h/PdfGridColumnCollection.h" 
#include "pdf/h/PdfGridEndPageLayoutEventArgs.h" 
#include "pdf/h/PdfGridHeaderCollection.h" 
#include "pdf/h/PdfGridLayoutFormat.h" 
#include "pdf/h/PdfGridLayoutResult.h" 
#include "pdf/h/PdfGridRow.h" 
#include "pdf/h/PdfGridRowCollection.h" 
#include "pdf/h/PdfGridRowStyle.h" 
#include "pdf/h/PdfGridStyle.h" 
#include "pdf/h/PdfGridStyleBase.h" 
#include "pdf/h/PdfHeaderSource.h" 
#include "pdf/h/PdfHighlightMode.h" 
#include "pdf/h/PdfHorizontalAlignment.h" 
#include "pdf/h/PdfHorizontalOverflowType.h" 
#include "pdf/h/PdfHtmlLayoutFormat.h" 
#include "pdf/h/PdfHTMLTextElement.h" 
#include "pdf/h/PdfICCColor.h" 
#include "pdf/h/PdfICCColorSpace.h" 
#include "pdf/h/PdfImage.h" 
#include "pdf/h/PdfImageHelper.h" 
#include "pdf/h/PdfImageInfo.h" 
#include "pdf/h/PdfImageMask.h" 
#include "pdf/h/PdfImageType.h" 
#include "pdf/h/PdfInkAnnotation.h" 
#include "pdf/h/PdfInkAnnotationWidget.h" 
#include "pdf/h/PdfJavaScript.h" 
#include "pdf/h/PdfJavaScriptAction.h" 
#include "pdf/h/PdfKnownColor.h" 
#include "pdf/h/PdfKnownColorSpace.h" 
#include "pdf/h/PdfLabColor.h" 
#include "pdf/h/PdfLabColorSpace.h" 
#include "pdf/h/PdfLaunchAction.h" 
#include "pdf/h/PdfLayer.h" 
#include "pdf/h/PdfLayerCollection.h" 
#include "pdf/h/PdfLayerOutline.h" 
#include "pdf/h/PdfLayoutBreakType.h" 
#include "pdf/h/PdfLayoutHTMLResult.h" 
#include "pdf/h/PdfLayoutParams.h" 
#include "pdf/h/PdfLayoutResult.h" 
#include "pdf/h/PdfLayoutType.h" 
#include "pdf/h/PdfLayoutWidget.h" 
#include "pdf/h/PdfLineAnnotation.h" 
#include "pdf/h/PdfLineAnnotationWidget.h" 
#include "pdf/h/PdfLinearGradientBrush.h" 
#include "pdf/h/PdfLinearGradientMode.h" 
#include "pdf/h/PdfLineBorderStyle.h" 
#include "pdf/h/PdfLineCap.h" 
#include "pdf/h/PdfLineCaptionType.h" 
#include "pdf/h/PdfLineEndingStyle.h" 
#include "pdf/h/PdfLineIntent.h" 
#include "pdf/h/PdfLineJoin.h" 
#include "pdf/h/PdfLinkAnnotation.h" 
#include "pdf/h/PdfList.h" 
#include "pdf/h/PdfListBase.h" 
#include "pdf/h/PdfListBoxField.h" 
#include "pdf/h/PdfListBoxWidgetFieldWidget.h" 
#include "pdf/h/PdfListField.h" 
#include "pdf/h/PdfListFieldItem.h" 
#include "pdf/h/PdfListFieldItemCollection.h" 
#include "pdf/h/PdfListFieldWidgetItem.h" 
#include "pdf/h/PdfListItem.h" 
#include "pdf/h/PdfListItemCollection.h" 
#include "pdf/h/PdfListMarkerAlignment.h" 
#include "pdf/h/PdfListWidgetFieldItemCollection.h" 
#include "pdf/h/PdfListWidgetItem.h" 
#include "pdf/h/PdfListWidgetItemCollection.h" 
#include "pdf/h/PdfMargins.h" 
#include "pdf/h/PdfMarker.h" 
#include "pdf/h/PdfMarkerBase.h" 
#include "pdf/h/PdfMarkUpAnnotationWidget.h" 
#include "pdf/h/PdfMask.h" 
#include "pdf/h/PdfMatrix.h" 
#include "pdf/h/PdfMatrixOrder.h" 
#include "pdf/h/PdfMDPSignatureMaker.h" 
#include "pdf/h/PdfMerger.h" 
#include "pdf/h/PdfMetafile.h" 
#include "pdf/h/PdfMetafileLayoutFormat.h" 
#include "pdf/h/PdfMultiPageOrder.h" 
#include "pdf/h/PdfMultipleNumberValueField.h" 
#include "pdf/h/PdfMultipleValueField.h" 
#include "pdf/h/PdfNamedAction.h" 
#include "pdf/h/PdfNewDocument.h" 
#include "pdf/h/PdfNewPage.h" 
#include "pdf/h/PdfNumberStyle.h" 
#include "pdf/h/PdfOrderedMarker.h" 
#include "pdf/h/PdfOrdinarySignatureMaker.h" 
#include "pdf/h/PdfPaddings.h" 
#include "pdf/h/PdfPageBase.h" 
#include "pdf/h/PdfPageCollection.h" 
#include "pdf/h/PdfPageCountField.h" 
#include "pdf/h/PdfPageLabels.h" 
#include "pdf/h/PdfPageLayout.h" 
#include "pdf/h/PdfPageMode.h" 
#include "pdf/h/PdfPageNumberField.h" 
#include "pdf/h/PdfPageOrientation.h" 
#include "pdf/h/PdfPageRotateAngle.h" 
#include "pdf/h/PdfPageSettings.h" 
#include "pdf/h/PdfPageSize.h" 
#include "pdf/h/PdfPageTemplateElement.h" 
#include "pdf/h/PdfPageTransition.h" 
#include "pdf/h/PdfPageWidget.h" 
#include "pdf/h/PdfPageWidgetEnumerator.h" 
#include "pdf/h/PdfPaperSettingsEventArgs.h" 
#include "pdf/h/PdfPaperSettingsEventHandler.h" 
#include "pdf/h/PdfPaperSizes.h" 
#include "pdf/h/PdfPaperSourceTray.h" 
#include "pdf/h/PdfPath.h" 
#include "pdf/h/PdfPen.h" 
#include "pdf/h/PdfPens.h" 
#include "pdf/h/PdfPermissionsFlags.h" 
#include "pdf/h/PdfPieceInfo.h" 
#include "pdf/h/PdfPKCS1Formatter.h" 
#include "pdf/h/PdfPKCS7Formatter.h" 
#include "pdf/h/PdfPolygonAndPolyLineAnnotationWidget.h" 
#include "pdf/h/PdfPolygonAnnotation.h" 
#include "pdf/h/PdfPolygonAnnotationWidget.h" 
#include "pdf/h/PdfPolyLineAnnotation.h" 
#include "pdf/h/PdfPolyLineAnnotationWidget.h" 
#include "pdf/h/PdfPopupAnnotation.h" 
#include "pdf/h/PdfPopupAnnotationWidget.h" 
#include "pdf/h/PdfPopupIcon.h" 
#include "pdf/h/PdfPrinterResolutionKind.h" 
#include "pdf/h/PdfPrintSettings.h" 
#include "pdf/h/PdfRadialGradientBrush.h" 
#include "pdf/h/PdfRadioButtonItemCollection.h" 
#include "pdf/h/PdfRadioButtonListField.h" 
#include "pdf/h/PdfRadioButtonListFieldWidget.h" 
#include "pdf/h/PdfRadioButtonListItem.h" 
#include "pdf/h/PdfRadioButtonWidgetItem.h" 
#include "pdf/h/PdfRadioButtonWidgetWidgetItemCollection.h" 
#include "pdf/h/PdfResetAction.h" 
#include "pdf/h/PdfRGBColor.h" 
#include "pdf/h/PdfRow.h" 
#include "pdf/h/PdfRowCollection.h" 
#include "pdf/h/PdfRubberStampAnnotation.h" 
#include "pdf/h/PdfRubberStampAnnotationIcon.h" 
#include "pdf/h/PdfRubberStampAnnotationWidget.h" 
#include "pdf/h/PdfSection.h" 
#include "pdf/h/PdfSectionCollection.h" 
#include "pdf/h/PdfSectionNumberField.h" 
#include "pdf/h/PdfSectionPageCollection.h" 
#include "pdf/h/PdfSectionPageCountField.h" 
#include "pdf/h/PdfSectionPageNumberField.h" 
#include "pdf/h/PdfSectionTemplate.h" 
#include "pdf/h/PdfSecurity.h" 
#include "pdf/h/PdfSeparationColor.h" 
#include "pdf/h/PdfSeparationColorSpace.h" 
#include "pdf/h/PdfShapeWidget.h" 
#include "pdf/h/PdfSignature.h" 
#include "pdf/h/PdfSignatureAppearance.h" 
#include "pdf/h/PdfSignatureAppearanceField.h" 
#include "pdf/h/PdfSignatureField.h" 
#include "pdf/h/PdfSignatureFieldWidget.h" 
#include "pdf/h/PdfSignatureMaker.h" 
#include "pdf/h/PdfSignatureProperties.h" 
#include "pdf/h/PdfSignatureStyledField.h" 
#include "pdf/h/Security_PdfSignature.h" 
#include "pdf/h/PdfSinglePageScalingMode.h" 
#include "pdf/h/PdfSingleValueField.h" 
#include "pdf/h/PdfSolidBrush.h" 
#include "pdf/h/PdfSortedList.h" 
#include "pdf/h/PdfSound.h" 
#include "pdf/h/PdfSoundAction.h" 
#include "pdf/h/PdfSoundAnnotation.h" 
#include "pdf/h/PdfSoundAnnotationWidget.h" 
#include "pdf/h/PdfSoundChannels.h" 
#include "pdf/h/PdfSoundEncoding.h" 
#include "pdf/h/PdfSoundIcon.h" 
#include "pdf/h/PdfSquareAnnotationWidget.h" 
#include "pdf/h/PdfStampCollection.h" 
#include "pdf/h/PdfStandardsConverter.h" 
#include "pdf/h/PdfStandardStructTypes.h" 
#include "pdf/h/PdfStateFieldWidget.h" 
#include "pdf/h/PdfStateItemCollection.h" 
#include "pdf/h/PdfStateWidgetItem.h" 
#include "pdf/h/PdfStateWidgetItemCollection.h" 
#include "pdf/h/PdfStaticField.h" 
#include "pdf/h/PdfStringFormat.h" 
#include "pdf/h/PdfStringLayouter.h" 
#include "pdf/h/PdfStringLayoutResult.h" 
#include "pdf/h/PdfStructContentItem.h" 
#include "pdf/h/PdfStructureAttributes.h" 
#include "pdf/h/PdfStructureElement.h" 
#include "pdf/h/PdfStructureTreeRoot.h" 
#include "pdf/h/PdfStyledAnnotationWidget.h" 
#include "pdf/h/PdfStyledField.h" 
#include "pdf/h/PdfStyledFieldWidget.h" 
#include "pdf/h/PdfSubmitAction.h" 
#include "pdf/h/PdfSubmitFormFlags.h" 
#include "pdf/h/PdfSubSuperScript.h" 
#include "pdf/h/PdfTable.h" 
#include "pdf/h/PdfTableDataSourceType.h" 
#include "pdf/h/PdfTableException.h" 
#include "pdf/h/PdfTableExtractor.h" 
#include "pdf/h/PdfTableLayoutFormat.h" 
#include "pdf/h/PdfTableLayoutResult.h" 
#include "pdf/h/PdfTableStyle.h" 
#include "pdf/h/PdfTaggedContent.h" 
#include "pdf/h/PdfTemplate.h" 
#include "pdf/h/PdfTexBoxWidgetItem.h" 
#include "pdf/h/PdfTextAlignment.h" 
#include "pdf/h/PdfTextAnnotationIcon.h" 
#include "pdf/h/PdfTextAnnotationWidget.h" 
#include "pdf/h/PdfTextBoxField.h" 
#include "pdf/h/PdfTextBoxFieldWidget.h" 
#include "pdf/h/PdfTextBoxWidgetItemCollection.h" 
#include "pdf/h/PdfTextExtractOptions.h" 
#include "pdf/h/PdfTextExtractor.h" 
#include "pdf/h/PdfTextFind.h" 
#include "pdf/h/PdfTextFindCollection.h" 
#include "pdf/h/PdfTextFinder.h" 
#include "pdf/h/PdfTextFindOptions.h" 
#include "pdf/h/PdfTextFragment.h" 
#include "pdf/h/PdfTextLayout.h" 
#include "pdf/h/PdfTextLayoutResult.h" 
#include "pdf/h/PdfTextMarkupAnnotation.h" 
#include "pdf/h/PdfTextMarkupAnnotationType.h" 
#include "pdf/h/PdfTextMarkupAnnotationWidget.h" 
#include "pdf/h/PdfTextReplacer.h" 
#include "pdf/h/PdfTextStyle.h" 
#include "pdf/h/PdfTextWebLink.h" 
#include "pdf/h/PdfTextWebLinkAnnotationWidget.h" 
#include "pdf/h/PdfTextWidget.h" 
#include "pdf/h/PdfTilingBrush.h" 
#include "pdf/h/PdfToDocConverter.h" 
#include "pdf/h/PdfToHtmlParameter.h" 
#include "pdf/h/PdfToLinearizedPdfConverter.h" 
#include "pdf/h/PdfTransitionDimension.h" 
#include "pdf/h/PdfTransitionDirection.h" 
#include "pdf/h/PdfTransitionMotion.h" 
#include "pdf/h/PdfTransitionStyle.h" 
#include "pdf/h/PdfTrueTypeFont.h" 
#include "pdf/h/PdfUnidimensionalBarcode.h" 
#include "pdf/h/PdfUnitConvertor.h" 
#include "pdf/h/PdfUnorderedMarkerStyle.h" 
#include "pdf/h/PdfUriAction.h" 
#include "pdf/h/PdfUriAnnotation.h" 
#include "pdf/h/PdfUriAnnotationWidget.h" 
#include "pdf/h/PdfUsedFont.h" 
#include "pdf/h/PdfVersion.h" 
#include "pdf/h/PdfVerticalAlignment.h" 
#include "pdf/h/PdfViewerPreferences.h" 
#include "pdf/h/PdfVisibility.h" 
#include "pdf/h/PdfWatermarkAnnotation.h" 
#include "pdf/h/PdfWatermarkAnnotationWidget.h" 
#include "pdf/h/PdfWebLinkAnnotationWidget.h" 
#include "pdf/h/PdfWordWrapType.h" 
#include "pdf/h/PolyBezierSegment.h" 
#include "pdf/h/PolyLineSegment.h" 
#include "pdf/h/PolyQuadraticBezierSegment.h" 
#include "pdf/h/PrintScalingMode.h" 
#include "pdf/h/Print_PdfBookletBindingMode.h" 
#include "pdf/h/ProgressEventArgs.h" 
#include "pdf/h/ProgressEventHandler.h" 
#include "pdf/h/Qt_HtmlConverter.h" 
#include "pdf/h/QueryColumnCountEventArgs.h" 
#include "pdf/h/QueryColumnCountEventHandler.h" 
#include "pdf/h/QueryNextRowEventArgs.h" 
#include "pdf/h/QueryNextRowEventHandler.h" 
#include "pdf/h/QueryRowCountEventArgs.h" 
#include "pdf/h/QueryRowCountEventHandler.h" 
#include "pdf/h/RadialGradientBrush.h" 
#include "pdf/h/Relationship.h" 
#include "pdf/h/Relationships.h" 
#include "pdf/h/ResourceDictionary.h" 
#include "pdf/h/Resources.h" 
#include "pdf/h/Section.h" 
#include "pdf/h/Security_GraphicMode.h" 
#include "pdf/h/Security_IPdfSignatureFormatter.h" 
#include "pdf/h/Security_SignImageLayout.h" 
#include "pdf/h/SignatureConfiguerText.h" 
#include "pdf/h/SignatureDefinitionsType.h" 
#include "pdf/h/SignatureDefinitionType.h" 
#include "pdf/h/SignImageLayout.h" 
#include "pdf/h/SignInfoType.h" 
#include "pdf/h/SignTextAlignment.h" 
#include "pdf/h/SimpleTextExtractionStrategy.h" 
#include "pdf/h/SolidColorBrush.h" 
#include "pdf/h/SpotLocationType.h" 
#include "pdf/h/SpreadMethod.h" 
#include "pdf/h/StoreType.h" 
#include "pdf/h/Story.h" 
#include "pdf/h/StoryFragment.h" 
#include "pdf/h/StoryFragmentReference.h" 
#include "pdf/h/StoryFragments.h" 
#include "pdf/h/StyleSimulations.h" 
#include "pdf/h/SubmitDataFormat.h" 
#include "pdf/h/SweepDirection.h" 
#include "pdf/h/Table.h" 
#include "pdf/h/TableCell.h" 
#include "pdf/h/TableRow.h" 
#include "pdf/h/TableRowGroup.h" 
#include "pdf/h/TableWidthType.h" 
#include "pdf/h/TabOrder.h" 
#include "pdf/h/TextAlign.h" 
#include "pdf/h/TextFindParameter.h" 
#include "pdf/h/TextLocation.h" 
#include "pdf/h/TileMode.h" 
#include "pdf/h/TimestampGenerateHandler.h" 
#include "pdf/h/Transform.h" 
#include "pdf/h/TranslatorFactory.h" 
#include "pdf/h/TSAHttpService.h" 
#include "pdf/h/TypeEncodingCmap.h" 
#include "pdf/h/UofEventArgs.h" 
#include "pdf/h/UOFTranslator.h" 
#include "pdf/h/Utilities_PdfImageInfo.h" 
#include "pdf/h/Utilities_PdfTable.h" 
#include "pdf/h/ViewUnits.h" 
#include "pdf/h/Visual.h" 
#include "pdf/h/VisualBrush.h" 
#include "pdf/h/XfaBarcodeField.h" 
#include "pdf/h/XfaButtonField.h" 
#include "pdf/h/XfaCheckButtonField.h" 
#include "pdf/h/XfaChoiceListField.h" 
#include "pdf/h/XfaDateTimeField.h" 
#include "pdf/h/XfaDoubleField.h" 
#include "pdf/h/XfaField.h" 
#include "pdf/h/XfaFloatField.h" 
#include "pdf/h/XFAForm.h" 
#include "pdf/h/XfaImageField.h" 
#include "pdf/h/XfaIntField.h" 
#include "pdf/h/XfaSignatureField.h" 
#include "pdf/h/XfaTextField.h" 
#include "pdf/h/XlsxLineLayoutOptions.h" 
#include "pdf/h/XlsxOptions.h" 
#include "pdf/h/XlsxTextLayoutOptions.h" 
#include "pdf/h/XmpArrayType.h" 
#include "pdf/h/XmpEntityBase.h" 
#include "pdf/h/XmpMetadata.h" 
#include "pdf/h/XmpSchema.h" 
#include "pdf/h/XmpSchemaType.h" 
#include "pdf/h/XmpStructure.h" 
#include "pdf/h/XmpStructureType.h" 
#include "pdf/h/XmpType.h" 
#include "pdf/h/ZipArchiveItem.h" 
#include "pdf/h/ZipArchive.h" 
#include "pdf/h/ZipEntryNotFoundException.h" 
#include "pdf/h/ZipException.h" 
#include "pdf/h/ZipFactory.h" 
#include "pdf/h/ZippedContentStream.h" 
#include "pdf/h/ZipReader.h" 
#include "pdf/h/ZipWriter.h" 
#include "pdf/h/ZlibZipWriter.h" 



