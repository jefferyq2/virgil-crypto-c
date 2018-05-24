//  Copyright (C) 2015-2018 Virgil Security Inc.
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


#include "test_data_aes_256_gcm.h"

//
//  Test vector 1
//  AES-GCM NIST Validation (AES-256,128,0,0,128) #0
//
const byte test_aes_256_gcm_VECTOR_1_KEY[] = {
    0xfb, 0x80, 0x94, 0xdd, 0x2e, 0xdd, 0xb3, 0xd8,
    0x00, 0x4b, 0xb7, 0x91, 0x34, 0x02, 0x3c, 0xa2,
    0xbe, 0x4d, 0xe9, 0xb6, 0x68, 0xa9, 0xe4, 0x60,
    0x8a, 0xbd, 0xf2, 0x13, 0x0e, 0x8b, 0xec, 0xb8,
};

const byte test_aes_256_gcm_VECTOR_1_DATA[] = {};

const byte test_aes_256_gcm_VECTOR_1_NONCE[] = {
    0x49, 0x1a, 0x14, 0xe1, 0x3b, 0x59, 0x1c, 0xf2,
    0xf3, 0x9d, 0xa9, 0x6b, 0x68, 0x82, 0xb5, 0xe5,
};

const byte test_aes_256_gcm_VECTOR_1_ENC[] = {
    0x80, 0x88, 0x3f, 0x2c, 0x92, 0x54, 0x34, 0xa5,
    0xed, 0xfc, 0xef, 0xd5, 0xb1, 0x23, 0xd5, 0x20,
};

const size_t test_aes_256_gcm_VECTOR_1_KEY_LEN = sizeof (test_aes_256_gcm_VECTOR_1_KEY);
const size_t test_aes_256_gcm_VECTOR_1_DATA_LEN = sizeof (test_aes_256_gcm_VECTOR_1_DATA);
const size_t test_aes_256_gcm_VECTOR_1_NONCE_LEN = sizeof (test_aes_256_gcm_VECTOR_1_NONCE);
const size_t test_aes_256_gcm_VECTOR_1_ENC_LEN = sizeof (test_aes_256_gcm_VECTOR_1_ENC);


//
//  Test vector 2
//  AES-GCM NIST Validation (AES-256,128,0,1024,128) #0
//
const byte test_aes_256_gcm_VECTOR_2_KEY[] = {
    0x43, 0xc9, 0xe2, 0x09, 0xda, 0x3c, 0x19, 0x71,
    0xd9, 0x86, 0xa4, 0x5b, 0x92, 0xf2, 0xfa, 0x0d,
    0x2d, 0x15, 0x51, 0x83, 0x73, 0x0d, 0x21, 0xd7,
    0x1e, 0xd8, 0xe2, 0x28, 0x4e, 0xc3, 0x08, 0xe3,
};

const byte test_aes_256_gcm_VECTOR_2_DATA[] = {};

const byte test_aes_256_gcm_VECTOR_2_NONCE[] = {
    0x78, 0xbe, 0xf6, 0x55, 0xdf, 0xd8, 0x99, 0x0b,
    0x04, 0xd2, 0xa2, 0x56, 0x78, 0xd7, 0x08, 0x6d,
};

const byte test_aes_256_gcm_VECTOR_2_ADD[] = {
    0x9d, 0x8c, 0x67, 0x34, 0x54, 0x67, 0x97, 0xc5,
    0x81, 0xb9, 0xb1, 0xd0, 0xd4, 0xf0, 0x5b, 0x27,
    0xfe, 0x05, 0x39, 0xbd, 0x01, 0x65, 0x5d, 0x2d,
    0x1a, 0x8a, 0x14, 0x89, 0xcd, 0xf8, 0x04, 0x22,
    0x87, 0x53, 0xd7, 0x72, 0x72, 0xbf, 0x6d, 0xed,
    0x19, 0xd4, 0x7a, 0x6a, 0xbd, 0x62, 0x81, 0xea,
    0x95, 0x91, 0xd4, 0xbc, 0xc1, 0xbe, 0x22, 0x23,
    0x05, 0xfd, 0xf6, 0x89, 0xc5, 0xfa, 0xa4, 0xc1,
    0x13, 0x31, 0xcf, 0xfb, 0xf4, 0x22, 0x15, 0x46,
    0x9b, 0x81, 0xf6, 0x1b, 0x40, 0x41, 0x5d, 0x81,
    0xcc, 0x37, 0x16, 0x1e, 0x5c, 0x02, 0x58, 0xa6,
    0x76, 0x42, 0xb9, 0xb8, 0xac, 0x62, 0x7d, 0x6e,
    0x39, 0xf4, 0x3e, 0x48, 0x5e, 0x1f, 0xf5, 0x22,
    0xac, 0x74, 0x2a, 0x07, 0xde, 0xfa, 0x35, 0x69,
    0xae, 0xb5, 0x99, 0x90, 0xcb, 0x44, 0xc4, 0xf3,
    0xd9, 0x52, 0xf8, 0x11, 0x9f, 0xf1, 0x11, 0x1d,
};

const byte test_aes_256_gcm_VECTOR_2_ENC[] = {};

const byte test_aes_256_gcm_VECTOR_2_AUTH_TAG[] = {
    0xf1, 0x5d, 0xdf, 0x93, 0x8b, 0xbf, 0x52, 0xc2,
    0x97, 0x7a, 0xda, 0xba, 0xf4, 0x12, 0x0d, 0xe8,
};


const size_t test_aes_256_gcm_VECTOR_2_KEY_LEN = sizeof (test_aes_256_gcm_VECTOR_2_KEY);
const size_t test_aes_256_gcm_VECTOR_2_DATA_LEN = sizeof (test_aes_256_gcm_VECTOR_2_DATA);
const size_t test_aes_256_gcm_VECTOR_2_NONCE_LEN = sizeof (test_aes_256_gcm_VECTOR_2_NONCE);
const size_t test_aes_256_gcm_VECTOR_2_ADD_LEN = sizeof (test_aes_256_gcm_VECTOR_2_ADD);
const size_t test_aes_256_gcm_VECTOR_2_ENC_LEN = sizeof (test_aes_256_gcm_VECTOR_2_ENC);
const size_t test_aes_256_gcm_VECTOR_2_AUTH_TAG_LEN = sizeof (test_aes_256_gcm_VECTOR_2_AUTH_TAG);