#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfRow.h"
#include "PdfCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the collection of the columns.
    </summary>
*/
class EXPORTS PdfRowCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    intrusive_ptr<PdfRow> GetItem (int index);
    /*
    <summary>
        Adds the specified row.
    </summary>
    <param name="row">The row.</param>
    */
    void Add (intrusive_ptr<PdfRow> row);
    /*
    <summary>
        The array of values that are used to create the new row.
    </summary>
    */
    void Add (std::vector<intrusive_ptr<Object>> values);
private:
};
}}