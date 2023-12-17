#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMarkUpAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfSquareAnnotationWidget : public virtual PdfMarkUpAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the rectangular diffecences array
    </summary>
    */
    std::vector<int> GetRectangularDifferenceArray ();
    /*

    */
    void SetRectangularDifferenceArray (std::vector<float> value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}