//  Copyright (C) 2015-2022 Virgil Security, Inc.
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


#include "test_data_aes256_cbc.h"


//
//  Common data.
//
static const byte test_aes256_cbc_KEY_BYTES[] = {
    0x60, 0x3d, 0xeb, 0x10, 0x15, 0xca, 0x71, 0xbe,
    0x2b, 0x73, 0xae, 0xf0, 0x85, 0x7d, 0x77, 0x81,
    0x1f, 0x35, 0x2c, 0x07, 0x3b, 0x61, 0x08, 0xd7,
    0x2d, 0x98, 0x10, 0xa3, 0x09, 0x14, 0xdf, 0xf4,
};

const vsc_data_t test_aes256_cbc_KEY = {
    test_aes256_cbc_KEY_BYTES, sizeof(test_aes256_cbc_KEY_BYTES)
};

static const byte test_aes256_cbc_IV_BYTES[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
};

const vsc_data_t test_aes256_cbc_IV = {
    test_aes256_cbc_IV_BYTES, sizeof(test_aes256_cbc_IV_BYTES)
};


//
//  Data 16 bytes (1 block) using AES-CBC with 256-bit key.
//
static const byte test_aes256_cbc_ONE_BLOCK_DATA_BYTES[] = {
    0x53, 0x69, 0x6E, 0x67, 0x6C, 0x65, 0x20, 0x62,
    0x6C, 0x6F, 0x63, 0x6B, 0x20, 0x6D, 0x73, 0x67,
};

const vsc_data_t test_aes256_cbc_ONE_BLOCK_DATA = {
    test_aes256_cbc_ONE_BLOCK_DATA_BYTES, sizeof(test_aes256_cbc_ONE_BLOCK_DATA_BYTES)
};

static const byte test_aes256_cbc_ONE_BLOCK_ENCRYPTED_DATA_BYTES[] = {
    0x8D, 0x50, 0xF5, 0xF6, 0x81, 0xCD, 0xB2, 0xA3,
    0x25, 0xFF, 0x57, 0x9B, 0xB5, 0x99, 0x49, 0x6D,
    0x44, 0x40, 0xD0, 0xB3, 0x0F, 0x15, 0x12, 0x82,
    0x0A, 0xEB, 0xDF, 0x74, 0x7A, 0xED, 0x2C, 0xD5,
};

const vsc_data_t test_aes256_cbc_ONE_BLOCK_ENCRYPTED_DATA = {
    test_aes256_cbc_ONE_BLOCK_ENCRYPTED_DATA_BYTES, sizeof(test_aes256_cbc_ONE_BLOCK_ENCRYPTED_DATA_BYTES)
};


//
//  Data 64 bytes (4 block) using AES-CBC with 256-bit key.
//
static const byte test_aes256_cbc_FOUR_BLOCK_DATA_BYTES[] = {
    0x6b, 0xc1, 0xbe, 0xe2, 0x2e, 0x40, 0x9f, 0x96,
    0xe9, 0x3d, 0x7e, 0x11, 0x73, 0x93, 0x17, 0x2a,
    0xae, 0x2d, 0x8a, 0x57, 0x1e, 0x03, 0xac, 0x9c,
    0x9e, 0xb7, 0x6f, 0xac, 0x45, 0xaf, 0x8e, 0x51,
    0x30, 0xc8, 0x1c, 0x46, 0xa3, 0x5c, 0xe4, 0x11,
    0xe5, 0xfb, 0xc1, 0x19, 0x1a, 0x0a, 0x52, 0xef,
    0xf6, 0x9f, 0x24, 0x45, 0xdf, 0x4f, 0x9b, 0x17,
    0xad, 0x2b, 0x41, 0x7b, 0xe6, 0x6c, 0x37, 0x10,
};

const vsc_data_t test_aes256_cbc_FOUR_BLOCK_DATA = {
    test_aes256_cbc_FOUR_BLOCK_DATA_BYTES, sizeof(test_aes256_cbc_FOUR_BLOCK_DATA_BYTES)
};

static const byte test_aes256_cbc_FOUR_BLOCK_ENCRYPTED_DATA_BYTES[] = {
    0xf5, 0x8c, 0x4c, 0x04, 0xd6, 0xe5, 0xf1, 0xba,
    0x77, 0x9e, 0xab, 0xfb, 0x5f, 0x7b, 0xfb, 0xd6,
    0x9c, 0xfc, 0x4e, 0x96, 0x7e, 0xdb, 0x80, 0x8d,
    0x67, 0x9f, 0x77, 0x7b, 0xc6, 0x70, 0x2c, 0x7d,
    0x39, 0xf2, 0x33, 0x69, 0xa9, 0xd9, 0xba, 0xcf,
    0xa5, 0x30, 0xe2, 0x63, 0x04, 0x23, 0x14, 0x61,
    0xb2, 0xeb, 0x05, 0xe2, 0xc3, 0x9b, 0xe9, 0xfc,
    0xda, 0x6c, 0x19, 0x07, 0x8c, 0x6a, 0x9d, 0x1b,
    0x3f, 0x46, 0x17, 0x96, 0xd6, 0xb0, 0xd6, 0xb2,
    0xe0, 0xc2, 0xa7, 0x2b, 0x4d, 0x80, 0xe6, 0x44,
};

const vsc_data_t test_aes256_cbc_FOUR_BLOCK_ENCRYPTED_DATA = {
    test_aes256_cbc_FOUR_BLOCK_ENCRYPTED_DATA_BYTES, sizeof(test_aes256_cbc_FOUR_BLOCK_ENCRYPTED_DATA_BYTES)
};


