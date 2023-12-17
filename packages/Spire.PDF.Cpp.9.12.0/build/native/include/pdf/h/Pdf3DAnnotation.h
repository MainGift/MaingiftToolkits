#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
//#include "../../common/h/RectangleF.h"
#include "PdfFileAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the 3D annotation for a PDF document.
    </summary>
*/
class EXPORTS Pdf3DAnnotation : public virtual PdfFileAnnotation
{
public:
    Pdf3DAnnotation();

    Pdf3DAnnotation(intrusive_ptr<RectangleF> rectangle);

    Pdf3DAnnotation(intrusive_ptr<RectangleF> rectangle, LPCWSTR_S fileName);
    /*
    <summary>
        Gets the list of available views for the current 3D artwork.
    </summary>
    */
    intrusive_ptr<Pdf3DViewCollection> GetViews ();
    /*
    <summary>
        Gets or sets the default view.
    </summary>
<value>The default view.</value>
    */
    int GetDefaultView ();
    /*

    */
    void SetDefaultView (int value);
    /*
    <summary>
        Gets or sets the code to execute when the 3D artwork is instantiated. 
            <value>Javascript code to be executed when the 3D artwork is instantiated.</value></summary>
    */
    LPCWSTR_S GetOnInstantiate ();
    /*

    */
    void SetOnInstantiate (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the activation options for the annotation. 
    </summary>
<remarks>Defines the times at which the annotation should be activated and deactivated and the state of the 3D artwork instance at those times.</remarks>
    */
    intrusive_ptr<Pdf3DActivation> GetActivation ();
    /*

    */
    void SetActivation (intrusive_ptr<Pdf3DActivation> value);
    /*
    <summary>
        Gets a 3d viedo file from Pdf3DAnnotation
    </summary>
    */
    intrusive_ptr<Stream> Get_3DData ();
    /*
<value>Filename with Full path</value>
    */
    virtual LPCWSTR_S GetFileName ();
    /*

    */
    virtual void SetFileName (LPCWSTR_S value);
private:
};
}}