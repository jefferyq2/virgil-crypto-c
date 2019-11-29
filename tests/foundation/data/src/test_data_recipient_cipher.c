//  Copyright (C) 2015-2019 Virgil Security, Inc.
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


#include "test_data_recipient_cipher.h"

static byte RECIPIENT_ID[] = {
    0x6A, 0x07, 0x82, 0x58, 0xDF, 0x74, 0x4E, 0x6A,
    0xC5, 0xED, 0x52, 0xEB, 0xB5, 0x20, 0xA3, 0xB4,
    0x4D, 0x33, 0x9F, 0xB1, 0xC0, 0x3D, 0x6C, 0x19,
    0x91, 0xEF, 0x00, 0x40, 0x57, 0xFA, 0xA4, 0xB2,
};

vsc_data_t test_data_recipient_cipher_RECIPIENT_ID = {
    RECIPIENT_ID, sizeof(RECIPIENT_ID)
};

//  "Virgil Security Library for C"
static const byte MESSAGE_BYTES[] = {
    0x56, 0x69, 0x72, 0x67, 0x69, 0x6c, 0x20, 0x53,
    0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x20,
    0x4c, 0x69, 0x62, 0x72, 0x61, 0x72, 0x79, 0x20,
    0x66, 0x6f, 0x72, 0x20, 0x43, 0x0a
};

vsc_data_t test_data_recipient_cipher_MESSAGE = {
    MESSAGE_BYTES, sizeof(MESSAGE_BYTES)
};

static const byte MESSAGE_2_BYTES[] = {
    0x56, 0x69, 0x72, 0x67, 0x69, 0x6C, 0x20, 0x53,
    0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x20,
    0x4C, 0x69, 0x62, 0x72, 0x61, 0x72, 0x79, 0x20,
    0x66, 0x6F, 0x72, 0x20, 0x43, 0x0A, 0x56, 0x69,
    0x72, 0x67, 0x69, 0x6C, 0x20, 0x53, 0x65, 0x63,
    0x75, 0x72, 0x69, 0x74, 0x79, 0x20, 0x4C, 0x69,
    0x62, 0x72, 0x61, 0x72, 0x79, 0x20, 0x66, 0x6F,
    0x72, 0x20, 0x43, 0x0A, 0x56, 0x69, 0x72, 0x67,
    0x69, 0x6C, 0x20, 0x53, 0x65, 0x63, 0x75, 0x72,
    0x69, 0x74
};

vsc_data_t test_data_recipient_cipher_MESSAGE_2 = {
    MESSAGE_2_BYTES, sizeof(MESSAGE_2_BYTES)
};

static byte ED25519_RECIPIENT_ID[] = {
    0x6A, 0x07, 0x82, 0x58, 0xDF, 0x74, 0x4E, 0x6A,
    0x91, 0xEF, 0x00, 0x40, 0x57, 0xFA, 0xA4, 0xB2,
    0x4D, 0x33, 0x9F, 0xB1, 0xC0, 0x3D, 0x6C, 0x19,
    0xC5, 0xED, 0x52, 0xEB, 0xB5, 0x20, 0xA3, 0xB4,
};

vsc_data_t test_data_recipient_cipher_ED25519_RECIPIENT_ID = {
    ED25519_RECIPIENT_ID, sizeof(ED25519_RECIPIENT_ID)
};

static byte ED25519_PUBLIC_KEY_BYTES[] = {
    0x30, 0x2a, 0x30, 0x05, 0x06, 0x03, 0x2b, 0x65,
    0x70, 0x03, 0x21, 0x00, 0x86, 0x61, 0x40, 0x74,
    0xb7, 0xa5, 0xd1, 0x13, 0x04, 0x48, 0xbe, 0x69,
    0xa4, 0xa2, 0x5c, 0xe5, 0x8d, 0xbf, 0x76, 0x0a,
    0x87, 0xbb, 0xf9, 0x2a, 0x03, 0xad, 0xd9, 0x73,
    0xf3, 0x8e, 0xce, 0x7c
};

vsc_data_t test_data_recipient_cipher_ED25519_PUBLIC_KEY = {
    ED25519_PUBLIC_KEY_BYTES, sizeof(ED25519_PUBLIC_KEY_BYTES)
};

static byte ED25519_PRIVATE_KEY_BYTES[] = {
    0x30, 0x2e, 0x02, 0x01, 0x00, 0x30, 0x05, 0x06,
    0x03, 0x2b, 0x65, 0x70, 0x04, 0x22, 0x04, 0x20,
    0x10, 0xda, 0x87, 0x56, 0x6b, 0x44, 0x6e, 0xdb,
    0x74, 0xaf, 0xa6, 0xeb, 0x67, 0x54, 0x77, 0x43,
    0x67, 0x08, 0x1e, 0xfa, 0x5f, 0xcd, 0x39, 0xc1,
    0x9e, 0x64, 0xa3, 0x68, 0x30, 0x44, 0x5b, 0x1b,
};

vsc_data_t test_data_recipient_cipher_ED25519_PRIVATE_KEY = {
    ED25519_PRIVATE_KEY_BYTES, sizeof(ED25519_PRIVATE_KEY_BYTES)
};

static const byte ENCRYPTED_MESSAGE_BYTES[] = {
    0x30, 0x82, 0x01, 0x60, 0x02, 0x01, 0x00, 0x30,
    0x82, 0x01, 0x59, 0x06, 0x09, 0x2A, 0x86, 0x48,
    0x86, 0xF7, 0x0D, 0x01, 0x07, 0x03, 0xA0, 0x82,
    0x01, 0x4A, 0x30, 0x82, 0x01, 0x46, 0x02, 0x01,
    0x02, 0x31, 0x82, 0x01, 0x17, 0x30, 0x82, 0x01,
    0x13, 0x02, 0x01, 0x02, 0xA0, 0x22, 0x04, 0x20,
    0x6A, 0x07, 0x82, 0x58, 0xDF, 0x74, 0x4E, 0x6A,
    0x91, 0xEF, 0x00, 0x40, 0x57, 0xFA, 0xA4, 0xB2,
    0x4D, 0x33, 0x9F, 0xB1, 0xC0, 0x3D, 0x6C, 0x19,
    0xC5, 0xED, 0x52, 0xEB, 0xB5, 0x20, 0xA3, 0xB4,
    0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70, 0x04,
    0x81, 0xE2, 0x30, 0x81, 0xDF, 0x02, 0x01, 0x00,
    0x30, 0x2A, 0x30, 0x05, 0x06, 0x03, 0x2B, 0x65,
    0x70, 0x03, 0x21, 0x00, 0xE2, 0xC5, 0xA1, 0x52,
    0x8C, 0x68, 0x01, 0xD4, 0x66, 0xB7, 0xF8, 0xC7,
    0x26, 0xBD, 0x40, 0xCB, 0xF6, 0x9E, 0xB3, 0x77,
    0x79, 0x82, 0xEA, 0xB6, 0x56, 0x61, 0xAE, 0xAD,
    0x55, 0xC8, 0x48, 0x94, 0x30, 0x18, 0x06, 0x07,
    0x28, 0x81, 0x8C, 0x71, 0x02, 0x05, 0x02, 0x30,
    0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65,
    0x03, 0x04, 0x02, 0x02, 0x05, 0x00, 0x30, 0x41,
    0x30, 0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01,
    0x65, 0x03, 0x04, 0x02, 0x02, 0x05, 0x00, 0x04,
    0x30, 0x31, 0x26, 0x4E, 0xE2, 0xB7, 0x9B, 0xCD,
    0x1D, 0x30, 0x18, 0xFD, 0x4C, 0xCB, 0x2A, 0x01,
    0xD9, 0xF7, 0xE3, 0xA2, 0x0C, 0x50, 0xDE, 0x44,
    0xC6, 0x91, 0x4E, 0xF7, 0x4B, 0x09, 0xB0, 0x03,
    0x27, 0x7B, 0xAE, 0xE7, 0x1F, 0x7F, 0x3D, 0x43,
    0xD3, 0xC6, 0x9B, 0x2A, 0xF5, 0x83, 0xD7, 0xB6,
    0x44, 0x30, 0x51, 0x30, 0x1D, 0x06, 0x09, 0x60,
    0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x01, 0x2A,
    0x04, 0x10, 0xBE, 0x9E, 0xCE, 0x2B, 0x4D, 0x38,
    0x7B, 0x2E, 0x48, 0x8B, 0x45, 0x2E, 0x10, 0x00,
    0x75, 0x82, 0x04, 0x30, 0x79, 0x62, 0x97, 0x4C,
    0x37, 0xC5, 0x56, 0x6F, 0xD6, 0x4E, 0xF5, 0x4A,
    0x04, 0xB9, 0xA6, 0x77, 0xC1, 0x36, 0x44, 0x58,
    0x94, 0x43, 0xE1, 0x24, 0xCA, 0x2A, 0xFE, 0xE9,
    0x8B, 0x2A, 0xE8, 0xD3, 0x63, 0x03, 0x38, 0xD0,
    0x8E, 0x62, 0xF9, 0x87, 0x10, 0x64, 0x1C, 0x93,
    0xD1, 0x76, 0xEB, 0xB1, 0x30, 0x26, 0x06, 0x09,
    0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x07,
    0x01, 0x30, 0x19, 0x06, 0x09, 0x60, 0x86, 0x48,
    0x01, 0x65, 0x03, 0x04, 0x01, 0x2E, 0x04, 0x0C,
    0x4B, 0xDE, 0xE5, 0xFB, 0xEC, 0xF4, 0x7A, 0x6F,
    0x8D, 0x8B, 0x3D, 0xD1, 0xA0, 0xB6, 0x11, 0xAD,
    0xD6, 0x4B, 0xF4, 0xA3, 0xF8, 0x8C, 0xB6, 0x02,
    0xFB, 0x4C, 0x97, 0x90, 0x87, 0xC7, 0xA1, 0x9A,
    0x65, 0x74, 0x3F, 0x57, 0x8F, 0x9B, 0x7D, 0xBD,
    0x55, 0x0C, 0xC3, 0xB3, 0x30, 0x7A, 0x7C, 0xBF,
    0x19, 0x38, 0xAA, 0x8B, 0x19, 0xB5, 0x36, 0x15,
    0xCB, 0xB8, 0x37, 0x04, 0x37, 0xA9, 0xC9, 0x48,
    0x8D, 0xCB, 0x63, 0xF3, 0x27, 0xA3, 0x60, 0x19,
    0x20, 0x33, 0x6A, 0x97, 0xA4, 0x76, 0x7C, 0x68,
    0xF9, 0x92, 0xFB, 0xED, 0x9C, 0x3B, 0xD8, 0x19,
    0xAD, 0x6F, 0x1F, 0x44, 0x5A, 0xEF, 0x9E, 0x30,
    0xDF, 0x79, 0x26, 0xEA, 0xA7, 0xB5
};

vsc_data_t test_data_recipient_cipher_ENCRYPTED_MESSAGE = {
    ENCRYPTED_MESSAGE_BYTES, sizeof(ENCRYPTED_MESSAGE_BYTES)
};

static const byte SIGNED_THEN_ENCRYPTED_MESSAGE_HEADER[] = {
    0x30, 0x82, 0x01, 0x93, 0x02, 0x01, 0x02, 0x30,
    0x82, 0x01, 0x59, 0x06, 0x09, 0x2A, 0x86, 0x48,
    0x86, 0xF7, 0x0D, 0x01, 0x07, 0x03, 0xA0, 0x82,
    0x01, 0x4A, 0x30, 0x82, 0x01, 0x46, 0x02, 0x01,
    0x02, 0x31, 0x82, 0x01, 0x17, 0x30, 0x82, 0x01,
    0x13, 0x02, 0x01, 0x02, 0xA0, 0x22, 0x04, 0x20,
    0x6A, 0x07, 0x82, 0x58, 0xDF, 0x74, 0x4E, 0x6A,
    0x91, 0xEF, 0x00, 0x40, 0x57, 0xFA, 0xA4, 0xB2,
    0x4D, 0x33, 0x9F, 0xB1, 0xC0, 0x3D, 0x6C, 0x19,
    0xC5, 0xED, 0x52, 0xEB, 0xB5, 0x20, 0xA3, 0xB4,
    0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70, 0x04,
    0x81, 0xE2, 0x30, 0x81, 0xDF, 0x02, 0x01, 0x00,
    0x30, 0x2A, 0x30, 0x05, 0x06, 0x03, 0x2B, 0x65,
    0x70, 0x03, 0x21, 0x00, 0x24, 0x8A, 0xCB, 0xDB,
    0xAF, 0x9E, 0x05, 0x01, 0x96, 0xDE, 0x70, 0x4B,
    0xEA, 0x2D, 0x68, 0x77, 0x0E, 0x51, 0x91, 0x50,
    0xD1, 0x03, 0xB5, 0x87, 0xDA, 0xE2, 0xD9, 0xCA,
    0xD5, 0x3D, 0xD9, 0x30, 0x30, 0x18, 0x06, 0x07,
    0x28, 0x81, 0x8C, 0x71, 0x02, 0x05, 0x02, 0x30,
    0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65,
    0x03, 0x04, 0x02, 0x02, 0x05, 0x00, 0x30, 0x41,
    0x30, 0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01,
    0x65, 0x03, 0x04, 0x02, 0x02, 0x05, 0x00, 0x04,
    0x30, 0x93, 0x54, 0x6E, 0xFC, 0x25, 0xE8, 0xBD,
    0xC2, 0x3B, 0x70, 0x43, 0xC1, 0xAC, 0xBD, 0xDE,
    0x21, 0x9B, 0x7D, 0x42, 0xD8, 0x5D, 0x63, 0x08,
    0x81, 0xA7, 0x6A, 0xE3, 0x69, 0xD7, 0xD3, 0xC8,
    0xC6, 0xDD, 0x89, 0x74, 0x84, 0x62, 0x2F, 0xB6,
    0xA5, 0x75, 0x29, 0x7A, 0xDB, 0xCE, 0x2F, 0xE3,
    0x1B, 0x30, 0x51, 0x30, 0x1D, 0x06, 0x09, 0x60,
    0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x01, 0x2A,
    0x04, 0x10, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB,
    0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB,
    0xAB, 0xAB, 0x04, 0x30, 0x0C, 0x4E, 0xE7, 0x2E,
    0x08, 0xB2, 0xF8, 0x2A, 0xD9, 0x79, 0xAD, 0x25,
    0x28, 0xD7, 0xBA, 0x65, 0xE6, 0x51, 0xDA, 0xB2,
    0x13, 0x14, 0xC1, 0x4E, 0xF5, 0xE0, 0x20, 0x3A,
    0x53, 0x8F, 0xE2, 0x11, 0x29, 0xDC, 0xCA, 0xA9,
    0xC1, 0x25, 0xF8, 0xE7, 0x26, 0xF5, 0x14, 0xA0,
    0xD9, 0xBB, 0x6B, 0x64, 0x30, 0x26, 0x06, 0x09,
    0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x07,
    0x01, 0x30, 0x19, 0x06, 0x09, 0x60, 0x86, 0x48,
    0x01, 0x65, 0x03, 0x04, 0x01, 0x2E, 0x04, 0x0C,
    0xA6, 0x7D, 0x34, 0x77, 0x3F, 0x5A, 0x71, 0x3F,
    0x4C, 0x2C, 0xF3, 0xD2, 0xA1, 0x11, 0x30, 0x0F,
    0x06, 0x0D, 0x06, 0x0B, 0x2A, 0x86, 0x48, 0x86,
    0xF7, 0x0D, 0x01, 0x09, 0x10, 0x03, 0x1E, 0xA2,
    0x1E, 0x30, 0x1C, 0x02, 0x01, 0x00, 0x02, 0x01,
    0x1E, 0xA0, 0x14, 0x30, 0x12, 0x02, 0x01, 0x00,
    0x30, 0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01,
    0x65, 0x03, 0x04, 0x02, 0x03, 0x05, 0x00
};

const vsc_data_t test_data_recipient_cipher_SIGNED_THEN_ENCRYPTED_MESSAGE_HEADER = {
    SIGNED_THEN_ENCRYPTED_MESSAGE_HEADER, sizeof(SIGNED_THEN_ENCRYPTED_MESSAGE_HEADER)
};

static const byte SIGNED_THEN_ENCRYPTED_MESSAGE_DATA[] = {
    0x14, 0xAA, 0xEE, 0x4D, 0x31, 0x5A, 0xEB, 0x98,
    0x3D, 0xAF, 0x20, 0x84, 0x4E, 0x83, 0x30, 0x56,
    0xF0, 0x03, 0x7D, 0x8A, 0xBA, 0xEB, 0x7A, 0x8B,
    0xC2, 0x7C, 0x8F, 0x93, 0x63, 0x15, 0x37, 0x81,
    0x16, 0x3C, 0x54, 0x7B, 0x30, 0x94, 0x94, 0x9E,
    0x44, 0xE9, 0xDA, 0x30, 0x23, 0x95
};

const vsc_data_t test_data_recipient_cipher_SIGNED_THEN_ENCRYPTED_MESSAGE_DATA = {
    SIGNED_THEN_ENCRYPTED_MESSAGE_DATA, sizeof(SIGNED_THEN_ENCRYPTED_MESSAGE_DATA)
};


static const byte SIGNED_THEN_ENCRYPTED_MESSAGE_FOOTER[] = {
    0x82, 0x81, 0xD5, 0xFC, 0x24, 0x15, 0xE2, 0x87,
    0xD5, 0xBD, 0xCB, 0x90, 0x77, 0xED, 0xB3, 0x93,
    0x15, 0xDA, 0xE4, 0x68, 0xCE, 0x5F, 0xDB, 0xAD,
    0xC9, 0x55, 0xBE, 0x9E, 0x28, 0xE3, 0x95, 0x14,
    0xE2, 0x56, 0x72, 0xAA, 0xF0, 0xAC, 0xBA, 0x0E,
    0x60, 0x7B, 0x93, 0x84, 0xA4, 0x27, 0x96, 0x3D,
    0x2F, 0x2E, 0xFB, 0xBB, 0x9E, 0x80, 0xD5, 0x45,
    0x45, 0xCC, 0x55, 0x42, 0xB2, 0x48, 0x27, 0xEB,
    0x1D, 0xF6, 0x9D, 0x38, 0xBD, 0xE0, 0xEA, 0x53,
    0x7A, 0x68, 0xDB, 0x4A, 0x53, 0xA1, 0x32, 0x41,
    0x22, 0x0A, 0x56, 0x77, 0x93, 0xB1, 0xCB, 0xEF,
    0xE1, 0x7C, 0x53, 0xC2, 0x61, 0xD7, 0xC1, 0x71,
    0x83, 0x99, 0xC7, 0x20, 0x73, 0x91, 0x8D, 0x06,
    0xA7, 0x80, 0xC6, 0xB8, 0x98, 0xB6, 0xA6, 0x8D,
    0xF2, 0x0A, 0x44, 0x67, 0xEB, 0x7F, 0x2C, 0x3A,
    0x0C, 0x86, 0x91, 0x40, 0xC7, 0x0D, 0x14, 0xCB,
    0x39, 0x4A, 0x6A, 0x1F, 0xFF, 0x3C, 0x48, 0xEC,
    0x62
};

const vsc_data_t test_data_recipient_cipher_SIGNED_THEN_ENCRYPTED_MESSAGE_FOOTER = {
    SIGNED_THEN_ENCRYPTED_MESSAGE_FOOTER, sizeof(SIGNED_THEN_ENCRYPTED_MESSAGE_FOOTER)
};


static const byte SIGNED_THEN_ENCRYPTED_MESSAGE[] = {
    0x30, 0x82, 0x01, 0x93, 0x02, 0x01, 0x02, 0x30,
    0x82, 0x01, 0x59, 0x06, 0x09, 0x2A, 0x86, 0x48,
    0x86, 0xF7, 0x0D, 0x01, 0x07, 0x03, 0xA0, 0x82,
    0x01, 0x4A, 0x30, 0x82, 0x01, 0x46, 0x02, 0x01,
    0x02, 0x31, 0x82, 0x01, 0x17, 0x30, 0x82, 0x01,
    0x13, 0x02, 0x01, 0x02, 0xA0, 0x22, 0x04, 0x20,
    0x6A, 0x07, 0x82, 0x58, 0xDF, 0x74, 0x4E, 0x6A,
    0x91, 0xEF, 0x00, 0x40, 0x57, 0xFA, 0xA4, 0xB2,
    0x4D, 0x33, 0x9F, 0xB1, 0xC0, 0x3D, 0x6C, 0x19,
    0xC5, 0xED, 0x52, 0xEB, 0xB5, 0x20, 0xA3, 0xB4,
    0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70, 0x04,
    0x81, 0xE2, 0x30, 0x81, 0xDF, 0x02, 0x01, 0x00,
    0x30, 0x2A, 0x30, 0x05, 0x06, 0x03, 0x2B, 0x65,
    0x70, 0x03, 0x21, 0x00, 0x24, 0x8A, 0xCB, 0xDB,
    0xAF, 0x9E, 0x05, 0x01, 0x96, 0xDE, 0x70, 0x4B,
    0xEA, 0x2D, 0x68, 0x77, 0x0E, 0x51, 0x91, 0x50,
    0xD1, 0x03, 0xB5, 0x87, 0xDA, 0xE2, 0xD9, 0xCA,
    0xD5, 0x3D, 0xD9, 0x30, 0x30, 0x18, 0x06, 0x07,
    0x28, 0x81, 0x8C, 0x71, 0x02, 0x05, 0x02, 0x30,
    0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65,
    0x03, 0x04, 0x02, 0x02, 0x05, 0x00, 0x30, 0x41,
    0x30, 0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01,
    0x65, 0x03, 0x04, 0x02, 0x02, 0x05, 0x00, 0x04,
    0x30, 0x93, 0x54, 0x6E, 0xFC, 0x25, 0xE8, 0xBD,
    0xC2, 0x3B, 0x70, 0x43, 0xC1, 0xAC, 0xBD, 0xDE,
    0x21, 0x9B, 0x7D, 0x42, 0xD8, 0x5D, 0x63, 0x08,
    0x81, 0xA7, 0x6A, 0xE3, 0x69, 0xD7, 0xD3, 0xC8,
    0xC6, 0xDD, 0x89, 0x74, 0x84, 0x62, 0x2F, 0xB6,
    0xA5, 0x75, 0x29, 0x7A, 0xDB, 0xCE, 0x2F, 0xE3,
    0x1B, 0x30, 0x51, 0x30, 0x1D, 0x06, 0x09, 0x60,
    0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x01, 0x2A,
    0x04, 0x10, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB,
    0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB,
    0xAB, 0xAB, 0x04, 0x30, 0x0C, 0x4E, 0xE7, 0x2E,
    0x08, 0xB2, 0xF8, 0x2A, 0xD9, 0x79, 0xAD, 0x25,
    0x28, 0xD7, 0xBA, 0x65, 0xE6, 0x51, 0xDA, 0xB2,
    0x13, 0x14, 0xC1, 0x4E, 0xF5, 0xE0, 0x20, 0x3A,
    0x53, 0x8F, 0xE2, 0x11, 0x29, 0xDC, 0xCA, 0xA9,
    0xC1, 0x25, 0xF8, 0xE7, 0x26, 0xF5, 0x14, 0xA0,
    0xD9, 0xBB, 0x6B, 0x64, 0x30, 0x26, 0x06, 0x09,
    0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x07,
    0x01, 0x30, 0x19, 0x06, 0x09, 0x60, 0x86, 0x48,
    0x01, 0x65, 0x03, 0x04, 0x01, 0x2E, 0x04, 0x0C,
    0xA6, 0x7D, 0x34, 0x77, 0x3F, 0x5A, 0x71, 0x3F,
    0x4C, 0x2C, 0xF3, 0xD2, 0xA1, 0x11, 0x30, 0x0F,
    0x06, 0x0D, 0x06, 0x0B, 0x2A, 0x86, 0x48, 0x86,
    0xF7, 0x0D, 0x01, 0x09, 0x10, 0x03, 0x1E, 0xA2,
    0x1E, 0x30, 0x1C, 0x02, 0x01, 0x00, 0x02, 0x01,
    0x1E, 0xA0, 0x14, 0x30, 0x12, 0x02, 0x01, 0x00,
    0x30, 0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01,
    0x65, 0x03, 0x04, 0x02, 0x03, 0x05, 0x00, 0x14,
    0xAA, 0xEE, 0x4D, 0x31, 0x5A, 0xEB, 0x98, 0x3D,
    0xAF, 0x20, 0x84, 0x4E, 0x83, 0x30, 0x56, 0xF0,
    0x03, 0x7D, 0x8A, 0xBA, 0xEB, 0x7A, 0x8B, 0xC2,
    0x7C, 0x8F, 0x93, 0x63, 0x15, 0x37, 0x81, 0x16,
    0x3C, 0x54, 0x7B, 0x30, 0x94, 0x94, 0x9E, 0x44,
    0xE9, 0xDA, 0x30, 0x23, 0x95, 0x82, 0x81, 0xD5,
    0xFC, 0x24, 0x15, 0xE2, 0x87, 0xD5, 0xBD, 0xCB,
    0x90, 0x77, 0xED, 0xB3, 0x93, 0x15, 0xDA, 0xE4,
    0x68, 0xCE, 0x5F, 0xDB, 0xAD, 0xC9, 0x55, 0xBE,
    0x9E, 0x28, 0xE3, 0x95, 0x14, 0xE2, 0x56, 0x72,
    0xAA, 0xF0, 0xAC, 0xBA, 0x0E, 0x60, 0x7B, 0x93,
    0x84, 0xA4, 0x27, 0x96, 0x3D, 0x2F, 0x2E, 0xFB,
    0xBB, 0x9E, 0x80, 0xD5, 0x45, 0x45, 0xCC, 0x55,
    0x42, 0xB2, 0x48, 0x27, 0xEB, 0x1D, 0xF6, 0x9D,
    0x38, 0xBD, 0xE0, 0xEA, 0x53, 0x7A, 0x68, 0xDB,
    0x4A, 0x53, 0xA1, 0x32, 0x41, 0x22, 0x0A, 0x56,
    0x77, 0x93, 0xB1, 0xCB, 0xEF, 0xE1, 0x7C, 0x53,
    0xC2, 0x61, 0xD7, 0xC1, 0x71, 0x83, 0x99, 0xC7,
    0x20, 0x73, 0x91, 0x8D, 0x06, 0xA7, 0x80, 0xC6,
    0xB8, 0x98, 0xB6, 0xA6, 0x8D, 0xF2, 0x0A, 0x44,
    0x67, 0xEB, 0x7F, 0x2C, 0x3A, 0x0C, 0x86, 0x91,
    0x40, 0xC7, 0x0D, 0x14, 0xCB, 0x39, 0x4A, 0x6A,
    0x1F, 0xFF, 0x3C, 0x48, 0xEC, 0x62
};

const vsc_data_t test_data_recipient_cipher_SIGNED_THEN_ENCRYPTED_MESSAGE = {
    SIGNED_THEN_ENCRYPTED_MESSAGE, sizeof(SIGNED_THEN_ENCRYPTED_MESSAGE)
};
