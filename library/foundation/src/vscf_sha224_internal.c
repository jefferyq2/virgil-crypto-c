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
//  This module contains logic for interface/implementation architecture.
//  Do not use this module in any part of the code.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vscf_sha224_internal.h"
#include "vscf_memory.h"
#include "vscf_assert.h"
#include "vscf_sha224_defs.h"
#include "vscf_alg.h"
#include "vscf_alg_api.h"
#include "vscf_hash.h"
#include "vscf_hash_api.h"
#include "vscf_impl.h"
#include "vscf_api.h"

// clang-format on
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

static const vscf_api_t *
vscf_sha224_find_api(vscf_api_tag_t api_tag);

//
//  Configuration of the interface API 'alg api'.
//
static const vscf_alg_api_t alg_api = {
    //
    //  API's unique identifier, MUST be first in the structure.
    //  For interface 'alg' MUST be equal to the 'vscf_api_tag_ALG'.
    //
    vscf_api_tag_ALG,
    //
    //  Provide algorithm identificator.
    //
    (vscf_alg_api_alg_id_fn)vscf_sha224_alg_id,
    //
    //  Produce object with algorithm information and configuration parameters.
    //
    (vscf_alg_api_produce_alg_info_fn)vscf_sha224_produce_alg_info,
    //
    //  Restore algorithm configuration from the given object.
    //
    (vscf_alg_api_restore_alg_info_fn)vscf_sha224_restore_alg_info
};

//
//  Configuration of the interface API 'hash api'.
//
static const vscf_hash_api_t hash_api = {
    //
    //  API's unique identifier, MUST be first in the structure.
    //  For interface 'hash' MUST be equal to the 'vscf_api_tag_HASH'.
    //
    vscf_api_tag_HASH,
    //
    //  Calculate hash over given data.
    //
    (vscf_hash_api_hash_fn)vscf_sha224_hash,
    //
    //  Start a new hashing.
    //
    (vscf_hash_api_start_fn)vscf_sha224_start,
    //
    //  Add given data to the hash.
    //
    (vscf_hash_api_update_fn)vscf_sha224_update,
    //
    //  Accompilsh hashing and return it's result (a message digest).
    //
    (vscf_hash_api_finish_fn)vscf_sha224_finish,
    //
    //  Length of the digest (hashing output) in bytes.
    //
    vscf_sha224_DIGEST_LEN,
    //
    //  Block length of the digest function in bytes.
    //
    vscf_sha224_BLOCK_LEN
};

//
//  Compile-time known information about 'sha224' implementation.
//
static const vscf_impl_info_t info = {
    //
    //  Callback that returns API of the requested interface if implemented, otherwise - NULL.
    //  MUST be second in the structure.
    //
    vscf_sha224_find_api,
    //
    //  Release acquired inner resources.
    //
    (vscf_impl_cleanup_fn)vscf_sha224_cleanup,
    //
    //  Self destruction, according to destruction policy.
    //
    (vscf_impl_delete_fn)vscf_sha224_delete
};

//
//  Perform initialization of preallocated implementation context.
//
VSCF_PUBLIC void
vscf_sha224_init(vscf_sha224_t *sha224) {

    VSCF_ASSERT_PTR(sha224);

    vscf_zeroize(sha224, sizeof(vscf_sha224_t));

    sha224->info = &info;
    sha224->refcnt = 1;

    vscf_sha224_init_ctx(sha224);
}

//
//  Cleanup implementation context and release dependencies.
//  This is a reverse action of the function 'vscf_sha224_init()'.
//
VSCF_PUBLIC void
vscf_sha224_cleanup(vscf_sha224_t *sha224) {

    if (sha224 == NULL || sha224->info == NULL) {
        return;
    }

    if (sha224->refcnt == 0) {
        return;
    }

    if (--sha224->refcnt > 0) {
        return;
    }

    vscf_sha224_cleanup_ctx(sha224);

    vscf_zeroize(sha224, sizeof(vscf_sha224_t));
}

//
//  Allocate implementation context and perform it's initialization.
//  Postcondition: check memory allocation result.
//
VSCF_PUBLIC vscf_sha224_t *
vscf_sha224_new(void) {

    vscf_sha224_t *sha224 = (vscf_sha224_t *) vscf_alloc(sizeof (vscf_sha224_t));
    VSCF_ASSERT_ALLOC(sha224);

    vscf_sha224_init(sha224);

    return sha224;
}

//
//  Delete given implementation context and it's dependencies.
//  This is a reverse action of the function 'vscf_sha224_new()'.
//
VSCF_PUBLIC void
vscf_sha224_delete(vscf_sha224_t *sha224) {

    vscf_sha224_cleanup(sha224);

    if (sha224 && (sha224->refcnt == 0)) {
        vscf_dealloc(sha224);
    }
}

//
//  Destroy given implementation context and it's dependencies.
//  This is a reverse action of the function 'vscf_sha224_new()'.
//  Given reference is nullified.
//
VSCF_PUBLIC void
vscf_sha224_destroy(vscf_sha224_t **sha224_ref) {

    VSCF_ASSERT_PTR(sha224_ref);

    vscf_sha224_t *sha224 = *sha224_ref;
    *sha224_ref = NULL;

    vscf_sha224_delete(sha224);
}

//
//  Copy given implementation context by increasing reference counter.
//  If deep copy is required interface 'clonable' can be used.
//
VSCF_PUBLIC vscf_sha224_t *
vscf_sha224_shallow_copy(vscf_sha224_t *sha224) {

    // Proxy to the parent implementation.
    return (vscf_sha224_t *)vscf_impl_shallow_copy((vscf_impl_t *)sha224);
}

//
//  Return size of 'vscf_sha224_t' type.
//
VSCF_PUBLIC size_t
vscf_sha224_impl_size(void) {

    return sizeof (vscf_sha224_t);
}

//
//  Cast to the 'vscf_impl_t' type.
//
VSCF_PUBLIC vscf_impl_t *
vscf_sha224_impl(vscf_sha224_t *sha224) {

    VSCF_ASSERT_PTR(sha224);
    return (vscf_impl_t *)(sha224);
}

static const vscf_api_t *
vscf_sha224_find_api(vscf_api_tag_t api_tag) {

    switch(api_tag) {
        case vscf_api_tag_ALG:
            return (const vscf_api_t *) &alg_api;
        case vscf_api_tag_HASH:
            return (const vscf_api_t *) &hash_api;
        default:
            return NULL;
    }
}


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end
