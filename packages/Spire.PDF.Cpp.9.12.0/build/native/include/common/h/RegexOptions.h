#pragma once
#include "common.h"
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
		enum class RegexOptions : int
		{
			None = 0,
			IgnoreCase = 1,
			Multiline = 2,
			ExplicitCapture = 4,
			Compiled = 8,
			Singleline = 16,
			IgnorePatternWhitespace = 32,
			RightToLeft = 64,
			ECMAScript = 256,
			CultureInvariant = 512,
		};
		using RegexOptions_Type = std::underlying_type<RegexOptions>::type;
	}
}