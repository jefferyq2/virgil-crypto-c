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
//  SERVICES_BYTES[] = { LOSS OF USE, DATA, OR PROFITS_BYTES[] = { OR BUSINESS INTERRUPTION)
//  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
//  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
//  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//
//  Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>

#include <test_data_ratchet_message.h>

const byte test_data_ratchet_message_id1_BYTES[] = {
    0XB3, 0X8E, 0X3E, 0XD3, 0XB1, 0XF5, 0X65, 0XFB,
};

const byte test_data_ratchet_message_id2_BYTES[] = {
    0XEF, 0X1B, 0XDA, 0XE8, 0XCB, 0XF1, 0X35, 0X9A,
};

const byte test_data_ratchet_message_id3_BYTES[] = {
    0XB0, 0X09, 0X69, 0X04, 0X02, 0XFF, 0X7C, 0X0B,
};

const byte test_data_ratchet_message_id4_BYTES[] = {
    0X4E, 0X4E, 0XE5, 0X01, 0XB8, 0X11, 0XC2, 0X08,
};

const byte test_data_ratchet_message_pub_key1_BYTES[] = {
    0XB0, 0XF2, 0XCF, 0XD9, 0XBE, 0X34, 0XD7, 0XC4, 0XDF, 0XEB, 0XB1, 0X55, 0X18, 0X9A, 0X49, 0X40,
    0X98, 0X6D, 0X07, 0XE4, 0X58, 0X12, 0X52, 0X00, 0XB4, 0X16, 0XCF, 0XDD, 0X66, 0XB9, 0XB7, 0XFD,
};

const byte test_data_ratchet_message_pub_key2_BYTES[] = {
    0XB0, 0XF2, 0XCF, 0XD9, 0XBE, 0X34, 0XD7, 0XC4, 0XDF, 0XEB, 0XB1, 0X55, 0X18, 0X9A, 0X49, 0X40,
    0X98, 0X6D, 0X07, 0XE4, 0X58, 0X12, 0X52, 0X00, 0XB4, 0X16, 0XCF, 0XDD, 0X66, 0XB9, 0XB7, 0XFD,
};

const byte test_data_ratchet_message_data_BYTES[] = {
    0xCC, 0x48, 0x49, 0x7E, 0x21, 0xF1, 0xB0, 0x2A, 0x03, 0x25, 0x56, 0x39, 0xA0, 0x6D, 0xF3, 0x27,
    0x23, 0xE0, 0x27, 0xF1, 0x1D, 0xAD, 0xC9, 0x13, 0xD7, 0x5B, 0x69, 0x2D, 0x80, 0xB3, 0xA4, 0xE8,
    0x2C, 0x3E, 0xE0, 0xE8, 0xAD, 0x8B, 0x77, 0x9C, 0x7F, 0xFA, 0x77, 0x1A, 0xAF, 0x9B, 0xCD, 0x90,
    0x53, 0xDD, 0xF9, 0xAD, 0xCE, 0x89, 0xE1, 0x53, 0xCA, 0x71, 0x40, 0x6D, 0x6A, 0x7B, 0xBA, 0x51,
    0x8F, 0x99, 0xBC, 0xC5, 0x85, 0x0B, 0x6A, 0x92, 0xB1, 0x04, 0xA6, 0x1B, 0x4F, 0x8A, 0x78, 0x80,
    0xB5, 0xA5, 0x45, 0xBC, 0xE0, 0x1F, 0xCE, 0xDA, 0x46, 0x78, 0xA8, 0x70, 0x81, 0xC2, 0x7E, 0xE5,
    0x63, 0x53, 0xB9, 0x62, 0x0F, 0x00, 0x5D, 0x4A, 0x03, 0x46, 0x17, 0xEB, 0xA6, 0x7E, 0x5E, 0xE2,
    0x4C, 0x80, 0x2A, 0x75, 0x09, 0x0B, 0xF1, 0x90, 0xCC, 0x12, 0x71, 0x95, 0xB7, 0xD5, 0x9C, 0xA9,
};

const byte test_data_ratchet_message_pub_key_pqc_BYTES[] = {
    0xDF, 0xCB, 0x9E, 0x98, 0x2C, 0x8C, 0xFE, 0x44, 0x64, 0xB5, 0x88, 0xB3, 0x9F, 0x1A, 0x3F, 0xAC,
    0x40, 0x05, 0x93, 0xE5, 0x37, 0xE6, 0x84, 0x6D, 0xF4, 0x5D, 0x3B, 0xC8, 0x97, 0x44, 0xB0, 0xA7,
    0x36, 0x00, 0x3C, 0x56, 0xE6, 0xC1, 0xFB, 0x57, 0x44, 0xD9, 0xF9, 0x04, 0x6C, 0xF0, 0x70, 0x9B,
    0x02, 0x89, 0x98, 0x4B, 0x26, 0x5E, 0x82, 0x64, 0xD2, 0xC9, 0xE8, 0x9C, 0xF4, 0x53, 0xFD, 0x7E,
    0x9F, 0x31, 0xCB, 0x9B, 0x6A, 0x39, 0xB5, 0xE5, 0x1A, 0xDA, 0x98, 0xE2, 0x80, 0x84, 0xE8, 0x2C,
    0x4C, 0xB4, 0x6C, 0x90, 0x68, 0xDF, 0xD7, 0xEE, 0x51, 0x5C, 0x06, 0xB8, 0x09, 0x68, 0xC1, 0x2A,
    0xE3, 0x30, 0x94, 0xF0, 0x94, 0x90, 0x92, 0x0E, 0x15, 0x79, 0xDD, 0x24, 0x66, 0xF5, 0x11, 0xE4,
    0x49, 0x16, 0x2B, 0x87, 0x41, 0xFD, 0x9D, 0x3F, 0x41, 0x23, 0xB8, 0x32, 0xAC, 0xD7, 0x18, 0xCD,
    0x1F, 0xDB, 0xC1, 0x2A, 0xC2, 0x17, 0x38, 0xDA, 0xE3, 0xDF, 0x60, 0x46, 0xFB, 0xF1, 0x0D, 0x55,
    0x10, 0xB6, 0x34, 0x60, 0xC8, 0x54, 0xD1, 0xC3, 0x7B, 0x82, 0xB3, 0x88, 0x06, 0x73, 0xE9, 0x44,
    0x50, 0x10, 0x94, 0xC8, 0x11, 0x92, 0x93, 0xFB, 0x3C, 0xBE, 0xB3, 0xB5, 0x56, 0x1A, 0xA4, 0x8B,
    0x40, 0xA4, 0x17, 0xB9, 0x0E, 0xCA, 0x58, 0x58, 0xAA, 0xF2, 0xD6, 0xF0, 0xBE, 0x9C, 0x93, 0x73,
    0xAD, 0x21, 0x6D, 0x64, 0x0F, 0xF5, 0xEE, 0xD5, 0xDB, 0x75, 0x98, 0xD1, 0xF5, 0x5B, 0x1D, 0xBF,
    0x49, 0x58, 0x81, 0x5D, 0x5D, 0xD0, 0xE7, 0x44, 0xD1, 0x70, 0x51, 0x91, 0x09, 0x6B, 0x02, 0x32,
    0x45, 0xF8, 0xEE, 0xF0, 0x81, 0xD8, 0x29, 0xAC, 0x90, 0xC4, 0x0A, 0xC9, 0xB9, 0xFA, 0x79, 0xB8,
    0x59, 0x8E, 0x02, 0xE3, 0x2D, 0xC5, 0xCB, 0x03, 0xC6, 0x50, 0x27, 0x2C, 0xD3, 0x4F, 0x30, 0xAB,
    0x33, 0x1F, 0xD3, 0xEB, 0x0F, 0xF5, 0x1A, 0x27, 0x00, 0xC9, 0x53, 0x12, 0x0D, 0xD8, 0x35, 0x36,
    0xE8, 0xFA, 0x24, 0xCC, 0x5B, 0xD1, 0x03, 0x07, 0x4D, 0xD3, 0x21, 0x89, 0x17, 0x70, 0x5A, 0x68,
    0xE9, 0x98, 0x09, 0x8D, 0xDE, 0x62, 0x67, 0x53, 0x33, 0x06, 0x5F, 0xDB, 0x4C, 0xD6, 0x70, 0x0F,
    0x7B, 0x0B, 0xFD, 0x6E, 0x33, 0x88, 0xD0, 0x01, 0xCB, 0x35, 0xC3, 0x41, 0x1E, 0xBB, 0xA9, 0x3E,
    0x41, 0xC5, 0x1B, 0xE3, 0xD5, 0x21, 0xDF, 0xD3, 0xA7, 0xA0, 0xD4, 0xB4, 0xC7, 0x32, 0x51, 0xC7,
    0xD7, 0xFF, 0x5B, 0x80, 0x24, 0xB7, 0xE6, 0x85, 0x70, 0x96, 0x6B, 0x35, 0x0D, 0xAE, 0xE6, 0x0F,
    0xEC, 0x5D, 0xAA, 0xD7, 0x38, 0x7F, 0xFB, 0x7D, 0x6C, 0x15, 0x35, 0x12, 0xDE, 0x1C, 0x10, 0x01,
    0xF4, 0xB7, 0x96, 0xE3, 0xF2, 0x36, 0xBF, 0x20, 0x57, 0x3C, 0x5F, 0xD3, 0x03, 0x26, 0x34, 0xB8,
    0xAC, 0x8D, 0x2C, 0xBC, 0x7B, 0x1E, 0x59, 0xC8, 0x1A, 0x48, 0xA1, 0x10, 0xAE, 0x7C, 0x08, 0x81,
    0x9E, 0xA0, 0x33, 0x32, 0xE5, 0x90, 0x58, 0x7B, 0x42, 0x02, 0xEC, 0xF9, 0xD4, 0xE3, 0xB1, 0x79,
    0xA4, 0x08, 0x20, 0x2B, 0x07, 0x18, 0xFA, 0x09, 0xAD, 0xE8, 0x73, 0x90, 0xF9, 0x42, 0xE8, 0x71,
    0xFF, 0xB5, 0xFC, 0xB6, 0xE4, 0x8A, 0x58, 0x9A, 0x7E, 0x5B, 0xA5, 0xB1, 0x6A, 0x37, 0x28, 0xC9,
    0xA6, 0x8B, 0x05, 0xE7, 0x31, 0xB8, 0xC1, 0xA1, 0x73, 0x77, 0xFA, 0x19, 0x0C
};

const byte test_data_ratchet_message_encapsulated_key1_pqc_BYTES[] = {
    0x9B, 0x21, 0x96, 0x95, 0xF4, 0xE1, 0x03, 0x73, 0x89, 0x04, 0x60, 0xEA, 0x51, 0x80, 0x83, 0x5B,
    0xE7, 0x93, 0x22, 0x95, 0xAD, 0x79, 0xE8, 0x5B, 0xE1, 0xCC, 0xFA, 0xCD, 0xC0, 0x85, 0xE1, 0x73,
    0x44, 0x57, 0xA6, 0x71, 0x88, 0xA6, 0xBC, 0x96, 0x0B, 0xE4, 0xE3, 0xA2, 0x93, 0x80, 0xBE, 0x6B,
    0xD4, 0x4D, 0x1E, 0x34, 0x38, 0x5C, 0xA5, 0x63, 0x11, 0x0F, 0x1C, 0xCB, 0x50, 0xCE, 0x91, 0x31,
    0x77, 0x22, 0xAE, 0x58, 0x7F, 0x63, 0x5F, 0x9B, 0x3F, 0x02, 0x75, 0xEE, 0x07, 0x6D, 0x75, 0xAA,
    0xBE, 0xFE, 0xBF, 0x75, 0x90, 0xE5, 0x0D, 0xEA, 0x59, 0x6E, 0xE9, 0x78, 0x75, 0x74, 0xE6, 0xB6,
    0x5F, 0xA8, 0x6F, 0x03, 0xC1, 0x89, 0x40, 0x33, 0xC2, 0x0A, 0x56, 0xC7, 0x32, 0x70, 0x79, 0x95,
    0xDC, 0xD0, 0xB9, 0x12, 0x41, 0x05, 0x39, 0x8D, 0xF3, 0x11, 0xAC, 0xB2, 0xD2, 0xF7, 0xAD, 0x15,
    0x36, 0x10, 0x1A, 0xD0, 0x46, 0xE5, 0xF2, 0x94, 0x69, 0xAF, 0x7B, 0x08, 0xAE, 0x4E, 0x58, 0x73,
    0x66, 0x3C, 0xFF, 0xB4, 0x73, 0xE1, 0x21, 0x23, 0x46, 0x22, 0x36, 0x13, 0x7A, 0xFA, 0xAE, 0x88,
    0x23, 0x5A, 0xA5, 0x03, 0xB1, 0x92, 0xDA, 0x20, 0x1F, 0x3C, 0x39, 0xF8, 0xCD, 0xF8, 0x87, 0xB5,
    0x14, 0x16, 0x8A, 0xFD, 0x9D, 0x05, 0xD2, 0xED, 0x41, 0x59, 0xE2, 0x77, 0xB3, 0x80, 0x5F, 0x79,
    0x06, 0x82, 0xA0, 0xB4, 0x13, 0xC6, 0x5B, 0x18, 0x93, 0xB1, 0x36, 0x0C, 0xEC, 0x23, 0x52, 0x6D,
    0x14, 0x0C, 0x16, 0x2E, 0x1B, 0x6F, 0xC2, 0x1D, 0x15, 0x5F, 0xFF, 0x5C, 0x80, 0x77, 0xB9, 0xE0,
    0xB9, 0xA8, 0xD4, 0x4B, 0x86, 0x41, 0x8E, 0xF0, 0xD2, 0x52, 0xEF, 0xF8, 0x7C, 0x29, 0xC1, 0xCA,
    0xA4, 0xF8, 0x2A, 0x3A, 0x8C, 0x6D, 0x65, 0x6F, 0x6C, 0xE6, 0x57, 0xB5, 0x58, 0x9B, 0x8C, 0xAB,
    0x72, 0xFA, 0xBB, 0x78, 0x71, 0x56, 0x14, 0x46, 0x13, 0x55, 0xE3, 0xA0, 0x62, 0x6D, 0xDE, 0xF7,
    0x2B, 0xFE, 0xBA, 0x6C, 0x71, 0xFF, 0x48, 0xA8, 0x91, 0xD2, 0x53, 0xAE, 0x1F, 0x0E, 0x7B, 0x26,
    0xD4, 0x4C, 0x33, 0x42, 0x5C, 0x20, 0xA2, 0xF0, 0xB3, 0x83, 0xB8, 0xA9, 0x43, 0xBA, 0x5D, 0x3F,
    0x02, 0x3D, 0x81, 0x31, 0x0A, 0xAB, 0xDC, 0x44, 0x19, 0x8F, 0x2E, 0xE9, 0xE6, 0xC4, 0x7B, 0xBC,
    0x91, 0x2E, 0xD6, 0x71, 0xA8, 0x9E, 0x45, 0x4A, 0x2E, 0xF5, 0x88, 0xA0, 0x53, 0x20, 0x4D, 0xDD,
    0x0C, 0xBC, 0x6E, 0x3B, 0x54, 0x4F, 0x21, 0x67, 0xC6, 0x9B, 0xE5, 0x46, 0xBA, 0xCC, 0xF6, 0x6B,
    0x38, 0xB7, 0xA9, 0x4D, 0x6A, 0xC5, 0xC2, 0x2A, 0x9A, 0x10, 0x7B, 0x67, 0x47, 0x5B, 0x2C, 0x55,
    0x3B, 0xB5, 0xFD, 0x19, 0x31, 0x4A, 0x4A, 0x41, 0xC1, 0xA2, 0xF7, 0x8F, 0xC4, 0x26, 0x51, 0x32,
    0x0C, 0x62, 0xD5, 0xF2, 0xAA, 0x88, 0x98, 0x45, 0xF1, 0xFB, 0x04, 0x40, 0x50, 0xE5, 0x91, 0xE4,
    0x9C, 0x75, 0x07, 0x8F, 0x97, 0x05, 0x92, 0xB5, 0x50, 0x7A, 0xEF, 0x2D, 0x77, 0xB2, 0x8E, 0x37,
    0x97, 0x9B, 0xD0, 0x58, 0x5D, 0x96, 0xB0, 0xE1, 0x79, 0xA6, 0xC4, 0x95, 0x1F, 0x65, 0xFD, 0xA2,
    0x08, 0x96, 0xA2, 0xD4, 0xE4, 0x11, 0xC5, 0x91, 0xF9, 0x3A, 0xC2, 0xAD, 0x06, 0xCB, 0xE4, 0xCE,
    0x23, 0x50, 0xBB, 0xCD, 0xF8, 0xFB, 0xD4, 0xF6, 0x7C, 0x58, 0xEC, 0xF6, 0x6C, 0x86, 0xEA, 0x22,
    0xD0, 0xDE, 0x6D, 0xC9, 0xAC, 0xA7, 0x7E, 0xAE, 0xC2, 0xEE, 0x36, 0xE9, 0x43, 0x0C, 0xC4, 0x3E,
    0x0E, 0x4F, 0xD1, 0x7D, 0xA0, 0x64, 0x50, 0x75, 0x80, 0x01, 0xD8, 0x4C, 0x47, 0xE7, 0xCD, 0x87,
    0xD8, 0x84, 0x3B, 0x3E, 0xEF, 0x3F, 0x22, 0xE3, 0x41, 0xBB, 0x22, 0x7A, 0xC6, 0x70, 0x38, 0xC9,
    0xC6, 0x1D, 0xAA, 0xBB, 0x3E, 0x55, 0xA6, 0x10, 0x00, 0xD4, 0xF0, 0x28, 0x4C, 0xCF, 0x78, 0x59,
    0xFB, 0x0C, 0xB5, 0xF2, 0x6D, 0xBF, 0x8F, 0x69, 0xB4, 0xEA, 0x09, 0x8F, 0x7E, 0xCF, 0x14, 0xC1,
    0xF6, 0x17, 0xE1, 0x97, 0x0E, 0x96, 0x68, 0x98, 0x9C, 0xBF, 0x92, 0x5D, 0xB0, 0x0D, 0xCE, 0x6F,
    0xDB, 0x6A, 0x2E, 0x7A, 0x44, 0x3E, 0x03, 0x85, 0x3C, 0x1C, 0x91, 0x1E, 0xF7, 0x83, 0x6D, 0xD2,
    0xFE, 0x04, 0xDE, 0xCF, 0xDB, 0xB4, 0x04, 0x54, 0xFE, 0x23, 0xA6, 0x92, 0xC9, 0xAA, 0x98, 0x72,
    0xDF, 0x7B, 0xAE, 0xA0, 0x85, 0x5D, 0x0E, 0x5A, 0xA3, 0x13, 0xD1, 0xE3, 0xD4, 0x4E, 0xD3, 0xC9,
    0x55, 0x3D, 0x25, 0xC5, 0x03, 0x90, 0x54, 0x3B, 0x80, 0xAE, 0xE5, 0xE3
};

const byte test_data_ratchet_message_encapsulated_key2_pqc_BYTES[] = {
    0xD4, 0x1C, 0xDE, 0x77, 0x37, 0xBC, 0x6E, 0x38, 0xF5, 0xF8, 0x7E, 0xED, 0x99, 0xA8, 0x6B, 0x7B,
    0xD0, 0x85, 0x63, 0x05, 0xE9, 0x37, 0xA0, 0x77, 0x26, 0x25, 0x05, 0xDA, 0xDA, 0x11, 0x3A, 0xCF,
    0x7E, 0xB4, 0xE2, 0xEF, 0xBA, 0x70, 0x80, 0xEE, 0x91, 0x63, 0x40, 0x97, 0xFD, 0x58, 0xEB, 0x46,
    0xAB, 0x8E, 0x40, 0xAB, 0x0F, 0xAA, 0x7F, 0xAC, 0x7A, 0x5B, 0x1E, 0xE2, 0xAB, 0x92, 0x81, 0x74,
    0xEC, 0xC4, 0xAD, 0x1C, 0x3C, 0x1B, 0x6E, 0x1B, 0xC0, 0x0C, 0x7F, 0xAE, 0x40, 0x88, 0x25, 0xAD,
    0xFC, 0xF9, 0x9C, 0xEA, 0x48, 0xE1, 0x53, 0xB6, 0xE9, 0xFB, 0x12, 0x22, 0x1D, 0xBC, 0x9A, 0x96,
    0xF1, 0xA4, 0xB0, 0xDC, 0x73, 0x00, 0xD7, 0xC4, 0x2C, 0xD4, 0x9D, 0xDD, 0xE7, 0x33, 0xDE, 0x47,
    0xE8, 0xF1, 0x29, 0x05, 0x40, 0x33, 0xA4, 0x8A, 0xBA, 0x62, 0x9F, 0xFE, 0xBE, 0xEE, 0x10, 0x7B,
    0xF0, 0x73, 0x8C, 0x5B, 0xD2, 0x09, 0x94, 0x25, 0xFF, 0xCF, 0x81, 0x4D, 0xD5, 0x2C, 0x61, 0xBE,
    0xC7, 0x94, 0x48, 0x67, 0x33, 0xCB, 0x81, 0xF0, 0x54, 0x91, 0xAE, 0xBA, 0xE2, 0xC8, 0x97, 0xC8,
    0x31, 0x8D, 0xC5, 0x2B, 0x4D, 0xDB, 0x4B, 0x35, 0x6B, 0xF8, 0x0B, 0xA8, 0xCC, 0x24, 0x8B, 0x16,
    0x32, 0x7A, 0x8F, 0x8D, 0xA6, 0xD2, 0x59, 0x61, 0xC1, 0x30, 0xC5, 0x81, 0xD8, 0xB3, 0x71, 0x17,
    0xEC, 0x87, 0x5C, 0x61, 0x0F, 0x75, 0xA4, 0xBA, 0xB3, 0x63, 0xB0, 0x5D, 0x58, 0x6F, 0xED, 0x38,
    0x51, 0xC1, 0x9D, 0xE5, 0x95, 0x75, 0x6E, 0x3F, 0xB5, 0x11, 0x89, 0xB8, 0x76, 0x63, 0x8C, 0x79,
    0xEE, 0xC5, 0x16, 0x84, 0x49, 0xB4, 0x7C, 0xF5, 0x82, 0xAA, 0xAD, 0x63, 0x3F, 0x24, 0x9E, 0xB7,
    0x0F, 0x28, 0xEE, 0x04, 0xC2, 0x08, 0x08, 0x25, 0x88, 0x9E, 0x85, 0x6A, 0x2D, 0xFD, 0xA3, 0x24,
    0x73, 0xC7, 0x14, 0x04, 0x16, 0x39, 0x9E, 0x7F, 0xC9, 0xD1, 0x12, 0x4B, 0x0F, 0x36, 0x10, 0x12,
    0x7B, 0x28, 0x99, 0x12, 0xA1, 0xD3, 0xD1, 0x7C, 0x89, 0x0D, 0xDC, 0x22, 0x05, 0xD3, 0xB1, 0x1C,
    0xC5, 0x01, 0x6B, 0x77, 0x3C, 0x9E, 0x2C, 0xF8, 0x89, 0x24, 0xE8, 0xB0, 0x93, 0x00, 0xED, 0x06,
    0xB1, 0x39, 0xAB, 0x6C, 0x3C, 0x04, 0x9F, 0x49, 0x79, 0x65, 0x9C, 0x9C, 0x79, 0x8A, 0x28, 0x15,
    0x1D, 0xC1, 0xAD, 0xB6, 0x94, 0x09, 0x39, 0xF8, 0x35, 0x1C, 0x87, 0x35, 0x9B, 0xA7, 0x8B, 0xF0,
    0xBB, 0x2E, 0x62, 0xFE, 0x7D, 0xDA, 0x55, 0x0C, 0x3F, 0x76, 0x5A, 0x44, 0x72, 0x30, 0x4D, 0xF7,
    0xF3, 0x41, 0x32, 0x24, 0x5A, 0xC3, 0xA3, 0x37, 0xE5, 0x48, 0x33, 0xF6, 0x78, 0x7E, 0x8A, 0x5F,
    0x6E, 0x24, 0x0F, 0x33, 0xBA, 0xE7, 0x86, 0xE1, 0x10, 0x67, 0x05, 0x55, 0x12, 0x81, 0xAC, 0x55,
    0xA2, 0xD5, 0x2C, 0x16, 0xE0, 0x19, 0xC7, 0xE1, 0x0B, 0x34, 0x94, 0xB2, 0x5E, 0xD5, 0xC2, 0x7D,
    0x9E, 0x9A, 0x1D, 0xB4, 0x34, 0x01, 0x5F, 0x23, 0xCA, 0x5E, 0x26, 0x4E, 0x8C, 0x5A, 0x87, 0x67,
    0x91, 0xB8, 0x9C, 0x3E, 0x33, 0x66, 0x39, 0xB0, 0xC3, 0xE3, 0xD7, 0x8B, 0x9F, 0xA4, 0x44, 0x17,
    0xDF, 0x5F, 0xAE, 0xF1, 0x4C, 0xAF, 0xAA, 0xA3, 0xFF, 0xF7, 0x15, 0x29, 0x0B, 0x46, 0xE8, 0x4F,
    0xDC, 0x26, 0xC2, 0x55, 0x54, 0x21, 0x87, 0x09, 0x05, 0x2B, 0x21, 0x4A, 0x28, 0xDF, 0x6E, 0x38,
    0xAF, 0xA9, 0xF6, 0x04, 0xBF, 0x84, 0xD2, 0xF6, 0x8F, 0xAC, 0xE9, 0x08, 0x0C, 0x59, 0x9B, 0x79,
    0x8B, 0x45, 0x65, 0xD6, 0x4C, 0x26, 0x1E, 0x3F, 0x97, 0xD5, 0xAB, 0x69, 0x43, 0xB0, 0x94, 0x33,
    0x3B, 0xA2, 0x16, 0xF0, 0x92, 0x51, 0x56, 0x6C, 0xB2, 0xE2, 0x04, 0xDA, 0x3A, 0x90, 0xCC, 0xEE,
    0x29, 0x55, 0x26, 0x28, 0xB9, 0x51, 0x5A, 0xFD, 0x3B, 0x69, 0x75, 0x77, 0x6F, 0x02, 0x01, 0xCC,
    0xE8, 0xA1, 0x04, 0xCF, 0x24, 0x0F, 0x08, 0x9D, 0x68, 0xBD, 0x72, 0xFC, 0x17, 0xFE, 0x11, 0xEC,
    0xE4, 0x6D, 0x32, 0x56, 0x49, 0x37, 0xDA, 0xB3, 0xC2, 0xAB, 0xD3, 0x2B, 0xE3, 0x6F, 0xE5, 0x29,
    0x84, 0x37, 0x9C, 0x1B, 0xFE, 0xD6, 0x10, 0x06, 0x7C, 0x50, 0xDD, 0x63, 0x65, 0x01, 0x41, 0x9F,
    0xD4, 0x59, 0xA2, 0x72, 0x17, 0x43, 0x85, 0x9A, 0xB4, 0xB7, 0x13, 0x8D, 0xA5, 0x5B, 0x51, 0x8C,
    0x8E, 0xBA, 0x84, 0xE3, 0x31, 0xC8, 0x52, 0x83, 0xE1, 0x4F, 0x3C, 0xD8, 0x92, 0xAE, 0x72, 0xC6,
    0x19, 0xA5, 0x57, 0xDA, 0x41, 0xCD, 0x14, 0x5E, 0xAB, 0x3A, 0x0C, 0xAD
};

const byte test_data_ratchet_message_encapsulated_key3_pqc_BYTES[] = {
    0xF0, 0x4B, 0x0B, 0x8A, 0xE4, 0x12, 0xCE, 0x34, 0xE3, 0x87, 0x21, 0x37, 0xAC, 0x77, 0x51, 0x14,
    0xCB, 0x42, 0x98, 0xE7, 0xD4, 0xB6, 0x6E, 0xF0, 0x11, 0xDC, 0x1E, 0x35, 0xC6, 0xE5, 0x53, 0xCE,
    0x81, 0xCE, 0x6B, 0x57, 0x3D, 0x26, 0xF5, 0xD3, 0xD5, 0x5B, 0x68, 0xE5, 0x12, 0x19, 0x17, 0x70,
    0xE1, 0xFD, 0x33, 0xE5, 0xD3, 0x8F, 0x3C, 0x1F, 0x83, 0x49, 0x36, 0xC2, 0x8A, 0x18, 0x11, 0xED,
    0x4B, 0x7F, 0x8D, 0xD8, 0xAC, 0x59, 0xBD, 0x04, 0x3F, 0x34, 0x45, 0xF3, 0xB1, 0x21, 0x99, 0xFC,
    0xC1, 0xFC, 0xCD, 0x71, 0xBD, 0x7C, 0x73, 0xC5, 0xAC, 0xB3, 0x53, 0x13, 0xB1, 0x9E, 0xC4, 0x12,
    0x88, 0xF7, 0xF0, 0xBA, 0xD9, 0xA3, 0x97, 0xD8, 0xCA, 0x69, 0xBA, 0x2C, 0x61, 0x31, 0x5B, 0xF4,
    0xFD, 0x1A, 0x4E, 0x2A, 0x54, 0xBA, 0x11, 0xB9, 0x85, 0x96, 0x8B, 0x54, 0x91, 0xB8, 0xD9, 0xDF,
    0x91, 0xEF, 0x69, 0xCF, 0xA1, 0x13, 0xA6, 0xA0, 0xE8, 0xA2, 0x3F, 0x46, 0x90, 0x4F, 0xD4, 0xF4,
    0xCB, 0x6F, 0xF8, 0xFD, 0xE7, 0xC0, 0x15, 0xEC, 0x36, 0x4E, 0x63, 0xFE, 0x08, 0x14, 0x90, 0xD9,
    0xD4, 0xE6, 0x29, 0xAB, 0x1F, 0x0F, 0x11, 0xC0, 0x26, 0x6C, 0xB9, 0xFA, 0x46, 0x73, 0xCF, 0x93,
    0x5B, 0x84, 0x18, 0xD8, 0x31, 0x84, 0xA3, 0x5F, 0x97, 0x33, 0xFD, 0x2B, 0x56, 0xFD, 0xB3, 0xDC,
    0x22, 0x39, 0xE9, 0xB8, 0x4E, 0x56, 0xBE, 0x13, 0xBC, 0x26, 0x7E, 0xE3, 0xBC, 0x76, 0xC0, 0x7F,
    0xE3, 0x36, 0xB2, 0xBB, 0x76, 0xCE, 0xC5, 0x4B, 0x28, 0x47, 0x39, 0x9E, 0x5F, 0x79, 0x8B, 0x94,
    0xE4, 0x4A, 0xF2, 0xD8, 0xD5, 0xA6, 0xEF, 0x47, 0xF6, 0x55, 0x50, 0x8E, 0xE0, 0x4A, 0xAE, 0x8D,
    0x32, 0x6E, 0xB6, 0xF9, 0x04, 0x59, 0x44, 0x3F, 0xE6, 0x1E, 0xEB, 0x99, 0x0D, 0xE0, 0x0C, 0x96,
    0x01, 0x90, 0xBB, 0xA8, 0x56, 0xD6, 0xDD, 0x3E, 0x0C, 0x72, 0xD4, 0xB1, 0xCA, 0x64, 0xA6, 0x77,
    0x2F, 0x06, 0xE7, 0x1A, 0x1D, 0x7D, 0x05, 0xCE, 0xCA, 0x53, 0x57, 0xBE, 0x5A, 0xFB, 0x50, 0xDD,
    0xE0, 0x53, 0x7D, 0x43, 0xCC, 0xCA, 0x44, 0x11, 0x58, 0x82, 0xCD, 0x5E, 0x2C, 0x1E, 0x3A, 0xE4,
    0xF2, 0xDA, 0xBA, 0xEA, 0x5A, 0x59, 0x54, 0x71, 0x57, 0x15, 0xA6, 0x3B, 0xC4, 0x9D, 0x31, 0x2D,
    0xD7, 0xEE, 0x31, 0xC8, 0xC2, 0xB7, 0x00, 0x8D, 0xF8, 0x93, 0xDD, 0x7A, 0x1D, 0x59, 0xD4, 0xE5,
    0x28, 0x97, 0x61, 0xF7, 0xFF, 0xE0, 0xB8, 0xE3, 0x0C, 0x1E, 0x2B, 0x8E, 0x45, 0x2D, 0x7C, 0xD3,
    0x21, 0xC9, 0x61, 0xD8, 0x2C, 0x60, 0xB4, 0xF0, 0xCB, 0x59, 0x19, 0x67, 0x95, 0xF6, 0x19, 0x6D,
    0xB5, 0x1E, 0x7E, 0x77, 0xA9, 0x1B, 0xDF, 0xA5, 0x05, 0x95, 0xF8, 0x6A, 0xAA, 0x11, 0x20, 0xDE,
    0x43, 0x63, 0x9B, 0x82, 0xA1, 0x1F, 0x30, 0xFA, 0x1B, 0xC2, 0x3A, 0x5D, 0x24, 0xD4, 0xF6, 0x17,
    0x67, 0x5F, 0x77, 0x08, 0xF2, 0xD3, 0x18, 0x08, 0x73, 0x61, 0x9A, 0x40, 0x78, 0x2F, 0x0C, 0x7B,
    0x30, 0x38, 0x77, 0x07, 0xC1, 0x53, 0x64, 0x54, 0x4D, 0x04, 0x4F, 0x30, 0xF2, 0x18, 0xB2, 0x44,
    0xB8, 0xF5, 0xC3, 0x97, 0x67, 0xF7, 0xD7, 0xA7, 0x40, 0x79, 0x9E, 0x52, 0x0A, 0x7A, 0xB8, 0x2A,
    0x5A, 0xDC, 0x13, 0xAB, 0x2A, 0xCA, 0xEF, 0x7E, 0x1C, 0x0C, 0x52, 0x01, 0x5B, 0x17, 0x00, 0xBB,
    0x16, 0x29, 0xFA, 0x1E, 0xDE, 0x2B, 0x25, 0x8C, 0xAF, 0x48, 0x94, 0xF7, 0x5F, 0x84, 0x56, 0x29,
    0x44, 0xC0, 0xFB, 0xEB, 0xCB, 0x20, 0x39, 0xF7, 0xB0, 0x99, 0xA5, 0x17, 0xBF, 0x88, 0xA8, 0x6F,
    0xE5, 0x37, 0xD4, 0xF7, 0xA1, 0x7D, 0xD6, 0x26, 0x7D, 0xA2, 0x96, 0x80, 0xB4, 0x74, 0x0A, 0x7D,
    0x2B, 0x26, 0x8F, 0xBC, 0xF7, 0xCE, 0x32, 0xEC, 0x23, 0x65, 0xDA, 0x0C, 0xBF, 0x01, 0x29, 0xA1,
    0x24, 0x79, 0x31, 0xDF, 0x66, 0xB5, 0xFA, 0xB4, 0xF7, 0xA7, 0xD5, 0x60, 0x23, 0x68, 0x7F, 0xFF,
    0x67, 0x94, 0x14, 0x1C, 0xB3, 0x1D, 0x58, 0xA1, 0x7B, 0xA3, 0x14, 0x2B, 0xFD, 0x2A, 0xAA, 0xC3,
    0x60, 0xD9, 0xBE, 0x68, 0x19, 0xC6, 0x8C, 0x76, 0x2C, 0x90, 0x42, 0xBF, 0x83, 0xF8, 0x3A, 0x8D,
    0x39, 0x33, 0x68, 0x91, 0xDE, 0x3A, 0x24, 0x8E, 0x78, 0x38, 0x0A, 0x28, 0xAA, 0x1C, 0xE1, 0x0B,
    0xE2, 0xAA, 0x39, 0x5F, 0xC2, 0xC8, 0x37, 0xF5, 0x50, 0x9D, 0xA2, 0x0E, 0x54, 0x2E, 0x75, 0xEF,
    0x55, 0x83, 0x07, 0x50, 0xE7, 0xFF, 0xDE, 0x4A, 0x09, 0xEF, 0x75, 0x16
};

const byte test_data_ratchet_message_encapsulated_key4_pqc_BYTES[] = {
    0x03, 0xDD, 0xB4, 0xBD, 0x21, 0xA3, 0x4A, 0x63, 0x61, 0xB4, 0x4D, 0x09, 0xE3, 0x9C, 0xF1, 0x96,
    0xA3, 0x84, 0x55, 0x68, 0x3F, 0xDD, 0xF5, 0xF4, 0x7C, 0x69, 0x96, 0x9B, 0x3F, 0x0F, 0xFF, 0xD5,
    0xCB, 0xCB, 0x80, 0x11, 0xCC, 0x8C, 0xF4, 0x6C, 0xD8, 0xB3, 0x7C, 0xAE, 0x6A, 0x7D, 0x96, 0xE2,
    0x38, 0xE9, 0x76, 0xB9, 0x5D, 0xC4, 0xD1, 0x81, 0xC2, 0xBE, 0xF2, 0x6E, 0xF4, 0xD0, 0xE6, 0x47,
    0xB6, 0xCB, 0x4A, 0xBA, 0x5D, 0x4F, 0x9B, 0x6D, 0x28, 0x4D, 0xC7, 0x94, 0xFD, 0x26, 0xAD, 0x92,
    0x54, 0xA7, 0x05, 0xDF, 0x72, 0xD0, 0xBF, 0x72, 0x13, 0x2B, 0x8F, 0xCD, 0xB3, 0xBB, 0x31, 0xEB,
    0x34, 0x02, 0xCA, 0x96, 0x26, 0x88, 0xDE, 0x62, 0x4B, 0x5A, 0xC1, 0xFC, 0x19, 0x52, 0xD3, 0x55,
    0x1C, 0xFA, 0x1A, 0x98, 0xAB, 0xBA, 0xD2, 0xB2, 0x55, 0x51, 0xAD, 0x85, 0x8E, 0xC3, 0x1B, 0x33,
    0x37, 0xE5, 0xF2, 0x77, 0xC8, 0x04, 0x66, 0xA8, 0x34, 0xF0, 0xE1, 0xF0, 0x9B, 0x1A, 0xBE, 0x89,
    0xB6, 0x44, 0xAD, 0xC4, 0x72, 0x1C, 0x1B, 0x7C, 0x4E, 0x56, 0x76, 0x35, 0x05, 0x7A, 0x89, 0x35,
    0x21, 0x22, 0x73, 0xA0, 0x22, 0xA8, 0x5B, 0x54, 0xAD, 0x6E, 0x89, 0x98, 0x14, 0xD9, 0x56, 0x38,
    0x29, 0x82, 0x2A, 0x12, 0x09, 0xD2, 0xF7, 0x72, 0x4D, 0x20, 0xED, 0xC2, 0x11, 0xBD, 0xC8, 0xA4,
    0x9B, 0xD3, 0x05, 0x03, 0xF3, 0xE9, 0xBD, 0xC1, 0x3B, 0x16, 0xBF, 0xA2, 0x59, 0xEF, 0xC6, 0x41,
    0x6A, 0xEF, 0x1E, 0x5E, 0x50, 0x0B, 0xB9, 0x6E, 0x76, 0x53, 0xFA, 0x59, 0xB8, 0xFA, 0xE0, 0xED,
    0xCA, 0x92, 0x44, 0x47, 0x0D, 0xCC, 0x24, 0x8B, 0xC4, 0xF7, 0xE2, 0x33, 0x0F, 0x5C, 0x47, 0xCC,
    0xF7, 0xAE, 0xCB, 0x84, 0x84, 0x72, 0x68, 0x96, 0x30, 0xE2, 0x71, 0x34, 0x15, 0x68, 0x64, 0xAE,
    0xF2, 0x1C, 0x5C, 0x5B, 0x24, 0x6E, 0xD7, 0x25, 0xCC, 0x46, 0x1E, 0x0F, 0xC6, 0xFE, 0x42, 0x36,
    0x79, 0xFB, 0x40, 0xF1, 0x10, 0x81, 0x22, 0xA7, 0x2B, 0x48, 0x81, 0x86, 0xD7, 0xBD, 0x5E, 0x1A,
    0xAB, 0x17, 0xF5, 0x48, 0x56, 0xE6, 0xD0, 0x7C, 0x18, 0xC3, 0x5D, 0xCC, 0x92, 0x8E, 0x26, 0x8D,
    0x1E, 0xC8, 0x9E, 0x2A, 0x30, 0x79, 0x4B, 0x8E, 0x08, 0xEB, 0xDE, 0x53, 0x60, 0xF1, 0x51, 0x9C,
    0x49, 0x59, 0x9F, 0x3B, 0x5B, 0x9A, 0x3D, 0xDF, 0x28, 0x08, 0xDF, 0x20, 0xBC, 0xD7, 0x74, 0xFA,
    0xE3, 0x00, 0x25, 0x63, 0xC7, 0xC1, 0xEB, 0xF9, 0x87, 0x47, 0x7A, 0x02, 0xFE, 0xE3, 0x10, 0x77,
    0x05, 0x39, 0x47, 0x91, 0x25, 0xF6, 0x9C, 0xD7, 0x62, 0x6C, 0x6F, 0x43, 0xEE, 0x56, 0xD8, 0x0F,
    0x34, 0x30, 0x51, 0x65, 0xAD, 0x1E, 0x3F, 0xA1, 0xB4, 0x9D, 0xF2, 0x7C, 0xFD, 0x81, 0x70, 0x5F,
    0xE7, 0x22, 0x18, 0xD6, 0x2F, 0x29, 0x9A, 0xAC, 0x83, 0x91, 0xF2, 0x7A, 0xC4, 0x84, 0x9C, 0x0D,
    0x9D, 0xE3, 0x6D, 0x0B, 0x96, 0xBC, 0xA0, 0x3D, 0x9F, 0xCB, 0x11, 0x0E, 0xC5, 0xA7, 0x73, 0x00,
    0x21, 0xEB, 0x2D, 0x04, 0x30, 0x40, 0x9E, 0xA8, 0x38, 0x11, 0xC3, 0x76, 0x16, 0xB3, 0x59, 0x99,
    0x12, 0x95, 0x80, 0x2B, 0x0D, 0x4D, 0x61, 0xFB, 0x98, 0x14, 0x38, 0xED, 0x00, 0xF9, 0xC4, 0x00,
    0x78, 0x59, 0x15, 0x37, 0xA9, 0x22, 0xDF, 0xB8, 0x62, 0xD7, 0x80, 0xAE, 0x27, 0x08, 0x73, 0x9D,
    0x1D, 0x31, 0x3C, 0x85, 0xF6, 0x63, 0x65, 0x4E, 0x7D, 0x60, 0x87, 0xBE, 0xE2, 0xC0, 0x96, 0x1E,
    0x54, 0x2F, 0x00, 0x09, 0xA1, 0xF6, 0x63, 0xD6, 0xD5, 0xF6, 0x99, 0x20, 0xCE, 0xCD, 0x31, 0x7A,
    0x47, 0x78, 0x6E, 0x49, 0x41, 0xE9, 0xB8, 0x9D, 0x84, 0xFD, 0x6E, 0x03, 0x2F, 0x3E, 0x9F, 0x88,
    0xFA, 0x38, 0x5C, 0xCF, 0x8A, 0xD1, 0x18, 0x45, 0x76, 0xFE, 0xD3, 0xD6, 0xE3, 0x1A, 0x6A, 0xAC,
    0xA2, 0x3D, 0xB6, 0xD2, 0x5D, 0x37, 0x33, 0x2E, 0x50, 0x75, 0x76, 0x34, 0x0F, 0x1B, 0xAA, 0x16,
    0x08, 0x35, 0x4C, 0x65, 0x99, 0x17, 0x2F, 0xF6, 0x4F, 0x18, 0x2C, 0xAF, 0xE1, 0x1F, 0x00, 0x81,
    0xDB, 0xFF, 0x76, 0x06, 0x07, 0x1C, 0xF1, 0x91, 0x2F, 0x51, 0xA7, 0xB1, 0x8A, 0x44, 0xB9, 0x07,
    0xBA, 0xC3, 0xE2, 0x30, 0x08, 0xCA, 0x64, 0x49, 0x42, 0x91, 0x9A, 0xFE, 0xB3, 0x1C, 0x39, 0x72,
    0xDC, 0x2A, 0x88, 0x98, 0x8B, 0x4C, 0x0A, 0xF2, 0x19, 0xB1, 0x8E, 0x9D, 0xF1, 0x95, 0x29, 0x04,
    0xCF, 0xBA, 0x76, 0x84, 0x3E, 0x90, 0x87, 0xCB, 0x8F, 0xC4, 0x6A, 0xC9
};

const byte test_data_ratchet_message_decapsulated_keys_signature_pqc_BYTES[] = {
    0x92, 0x88, 0x00, 0x8A, 0xB5, 0x9C, 0x30, 0x8D, 0x10, 0x6E, 0xDC, 0x3F, 0x86, 0x35, 0x87, 0xA6,
    0x4C, 0xFB, 0xFF, 0x93, 0x40, 0x54, 0x68, 0xFA, 0xE1, 0x8B, 0x7B, 0xC6, 0x24, 0xDB, 0x47, 0x7C,
    0xD1, 0xA6, 0x70, 0xDF, 0x17, 0x19, 0x35, 0x93, 0x19, 0x40, 0xDD, 0xCE, 0xA4, 0xB7, 0x50, 0x55,
    0x30, 0x88, 0xD0, 0x8B, 0x9B, 0x3F, 0xC1, 0x5F, 0x67, 0xD6, 0x61, 0x1B, 0x89, 0x63, 0xDB, 0xC3,
    0x07, 0x78, 0xD6, 0xD4, 0x24, 0x9B, 0x9B, 0xAD, 0xB9, 0x29, 0x94, 0x02, 0x57, 0x3B, 0xC0, 0x72,
    0x2F, 0x51, 0x28, 0x14, 0x5A, 0x14, 0xE3, 0xEB, 0xF2, 0x6E, 0xE3, 0x2C, 0xD4, 0xDE, 0xC1, 0xA8,
    0x88, 0x3D, 0x67, 0x7D, 0xC1, 0x01, 0xD1, 0x8F, 0x33, 0x8B, 0x69, 0x68, 0xBC, 0x9C, 0x2C, 0xDA,
    0xD4, 0xF4, 0x4C, 0xA0, 0xE8, 0x70, 0x25, 0xFB, 0xF0, 0xE1, 0x75, 0x0A, 0x62, 0x4A, 0x51, 0x27,
    0xE7, 0x0C, 0x05, 0xCD, 0x5E, 0xA6, 0x9C, 0x6C, 0xB7, 0xB8, 0x64, 0x53, 0x99, 0xE1, 0x8A, 0xE7,
    0x9F, 0x37, 0x58, 0x0F, 0x4A, 0xAB, 0x30, 0x62, 0x7D, 0xAF, 0x01, 0x55, 0x4E, 0x90, 0x0A, 0x58,
    0x53, 0xE8, 0x0A, 0xD4, 0x80, 0xCC, 0x7F, 0xFE, 0x3A, 0xE7, 0xCD, 0xBC, 0x48, 0x2D, 0xC1, 0xAF,
    0xAC, 0x37, 0xF7, 0x4A, 0xC0, 0xBF, 0x60, 0x71, 0x7C, 0x18, 0x9C, 0x14, 0xC4, 0xFA, 0xB0, 0xEC,
    0x49, 0xE7, 0xB8, 0x92, 0x3A, 0x50, 0x20, 0xF9, 0x51, 0xEA, 0x7C, 0x85, 0x46, 0x59, 0x70, 0x7A,
    0x67, 0x1E, 0x85, 0xB9, 0xFD, 0x03, 0x61, 0xC7, 0x5F, 0x16, 0x02, 0x20, 0x26, 0xBC, 0xF1, 0x67,
    0xBD, 0x03, 0x24, 0x7A, 0x2A, 0x6F, 0x5F, 0xEA, 0xA4, 0x81, 0x1B, 0x3A, 0x18, 0x10, 0xDE, 0xC6,
    0xF4, 0x96, 0xED, 0x38, 0x2A, 0x1B, 0xE9, 0x78, 0x6E, 0x94, 0xAA, 0xA3, 0x14, 0xF3, 0x9C, 0x7A,
    0x82, 0xE9, 0x9B, 0x73, 0xD3, 0xF0, 0xCE, 0x45, 0x9F, 0x68, 0xE4, 0x3D, 0x60, 0x10, 0x6C, 0xFC,
    0x67, 0x51, 0x11, 0x24, 0x65, 0x95, 0x51, 0xD9, 0x20, 0xE3, 0x27, 0x1A, 0x98, 0x7F, 0xC6, 0x06,
    0x5A, 0x76, 0x7D, 0x15, 0xEC, 0x76, 0x04, 0xC4, 0xD1, 0xD7, 0x41, 0x46, 0x84, 0xD7, 0x8C, 0x0B,
    0x5A, 0x04, 0x5F, 0x1A, 0x8D, 0x37, 0x7E, 0x76, 0xB0, 0xD6, 0x49, 0x27, 0x6B, 0xD4, 0xA2, 0x5D,
    0x02, 0x8F, 0xE3, 0xB6, 0x2E, 0x9F, 0x49, 0x0D, 0x47, 0x16, 0x0A, 0x31, 0x9B, 0xFA, 0xAB, 0x9E,
    0x2D, 0xE5, 0xF5, 0x0A, 0xDE, 0xE6, 0xB6, 0x67, 0xA6, 0x65, 0xC2, 0x1D, 0x6D, 0xB1, 0xF1, 0x28,
    0xC7, 0xD2, 0x1A, 0xD9, 0x84, 0x80, 0x84, 0xAF, 0x01, 0x09, 0x50, 0x0E, 0xF7, 0xD5, 0x76, 0xC0,
    0x89, 0x82, 0x5B, 0xC1, 0x3E, 0xA1, 0x00, 0x31, 0x8F, 0xBA, 0x44, 0x49, 0x2E, 0xB0, 0xA1, 0x46,
    0xE2, 0x3A, 0x2A, 0xFF, 0x70, 0x19, 0xE0, 0x79, 0x99, 0xCF, 0x53, 0xE4, 0x67, 0x5E, 0x9A, 0x3E,
    0x0E, 0xBA, 0x8B, 0x01, 0x28, 0x17, 0x58, 0xCB, 0x9A, 0xEA, 0x1E, 0x57, 0x24, 0xD9, 0xAE, 0x8E,
    0x89, 0x89, 0xC1, 0x22, 0x69, 0x04, 0xE2, 0xFD, 0x41, 0xE5, 0xA1, 0xA2, 0x65, 0xF8, 0xEB, 0xCF,
    0xFF, 0x6D, 0x37, 0xC8, 0x02, 0x48, 0xD0, 0xC9, 0xBE, 0xB5, 0xBE, 0x79, 0xBA, 0x4E, 0xB7, 0x50,
    0xC5, 0x41, 0x7B, 0xE1, 0xED, 0x04, 0xE3, 0xCC, 0xB2, 0x0C, 0x60, 0x6C, 0xEA, 0xD4, 0xF2, 0x13,
    0x90, 0x89, 0x4C, 0x39, 0x26, 0x0E, 0xFC, 0xAB, 0x63, 0x91, 0x0B, 0xB3, 0x5D, 0x3F, 0xD4, 0xEF,
    0xB4, 0xB6, 0x56, 0xAF, 0x8B, 0x5A, 0xD6, 0x6C, 0x89, 0xAD, 0xDF, 0xA4, 0x83, 0x13, 0x35, 0x52,
    0xAD, 0xF6, 0xB4, 0x1A, 0xE2, 0x31, 0xC4, 0x3B, 0x03, 0x42, 0xD2, 0xDC, 0x9C, 0xF3, 0x8B, 0x20,
    0x37, 0xC7, 0x21, 0xD4, 0x4F, 0x1C, 0xEF, 0xE8, 0x09, 0xC4, 0x80, 0x44, 0x2B, 0x18, 0xBA, 0x03,
    0x48, 0x69, 0xF6, 0xD8, 0x35, 0x03, 0xF3, 0x9D, 0x2E, 0x5F, 0x10, 0x07, 0xFE, 0xBE, 0x02, 0xF5,
    0x10, 0x67, 0x49, 0xED, 0xD1, 0x54, 0x8F, 0x42, 0x16, 0x51, 0xF5, 0x09, 0x80, 0xE0, 0x43, 0x47,
    0xA7, 0x62, 0x6D, 0xD9, 0x47, 0x40, 0x1B, 0x6C, 0xA7, 0x1E, 0x67, 0x29, 0x5F, 0xE7, 0x8C, 0xF0,
    0x90, 0xE7, 0x85, 0xF7, 0x2F, 0x35, 0xE9, 0x08, 0x25, 0x26, 0x8E, 0x90, 0xA1, 0xDC, 0xA4, 0xFD,
    0x06, 0x83, 0xD4, 0x27, 0x77, 0x7D, 0x69, 0x26, 0x6D, 0xCA, 0xED, 0xB8, 0x96, 0x89, 0xFB, 0x78,
    0x8A, 0x19, 0x1E, 0xB8, 0x05, 0x68, 0x86, 0x70, 0x63, 0x94, 0xD3, 0xB3, 0x84, 0x91, 0x7F, 0xAA,
    0xBB, 0xD7, 0x54, 0x19, 0x56, 0x27, 0x84, 0x88, 0x79, 0x71, 0x69, 0x7C, 0xBB, 0xDF, 0xF1, 0x2A,
    0x4B, 0xEF, 0x7C, 0xD1, 0x47, 0x79, 0xA6, 0xF4, 0x7D, 0x0A, 0x69, 0x47, 0x4C, 0xBA, 0x49, 0x5E,
    0xD4, 0xC9, 0x44, 0x66, 0x0F, 0x39, 0xC1, 0xB8, 0x2B, 0x8F, 0xD1, 0xF3, 0x2C, 0x55, 0x8B, 0x25,
    0x47, 0x63, 0x49, 0x79, 0xAB, 0x1D, 0xD4, 0x88, 0x92, 0x69, 0xFD, 0x3D, 0x21, 0x06, 0x60, 0xF8,
    0xD0, 0x68, 0x6A, 0x60, 0x47, 0x4B, 0xD3, 0xC4, 0x8A, 0x85, 0x5F, 0x2A, 0xD3, 0x08, 0x5C, 0x31,
    0xA1, 0x7C, 0x80, 0xDC, 0xCD, 0x9D, 0xAC, 0x6C, 0x24, 0x9B, 0x0A, 0x3D, 0x06, 0x4B, 0x82, 0xD7,
    0x98, 0x53, 0x54, 0x91, 0xB5, 0x9A, 0x39, 0x46, 0x33, 0x45, 0x8A, 0x8E, 0xB4, 0xC8, 0xF2, 0x61,
    0x7F, 0xCE, 0xBD, 0xD9, 0x7D, 0x11, 0xB2, 0x8B, 0x76, 0xCA, 0x65, 0x59, 0x37, 0x6D, 0xC1, 0x6F,
    0x1A, 0x5D, 0xC1, 0x4F, 0xB0, 0xF1, 0xB1, 0x06, 0x71, 0xE4, 0x5A, 0x07, 0x9A, 0x80, 0x41, 0x68,
    0xB8, 0x57, 0x00, 0xC5, 0x56, 0xDE, 0x4C, 0x85, 0x73, 0x0D, 0xBD, 0xAC, 0xE9, 0xAF, 0x9C, 0xA8,
    0x7A, 0xDD, 0x4E, 0x05, 0xD2, 0xC6, 0xE9, 0x71, 0xAD, 0xC1, 0xB1, 0xD6, 0xE8, 0x27, 0xE9, 0xF3,
    0x4F, 0x88, 0x2D, 0xB3, 0x1C, 0x59, 0xC7, 0xBF, 0x9D
};

const vsc_data_t test_data_ratchet_message_id1 = {
        test_data_ratchet_message_id1_BYTES, sizeof(test_data_ratchet_message_id1_BYTES)
};

const vsc_data_t test_data_ratchet_message_id2 = {
        test_data_ratchet_message_id2_BYTES, sizeof(test_data_ratchet_message_id2_BYTES)
};

const vsc_data_t test_data_ratchet_message_id3 = {
        test_data_ratchet_message_id3_BYTES, sizeof(test_data_ratchet_message_id3_BYTES)
};

const vsc_data_t test_data_ratchet_message_id4 = {
        test_data_ratchet_message_id4_BYTES, sizeof(test_data_ratchet_message_id4_BYTES)
};

const vsc_data_t test_data_ratchet_message_pub_key1 = {
        test_data_ratchet_message_pub_key1_BYTES, sizeof(test_data_ratchet_message_pub_key1_BYTES)
};

const vsc_data_t test_data_ratchet_message_pub_key2 = {
        test_data_ratchet_message_pub_key2_BYTES, sizeof(test_data_ratchet_message_pub_key2_BYTES)
};

const vsc_data_t test_data_ratchet_message_data = {
        test_data_ratchet_message_data_BYTES, sizeof(test_data_ratchet_message_data_BYTES)
};

const vsc_data_t test_data_ratchet_message_pub_key_pqc = {
        test_data_ratchet_message_pub_key_pqc_BYTES, sizeof(test_data_ratchet_message_pub_key_pqc_BYTES)
};

const vsc_data_t test_data_ratchet_message_encapsulated_key1_pqc = {
        test_data_ratchet_message_encapsulated_key1_pqc_BYTES, sizeof(test_data_ratchet_message_encapsulated_key1_pqc_BYTES)
};

const vsc_data_t test_data_ratchet_message_encapsulated_key2_pqc = {
        test_data_ratchet_message_encapsulated_key2_pqc_BYTES, sizeof(test_data_ratchet_message_encapsulated_key2_pqc_BYTES)
};

const vsc_data_t test_data_ratchet_message_encapsulated_key3_pqc = {
        test_data_ratchet_message_encapsulated_key3_pqc_BYTES, sizeof(test_data_ratchet_message_encapsulated_key3_pqc_BYTES)
};

const vsc_data_t test_data_ratchet_message_encapsulated_key4_pqc = {
        test_data_ratchet_message_encapsulated_key4_pqc_BYTES, sizeof(test_data_ratchet_message_encapsulated_key4_pqc_BYTES)
};

const vsc_data_t test_data_ratchet_message_decapsulated_keys_signature_pqc = {
        test_data_ratchet_message_decapsulated_keys_signature_pqc_BYTES, sizeof(test_data_ratchet_message_decapsulated_keys_signature_pqc_BYTES)
};
