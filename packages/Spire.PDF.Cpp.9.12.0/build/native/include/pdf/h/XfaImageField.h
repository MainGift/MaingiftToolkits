#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XfaField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS XfaImageField : public virtual XfaField
{
public:
    /*

    */
    LPCWSTR_S GetImageValueBase64 ();
    /*

    */
    void SetImageValueBase64 (LPCWSTR_S value);
    /*

    */
    intrusive_ptr<Image> GetImage ();
    /*

    */
    void SetImage (intrusive_ptr<Image> value);
private:
};
}}