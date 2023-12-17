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
class EXPORTS ArcSegment : public virtual Object
{
public:
    /*
<remarks />
    */
    LPCWSTR_S GetPoint ();
    /*

    */
    void SetPoint (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetSize ();
    /*

    */
    void SetSize (LPCWSTR_S value);
    /*
<remarks />
    */
    double GetRotationAngle ();
    /*

    */
    void SetRotationAngle (double value);
    /*
<remarks />
    */
    bool GetIsLargeArc ();
    /*

    */
    void SetIsLargeArc (bool value);
    /*
<remarks />
    */
    SweepDirection GetSweepDirection ();
    /*

    */
    void SetSweepDirection (SweepDirection value);
    /*
<remarks />
    */
    bool GetIsStroked ();
    /*

    */
    void SetIsStroked (bool value);
private:
};
}}