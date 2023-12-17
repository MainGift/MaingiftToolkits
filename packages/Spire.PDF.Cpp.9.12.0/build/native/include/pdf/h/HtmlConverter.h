#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS HtmlConverter : public virtual Object
{
public:
    /*

    */
    void SetPassword (LPCWSTR_S value);
    /*

    */
    LPCWSTR_S GetUsername ();
    /*

    */
    void SetUsername (LPCWSTR_S value);
    /*

    */
    int GetLoadHtmlTimeout ();
    /*

    */
    void SetLoadHtmlTimeout (int value);
    /*

    */
    void SetIsWaiting (bool value);
    /*
    <summary>
        webBrowser load html  whether  Waiting time in milliseconds.
     </summary>
    */
    int GetWaitingTime ();
    /*

    */
    void SetWaitingTime (int value);
    /*

    */
    //virtual int Authenticate (System.IntPtr& phwnd,System.IntPtr& pszUsername,System.IntPtr& pszPassword);
    /*

    */
    intrusive_ptr<HtmlToPdfResult> Convert (LPCWSTR_S url,ImageType type,int width,int height,AspectRatio aspectRatio);
    /*

    */
    intrusive_ptr<HtmlToPdfResult> Convert (LPCWSTR_S html,LPCWSTR_S baseurl,ImageType type,int width,int height,AspectRatio aspectRatio);
    /*

    */
    intrusive_ptr<HtmlToPdfResult> Convert (LPCWSTR_S url,ImageType type,int width,int height,AspectRatio aspectRatio,LPCWSTR_S username,LPCWSTR_S password);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (LPCWSTR_S url,ImageType type);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (intrusive_ptr<Stream> stream,intrusive_ptr<Encoding> encoding,ImageType type);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (LPCWSTR_S url,ImageType type,int width);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (intrusive_ptr<Stream> stream,intrusive_ptr<Encoding> encoding,ImageType type,int width);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (LPCWSTR_S url,ImageType type,int width,int height);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (LPCWSTR_S url,ImageType type,LPCWSTR_S username,LPCWSTR_S password);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (intrusive_ptr<Stream> stream,intrusive_ptr<Encoding> encoding,ImageType type,int width,int height);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (LPCWSTR_S url,ImageType type,int width,int height,AspectRatio aspectRatio);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (LPCWSTR_S url,ImageType type,int width,LPCWSTR_S username,LPCWSTR_S password);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (intrusive_ptr<Stream> stream,intrusive_ptr<Encoding> encoding,ImageType type,int width,int height,AspectRatio aspectRatio);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (LPCWSTR_S url,ImageType type,int width,int height,LPCWSTR_S username,LPCWSTR_S password);
    /*

    */
    intrusive_ptr<Image> ConvertToImage (LPCWSTR_S url,ImageType type,int width,int height,AspectRatio aspectRatio,LPCWSTR_S username,LPCWSTR_S password);
    /*

    */
    int CustomizeDownload ();
    /*

    */
    intrusive_ptr<Image> FromString (LPCWSTR_S html,ImageType type,int width);
    /*

    */
    intrusive_ptr<Image> FromString (LPCWSTR_S html,LPCWSTR_S baseUrl,ImageType type);
    /*

    */
    intrusive_ptr<Image> FromString (LPCWSTR_S html,ImageType type,int width,int height);
    /*

    */
    intrusive_ptr<Image> FromString (LPCWSTR_S html,LPCWSTR_S baseUrl,ImageType type,int width);
    /*

    */
    intrusive_ptr<Image> FromString (LPCWSTR_S html,ImageType type,int width,int height,AspectRatio aspectRatio);
    /*

    */
    intrusive_ptr<Image> FromString (LPCWSTR_S html,LPCWSTR_S baseUrl,ImageType type,int width,int height);
    /*

    */
    intrusive_ptr<Image> FromString (LPCWSTR_S html,LPCWSTR_S baseUrl,ImageType type,int width,int height,AspectRatio aspectRatio);
    /*

    */
    intrusive_ptr<Image> FromString (LPCWSTR_S html,LPCWSTR_S baseUrl,ImageType type,int width,int height,AspectRatio aspectRatio,LPCWSTR_S username,LPCWSTR_S password);
    /*

    */
    std::vector<intrusive_ptr<Image>> GetImagesFromString (LPCWSTR_S html,LPCWSTR_S baseUrl,ImageType type);
    /*

    */
    //virtual int QueryService (System.Guid& guidService,System.Guid& riid,System.IntPtr& ppvObject);
    /*

    */
    bool GetAutoDetectPageBreak ();
    /*

    */
    void SetAutoDetectPageBreak (bool value);
    /*

    */
    bool GetEnableBinaryBehaviors ();
    /*

    */
    void SetEnableBinaryBehaviors (bool value);
    /*

    */
    bool GetEnableHyperlinks ();
    /*

    */
    void SetEnableHyperlinks (bool value);
    /*

    */
    bool GetEnableJavaScript ();
    /*

    */
    void SetEnableJavaScript (bool value);
    /*

    */
    LPCWSTR_S GetPassword ();
private:
};
}}