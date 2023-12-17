#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        This interface defines the exposed interface of Translator
    </summary>
<author>linwei</author>
*/
class EXPORTS IUOFTranslator 
{
public:
    /*

    */
    //virtual void AddProgressMessageListener (System.EventHandler listener)=0;
    /*

    */
    //virtual void AddFeedbackMessageListener (System.EventHandler listener)=0;
    /*

    */
    virtual void UofToOox (intrusive_ptr<Stream> inputStream,intrusive_ptr<Stream> outputStream)=0;
    /*

    */
    virtual void OoxToUof (intrusive_ptr<Stream> inputStream,intrusive_ptr<Stream> outputStream)=0;
private:
};
}}