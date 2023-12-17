#pragma once
#include "pch.h"
#include "OptimizationOptions.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#pragma warning(pop)

namespace Spire {
    namespace Pdf {
        /*
            <summary>
                The pdf standard conveter.
            </summary>
        */
        class EXPORTS PdfCompressor : public virtual Object
        {
        public:
            /// <summary>
            /// Initializes a new instance of the class.
            /// </summary>
            /// <param name="stream">The pdf file stream.</param>
            PdfCompressor(intrusive_ptr<Stream> stream);

            /// <summary>
            /// Construct a new converter.
            /// </summary>
            /// <param name="filePath">The pdf file path.</param>
            PdfCompressor(LPCWSTR_S filePath);
            /*
            <summary>
                Compress document.
            </summary>
            <param name="filePath">The out file path.</param>
            */
            void CompressToFile(LPCWSTR_S filePath);
            /*
            <summary>
                Compress the document to the specified stream.
            </summary>
            <param name="stream">The out stream.</param>
            */
            void CompressToStream(intrusive_ptr<Stream> stream);
            

            intrusive_ptr<OptimizationOptions> GetOptimizationOptions();

            void SetOptimizationOptions(intrusive_ptr<OptimizationOptions> value);
        private:
        };
    }
}