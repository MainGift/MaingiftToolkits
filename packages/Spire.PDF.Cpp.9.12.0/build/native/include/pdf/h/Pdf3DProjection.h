#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
         Represents the mapping of 3D camera co-ordinates onto the target coordinate system of the annotation.
    </summary>
*/
class EXPORTS Pdf3DProjection : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the type of the projection.
    </summary>
    */
    Pdf3DProjectionType GetProjectionType ();
    /*

    */
    void SetProjectionType (Pdf3DProjectionType value);
    /*
    <summary>
        Gets or sets the projection ClipStyle.
    </summary>
    */
    Pdf3DProjectionClipStyle GetClipStyle ();
    /*

    */
    void SetClipStyle (Pdf3DProjectionClipStyle value);
    /*
    <summary>
         Gets or sets the scale mode for ortho graphic projections.
    </summary>
    */
    Pdf3DProjectionOrthoScaleMode GetOrthoScaleMode ();
    /*

    */
    void SetOrthoScaleMode (Pdf3DProjectionOrthoScaleMode value);
    /*
    <summary>
        Gets or sets the far clipping distance.
    </summary>
    */
    float GetFarClipDistance ();
    /*

    */
    void SetFarClipDistance (float value);
    /*
    <summary>
        Gets or sets the field of view.
    </summary>
    */
    float GetFieldOfView ();
    /*

    */
    void SetFieldOfView (float value);
    /*
    <summary>
        Gets or sets the near clipping distance.
    </summary>
    */
    float GetNearClipDistance ();
    /*

    */
    void SetNearClipDistance (float value);
    /*
    <summary>
        Gets or sets the projection scaling.
    </summary>
    */
    float GetScaling ();
    /*

    */
    void SetScaling (float value);
private:
};
}}