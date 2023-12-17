#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the lighting to apply for the 3D artwork.
    </summary>
*/
class EXPORTS Pdf3DAnimation : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the type of the animation.
    </summary>
    */
    PDF3DAnimationType GetType ();
    /*

    */
    void SetType (PDF3DAnimationType value);
    /*
    <summary>
        Gets or sets the play count. 
    </summary>
    */
    int GetPlayCount ();
    /*

    */
    void SetPlayCount (int value);
    /*
    <summary>
        Gets or sets the rendering opacity.
            <remarks>A positive number specifying the time multiplier to be used when running the animation. A value greater than one shortens the time it takes to play the animation, or effectively speeds up the animation.</remarks></summary>
    */
    float GetTimeMultiplier ();
    /*

    */
    void SetTimeMultiplier (float value);
private:
};
}}