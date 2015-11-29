#pragma once

#include "fmt/audio_decoder.h"

namespace au {
namespace fmt {
namespace microsoft {

    class WavAudioDecoder final : public AudioDecoder
    {
    protected:
        bool is_recognized_impl(io::File &input_file) const override;
        res::Audio decode_impl(io::File &input_file) const override;
    };

} } }