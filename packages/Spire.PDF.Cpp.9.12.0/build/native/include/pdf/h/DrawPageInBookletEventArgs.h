#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents DrawPageInBooklet Event arguments.
    </summary>
*/
class EXPORTS DrawPageInBookletEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets the page of the source file.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPageInSource ();
    /*
    <summary>
        Gets the index of the source page, basing on 0.
    </summary>
    */
    int GetPageNumberInSource ();
    /*
    <summary>
        Gets the page of the booklet.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPageInBooklet ();
    /*
    <summary>
        Gets the index of the booklet page, basing on 0.
    </summary>
    */
    int GetPageNumberInBooklet ();
private:
};
}}