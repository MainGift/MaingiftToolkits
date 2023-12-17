#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAction.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the sound action.
    </summary>
*/
class EXPORTS PdfSoundAction : public virtual PdfAction
{
public:
    PdfSoundAction();
    PdfSoundAction(LPCWSTR_S fileName);
    /*
    <summary>
        Gets or sets the volume at which to play the sound, in the range -1.0 to 1.0.
    </summary>
<value>The volume of the sound.</value>
    */
    float GetVolume ();
    /*

    */
    void SetVolume (float value);
    /*
<value>The name of the sound file.</value>
    */
    LPCWSTR_S GetFileName ();
    /*

    */
    void SetFileName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the sound.
    </summary>
<value> represents the sound.</value>
    */
    intrusive_ptr<PdfSound> GetSound ();
    /*

    */
    void SetSound (intrusive_ptr<PdfSound> value);
    /*
    <summary>
        Gets or sets a value whether to play the sound synchronously or asynchronously.
            If this flag is true, the viewer application retains control, allowing no further 
            user interaction other than canceling the sound, until the sound has been 
            completely played. Default value: false.
    </summary>
<value>
  <c>true</c> if synchronous; otherwise, <c>false</c>.</value>
    */
    bool GetSynchronous ();
    /*

    */
    void SetSynchronous (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to repeat the sound indefinitely. 
            If this entry is present, the  property is ignored. Default value: false.
    </summary>
<value>
  <c>true</c> if repeat; otherwise, <c>false</c>.</value>
    */
    bool GetRepeat ();
    /*

    */
    void SetRepeat (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to mix this sound with any other 
            sound already playing. If this flag is false, any previously playing sound is 
            stopped before starting this sound; this can be used to stop a repeating 
            sound. Default value: false.
    </summary>
<value>
  <c>true</c> if mix; otherwise, <c>false</c>.</value>
    */
    bool GetMix ();
    /*

    */
    void SetMix (bool value);
private:
};
}}