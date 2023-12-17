#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFillElement.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Implements graphics path, which is a sequence of primitive graphics elements.
    </summary>
*/
class EXPORTS PdfPath : public virtual PdfFillElement
{
public:
    PdfPath();

    //PdfPath(std::vector<intrusive_ptr<PointF>> points, std::vector<BYTE*> pathTypes);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="pen">The pen.</param>
    PdfPath(intrusive_ptr<PdfPen> pen);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="brush">The brush.</param>
    PdfPath(intrusive_ptr<PdfBrush> brush);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="brush">The brush.</param>
    /// <param name="fillMode">The fill mode.</param>
    PdfPath(intrusive_ptr<PdfBrush> brush, PdfFillMode fillMode);

    //PdfPath(intrusive_ptr<PdfPen> pen, std::vector<intrusive_ptr<PointF>> points, std::vector<BYTE*> pathTypes);

    //PdfPath(intrusive_ptr<PdfBrush> brush, PdfFillMode fillMode, std::vector<intrusive_ptr<PointF>> points, std::vector<BYTE*> pathTypes);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="pen">The pen.</param>
    /// <param name="brush">The brush.</param>
    /// <param name="fillMode">The fill mode.</param>
    PdfPath(intrusive_ptr<PdfPen> pen, intrusive_ptr<PdfBrush> brush, PdfFillMode fillMode);
    /*
    <summary>
        Gets or sets the fill mode.
    </summary>
    */
    PdfFillMode GetFillMode ();
    /*

    */
    void SetFillMode (PdfFillMode value);
    /*
    <summary>
        Gets the path points.
    </summary>
    */
    std::vector<intrusive_ptr<PointF>> GetPathPoints ();
    /*
    <summary>
        Gets the path point types.
    </summary>
    */
    //std::vector<BYTE*> GetPathTypes ();
    /*
    <summary>
        Gets the point count.
    </summary>
    */
    int GetPointCount ();
    /*
    <summary>
        Gets the last point.
    </summary>
    */
    intrusive_ptr<PointF> LastPoint ();
    /*
    <summary>
        Adds an arc.
    </summary>
    <param name="rectangle">The boundaries of the arc.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void AddArc (intrusive_ptr<RectangleF> rectangle,float startAngle,float sweepAngle);
    /*
    <summary>
        Adds an arc.
    </summary>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void AddArc (float x,float y,float width,float height,float startAngle,float sweepAngle);
    /*
    <summary>
        Adds a bezier curve.
    </summary>
    <param name="startPoint">The start point.</param>
    <param name="firstControlPoint">The first control point.</param>
    <param name="secondControlPoint">The second control point.</param>
    <param name="endPoint">The end point.</param>
    */
    void AddBezier (intrusive_ptr<PointF> startPoint,intrusive_ptr<PointF> firstControlPoint,intrusive_ptr<PointF> secondControlPoint,intrusive_ptr<PointF> endPoint);
    /*
    <summary>
        Adds a bezier curve.
    </summary>
    <param name="startPointX">The start point X.</param>
    <param name="startPointY">The start point Y.</param>
    <param name="firstControlPointX">The first control point X.</param>
    <param name="firstControlPointY">The first control point Y.</param>
    <param name="secondControlPointX">The second control point X.</param>
    <param name="secondControlPointY">The second control point Y.</param>
    <param name="endPointX">The end point X.</param>
    <param name="endPointY">The end point Y.</param>
    */
    void AddBezier (float startPointX,float startPointY,float firstControlPointX,float firstControlPointY,float secondControlPointX,float secondControlPointY,float endPointX,float endPointY);
    /*
    <summary>
        Adds an ellipse.
    </summary>
    <param name="rectangle">The boundaries of the ellipse.</param>
    */
    void AddEllipse (intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Adds an ellipse.
    </summary>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void AddEllipse (float x,float y,float width,float height);
    /*
    <summary>
        Adds a line.
    </summary>
    <param name="point1">The point1.</param>
    <param name="point2">The point2.</param>
    */
    void AddLine (intrusive_ptr<PointF> point1,intrusive_ptr<PointF> point2);
    /*
    <summary>
        Adds a line.
    </summary>
    <param name="x1">The x1.</param>
    <param name="y1">The y1.</param>
    <param name="x2">The x2.</param>
    <param name="y2">The y2.</param>
    */
    void AddLine (float x1,float y1,float x2,float y2);
    /*
    <summary>
        Appends the path specified to this one.
    </summary>
    <param name="path">The path, which should be appended.</param>
    */
    void AddPath (intrusive_ptr<PdfPath> path);
    /*
    <summary>
        Appends the path specified by the points and their types to this one.
    </summary>
    <param name="pathPoints">The points.</param>
    <param name="pathTypes">The path point types.</param>
    */
    //void AddPath (std::vector<intrusive_ptr<PointF>> pathPoints,std::vector<BYTE*> pathTypes);
    /*
    <summary>
        Appends the pie to this path.
    </summary>
    <param name="rectangle">The rectangle.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void AddPie (intrusive_ptr<RectangleF> rectangle,float startAngle,float sweepAngle);
    /*
    <summary>
        Appends the pie to this path.
    </summary>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    <param name="startAngle">The start angle.</param>
    <param name="sweepAngle">The sweep angle.</param>
    */
    void AddPie (float x,float y,float width,float height,float startAngle,float sweepAngle);
    /*
    <summary>
        Append the closed polygon to this path.
    </summary>
    <param name="points">The points of the polygon.</param>
    */
    void AddPolygon (std::vector<intrusive_ptr<PointF>> points);
    /*
    <summary>
        Appends the rectangle to this path.
    </summary>
    <param name="rectangle">The rectangle.</param>
    */
    void AddRectangle (intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Appends the rectangle to this path.
    </summary>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="height">The height.</param>
    */
    void AddRectangle (float x,float y,float width,float height);
    /*
    <summary>
        Starts a new figure.
    </summary>
<remarks>The next added primitive will start a new figure.</remarks>
    */
    void StartFigure ();
    /*
    <summary>
        Closes the last figure.
    </summary>
    */
    void CloseFigure ();
    /*
    <summary>
        Closes all non-closed figures.
    </summary>
    */
    void CloseAllFigures ();
    /*
    <summary>
        Gets the last point.
    </summary>
    <returns>The last point.</returns>
    */
    intrusive_ptr<PointF> GetLastPoint ();
private:
};
}}