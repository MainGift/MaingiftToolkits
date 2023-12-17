#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The Adobe Built-in JavaScript
    </summary>
*/
class EXPORTS PdfJavaScript : public virtual Object
{
public:
    /*
    <summary>
        Get a AFNumber_Format string
    </summary>
    <param name="nDec">The number of places after the decimal point</param>
    <param name="sepStyle">The integer denoting whether to use a separator or not. If sepStyle=0, use commas. If sepStyle=1, do not separate.</param>
    <param name="negStyle">The formatting used for negative numbers: 0 = MinusBlack, 1 = Red, 2 = ParensBlack, 3 = ParensRed</param>
    <param name="currStyle">The currency style - not used</param>
    <param name="strCurrency">The currency symbol</param>
    <param name="bCurrencyPrepend">True to prepend the currency symbol; false to display on the end of the number</param>
    */
    static LPCWSTR_S GetNumberFormatString (int nDec,int sepStyle,int negStyle,int currStyle,LPCWSTR_S strCurrency,bool bCurrencyPrepend);
    /*
    <summary>
        Get a AFNumber_Keystroke string
    </summary>
    <param name="nDec">The number of places after the decimal point</param>
    <param name="sepStyle">The integer denoting whether to use a separator or not. If sepStyle=0, use commas. If sepStyle=1, do not separate.</param>
    <param name="negStyle">The formatting used for negative numbers: 0 = MinusBlack, 1 = Red, 2 = ParensBlack, 3 = ParensRed</param>
    <param name="currStyle">The currency style - not used</param>
    <param name="strCurrency">The currency symbol</param>
    <param name="bCurrencyPrepend">True to prepend the currency symbol; false to display on the end of the number</param>
    */
    static LPCWSTR_S GetNumberKeystrokeString (int nDec,int sepStyle,int negStyle,int currStyle,LPCWSTR_S strCurrency,bool bCurrencyPrepend);
    /*
    <summary>
        Get a AFRange_Validate string
    </summary>
    <param name="bGreaterThan">Indicate the use of the greater than comparison</param>
    <param name="nGreaterThan">The value to be used in the greater than comparison</param>
    <param name="bLessThan">Indicate the use of the less than comparison</param>
    <param name="nLessThan">The value to be used in the less than comparison</param>
    */
    static LPCWSTR_S GetRangeValidateString (bool bGreaterThan,float nGreaterThan,bool bLessThan,float nLessThan);
    /*
    <summary>
        Get a AFPercent_Format string
    </summary>
    <param name="nDec">The number of places after the decimal point</param>
    <param name="sepStyle">The integer denoting whether to use a separator or not. If sepStyle=0, use commas. If sepStyle=1, do not separate</param>
    */
    static LPCWSTR_S GetPercentFormatString (int nDec,int sepStyle);
    /*
    <summary>
        Get a AFPercent_Keystroke string
    </summary>
    <param name="nDec">The number of places after the decimal point</param>
    <param name="sepStyle">The integer denoting whether to use a separator or not. If sepStyle=0, use commas. If sepStyle=1, do not separate</param>
    */
    static LPCWSTR_S GetPercentKeystrokeString (int nDec,int sepStyle);
    /*
    <summary>
        Get a AFDate_FormatEx string
    </summary>
    <param name="cFormat">Must be one of: "m/d", "m/d/yy", "mm/dd/yy", "mm/yy", "d-mmm", "d-mmm-yy", "dd-mmm-yy", "yymm-dd", "mmm-yy", "mmmm-yy", "mmm d, yyyy", "mmmm d, yyyy", "m/d/yy h:MM tt", "m/d/yy HH:MM"</param>
    */
    static LPCWSTR_S GetDateFormatString (LPCWSTR_S cFormat);
    /*
    <summary>
        Get a AFDate_KeystrokeEx string
    </summary>
    <param name="cFormat">Must be one of: "m/d", "m/d/yy", "mm/dd/yy", "mm/yy", "d-mmm", "d-mmm-yy", "dd-mmm-yy", "yymm-dd", "mmm-yy", "mmmm-yy", "mmm d, yyyy", "mmmm d, yyyy", "m/d/yy h:MM tt", "m/d/yy HH:MM"</param>
    */
    static LPCWSTR_S GetDateKeystrokeString (LPCWSTR_S cFormat);
    /*
    <summary>
        Get a AFTime_Format string
    </summary>
    <param name="ptf">The time format: 0 = 24HR_MM [ 14:30 ], 1 = 12HR_MM [ 2:30 PM ], 2 = 24HR_MM_SS [ 14:30:15 ], 3 = 12HR_MM_SS [ 2:30:15 PM ]</param>
    */
    static LPCWSTR_S GetTimeFormatString (int ptf);
    /*
    <summary>
        Get a AFTime_Keystroke string
    </summary>
    <param name="ptf">The time format: 0 = 24HR_MM [ 14:30 ], 1 = 12HR_MM [ 2:30 PM ], 2 = 24HR_MM_SS [ 14:30:15 ], 3 = 12HR_MM_SS [ 2:30:15 PM ]</param>
    */
    static LPCWSTR_S GetTimeKeystrokeString (int ptf);
    /*
    <summary>
        Get a AFSpecial_Format string
    </summary>
    <param name="psf">The type of formatting to use:0 = zip code, 1 = zip + 4, 2 = phone, 3 = SSN</param>
    */
    static LPCWSTR_S GetSpecialFormatString (int psf);
    /*
    <summary>
        Get a AFSpecial_Format string
    </summary>
    <param name="psf">The type of formatting to use:0 = zip code, 1 = zip + 4, 2 = phone, 3 = SSN</param>
    */
    static LPCWSTR_S GetSpecialKeystrokeString (int psf);
    /*
    <summary>
        Get a AFSimple_Calculate string
    </summary>
    <param name="cFunction">Must be one of "AVG", "SUM", "PRD", "MIN", "MAX"</param>
    <param name="cFields">The name list of the fields to use in the calculation</param>
    */
    static LPCWSTR_S GetSimpleCalculateString (LPCWSTR_S cFunction,std::vector<LPCWSTR_S> cFields);
private:
};
}}