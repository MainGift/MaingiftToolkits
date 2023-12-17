#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents StartRowLayout Event arguments.
    </summary>
*/
class EXPORTS BeginRowLayoutEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets the index of the row.
    </summary>
    */
    int GetRowIndex ();
    /*
    <summary>
        Gets or sets the cell style.
    </summary>
    */
    intrusive_ptr<PdfCellStyle> GetCellStyle ();
    /*

    */
    void SetCellStyle (intrusive_ptr<PdfCellStyle> value);
    /*
    <summary>
        Gets or sets the span map.
    </summary>
    */
    std::vector<int> GetColumnSpanMap ();
    /*

    */
    void SetColumnSpanMap (std::vector<int> value);
    /*
    <summary>
        Gets or sets a value indicating whether table drawing should stop.
    </summary>
    */
    bool GetCancel ();
    /*

    */
    void SetCancel (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this row should be ignored.
    </summary>
    */
    bool GetSkip ();
    /*

    */
    void SetSkip (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether column string format should be ignored.
    </summary>
    */
    bool GetIgnoreColumnFormat ();
    /*

    */
    void SetIgnoreColumnFormat (bool value);
    /*
    <summary>
        Sets the minimal height of the row.
    </summary>
    */
    float GetMinimalHeight ();
    /*

    */
    void SetMinimalHeight (float value);
private:
};
}}