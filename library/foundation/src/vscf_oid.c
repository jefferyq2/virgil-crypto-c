//  @license
// --------------------------------------------------------------------------
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
// --------------------------------------------------------------------------
// clang-format off


//  @description
// --------------------------------------------------------------------------
//  Provide conversion logic between OID and algorithm tags.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vscf_oid.h"
#include "vscf_memory.h"
#include "vscf_assert.h"

// clang-format on
//  @end


static const byte oid_rsa_bytes[] = {0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01};
static const vsc_data_t oid_rsa = {oid_rsa_bytes, sizeof(oid_rsa_bytes)};

static const byte oid_ed25519_bytes[] = {0x2B, 0x65, 0x70};
static const vsc_data_t oid_ed25519 = {oid_ed25519_bytes, sizeof(oid_ed25519_bytes)};

static const byte oid_x25519_bytes[] = {0x2B, 0x65, 0x6E};
static const vsc_data_t oid_x25519 = {oid_x25519_bytes, sizeof(oid_x25519_bytes)};

static const byte oid_sha256_bytes[] = {0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02, 0x01};
static const vsc_data_t oid_sha256 = {oid_sha256_bytes, sizeof(oid_sha256_bytes)};

static const byte oid_kdf1_bytes[] = {0x28, 0x81, 0x8C, 0x71, 0x02, 0x05, 0x01};
static const vsc_data_t oid_kdf1 = {oid_kdf1_bytes, sizeof(oid_kdf1_bytes)};


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


//
//  Return OID for given key algorithm.
//
VSCF_PUBLIC vsc_data_t
vscf_oid_from_key_alg(vscf_key_alg_t key_alg) {

    VSCF_ASSERT(key_alg != vscf_key_alg_NONE);

    switch (key_alg) {
    case vscf_key_alg_RSA:
        return oid_rsa;

    case vscf_key_alg_ED25519:
        return oid_ed25519;

    case vscf_key_alg_X25519:
        return oid_x25519;

    default:
        VSCF_ASSERT(0 && "Unhanded key algorithm");
        return vsc_data_empty();
    }
}

//
//  Return OID for given algorithm identifier
//
VSCF_PUBLIC vsc_data_t
vscf_oid_from_alg_id(vscf_alg_id_t alg_id) {

    VSCF_ASSERT(alg_id != vscf_alg_id_NONE);

    switch (alg_id) {
    case vscf_alg_id_SHA256:
        return oid_sha256;
    case vscf_alg_id_KDF1:
        return oid_kdf1;

    default:
        VSCF_ASSERT(0 && "Unhanded algorithm identifier");
        return vsc_data_empty();
    }
}

//
//  Return key algorithm for given OID.
//
VSCF_PUBLIC vscf_key_alg_t
vscf_oid_to_key_alg(vsc_data_t oid) {

    VSCF_ASSERT(vsc_data_is_valid(oid));

    if (vscf_oid_equal(oid, oid_rsa)) {
        return vscf_key_alg_RSA;
    }

    if (vscf_oid_equal(oid, oid_ed25519)) {
        return vscf_key_alg_ED25519;
    }

    if (vscf_oid_equal(oid, oid_x25519)) {
        return vscf_key_alg_X25519;
    }

    return vscf_key_alg_NONE;
}

//
//  Return algorithm identifier for given OID.
//
VSCF_PUBLIC vscf_alg_id_t
vscf_oid_to_alg_id(vsc_data_t oid) {

    VSCF_ASSERT(vsc_data_is_valid(oid));

    if (vscf_oid_equal(oid, oid_sha256)) {
        return vscf_alg_id_SHA256;
    }

    if (vscf_oid_equal(oid, oid_kdf1)) {
        return vscf_alg_id_KDF1;
    }

    return vscf_alg_id_NONE;
}

//
//  Return true if given OIDs are equal.
//
VSCF_PUBLIC bool
vscf_oid_equal(vsc_data_t lhs, vsc_data_t rhs) {

    VSCF_ASSERT(vsc_data_is_valid(lhs));
    VSCF_ASSERT(vsc_data_is_valid(rhs));

    if (lhs.len != rhs.len) {
        return false;
    }

    bool is_equal = memcmp(lhs.bytes, rhs.bytes, rhs.len) == 0;
    return is_equal;
}

//
//  Return string representation of the given OID.
//
VSCF_PRIVATE void
vscf_oid_to_string(vsc_data_t oid, char str[64]) {

    VSCF_ASSERT(vsc_data_is_valid(oid));
    VSCF_ASSERT_PTR(str);

    //  TODO: Implement this method.
    vscf_zeroize(str, 64);
}
