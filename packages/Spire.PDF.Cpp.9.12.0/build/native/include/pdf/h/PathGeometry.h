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
class EXPORTS PathGeometry : public virtual Object
{
public:
    /*
<remarks />
    */
    intrusive_ptr<Transform> GetPathGeometryTransform ();
    /*

    */
    void SetPathGeometryTransform (intrusive_ptr<Transform> value);
    /*
<remarks />
    */
    std::vector<intrusive_ptr<PathFigure>> GetPathFigure ();
    /*

    */
    void SetPathFigure (std::vector<intrusive_ptr<PathFigure>> value);
    /*
<remarks />
    */
    LPCWSTR_S GetFigures ();
    /*

    */
    void SetFigures (LPCWSTR_S value);
    /*
<remarks />
    */
    FillRule GetFillRule ();
    /*

    */
    void SetFillRule (FillRule value);
    /*
<remarks />
    */
    LPCWSTR_S GetTransform ();
    /*

    */
    void SetTransform (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetKey ();
    /*

    */
    void SetKey (LPCWSTR_S value);
private:
};
}}