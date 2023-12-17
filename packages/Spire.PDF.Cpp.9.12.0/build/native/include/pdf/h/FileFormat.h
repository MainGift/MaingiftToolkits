#pragma once
#include "pch.h"
namespace Spire {
    namespace Pdf {
        enum class FileFormat : int
        {
            PDF = 0,
            XPS = 1,
            DOC = 2,
            DOCX = 3,
            HTML = 4,
            SVG = 5,
            PCL = 6,
            XLSX = 7,
            POSTSCRIPT = 8,
            OFD = 9,
            PPTX = 10,
        };
        using FileFormat_Type = std::underlying_type<FileFormat>::type;
    }
}