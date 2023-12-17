#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Color.h"
#include "PdfBlendMode.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Implements structures and routines working with color.
    </summary>
*/
class EXPORTS PdfRGBColor : public virtual Object
{
public:
    PdfRGBColor();
    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="color">Source color object.</param>
    PdfRGBColor(intrusive_ptr<PdfRGBColor> color);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="color">Source color object.</param>
    PdfRGBColor(intrusive_ptr<Color> color);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="gray">Gray value.</param>
    PdfRGBColor(float gray);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="red">Red channel value.</param>
    /// <param name="green">Green channel value.</param>
    /// <param name="blue">Blue channel value.</param>
    PdfRGBColor(byte red, byte green, byte blue);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="cyan">Cyan channel value.</param>
    /// <param name="magenta">Magenta channel value.</param>
    /// <param name="yellow">Yellow channel value.</param>
    /// <param name="black">Black channel value.</param>
    PdfRGBColor(float cyan, float magenta, float yellow, float black);
    /*
    <summary>
        Gets a null color.
    </summary>
<value>The empty.</value>
<property name="flag" value="Finished" />
    */
    static intrusive_ptr<PdfRGBColor> GetEmpty ();
    /*
    <summary>
        Gets whether the PDFColor is Empty or not.
    </summary>
<value>
  <c>true</c> if this instance is empty; otherwise, <c>false</c>.</value>
<property name="flag" value="Finished" />
    */
    bool GetIsEmpty ();
    /*
    <summary>
        Gets or sets Blue channel value.
    </summary>
<value>The B.</value>
<property name="flag" value="Finished" />
    */
    byte GetB ();
    /*

    */
    void SetB (byte value);
    /*
    <summary>
        Gets the blue.
    </summary>
    */
    float GetBlue ();
    /*
    <summary>
        Gets or sets Cyan channel value.
    </summary>
<value>The C.</value>
<property name="flag" value="Finished" />
    */
    float GetC ();
    /*

    */
    void SetC (float value);
    /*
    <summary>
        Gets or sets Green channel value.
    </summary>
<value>The G.</value>
<property name="flag" value="Finished" />
    */
    byte GetG ();
    /*

    */
    void SetG (byte value);
    /*
    <summary>
        Gets the green.
    </summary>
<value>The green.</value>
    */
    float GetGreen ();
    /*
    <summary>
        Gets or sets Gray channel value.
    </summary>
<value>The gray.</value>
<property name="flag" value="Finished" />
    */
    float GetGray ();
    /*

    */
    void SetGray (float value);
    /*
    <summary>
        Gets or sets Black channel value.
    </summary>
<value>The K.</value>
<property name="flag" value="Finished" />
    */
    float GetK ();
    /*

    */
    void SetK (float value);
    /*
    <summary>
        Gets or sets Magenta channel value.
    </summary>
<value>The M.</value>
<property name="flag" value="Finished" />
    */
    float GetM ();
    /*

    */
    void SetM (float value);
    /*
    <summary>
        Gets or sets Red channel value.
    </summary>
<value>The R.</value>
<property name="flag" value="Finished" />
    */
    byte GetR ();
    /*

    */
    void SetR (byte value);
    /*
    <summary>
        Gets the red.
    </summary>
    */
    float GetRed ();
    /*
    <summary>
        Gets or sets Yellow channel value.
    </summary>
<value>The Y.</value>
<property name="flag" value="Finished" />
    */
    float GetY ();
    /*

    */
    void SetY (float value);
    /*
    <summary>
        Creates the Alpha ,Red ,Green, and Blue value of this PDFColor structure.
    </summary>
    <returns>ARGB value.</returns>
<property name="flag" value="Finished" />
    */
    int ToArgb ();
    /*

    */
    static intrusive_ptr<PdfRGBColor> op_Implicit (intrusive_ptr<Color> color);
    /*

    */
    static intrusive_ptr<Color> op_Implicit (intrusive_ptr<PdfRGBColor> color);
    /*
    <summary>
        Operator ==.
    </summary>
    <param name="colour1">The color 1.</param>
    <param name="colour2">The color 2.</param>
    <returns>
            True if color 1 is equal to color 2; otherwise False.
            </returns>
<property name="flag" value="Finished" />
    */
    static bool op_Equality (intrusive_ptr<PdfRGBColor> colour1,intrusive_ptr<PdfRGBColor> colour2);
    /*
    <summary>
        Operator !=.
    </summary>
    <param name="colour1">The color 1.</param>
    <param name="colour2">The color 2.</param>
    <returns>
            True if color 1 is not equal to color 2; otherwise False.
            </returns>
<property name="flag" value="Finished" />
    */
    static bool op_Inequality (intrusive_ptr<PdfRGBColor> colour1,intrusive_ptr<PdfRGBColor> colour2);
    /*
    <summary>
        Determines whether the specified 
            is equal to the current .
    </summary>
    <param name="obj">The  to
            compare with the current .</param>
    <returns>
            True if the specified  is equal
            to the current ; otherwise -
            False.
            </returns>
<property name="flag" value="Finished" />
    */
    //virtual bool Equals (System.Object obj);
    /*
    <summary>
        Determines if the specified color is equal to this one.
    </summary>
    <param name="colour">The color.</param>
    <returns>
            True if the color is equal; otherwise - False.
            </returns>
<property name="flag" value="Finished" />
    */
    bool Equals (intrusive_ptr<PdfRGBColor> colour);
    /*
    <summary>
        Serves as a hash function for a particular type, suitable for
            use in hashing algorithms and data structures like a hash
            table.
    </summary>
    <returns>
            A hash code for the current .
            </returns>
<property name="flag" value="Finished" />
    */
    virtual int GetHashCode ();
private:
};
}}