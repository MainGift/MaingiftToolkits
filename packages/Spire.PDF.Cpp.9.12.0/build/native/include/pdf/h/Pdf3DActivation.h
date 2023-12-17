#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the activation states for the 3D annotation. 
    </summary>
*/
class EXPORTS Pdf3DActivation : public virtual Object
{
public:
    Pdf3DActivation();
    /*
    <summary>
        Gets or sets the activation mode for the annotation.
    </summary>
    */
    Pdf3DActivationMode GetActivationMode ();
    /*

    */
    void SetActivationMode (Pdf3DActivationMode value);
    /*
    <summary>
        Gets or sets the deactivation mode for the annotation.
    </summary>
    */
    Pdf3DDeactivationMode GetDeactivationMode ();
    /*

    */
    void SetDeactivationMode (Pdf3DDeactivationMode value);
    /*
    <summary>
        Gets or sets the activation state for the annotation.
    </summary>
    */
    Pdf3DActivationState GetActivationState ();
    /*

    */
    void SetActivationState (Pdf3DActivationState value);
    /*
    <summary>
        Gets or sets the deactivation state for the annotation.
    </summary>
    */
    Pdf3DDeactivationState GetDeactivationState ();
    /*

    */
    void SetDeactivationState (Pdf3DDeactivationState value);
    /*
    <summary>
        Gets or sets a value indicating whether the toolbar should be displayed when the annotation is activated or not. 
    </summary>
<value>If true, a toolbar should be displayed by default when the annotation is activated and given focus. If false, a toolbar should not be displayed by default. </value>
    */
    bool GetShowToolbar ();
    /*

    */
    void SetShowToolbar (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether the UI for managing the 3D artwork should be displayed when the annotation is activated. 
    </summary>
<value>If true, the user interface should be made visible when the annotation is activated. If false, the user interface should not be made visible by default.</value>
    */
    bool GetShowUI ();
    /*

    */
    void SetShowUI (bool value);
private:
};
}}