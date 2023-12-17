#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents collection of actions.
    </summary>
*/
class EXPORTS PdfActionCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Adds the specified action.
    </summary>
    <param name="action">The action.</param>
    <returns>action</returns>
    */
    int Add (intrusive_ptr<PdfAction> action);
    /*
    <summary>
        Inserts the action at the specified position.
    </summary>
    <param name="index">The index.</param>
    <param name="action">The action.</param>
    */
    void Insert (int index,intrusive_ptr<PdfAction> action);
    /*
    <summary>
        Gets the index of the action.
    </summary>
    <param name="action">The action.</param>
    <returns>action</returns>
    */
    int IndexOf (intrusive_ptr<PdfAction> action);
    /*
    <summary>
        Determines whether the action is contained within collection.
    </summary>
    <param name="action">The action.</param>
    <returns>
            Value, indicating the presents of the action in collection.
            </returns>
    */
    bool Contains (intrusive_ptr<PdfAction> action);
    /*
    <summary>
        Clears this collection.
    </summary>
    */
    void Clear ();
    /*
    <summary>
        Removes the specified action.
    </summary>
    <param name="action">The action.</param>
    */
    void Remove (intrusive_ptr<PdfAction> action);
    /*
    <summary>
        Removes the action at the specified position.
    </summary>
    <param name="index">The index.</param>
    */
    void RemoveAt (int index);
private:
};
}}