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
		class EXPORTS License
		{
		public:
			/// <summary>
			/// Provides a license by a license file path, which will be used for loading license.
			/// </summary>
			/// <param name="licenseFileFullPath">License file full path.</param>
			static void SetLicenseFileFullPath(LPCWSTR_S licenseFileFullPath);
			/// <summary>
			/// Sets the license file name, which will be used for loading license.
			/// </summary>
			/// <param name="licenseFileName">License file name.</param>
			static void SetLicenseFileName(LPCWSTR_S licenseFileName);
			/// <summary>
			/// Provides a license by a license stream, which will be used for loading license.
			/// </summary>
			/// <param name="licenseFileStream">License data stream.</param>
			static void SetLicenseFileStream(std::istream& licenseFileStream);
			/// <summary>    
			/// Provides a license by a license key, which will be used for loading license.
			/// </summary>
			/// <param name="key">The value of the Key attribute of the element License of you license xml file.</param> 
			static void SetLicenseKey(LPCWSTR_S key);
			/// <summary>
			/// Clear all cached license.
			/// </summary>
			static void ClearLicense();

		};
	}
}