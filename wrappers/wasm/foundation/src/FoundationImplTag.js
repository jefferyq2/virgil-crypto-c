/**
 * Copyright (C) 2015-2019 Virgil Security, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * (1) Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * (2) Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in
 * the documentation and/or other materials provided with the
 * distribution.
 *
 * (3) Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>
 */


const initFoundationImplTag = (Module, modules) => {
    const FoundationImplTag = Object.freeze({

        AES256_CBC: 1,

        AES256_GCM: 2,

        ALG_INFO_DER_DESERIALIZER: 3,

        ALG_INFO_DER_SERIALIZER: 4,

        ASN1RD: 5,

        ASN1WR: 6,

        CIPHER_ALG_INFO: 7,

        CTR_DRBG: 8,

        CURVE25519: 9,

        ECC: 10,

        ECC_ALG_INFO: 11,

        ECC_PRIVATE_KEY: 12,

        ECC_PUBLIC_KEY: 13,

        ED25519: 14,

        ENTROPY_ACCUMULATOR: 15,

        FAKE_RANDOM: 16,

        HASH_BASED_ALG_INFO: 17,

        HKDF: 18,

        HMAC: 19,

        KDF1: 20,

        KDF2: 21,

        KEY_ASN1_DESERIALIZER: 22,

        KEY_ASN1_SERIALIZER: 23,

        KEY_MATERIAL_RNG: 24,

        MESSAGE_INFO_DER_SERIALIZER: 25,

        PBE_ALG_INFO: 26,

        PKCS5_PBES2: 27,

        PKCS5_PBKDF2: 28,

        PKCS8_SERIALIZER: 29,

        RAW_PRIVATE_KEY: 30,

        RAW_PUBLIC_KEY: 31,

        RSA: 32,

        RSA_PRIVATE_KEY: 33,

        RSA_PUBLIC_KEY: 34,

        SALTED_KDF_ALG_INFO: 35,

        SEC1_SERIALIZER: 36,

        SEED_ENTROPY_SOURCE: 37,

        SHA224: 38,

        SHA256: 39,

        SHA384: 40,

        SHA512: 41,

        SIMPLE_ALG_INFO: 42
    });

    return FoundationImplTag;
};

module.exports = initFoundationImplTag;