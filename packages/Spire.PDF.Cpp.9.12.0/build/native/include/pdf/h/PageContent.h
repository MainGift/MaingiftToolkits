#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "LinkTarget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS PageContent : public virtual Object
{
public:
    /*
<remarks />
    */
    std::vector<intrusive_ptr<LinkTarget>> GetPageContentLinkTargets ();
    /*

    */
    void SetPageContentLinkTargets (std::vector<intrusive_ptr<LinkTarget>> value);
    /*
<remarks />
    */
    LPCWSTR_S GetSource ();
    /*

    */
    void SetSource (LPCWSTR_S value);
    /*
<remarks />
    */
    double GetWidth ();
    /*

    */
    void SetWidth (double value);
    /*
<remarks />
    */
    bool GetWidthSpecified ();
    /*

    */
    void SetWidthSpecified (bool value);
    /*
<remarks />
    */
    double GetHeight ();
    /*

    */
    void SetHeight (double value);
    /*
<remarks />
    */
    bool GetHeightSpecified ();
    /*

    */
    void SetHeightSpecified (bool value);
private:
};
}}