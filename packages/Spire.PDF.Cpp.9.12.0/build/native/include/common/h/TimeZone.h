#pragma once
//#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
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
		/*

		*/
		class EXPORTS TimeZone : public virtual Object
		{
		public:
			/*

			*/
			static intrusive_ptr<TimeZone> GetCurrentTimeZone();
			/*

			*/
			virtual intrusive_ptr<DateTime> ToUniversalTime(intrusive_ptr<DateTime> time);
			/*

			*/
			virtual intrusive_ptr<DateTime> ToLocalTime(intrusive_ptr<DateTime> time);
			/*

			*/
			virtual bool IsDaylightSavingTime(intrusive_ptr<DateTime> time);
			/*

			*/
			//static bool IsDaylightSavingTime (intrusive_ptr<DateTime> time,System.Globalization.DaylightTime daylightTimes);
			/*

			*/
			virtual LPCSTR GetStandardName();
			/*

			*/
			virtual LPCSTR GetDaylightName();
			/*

			*/
			virtual intrusive_ptr<TimeSpan> GetUtcOffset(intrusive_ptr<DateTime> time);
			/*

			*/
			//virtual System.Globalization.DaylightTime GetDaylightChanges (int year);
		private:
		};
	}
}