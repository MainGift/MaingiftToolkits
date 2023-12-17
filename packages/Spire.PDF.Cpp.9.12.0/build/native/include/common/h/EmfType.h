#pragma once
#include "common.h"
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
enum class EmfType : int
{
    EmfOnly = 3,
    EmfPlusOnly = 4,
    EmfPlusDual = 5,
};
using EmfType_Type = std::underlying_type<EmfType>::type;
}}