#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS SpotLocationType : public virtual Object
{
public:
    /*
<remarks />
    */
    LPCWSTR_S GetPageURI ();
    /*

    */
    void SetPageURI (LPCWSTR_S value);
    /*
<remarks />
    */
    double GetStartX ();
    /*

    */
    void SetStartX (double value);
    /*
<remarks />
    */
    double GetStartY ();
    /*

    */
    void SetStartY (double value);
private:
};
}}