//
// Created by diogo on 17.02.20.
//

//#include <algorithm>
#include <bitset>
#include <cryptopp/base64.h>
#include "BitParser.h"

/*
BitParser::BitParser(const std::string &val) {
    std::string encoded(val);
    std::replace(encoded.begin(), encoded.end(), '-', '+');
    std::replace(encoded.begin(), encoded.end(), '_', '/');

    CryptoPP::Base64Decoder decoder;
    decoder.Put((uint8_t*)encoded.data(), encoded.size());
    decoder.MessageEnd();

    bytes.resize(decoder.MaxRetrievable());
    decoder.Get(bytes.data(), decoder.MaxRetrievable());
}

size_t BitParser::remaining() const {
    return bytes.size() * 8 - bit_index;
}

void BitParser::skip(size_t bit_count) {
    bit_index += bit_count;
}

uint64_t BitParser::operator()(size_t bit_count) {
    uint64_t value = 0;
    while (bit_count > 0) {
        const auto bits_left = bit_index % 8;
        const auto bits_to_read = std::min(bit_count, 8 - bits_left);
        value <<= bits_to_read;
        const auto byte_index = bit_index / 8;
        if (byte_index < bytes.size()) {
            value |= (bytes[byte_index] >> (8 - bits_left - bits_to_read)) &
                     ((1U << bits_to_read) - 1);
        }
        bit_count -= bits_to_read;
        bit_index += bits_to_read;
    }
    return value;
}
*/


class BitParser {
private:
    std::size_t bit_index = 0;
    std::vector<uint8_t> bytes;

public:
    BitParser(const std::string &val) {
        std::string encoded(val);
        std::replace(encoded.begin(), encoded.end(), '-', '+');
        std::replace(encoded.begin(), encoded.end(), '_', '/');

        CryptoPP::Base64Decoder decoder;
        decoder.Put((uint8_t *) encoded.data(), encoded.size());
        decoder.MessageEnd();

        bytes.resize(decoder.MaxRetrievable());
        decoder.Get(bytes.data(), decoder.MaxRetrievable());
    }

    size_t remaining() const {
        return bytes.size() * 8 - bit_index;
    }

    void skip(size_t bit_count) {
        bit_index += bit_count;
    }

    uint64_t operator()(size_t bit_count) {
        uint64_t value = 0;
        while (bit_count > 0) {
            const auto bits_left = bit_index % 8;
            const auto bits_to_read = std::min(bit_count, 8 - bits_left);
            value <<= bits_to_read;
            const auto byte_index = bit_index / 8;
            if (byte_index < bytes.size()) {
                value |= (bytes[byte_index] >> (8 - bits_left - bits_to_read)) &
                         ((1U << bits_to_read) - 1);
            }
            bit_count -= bits_to_read;
            bit_index += bits_to_read;
        }
        return value;
    }
};
