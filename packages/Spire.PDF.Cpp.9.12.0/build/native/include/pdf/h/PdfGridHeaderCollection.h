#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGridHeaderCollection : public virtual Object
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
<value></value>
    */
    intrusive_ptr<PdfGridRow> GetItem (int index);
    /*
    <summary>
        Gets the count.
    </summary>
<value>The count.</value>
    */
    int GetCount ();
    /*
    <summary>
        Adds the specified count.
    </summary>
    <param name="count">The count.</param>
    */
    std::vector<intrusive_ptr<PdfGridRow>> Add (int count);
    /*
    <summary>
        Clears this instance.
    </summary>
    */
    void Clear ();
    /*
    <summary>
        Applies the style.
    </summary>
    <param name="style">The style.</param>
    */
    void ApplyStyle (intrusive_ptr<PdfGridStyleBase> style);
    /*

    */
    //virtual System.Collections.IEnumerator GetEnumerator ();
private:
};
}}