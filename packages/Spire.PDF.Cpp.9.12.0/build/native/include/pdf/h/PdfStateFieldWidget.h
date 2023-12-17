#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledFieldWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the base class for loaded state field.
    </summary>
*/
class EXPORTS PdfStateFieldWidget : public virtual PdfStyledFieldWidget
{
public:
    /*
    <summary>
        Gets the items collection.
    </summary>
    */
    intrusive_ptr<PdfStateWidgetItemCollection> GetWidgetItems ();
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}