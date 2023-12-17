#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the particular areas of 3D artwork and the opacity and visibility with which individual nodes are displayed.  
    </summary>
*/
class EXPORTS Pdf3DNode : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether the node is visible or not. 
    </summary>
<value>True if the node is visible. </value>
    */
    bool GetVisible ();
    /*

    */
    void SetVisible (bool value);
    /*
    <summary>
        Gets or sets the node name. 
    </summary>
<value>The name of the 3D node.</value>
    */
    LPCWSTR_S GetName ();
    /*

    */
    void SetName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the cutting plane opacity. 
    </summary>
<value>A number indicating the opacity of the cutting plane using a standard additive blend mode. </value>
<remarks>The opacity is given in percents, 100 is full opacity, 0 is no opacity.</remarks>
    */
    float GetOpacity ();
    /*

    */
    void SetOpacity (float value);
    /*
    <summary>
        Gets or sets the 3D transformation matrix. 
    </summary>
<value>A 12-element 3D transformation matrix that specifies the position and orientation of this node, relative to its parent, in world coordinates. </value>
<remarks>If the array has more than 12 elements, only the first 12 will be considered.</remarks>
    */
    std::vector<int> GetMatrix ();
    /*

    */
    void SetMatrix (std::vector<float> value);
private:
};
}}