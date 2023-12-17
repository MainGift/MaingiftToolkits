#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the collection of  objects. 
    </summary>
*/
class EXPORTS Pdf3DCrossSectionCollection : public virtual Object
{
public:
    /*
    <summary>
        Adds the specified value.
    </summary>
    <param name="value">The value.</param>
    <returns></returns>
    */
    int Add (intrusive_ptr<Pdf3DCrossSection> value);
    /*
    <summary>
        Determines whether [contains] [the specified value].
    </summary>
    <param name="value">The value.</param>
    <returns>
            if it contains the specified value, set to <c>true</c>.
            </returns>
    */
    bool Contains (intrusive_ptr<Pdf3DCrossSection> value);
    /*
    <summary>
        Indexes the of.
    </summary>
    <param name="value">The value.</param>
    <returns></returns>
    */
    int IndexOf (intrusive_ptr<Pdf3DCrossSection> value);
    /*
    <summary>
        Inserts the specified index.
    </summary>
    <param name="index">The index.</param>
    <param name="value">The value.</param>
    */
    void Insert (int index,intrusive_ptr<Pdf3DCrossSection> value);
    /*
    <summary>
        Removes the specified value.
    </summary>
    <param name="value">The value.</param>
    */
    void Remove (intrusive_ptr<Pdf3DCrossSection> value);
    /*
    <summary>
        Gets or sets the  at the specified index.
    </summary>
    */
    intrusive_ptr<Pdf3DCrossSection> GetItem (int index);
    /*

    */
    void SetItem (int index,intrusive_ptr<Pdf3DCrossSection> value);
private:
};
}}