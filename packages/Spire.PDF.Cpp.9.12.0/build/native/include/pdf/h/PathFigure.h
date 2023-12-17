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
class EXPORTS PathFigure : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<Object>> GetItems ();
    /*

    */
    void SetItems (std::vector<intrusive_ptr<Object>> value);
    /*
<remarks />
    */
    bool GetIsClosed ();
    /*

    */
    void SetIsClosed (bool value);
    /*
<remarks />
    */
    LPCWSTR_S GetStartPoint ();
    /*

    */
    void SetStartPoint (LPCWSTR_S value);
    /*
<remarks />
    */
    bool GetIsFilled ();
    /*

    */
    void SetIsFilled (bool value);
private:
};
}}