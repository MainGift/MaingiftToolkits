#pragma once
#include "pch.h"
#include "ImageQuality.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
    namespace Pdf {
        /*
            <summary>
                The pdf standard conveter.
            </summary>
        */
        class EXPORTS OptimizationOptions : public virtual Object
        {
        public:
            OptimizationOptions();

            /// <summary>
            /// Indicates whether to compress page contents.
            /// </summary>
            void SetIsCompressContents(bool value);

            /// <summary>
            /// Indicates whether to compress font resources. Default value is true.
            /// </summary>
            void SetIsCompressFonts(bool value);

            /// <summary>
            /// Indicates whether to unembed fonts. Default value is false.
            /// Note: The resulting document may have errors when the font is not normally encoded.
            /// </summary>
            void SetIsUnembedFonts(bool value);

            /// <summary>
            /// Indicates whether compress image. Default value is true.
            /// </summary>
            void SetIsCompressImage(bool value);

            /// <summary>
            /// Indicates whether resize image.
            /// </summary>
            void SetResizeImages(bool value);

            /// <summary>
            ///  sets the image quality.
            /// </summary>
            void SetImageQuality(ImageQuality value);
            
        private:
        };
    }
}