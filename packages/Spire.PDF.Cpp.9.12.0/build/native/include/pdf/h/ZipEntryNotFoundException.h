#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ZipException.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<summary>Thrown whenever an error occurs during the build.</summary>
*/
class EXPORTS ZipEntryNotFoundException : public virtual ZipException
{
public:
private:
};
}}