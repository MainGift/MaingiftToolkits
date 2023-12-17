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
        Represents the collection of the columns.
    </summary>
*/
class EXPORTS PdfColumnCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    intrusive_ptr<PdfColumn> GetItem (int index);
    /*
    <summary>
        Adds the specified column.
    </summary>
    <param name="column">The column.</param>
    */
    void Add (intrusive_ptr<PdfColumn> column);
private:
};
}}