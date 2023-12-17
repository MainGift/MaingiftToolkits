#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a collection of Pdf3DView objects. 
    </summary>
*/
class EXPORTS Pdf3DViewCollection : public virtual Object
{
public:
    /*
    <summary>
        Adds the specified value.
    </summary>
    <param name="value">The value.</param>
    <returns>Pdf3DView</returns>
    */
    int Add (intrusive_ptr<Pdf3DView> value);
    /*
    <summary>
        Determines whether [contains] [the specified value].
    </summary>
    <param name="value">The value.</param>
    <returns>
            if it contains the specified value, set to <c>true</c>.
            </returns>
    */
    bool Contains (intrusive_ptr<Pdf3DView> value);
    /*
    <summary>
        Indexes the of the Pdf3DView object.
    </summary>
    <param name="value">The value.</param>
    <returns>Pdf3DView</returns>
    */
    int IndexOf (intrusive_ptr<Pdf3DView> value);
    /*
    <summary>
        Inserts the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="value">The value.</param>
    */
    void Insert (int index, intrusive_ptr<Pdf3DView> value);
    /*
    <summary>
        Removes the specified value.
    </summary>
    <param name="value">The Pdf3DView object.</param>
    */
    void Remove (intrusive_ptr<Pdf3DView> value);
    /*
    <summary>
        Gets or sets the  at the specified index.
    </summary>
<value>Pdf3DView</value>
    */
    intrusive_ptr<Pdf3DView> GetItem (int index);
    /*

    */
    void SetItem (int index, intrusive_ptr<Pdf3DView> value);
private:
};
}}