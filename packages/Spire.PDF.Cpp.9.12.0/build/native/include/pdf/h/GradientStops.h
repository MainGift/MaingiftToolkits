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
class EXPORTS GradientStops : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<GradientStop>> GetGradientStop ();
    /*

    */
    void SetGradientStop (std::vector<intrusive_ptr<GradientStop>> value);
private:
};
}}