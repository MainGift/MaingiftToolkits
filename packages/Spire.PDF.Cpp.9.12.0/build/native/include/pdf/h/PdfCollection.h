#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Base collection of the pdf objects.
    </summary>
*/
class EXPORTS PdfCollection : public virtual Object
{
public:
    /*
    <summary>
        Gets number of the elements in the collection.
    </summary>
<value>The total number of elements in the collection.</value>
    */
    int GetCount ();
    /*
    <summary>
        Gets internal list of the collection.
    </summary>
    */
    //System.Collections.IList GetList ();
    /*
    <summary>
        Returns an enumerator that iterates through a collection.
    </summary>
    <returns>Returns an enumerator that iterates through a collection.</returns>
    */
    //virtual System.Collections.IEnumerator GetEnumerator ();
private:
};
}}