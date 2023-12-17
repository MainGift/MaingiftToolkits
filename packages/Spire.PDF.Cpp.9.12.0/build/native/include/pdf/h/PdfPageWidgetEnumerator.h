#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Implements enumerator to the loaded page collection.
    </summary>
*/
class EXPORTS PdfPageWidgetEnumerator : public virtual Object
{
public:
    /*
    <summary>
        Gets the current element in the collection.
    </summary>
<value></value>
    <returns>The current element in the collection.</returns>
<exception cref="T:System.InvalidOperationException">
            The enumerator is positioned before the first element of the collection
            or after the last element. </exception>
    */
    //virtual System.Object GetCurrent ();
    /*
    <summary>
        Advances the enumerator to the next element of the collection.
    </summary>
    <returns>
            true if the enumerator was successfully advanced to the next element;
            false if the enumerator has passed the end of the collection.
            </returns>
<exception cref="T:System.InvalidOperationException">
            The collection was modified after the enumerator was created. </exception>
    */
    virtual bool MoveNext ();
    /*
    <summary>
        Sets the enumerator to its initial position,
            which is before the first element in the collection.
    </summary>
<exception cref="T:System.InvalidOperationException">
            The collection was modified after the enumerator was created. </exception>
    */
    virtual void Reset ();
private:
};
}}