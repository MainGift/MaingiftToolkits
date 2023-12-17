#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "BeginPageLayoutEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS LightTableBeginPageLayoutEventArgs : public virtual BeginPageLayoutEventArgs
{
public:
    /*

    */
    int GetStartRowIndex ();
private:
};
}}