#pragma once
#include "common.h"

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
		class EXPORTS Regex : public virtual Object
		{
			friend class Object;
		public:
			Regex(LPCWSTR_S pattern);

			Regex(LPCWSTR_S pattern, RegexOptions options);
			/*

			*/
			static LPCWSTR_S Escape(LPCWSTR_S str);
			/*

			*/
			static LPCWSTR_S Unescape(LPCWSTR_S str);
			/*

			*/
			static int GetCacheSize();
			/*

			*/
			static void SetCacheSize(int value);
			/*

			*/
			RegexOptions GetOptions();
			/*

			*/
			intrusive_ptr<TimeSpan> GetMatchTimeout();
			/*

			*/
			bool GetRightToLeft();
			/*

			*/
			virtual LPCWSTR_S ToString();
			/*

			*/
			LPCWSTR_S GroupNameFromNumber(int i);
			/*

			*/
			int GroupNumberFromName(LPCWSTR_S name);
			/*

			*/
			static bool IsMatch(LPCWSTR_S input, LPCWSTR_S pattern, RegexOptions options, intrusive_ptr<TimeSpan> matchTimeout);
			/*

			*/
			bool IsMatch(LPCWSTR_S input);
			/*

			*/
			bool IsMatch(LPCWSTR_S input, int startat);
			/*

			*/
			//static System.Text.RegularExpressions.Match Match (LPCWSTR_S input,LPCWSTR_S pattern,System.Text.RegularExpressions.RegexOptions options);
			/*

			*/
			//static System.Text.RegularExpressions.Match Match (LPCWSTR_S input,LPCWSTR_S pattern,System.Text.RegularExpressions.RegexOptions options,intrusive_ptr<TimeSpan> matchTimeout);
			/*

			*/
			//System.Text.RegularExpressions.Match Match (LPCWSTR_S input);
			/*

			*/
			//System.Text.RegularExpressions.Match Match (LPCWSTR_S input,int startat);
			/*

			*/
			//System.Text.RegularExpressions.Match Match (LPCWSTR_S input,int beginning,int length);
			/*

			*/
			//static System.Text.RegularExpressions.MatchCollection Matches (LPCWSTR_S input,LPCWSTR_S pattern,System.Text.RegularExpressions.RegexOptions options);
			/*

			*/
			//static System.Text.RegularExpressions.MatchCollection Matches (LPCWSTR_S input,LPCWSTR_S pattern,System.Text.RegularExpressions.RegexOptions options,intrusive_ptr<TimeSpan> matchTimeout);
			/*

			*/
			//System.Text.RegularExpressions.MatchCollection Matches (LPCWSTR_S input);
			/*

			*/
			//System.Text.RegularExpressions.MatchCollection Matches (LPCWSTR_S input,int startat);
			/*

			*/
			static LPCWSTR_S Replace(LPCWSTR_S input, LPCWSTR_S pattern, LPCWSTR_S replacement);
			/*

			*/
			static LPCWSTR_S Replace(LPCWSTR_S input, LPCWSTR_S pattern, LPCWSTR_S replacement, RegexOptions options);
			/*

			*/
			static LPCWSTR_S Replace(LPCWSTR_S input, LPCWSTR_S pattern, LPCWSTR_S replacement, RegexOptions options, intrusive_ptr<TimeSpan> matchTimeout);
			/*

			*/
			LPCWSTR_S Replace(LPCWSTR_S input, LPCWSTR_S replacement);
			/*

			*/
			LPCWSTR_S Replace(LPCWSTR_S input, LPCWSTR_S replacement, int count);
			/*

			*/
			LPCWSTR_S Replace(LPCWSTR_S input, LPCWSTR_S replacement, int count, int startat);
			/*

			*/
			//static LPCWSTR_S Replace (LPCWSTR_S input,LPCWSTR_S pattern,System.Text.RegularExpressions.MatchEvaluator evaluator);
			/*

			*/
			//static LPCWSTR_S Replace (LPCWSTR_S input,LPCWSTR_S pattern,System.Text.RegularExpressions.MatchEvaluator evaluator,System.Text.RegularExpressions.RegexOptions options);
			/*

			*/
			//static LPCWSTR_S Replace (LPCWSTR_S input,LPCWSTR_S pattern,System.Text.RegularExpressions.MatchEvaluator evaluator,System.Text.RegularExpressions.RegexOptions options,intrusive_ptr<TimeSpan> matchTimeout);
			/*

			*/
			//LPCWSTR_S Replace (LPCWSTR_S input,System.Text.RegularExpressions.MatchEvaluator evaluator);
			/*

			*/
			//LPCWSTR_S Replace (LPCWSTR_S input,System.Text.RegularExpressions.MatchEvaluator evaluator,int count);
			/*

			*/
			//LPCWSTR_S Replace (LPCWSTR_S input,System.Text.RegularExpressions.MatchEvaluator evaluator,int count,int startat);
			/*

			*/
			static std::vector<LPCWSTR_S> Split(LPCWSTR_S input, LPCWSTR_S pattern);
			/*

			*/
			static std::vector<LPCWSTR_S> Split(LPCWSTR_S input, LPCWSTR_S pattern, RegexOptions options);
			/*

			*/
			static std::vector<LPCWSTR_S> Split(LPCWSTR_S input, LPCWSTR_S pattern, RegexOptions options, intrusive_ptr<TimeSpan> matchTimeout);
			/*

			*/
			std::vector<LPCWSTR_S> Split(LPCWSTR_S input);
			/*

			*/
			std::vector<LPCWSTR_S> Split(LPCWSTR_S input, int count);
			/*

			*/
			std::vector<LPCWSTR_S> Split(LPCWSTR_S input, int count, int startat);
			/*

			*/
			//static void CompileToAssembly (std::vector<System.Text.RegularExpressions.RegexCompilationInfo> regexinfos,System.Reflection.AssemblyName assemblyname);
			/*

			*/
			//static void CompileToAssembly (std::vector<System.Text.RegularExpressions.RegexCompilationInfo> regexinfos,System.Reflection.AssemblyName assemblyname,std::vector<System.Reflection.Emit.CustomAttributeBuilder> attributes);
			/*

			*/
			//static void CompileToAssembly (std::vector<System.Text.RegularExpressions.RegexCompilationInfo> regexinfos,System.Reflection.AssemblyName assemblyname,std::vector<System.Reflection.Emit.CustomAttributeBuilder> attributes,LPCWSTR_S resourceFile);
			/*

			*/
			std::vector<int> GetGroupNumbers();
			/*

			*/
			static bool IsMatch(LPCWSTR_S input, LPCWSTR_S pattern);
			/*

			*/
			static bool IsMatch(LPCWSTR_S input, LPCWSTR_S pattern, RegexOptions options);
			/*

			*/
			//static System.Text.RegularExpressions.Match Match (LPCWSTR_S input,LPCWSTR_S pattern);
			/*

			*/
			//static System.Text.RegularExpressions.MatchCollection Matches (LPCWSTR_S input,LPCWSTR_S pattern);
			/*

			*/
			std::vector<LPCWSTR_S> GetGroupNames();
			/*

			*/
			//static intrusive_ptr<TimeSpan> InfiniteMatchTimeout();
		protected:
			Regex();
		private:
		};
	}
}