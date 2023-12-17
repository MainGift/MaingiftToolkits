#pragma once
#include "pch.h"
#include "PdfColorSpace.h"
#include "PdfPen.h"
#include "PdfRadialGradientBrush.h"
#include "PdfPath.h"
#include "PdfBitmap.h"
#include "PdfFontBase.h"
#include "PdfStringFormat.h"
#include "PdfGraphicsState.h"
#include "PdfTemplate.h"
#include "PdfFillMode.h"
#include "PdfBlendMode.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The class representing a graphics context of the objects.
            It's used for performing simple graphics operations.
    </summary>
*/
class EXPORTS PdfCanvas : public virtual Object
{
public:
    /*
    <summary>
        Gets the size of the canvas.
    </summary
<remarks>Usually, this value is equal to the size of the object this graphics belongs to.</remarks>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*
    <summary>
        Gets the size of the canvas reduced by margins and page templates.
    </summary>
<remarks>It indicates a size of the canvas reduced by margins and template dimensions.
            This value doesn't change when any custom clip is set.</remarks>
    */
    intrusive_ptr<SizeF> GetClientSize ();
    /*
    <summary>
        Gets or sets the current color space.
    </summary>
<remarks>The value change of this property has impact on the objects
            which will be drawn after the change.</remarks>
    */
    PdfColorSpace GetColorSpace ();
    /*

    */
    void SetColorSpace (PdfColorSpace value);
    /*
    <summary>
        Draws a line.
    </summary>
    <param name="pen">The pen.</param>
    <param name="point1">The point1.</param>
    <param name="point2">The point2.</param>
    */
    void DrawLine (intrusive_ptr<PdfPen> pen,intrusive_ptr<PointF> point1,intrusive_ptr<PointF> point2);
    /*
    <summary>
        Draws a line.
    </summary>
    <param name="pen">The pen.</param>
    <param name="x1">The x1.</param>
    <param name="y1">The y1.</param>
    <param name="x2">The x2.</param>
    <param name="y2">The y2.</param>
    */
    void DrawLine (intrusive_ptr<PdfPen> pen,float x1,float y1,float x2,float y2);
    /*
    <summary>
        Draws a rectangle.
    </summary>
    <param name="pen">The pen.</param>
    <param name="rectangle">The rectangle.</param>
    */
    void DrawRectangle (intrusive_ptr<PdfPen> pen,intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Draws a rectangle.
    </summary>
    <param name="pen">The pen.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void DrawRectangle (intrusive_ptr<PdfPen> pen,float x,float y,float width,float height);
    /*
    <summary>
        Draws a rectangle.
    </summary>
    <param name="brush">The brush.</param>
    <param name="rectangle">The rectangle.</param>
    */
    void DrawRectangle (intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Draws a rectangle.
    </summary>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void DrawRectangle (intrusive_ptr<PdfBrush> brush,float x,float y,float width,float height);
    /*
    <summary>
        Draws a rectangle.
    </summary>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="rectangle">The rectangle.</param>
    */
    void DrawRectangle (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Draws a rectangle.
    </summary>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void DrawRectangle (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,float x,float y,float width,float height);
    /*
    <summary>
        Draws an ellipse.
    </summary>
    <param name="pen">The pen.</param>
    <param name="rectangle">The rectangle.</param>
    */
    void DrawEllipse (intrusive_ptr<PdfPen> pen,intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Draws an ellipse.
    </summary>
    <param name="pen">The pen.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void DrawEllipse (intrusive_ptr<PdfPen> pen,float x,float y,float width,float height);
    /*
    <summary>
        Draws an ellipse.
    </summary>
    <param name="brush">The brush.</param>
    <param name="rectangle">The rectangle.</param>
    */
    void DrawEllipse (intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Draws an ellipse.
    </summary>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void DrawEllipse (intrusive_ptr<PdfBrush> brush,float x,float y,float width,float height);
    /*
    <summary>
        Draws an ellipse.
    </summary>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="rectangle">The rectangle.</param>
    */
    void DrawEllipse (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Draws an ellipse.
    </summary>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void DrawEllipse (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,float x,float y,float width,float height);
    /*
    <summary>
        Draws an arc.
    </summary>
    <param name="pen">The pen.</param>
    <param name="rectangle">The rectangle.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void DrawArc (intrusive_ptr<PdfPen> pen,intrusive_ptr<RectangleF> rectangle,float startAngle,float sweepAngle);
    /*
    <summary>
        Draws an arc.
    </summary>
    <param name="pen">The pen.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void DrawArc (intrusive_ptr<PdfPen> pen,float x,float y,float width,float height,float startAngle,float sweepAngle);
    /*
    <summary>
        Draws a pie.
    </summary>
    <param name="pen">The pen.</param>
    <param name="rectangle">The rectangle.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void DrawPie (intrusive_ptr<PdfPen> pen,intrusive_ptr<RectangleF> rectangle,float startAngle,float sweepAngle);
    /*
    <summary>
        Draws a pie.
    </summary>
    <param name="pen">The pen.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void DrawPie (intrusive_ptr<PdfPen> pen,float x,float y,float width,float height,float startAngle,float sweepAngle);
    /*
    <summary>
        Draws a pie.
    </summary>
    <param name="brush">The brush.</param>
    <param name="rectangle">The rectangle.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void DrawPie (intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> rectangle,float startAngle,float sweepAngle);
    /*
    <summary>
        Draws a pie.
    </summary>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void DrawPie (intrusive_ptr<PdfBrush> brush,float x,float y,float width,float height,float startAngle,float sweepAngle);
    /*
    <summary>
        Draws a pie.
    </summary>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="rectangle">The rectangle.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void DrawPie (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> rectangle,float startAngle,float sweepAngle);
    /*
    <summary>
        Draws a pie.
    </summary>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void DrawPie (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,float x,float y,float width,float height,float startAngle,float sweepAngle);
    /*
    <summary>
        Draws a polygon.
    </summary>
    <param name="pen">The pen.</param>
    <param name="points">The points.</param>
    */
    void DrawPolygon (intrusive_ptr<PdfPen> pen,std::vector<intrusive_ptr<PointF>> points);
    /*
    <summary>
        Draws a polygon.
    </summary>
    <param name="brush">The brush.</param>
    <param name="points">The points.</param>
    */
    void DrawPolygon (intrusive_ptr<PdfBrush> brush,std::vector<intrusive_ptr<PointF>> points);
    /*
    <summary>
        Draws a polygon.
    </summary>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="points">The points.</param>
    */
    void DrawPolygon (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,std::vector<intrusive_ptr<PointF>> points);
    /*
    <summary>
        Draws a bezier curve.
    </summary>
    <param name="pen">The pen.</param>
    <param name="startPoint">The start point.</param>
    <param name="firstControlPoint">The first control point.</param>
    <param name="secondControlPoint">The second control point.</param>
    <param name="endPoint">The end point.</param>
    */
    void DrawBezier (intrusive_ptr<PdfPen> pen,intrusive_ptr<PointF> startPoint,intrusive_ptr<PointF> firstControlPoint,intrusive_ptr<PointF> secondControlPoint,intrusive_ptr<PointF> endPoint);
    /*
    <summary>
        Draws a bezier curve.
    </summary>
    <param name="pen">The pen.</param>
    <param name="startPointX">The start point X.</param>
    <param name="startPointY">The start point Y.</param>
    <param name="firstControlPointX">The first control point X.</param>
    <param name="firstControlPointY">The first control point Y.</param>
    <param name="secondControlPointX">The second control point X.</param>
    <param name="secondControlPointY">The second control point Y.</param>
    <param name="endPointX">The end point X.</param>
    <param name="endPointY">The end point Y.</param>
    */
    void DrawBezier (intrusive_ptr<PdfPen> pen,float startPointX,float startPointY,float firstControlPointX,float firstControlPointY,float secondControlPointX,float secondControlPointY,float endPointX,float endPointY);
    /*
    <summary>
        Draws a path.
    </summary>
    <param name="pen">The pen.</param>
    <param name="path">The path.</param>
    */
    void DrawPath (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfPath> path);
    /*
    <summary>
        Draws a path.
    </summary>
    <param name="brush">The brush.</param>
    <param name="path">The path.</param>
    */
    void DrawPath (intrusive_ptr<PdfBrush> brush,intrusive_ptr<PdfPath> path);
    /*
    <summary>
        Draws a path.
    </summary>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="path">The path.</param>
    */
    void DrawPath (intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PdfPath> path);
    /*
    <summary>
        Draws an image.
    </summary>
    <param name="image">The image.</param>
    <param name="point">The point.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,intrusive_ptr<PointF> point);
    /*
    <summary>
        Draws an image.
    </summary>
    <param name="image">The image.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,float x,float y);
    /*
    <summary>
        Draws an image.
    </summary>
    <param name="image">The image.</param>
    <param name="rectangle">The rectangle.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Draws an image.
    </summary>
    <param name="image">The image.</param>
    <param name="point">The point.</param>
    <param name="size">The size.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,intrusive_ptr<PointF> point,intrusive_ptr<SizeF> size);
    /*
    <summary>
        Draws an image,recommending monochrome image.
    </summary>
    <param name="image">The image.</param>
    <param name="compressionQuality">The image compresson quality.</param>
    <param name="point">The point.</param>
    <param name="size">The size.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,int compressionQuality,intrusive_ptr<PointF> point,intrusive_ptr<SizeF> size);
    /*
    <summary>
        Draws an image.
    </summary>
    <param name="image">The image.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,float x,float y,float width,float height);
    /*
    <summary>
        Draws an image,recommending monochrome image
    </summary>
    <param name="image">The image.</param>
    <param name="compressionQuality">The image compresson quality.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void DrawImage (intrusive_ptr<PdfImage> image,int compressionQuality,float x,float y,float width,float height);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="point">The location point.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PointF> point);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="point">The point.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PointF> point,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    */
    void DrawString (LPCWSTR_S s, intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush,float x,float y);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,float x,float y,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="point">The location point.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PointF> point);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="point">The point.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PointF> point,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,float x,float y);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,float x,float y,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="point">The location point.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PointF> point);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="point">The point.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PointF> point,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,float x,float y,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,float x,float y);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> layoutRectangle);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Pen and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<RectangleF> layoutRectangle);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Pen and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Pen, Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    <param name="format">The text string format.</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="point">The location point.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PointF> point,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="point">The point.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PointF> point,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,float x,float y,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,float x,float y,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="point">The location point.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PointF> point,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="point">The point.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PointF> point,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,float x,float y,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,float x,float y,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="point">The location point.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PointF> point,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="point">The point.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<PointF> point,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,float x,float y,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,float x,float y,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> layoutRectangle,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="brush">The brush.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Pen and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<RectangleF> layoutRectangle,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Pen and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Draws the specified text string at the specified location and size
            with the specified Pen, Brush and Font objects. 
    </summary>
    <param name="s">The text string.</param>
    <param name="font">The font.</param>
    <param name="pen">The pen.</param>
    <param name="brush">The brush.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the drawn text.</param>
    <param name="format">The text string format.</param>
    <param name="htmlTags">whether the parsing of HTML tags</param>
    */
    void DrawString (LPCWSTR_S s,intrusive_ptr<PdfFontBase> font,intrusive_ptr<PdfPen> pen,intrusive_ptr<PdfBrush> brush,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfStringFormat> format,bool htmlTags);
    /*
    <summary>
        Translates the coordinates by specified coordinates.
    </summary>
    <param name="offsetX">The X value by which to translate
            coordinate system.</param>
    <param name="offsetY">The Y value by which to translate
            coordinate system.</param>
<property name="flag" value="Finished" />
    */
    void TranslateTransform (float offsetX,float offsetY);
    /*
    <summary>
        Scales the coordinates by specified coordinates.
    </summary>
    <param name="scaleX">The value by which to scale coordinate
            system in the X axis direction.</param>
    <param name="scaleY">The value by which to scale coordinate
            system in the Y axis direction.</param>
<property name="flag" value="Finished" />
    */
    void ScaleTransform (float scaleX,float scaleY);
    /*
    <summary>
         Rotates the coordinate system in clockwise direction around specified point.
     </summary>
    <param name="angle">The angle of the rotation (in degrees).</param>
    <param name="angle">A System.Drawing.PointF that represents the center of the rotation. </param>
    */
    void RotateTransform (float angle,intrusive_ptr<PointF> point);
    /*
    <summary>
        Rotates the coordinate system in clockwise direction.
    </summary>
    <param name="angle">The angle of the rotation (in degrees).</param>
<property name="flag" value="Finished" />
    */
    void RotateTransform (float angle);
    /*
    <summary>
        Skews the coordinate system axes.
    </summary>
    <param name="angleX">Skews the X axis by this angle (in
            degrees).</param>
    <param name="angleY">Skews the Y axis by this angle (in
            degrees).</param>
<property name="flag" value="Finished" />
    */
    void SkewTransform (float angleX,float angleY);
    /*
    <summary>
        Draws a template using its original size, at the specified location.
    </summary>
    <param name="template"> object.</param>
    <param name="location">Location of the template.</param>
    */
    void DrawTemplate (intrusive_ptr<PdfTemplate> pdftemplate,intrusive_ptr<PointF> location);
    /*
    <summary>
        Draws a template at the specified location and size.
    </summary>
    <param name="template"> object.</param>
    <param name="location">Location of the template.</param>
    <param name="size">Size of the template.</param>
    */
    void DrawTemplate (intrusive_ptr<PdfTemplate> pdftemplate,intrusive_ptr<PointF> location,intrusive_ptr<SizeF> size);
    /*
    <summary>
        Flashes this instance.
    </summary>
    */
    void Flush ();
    /*
    <summary>
        Saves the current state of this Graphics and identifies the saved state with a GraphicsState.
    </summary>
    <returns>This method returns a GraphicsState that represents the saved state of this Graphics. </returns>
<remarks>This method works similar to  method.</remarks>
    */
    intrusive_ptr<PdfGraphicsState> Save ();
    /*
    <summary>
        Restores the last state of this Graphics.
    </summary>
    */
    void Restore ();
    /*
    <summary>
        Restores the state of this Graphics to the state represented by a GraphicsState.
    </summary>
    <param name="state">GraphicsState that represents the state to which to restore this Graphics.</param>
<remarks>This method works similar to  method.</remarks>
    */
    void Restore (intrusive_ptr<PdfGraphicsState> state);
    /*
    <summary>
        Modifying the current clipping path by intersecting it with the current path.
    </summary>
    <param name="rectangle">Clip rectangle.</param>
    */
    void SetClip (intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Modifying the current clipping path by intersecting it with the current path.
    </summary>
    <param name="rectangle">Clip rectangle.</param>
    <param name="mode">The fill mode to determine which regions lie inside the clipping	path.</param>
    */
    void SetClip (intrusive_ptr<RectangleF> rectangle,PdfFillMode mode);
    /*
    <summary>
        Modifying the current clipping path by intersecting it with the current path.
    </summary>
    <param name="path">Clip path.</param>
    */
    void SetClip (intrusive_ptr<PdfPath> path);
    /*
    <summary>
        Modifying the current clipping path by intersecting it with the current path.
    </summary>
    <param name="path">Clip path.</param>
    <param name="mode">The fill mode to determine which regions lie inside the clipping	path.</param>
    */
    void SetClip (intrusive_ptr<PdfPath> path,PdfFillMode mode);
    /*
    <summary>
        Sets the transparency.
    </summary>
    <param name="alpha">The alpha value for both pen
            and brush operations.</param>
    */
    void SetTransparency (float alpha);
    /*
    <summary>
        Sets the transparency.
    </summary>
    <param name="alphaPen">The alpha value for pen operations.</param>
    <param name="alphaBrush">The alpha value for brush operations.</param>
    */
    void SetTransparency (float alphaPen,float alphaBrush);
    /*
    <summary>
        Sets the transparency.
    </summary>
    <param name="alphaPen">The alpha value for pen operations.</param>
    <param name="alphaBrush">The alpha value for brush operations.</param>
    <param name="blendMode">The blend mode.</param>
    */
    void SetTransparency (float alphaPen,float alphaBrush,PdfBlendMode blendMode);
private:
};
}}