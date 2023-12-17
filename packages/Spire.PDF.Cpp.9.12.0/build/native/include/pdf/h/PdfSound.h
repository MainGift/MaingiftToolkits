#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents sound embedded into pdf document.
    </summary>
*/
class EXPORTS PdfSound : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the sampling rate, in samples per second (in Hz).
    </summary>
    */
    int GetRate ();
    /*

    */
    void SetRate (int value);
    /*
    <summary>
        Gets or sets the number of bits per sample value per channel.
    </summary>
    */
    int GetBits ();
    /*

    */
    void SetBits (int value);
    /*
    <summary>
        Gets or sets the encoding format for the sample data.
    </summary>
    */
    PdfSoundEncoding GetEncoding ();
    /*

    */
    void SetEncoding (PdfSoundEncoding value);
    /*
    <summary>
        Gets or sets the number of sound channels.
    </summary>
    */
    PdfSoundChannels GetChannels ();
    /*

    */
    void SetChannels (PdfSoundChannels value);
    /*
<value>The name of the file.</value>
    */
    LPCWSTR_S GetFileName ();
    /*

    */
    void SetFileName (LPCWSTR_S value);
private:
};
}}