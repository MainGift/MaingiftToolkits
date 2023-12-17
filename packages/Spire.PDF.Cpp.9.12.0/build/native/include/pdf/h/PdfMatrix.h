#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent the matrix
    </summary>
*/
class EXPORTS PdfMatrix : public virtual Object
{
public:
    /*
    <summary>
        Gets the x translation value (the dx value, or the element in the third row and first column).
    </summary>
    */
    float GetOffsetX ();
    /*
    <summary>
        Gets the x translation value (the dx value, or the element in the third row and second column).
    </summary>
    */
    float GetOffsetY ();
    /*
    <summary>
        Gets an array of floating-point values that represents the elements.
    </summary>
    */
    std::vector<int> GetElements ();
    /*
    <summary>
        Prepend the specified matrix.
    </summary>
    <param name="matrix">Matrix is to be multiplied.</param>
    */
    void Multiply (intrusive_ptr<PdfMatrix> matrix);
    /*
    <summary>
        Apply the specified matrix by the specified order.
    </summary>
    <param name="matrix">Matrix is to be multiplied.</param>
    <param name="order">Represent the applying order.</param>
    */
    void Multiply (intrusive_ptr<PdfMatrix> matrix,PdfMatrixOrder order);
    /*
    <summary>
        Prepend the specified translation vector (offsetX and offsetY).
    </summary>
    <param name="offsetX">The x value by which to translate.</param>
    <param name="offsetY">The y value by which to translate.</param>
    */
    void Translate (float offsetX,float offsetY);
    /*
    <summary>
        Apply the specified translation vector (offsetX and offsetY) by the specified order.
    </summary>
    <param name="offsetX">The x value by which to translate.</param>
    <param name="offsetY">The y value by which to translate.</param>
    <param name="order">Represent the applying order.</param>
    */
    void Translate (float offsetX,float offsetY,PdfMatrixOrder order);
    /*
    <summary>
        Prepend the specified scale vector (scaleX and scaleY).
    </summary>
    <param name="scaleX">The value by which to scale in the x-axis direction.</param>
    <param name="scaleY">The value by which to scale in the y-axis direction.</param>
    */
    void Scale (float scaleX,float scaleY);
    /*
    <summary>
        Apply the specified scale vector (scaleX and scaleY) by the specified order.
    </summary>
    <param name="scaleX">The value by which to scale in the x-axis direction.</param>
    <param name="scaleY">The value by which to scale in the y-axis direction.</param>
    <param name="order">Represent the applying order.</param>
    */
    void Scale (float scaleX,float scaleY,PdfMatrixOrder order);
    /*
    <summary>
        Prepend a clockwise rotation(angle) around the origin.
    </summary>
    <param name="angle">The angle of the rotation, in degrees.</param>
    */
    void Rotate (float angle);
    /*
    <summary>
        Apply a clockwise rotation(angle) around the origin by the specified order.
    </summary>
    <param name="angle">The angle of the rotation, in degrees.</param>
    <param name="order">Represent the applying order.</param>
    */
    void Rotate (float angle,PdfMatrixOrder order);
    /*
    <summary>
        Prepend the specified skew angles(angleX angleY).
    </summary>
    <param name="angleX">The horizontal skew angle, in degrees.</param>
    <param name="angleY">The vertical skew angle, in degrees.</param>
    */
    void Skew (float angleX,float angleY);
    /*
    <summary>
        Prepend the specified skew angles(angleX angleY) by the specified order.
    </summary>
    <param name="angleX">The horizontal skew angle, in degrees.</param>
    <param name="angleY">The vertical skew angle, in degrees.</param>
    <param name="order">Represent the applying order.</param>
    */
    void Skew (float angleX,float angleY,PdfMatrixOrder order);
    /*
    <summary>
        Prepend the specified Shear vector (shearX and shearY).
    </summary>
    <param name="shearX">The horizontal shear factor.</param>
    <param name="shearY">The vertical shear factor.</param>
    */
    void Shear (float shearX,float shearY);
    /*
    <summary>
        Apply the specified Shear vector (shearX and shearY) by the specified order.
    </summary>
    <param name="shearX">The horizontal shear factor.</param>
    <param name="shearY">The vertical shear factor.</param>
    <param name="order">Represent the applying order.</param>
    */
    void Shear (float shearX,float shearY,PdfMatrixOrder order);
    /*
    <summary>
        Applies the geometric transform to a specified array of points.
    </summary>
    <param name="pt">An array of points to transform.</param>
    <returns>The transformed points.</returns>
    */
    std::vector<intrusive_ptr<PointF>> TransformPoints (std::vector<intrusive_ptr<PointF>> pts);
    /*

    */
    intrusive_ptr<PdfMatrix> Clone ();
    /*
    <summary>
        Converts degree to radian.
    </summary>
    <param name="degree">The degree</param>
    <returns>The radian</returns>
    */
    double DegreeToRadian (double degree);
private:
};
}}