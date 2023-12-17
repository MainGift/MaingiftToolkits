#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
#ifdef _SPIRE_XLS
namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Presentation{
#else
namespace Xls{
#endif
class EXPORTS CultureInfo : public virtual Object
{
public:
    static intrusive_ptr<CultureInfo> CreateSpecificCulture (LPCWSTR_S name);
    static intrusive_ptr<CultureInfo> GetCurrentCulture ();
    static void SetCurrentCulture (intrusive_ptr<CultureInfo> value);
    static intrusive_ptr<CultureInfo> GetCurrentUICulture ();
    static void SetCurrentUICulture (intrusive_ptr<CultureInfo> value);
    static intrusive_ptr<CultureInfo> GetInstalledUICulture ();
    static intrusive_ptr<CultureInfo> GetDefaultThreadCurrentCulture ();
    static void SetDefaultThreadCurrentCulture (intrusive_ptr<CultureInfo> value);
    static intrusive_ptr<CultureInfo> GetDefaultThreadCurrentUICulture ();
    static void SetDefaultThreadCurrentUICulture (intrusive_ptr<CultureInfo> value);
    static intrusive_ptr<CultureInfo> GetInvariantCulture ();
    virtual intrusive_ptr<CultureInfo> GetParent ();
    virtual int GetLCID ();
    virtual int GetKeyboardLayoutId ();
    //static std::vector<CultureInfo*> GetCultures (System.Globalization.CultureTypes types);
    virtual LPCWSTR_S GetName ();
    virtual LPCWSTR_S GetDisplayName ();
    virtual LPCWSTR_S GetNativeName ();
    virtual LPCWSTR_S GetEnglishName ();
    virtual LPCWSTR_S GetTwoLetterISOLanguageName ();
    virtual LPCWSTR_S GetThreeLetterISOLanguageName ();
    virtual LPCWSTR_S GetThreeLetterWindowsLanguageName ();
    //virtual System.Globalization.CompareInfo GetCompareInfo ();
    //virtual System.Globalization.TextInfo GetTextInfo ();
    //virtual bool Equals (System.Object value);
    virtual int GetHashCode ();
    virtual LPCWSTR_S ToString ();
    //virtual System.Object GetFormat (System.Type formatType);
    virtual bool GetIsNeutralCulture ();
    //System.Globalization.CultureTypes GetCultureTypes ();
    //virtual System.Globalization.NumberFormatInfo GetNumberFormat ();
    //virtual void SetNumberFormat (System.Globalization.NumberFormatInfo value);
    //virtual System.Globalization.DateTimeFormatInfo GetDateTimeFormat ();
    //virtual void SetDateTimeFormat (System.Globalization.DateTimeFormatInfo value);
    void ClearCachedData ();
    //virtual System.Globalization.Calendar GetCalendar ();
    //virtual std::vector<System.Globalization.Calendar> GetOptionalCalendars ();
    bool GetUseUserOverride ();
    intrusive_ptr<CultureInfo> GetConsoleFallbackUICulture ();
    //virtual System.Object Clone ();
    static intrusive_ptr<CultureInfo> ReadOnly (intrusive_ptr<CultureInfo> ci);
    bool GetIsReadOnly ();
    static intrusive_ptr<CultureInfo> GetCultureInfo (int culture);
    static intrusive_ptr<CultureInfo> GetCultureInfo (LPCWSTR_S name);
    static intrusive_ptr<CultureInfo> GetCultureInfo (LPCWSTR_S name,LPCWSTR_S altName);
    LPCWSTR_S GetIetfLanguageTag ();
    static intrusive_ptr<CultureInfo> GetCultureInfoByIetfLanguageTag (LPCWSTR_S name);
private:
};
}}