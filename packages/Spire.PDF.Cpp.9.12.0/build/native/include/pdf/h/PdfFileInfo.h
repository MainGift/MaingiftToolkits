#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        This class represents a set of the properties that define the internal structure of PDF file.
    </summary>
*/
class EXPORTS PdfFileInfo : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the version of the PDF document.
    </summary>
<value>The document version.</value>
    */
    PdfVersion GetVersion ();
    /*

    */
    void SetVersion (PdfVersion value);
    /*
    <summary>
        Gets or sets a value indicating whether [incremental update].
    </summary>
<value>
  <c>true</c> if [incremental update]; otherwise, <c>false</c>.</value>
    */
    bool GetIncrementalUpdate ();
    /*

    */
    void SetIncrementalUpdate (bool value);
    /*
    <summary>
        Gets or sets the type of PDF cross-reference.
    </summary>
<remarks>Please see the description of  for more details.</remarks>
    */
    PdfCrossReferenceType GetCrossReferenceType ();
    /*

    */
    void SetCrossReferenceType (PdfCrossReferenceType value);
    /*
    <summary>
        Gets the value indicating whether the PDF document is tagged one or not.
    </summary>
<value>If true PDF document is tagged, otherwise false.</value>
    */
    bool GetTaggedPdf ();
private:
};
}}