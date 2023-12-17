#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the states of an annotation's appearance.
    </summary>
*/
class EXPORTS PdfAppearanceState : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the active state template.
    </summary>
<value>The  object specifies an active state template.</value>
    */
    intrusive_ptr<PdfTemplate> GetOn ();
    /*

    */
    void SetOn (intrusive_ptr<PdfTemplate> value);
    /*
    <summary>
        Gets or sets the inactive state.
    </summary>
<value>The  object specifies an inactive state template.</value>
    */
    intrusive_ptr<PdfTemplate> GetOff ();
    /*

    */
    void SetOff (intrusive_ptr<PdfTemplate> value);
    /*
    <summary>
        Gets or sets the mapping name of the active state.
    </summary>
<value>String specifies the mapping name of the active state.</value>
    */
    LPCWSTR_S GetOnMappingName ();
    /*

    */
    void SetOnMappingName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the mapping name of the inactive state.
    </summary>
<value>String specifies the mapping name of the inactive state.</value>
    */
    LPCWSTR_S GetOffMappingName ();
    /*

    */
    void SetOffMappingName (LPCWSTR_S value);
private:
};
}}