#ifndef FORMATS_RPGMAKER_RGSSAD_ARCHIVE_H
#define FORMATS_RPGMAKER_RGSSAD_ARCHIVE_H
#include "formats/archive.h"

namespace Formats
{
    namespace RpgMaker
    {
        class RgssadArchive final : public Archive
        {
        public:
            void unpack_internal(File &, FileSaver &) const override;
        };
    }
}

#endif