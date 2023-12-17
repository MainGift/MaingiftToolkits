#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "EndPageLayoutEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS LightTableEndPageLayoutEventArgs : public virtual EndPageLayoutEventArgs
{
public:
    /*

    */
    int GetStartRowIndex ();
    /*

    */
    int GetEndRowIndex ();
private:
};
}}