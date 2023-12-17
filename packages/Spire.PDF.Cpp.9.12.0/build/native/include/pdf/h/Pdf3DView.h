#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a attributes to be applied to the virtual camera associated with a 3D annotation. 
    </summary>
*/
class EXPORTS Pdf3DView : public virtual Object
{
public:
    Pdf3DView();
    /*
    <summary>
        Gets or sets the background for this view.  
    </summary>
    */
    intrusive_ptr<Pdf3DBackground> GetBackground ();
    /*

    */
    void SetBackground (intrusive_ptr<Pdf3DBackground> value);
    /*
    <summary>
        Gets or sets the 3D transformation matrix. 
    </summary>
<value>A 12-element 3D transformation matrix that specifies a position and orientation of the camera in world coordinates. </value>
<remarks>If the array has more than 12 elements, only the first 12 will be considered.</remarks>
    */
    std::vector<int> GetCameraToWorldMatrix ();
    /*

    */
    void SetCameraToWorldMatrix (std::vector<float> value);
    /*
    <summary>
        Gets or sets the center of orbit for 3D artwork. 
    </summary>
<value>A non-negative number indicating a distance in the camera coordinate system along the z axis to the center of orbit for this view. </value>
<remarks>If this value is negative, the viewer application must determine the center of orbit.</remarks>
    */
    float GetCenterOfOrbit ();
    /*

    */
    void SetCenterOfOrbit (float value);
    /*
    <summary>
        Gets the list of cross sections for this view. 
            <value>A list of PDF3DCrossSection objects available for this view.</value></summary>
    */
    intrusive_ptr<Pdf3DCrossSectionCollection> GetCrossSections ();
    /*
    <summary>
        Gets or sets the view's external name.
    </summary>
<value>The external name of the view, suitable for presentation in a user interface.</value>
    */
    LPCWSTR_S GetExternalName ();
    /*

    */
    void SetExternalName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the view's internal name.
    </summary>
    */
    LPCWSTR_S GetInternalName ();
    /*

    */
    void SetInternalName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the Creates a new page and adds it as the last page of the document scheme for this view. 
    </summary>
    */
    intrusive_ptr<Pdf3DLighting> GetLightingScheme ();
    /*

    */
    void SetLightingScheme (intrusive_ptr<Pdf3DLighting> value);
    /*
    <summary>
        Gets the list of 3D nodes for this view. 
    </summary>
<value>A list of PDF3DNode objects available for this view.</value>
    */
    intrusive_ptr<Pdf3DNodeCollection> GetNodes ();
    /*
    <summary>
        Gets or sets the projection for this view. 
    </summary>
    */
    intrusive_ptr<Pdf3DProjection> GetProjection ();
    /*

    */
    void SetProjection (intrusive_ptr<Pdf3DProjection> value);
    /*
    <summary>
        Gets or sets the rendering mode for this view. 
    </summary>
    */
    intrusive_ptr<Pdf3DRendermode> GetRenderMode ();
    /*

    */
    void SetRenderMode (intrusive_ptr<Pdf3DRendermode> value);
    /*
    <summary>
        Gets or sets a value indicating whether nodes specified in the Nodes collection are returned to their original states (as specified in the 3D artwork) before applying transformation matrices and opacity settings specified in the node dictionaries. 
    </summary>
    */
    bool GetResetNodesState ();
    /*

    */
    void SetResetNodesState (bool value);
    /*
    <summary>
        Gets or sets the name of the view node.         
    </summary>
<remarks>The view node in the content stream defines all the properties for viewing the 3D artwork. If both ViewNodeName and CameraToWorldMatrix are specified, then ViewNodeName takes precedence.</remarks>
    */
    LPCWSTR_S GetViewNodeName ();
    /*

    */
    void SetViewNodeName (LPCWSTR_S value);
private:
};
}}