//  Copyright (C) 2015-2021 Virgil Security, Inc.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are
//  met:
//
//      (1) Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//
//      (2) Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//
//      (3) Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
//  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
//  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
//  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
//  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//
//  Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>


#include "test_data_ecies_envelope.h"

static const byte ENVELOPE_ED25519_PACKED_BYTES[] = {
    0x30, 0x81, 0xDB, 0x02, 0x01, 0x00, 0x30, 0x2A,
    0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70, 0x03,
    0x21, 0x00, 0xEB, 0xD4, 0x96, 0x10, 0xEA, 0xE7,
    0x29, 0x91, 0x00, 0x30, 0x3B, 0x9F, 0xEB, 0x24,
    0x13, 0x01, 0x50, 0xE5, 0xEC, 0xF5, 0xA3, 0xB9,
    0xED, 0x0C, 0xD0, 0x06, 0x2C, 0x87, 0xBF, 0xEE,
    0xC3, 0x19, 0x30, 0x16, 0x06, 0x07, 0x28, 0x81,
    0x8C, 0x71, 0x02, 0x05, 0x02, 0x30, 0x0B, 0x06,
    0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04,
    0x02, 0x02, 0x30, 0x3F, 0x30, 0x0B, 0x06, 0x09,
    0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02,
    0x02, 0x04, 0x30, 0xD3, 0x2F, 0xD5, 0xC5, 0x15,
    0x63, 0xBF, 0xB5, 0x85, 0xBC, 0xC4, 0x24, 0x22,
    0x40, 0xA7, 0x70, 0x22, 0x4E, 0xAF, 0xD3, 0xBF,
    0xDF, 0xB7, 0x6C, 0x24, 0xA6, 0x6E, 0x6A, 0x74,
    0x23, 0x58, 0xE2, 0xE2, 0x26, 0x8F, 0x2D, 0xD5,
    0x16, 0xC5, 0x3F, 0xF3, 0xCD, 0xA4, 0x3C, 0x1D,
    0x2F, 0x63, 0x9D, 0x30, 0x51, 0x30, 0x1D, 0x06,
    0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04,
    0x01, 0x2A, 0x04, 0x10, 0xF2, 0x97, 0x47, 0xF4,
    0x25, 0x18, 0x68, 0x55, 0xBA, 0x72, 0xAB, 0xD4,
    0xAC, 0x0A, 0x47, 0xEA, 0x04, 0x30, 0x37, 0xE4,
    0xA8, 0xD6, 0xD6, 0x41, 0x5D, 0x6E, 0x8A, 0x5E,
    0xDD, 0xD2, 0x5C, 0xC1, 0x37, 0x92, 0x86, 0x4E,
    0xCD, 0x77, 0x11, 0xE5, 0x25, 0xB2, 0x3E, 0xFC,
    0xC9, 0x66, 0x73, 0x2F, 0x39, 0xA8, 0x7B, 0x9F,
    0x1A, 0x67, 0xEC, 0xEE, 0x7A, 0xB3, 0x73, 0x41,
    0xC9, 0x08, 0xAA, 0xCD, 0x71, 0x4B
};

const vsc_data_t test_data_ecies_envelope_ED25519_PACKED = {
    ENVELOPE_ED25519_PACKED_BYTES, sizeof(ENVELOPE_ED25519_PACKED_BYTES)
};

static const byte ENVELOPE_ED25519_EPHEMERAL_PUBLIC_KEY_BYTES[] = {
    0xEB, 0xD4, 0x96, 0x10, 0xEA, 0xE7, 0x29, 0x91,
    0x00, 0x30, 0x3B, 0x9F, 0xEB, 0x24, 0x13, 0x01,
    0x50, 0xE5, 0xEC, 0xF5, 0xA3, 0xB9, 0xED, 0x0C,
    0xD0, 0x06, 0x2C, 0x87, 0xBF, 0xEE, 0xC3, 0x19,
};

const vsc_data_t test_data_ecies_envelope_ED25519_EPHEMERAL_PUBLIC_KEY = {
    ENVELOPE_ED25519_EPHEMERAL_PUBLIC_KEY_BYTES, sizeof(ENVELOPE_ED25519_EPHEMERAL_PUBLIC_KEY_BYTES)
};

static const byte ENVELOPE_ED25519_SHA384_MAC_DIGEST_BYTES[] = {
    0xD3, 0x2F, 0xD5, 0xC5, 0x15, 0x63, 0xBF, 0xB5,
    0x85, 0xBC, 0xC4, 0x24, 0x22, 0x40, 0xA7, 0x70,
    0x22, 0x4E, 0xAF, 0xD3, 0xBF, 0xDF, 0xB7, 0x6C,
    0x24, 0xA6, 0x6E, 0x6A, 0x74, 0x23, 0x58, 0xE2,
    0xE2, 0x26, 0x8F, 0x2D, 0xD5, 0x16, 0xC5, 0x3F,
    0xF3, 0xCD, 0xA4, 0x3C, 0x1D, 0x2F, 0x63, 0x9D,
};

const vsc_data_t test_data_ecies_envelope_ED25519_SHA384_MAC_DIGEST = {
    ENVELOPE_ED25519_SHA384_MAC_DIGEST_BYTES, sizeof(ENVELOPE_ED25519_SHA384_MAC_DIGEST_BYTES)
};

static const byte ENVELOPE_ED25519_AES256_CBC_IV_BYTES[] = {
    0xF2, 0x97, 0x47, 0xF4, 0x25, 0x18, 0x68, 0x55,
    0xBA, 0x72, 0xAB, 0xD4, 0xAC, 0x0A, 0x47, 0xEA,
};

const vsc_data_t test_data_ecies_envelope_ED25519_AES256_CBC_IV = {
    ENVELOPE_ED25519_AES256_CBC_IV_BYTES, sizeof(ENVELOPE_ED25519_AES256_CBC_IV_BYTES)
};

static const byte ENVELOPE_ED25519_ENCRYPTED_CONTENT_BYTES[] = {
    0x37, 0xE4, 0xA8, 0xD6, 0xD6, 0x41, 0x5D, 0x6E,
    0x8A, 0x5E, 0xDD, 0xD2, 0x5C, 0xC1, 0x37, 0x92,
    0x86, 0x4E, 0xCD, 0x77, 0x11, 0xE5, 0x25, 0xB2,
    0x3E, 0xFC, 0xC9, 0x66, 0x73, 0x2F, 0x39, 0xA8,
    0x7B, 0x9F, 0x1A, 0x67, 0xEC, 0xEE, 0x7A, 0xB3,
    0x73, 0x41, 0xC9, 0x08, 0xAA, 0xCD, 0x71, 0x4B,
};

const vsc_data_t test_data_ecies_envelope_ED25519_ENCRYPTED_CONTENT = {
    ENVELOPE_ED25519_ENCRYPTED_CONTENT_BYTES, sizeof(ENVELOPE_ED25519_ENCRYPTED_CONTENT_BYTES)
};

static const byte ENVELOPE_ED25519_PACKED_V2_COMPAT_BYTES[] = {
    0x30, 0x81, 0xDF, 0x02, 0x01, 0x00, 0x30, 0x2A,
    0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70, 0x03,
    0x21, 0x00, 0xEB, 0xD4, 0x96, 0x10, 0xEA, 0xE7,
    0x29, 0x91, 0x00, 0x30, 0x3B, 0x9F, 0xEB, 0x24,
    0x13, 0x01, 0x50, 0xE5, 0xEC, 0xF5, 0xA3, 0xB9,
    0xED, 0x0C, 0xD0, 0x06, 0x2C, 0x87, 0xBF, 0xEE,
    0xC3, 0x19, 0x30, 0x18, 0x06, 0x07, 0x28, 0x81,
    0x8C, 0x71, 0x02, 0x05, 0x02, 0x30, 0x0D, 0x06,
    0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04,
    0x02, 0x02, 0x05, 0x00, 0x30, 0x41, 0x30, 0x0D,
    0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03,
    0x04, 0x02, 0x02, 0x05, 0x00, 0x04, 0x30, 0xD3,
    0x2F, 0xD5, 0xC5, 0x15, 0x63, 0xBF, 0xB5, 0x85,
    0xBC, 0xC4, 0x24, 0x22, 0x40, 0xA7, 0x70, 0x22,
    0x4E, 0xAF, 0xD3, 0xBF, 0xDF, 0xB7, 0x6C, 0x24,
    0xA6, 0x6E, 0x6A, 0x74, 0x23, 0x58, 0xE2, 0xE2,
    0x26, 0x8F, 0x2D, 0xD5, 0x16, 0xC5, 0x3F, 0xF3,
    0xCD, 0xA4, 0x3C, 0x1D, 0x2F, 0x63, 0x9D, 0x30,
    0x51, 0x30, 0x1D, 0x06, 0x09, 0x60, 0x86, 0x48,
    0x01, 0x65, 0x03, 0x04, 0x01, 0x2A, 0x04, 0x10,
    0xF2, 0x97, 0x47, 0xF4, 0x25, 0x18, 0x68, 0x55,
    0xBA, 0x72, 0xAB, 0xD4, 0xAC, 0x0A, 0x47, 0xEA,
    0x04, 0x30, 0x37, 0xE4, 0xA8, 0xD6, 0xD6, 0x41,
    0x5D, 0x6E, 0x8A, 0x5E, 0xDD, 0xD2, 0x5C, 0xC1,
    0x37, 0x92, 0x86, 0x4E, 0xCD, 0x77, 0x11, 0xE5,
    0x25, 0xB2, 0x3E, 0xFC, 0xC9, 0x66, 0x73, 0x2F,
    0x39, 0xA8, 0x7B, 0x9F, 0x1A, 0x67, 0xEC, 0xEE,
    0x7A, 0xB3, 0x73, 0x41, 0xC9, 0x08, 0xAA, 0xCD,
    0x71, 0x4B
};

const vsc_data_t test_data_ecies_envelope_ED25519_PACKED_V2_COMPAT = {
    ENVELOPE_ED25519_PACKED_V2_COMPAT_BYTES, sizeof(ENVELOPE_ED25519_PACKED_V2_COMPAT_BYTES)
};
