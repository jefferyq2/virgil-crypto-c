//  @license
// --------------------------------------------------------------------------
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
// --------------------------------------------------------------------------


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

#include "vscf_hmac_internal.h"
#include "vscf_memory.h"
#include "vscf_assert.h"
#include "vscf_hmac_impl.h"
#include "vscf_mac_info.h"
#include "vscf_mac_info_api.h"
#include "vscf_mac.h"
#include "vscf_mac_api.h"
#include "vscf_mac_stream.h"
#include "vscf_mac_stream_api.h"
#include "vscf_hash_stream.h"
#include "vscf_impl.h"
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Configuration of the interface API 'mac info api'.
//
static const vscf_mac_info_api_t mac_info_api = {
    //
    //  API's unique identifier, MUST be first in the structure.
    //  For interface 'mac_info' MUST be equal to the 'vscf_api_tag_MAC_INFO'.
    //
    vscf_api_tag_MAC_INFO,
    //
    //  Implementation unique identifier, MUST be second in the structure.
    //
    vscf_impl_tag_HMAC,
    //
    //  Size of the digest (mac output) in bytes.
    //
    (vscf_mac_info_api_digest_len_fn)vscf_hmac_digest_len
};

//
//  Configuration of the interface API 'mac api'.
//
static const vscf_mac_api_t mac_api = {
    //
    //  API's unique identifier, MUST be first in the structure.
    //  For interface 'mac' MUST be equal to the 'vscf_api_tag_MAC'.
    //
    vscf_api_tag_MAC,
    //
    //  Implementation unique identifier, MUST be second in the structure.
    //
    vscf_impl_tag_HMAC,
    //
    //  Link to the inherited interface API 'mac info'.
    //
    &mac_info_api,
    //
    //  Calculate MAC over given data.
    //
    (vscf_mac_api_mac_fn)vscf_hmac_mac
};

//
//  Configuration of the interface API 'mac stream api'.
//
static const vscf_mac_stream_api_t mac_stream_api = {
    //
    //  API's unique identifier, MUST be first in the structure.
    //  For interface 'mac_stream' MUST be equal to the 'vscf_api_tag_MAC_STREAM'.
    //
    vscf_api_tag_MAC_STREAM,
    //
    //  Implementation unique identifier, MUST be second in the structure.
    //
    vscf_impl_tag_HMAC,
    //
    //  Link to the inherited interface API 'mac info'.
    //
    &mac_info_api,
    //
    //  Start a new MAC.
    //
    (vscf_mac_stream_api_start_fn)vscf_hmac_start,
    //
    //  Add given data to the MAC.
    //
    (vscf_mac_stream_api_update_fn)vscf_hmac_update,
    //
    //  Accomplish MAC and return it's result (a message digest).
    //
    (vscf_mac_stream_api_finish_fn)vscf_hmac_finish,
    //
    //  Prepare to authenticate a new message with the same key
    //  as the previous MAC operation.
    //
    (vscf_mac_stream_api_reset_fn)vscf_hmac_reset
};

//
//  Null-terminated array of the implemented 'Interface API' instances.
//
static const vscf_api_t *api_array[] = {
    (const vscf_api_t *)&mac_info_api,
    (const vscf_api_t *)&mac_api,
    (const vscf_api_t *)&mac_stream_api,
    NULL
};

//
//  Compile-time known information about 'hmac' implementation.
//
static const vscf_impl_info_t info = {
    //
    //  Implementation unique identifier, MUST be first in the structure.
    //
    vscf_impl_tag_HMAC,
    //
    //  NULL terminated array of the implemented interfaces.
    //  MUST be second in the structure.
    //
    api_array,
    //
    //  Release acquired inner resources.
    //
    (vscf_impl_cleanup_fn)vscf_hmac_cleanup,
    //
    //  Self destruction, according to destruction policy.
    //
    (vscf_impl_delete_fn)vscf_hmac_delete
};

//
//  Perform initialization of preallocated implementation context.
//
VSCF_PUBLIC void
vscf_hmac_init(vscf_hmac_impl_t *hmac_impl) {

    VSCF_ASSERT_PTR(hmac_impl);

    vscf_zeroize(hmac_impl, sizeof(vscf_hmac_impl_t));

    hmac_impl->info = &info;
    hmac_impl->refcnt = 1;

    vscf_hmac_init_ctx(hmac_impl);
}

//
//  Cleanup implementation context and release dependencies.
//  This is a reverse action of the function 'vscf_hmac_init()'.
//
VSCF_PUBLIC void
vscf_hmac_cleanup(vscf_hmac_impl_t *hmac_impl) {

    if (hmac_impl == NULL || hmac_impl->info == NULL) {
        return;
    }

    if (hmac_impl->refcnt == 0) {
        return;
    }

    if (--hmac_impl->refcnt > 0) {
        return;
    }

    vscf_hmac_release_hash(hmac_impl);

    vscf_hmac_cleanup_ctx(hmac_impl);

    vscf_zeroize(hmac_impl, sizeof(vscf_hmac_impl_t));
}

//
//  Allocate implementation context and perform it's initialization.
//  Postcondition: check memory allocation result.
//
VSCF_PUBLIC vscf_hmac_impl_t *
vscf_hmac_new(void) {

    vscf_hmac_impl_t *hmac_impl = (vscf_hmac_impl_t *) vscf_alloc(sizeof (vscf_hmac_impl_t));
    VSCF_ASSERT_ALLOC(hmac_impl);

    vscf_hmac_init(hmac_impl);

    return hmac_impl;
}

//
//  Delete given implementation context and it's dependencies.
//  This is a reverse action of the function 'vscf_hmac_new()'.
//
VSCF_PUBLIC void
vscf_hmac_delete(vscf_hmac_impl_t *hmac_impl) {

    vscf_hmac_cleanup(hmac_impl);

    if (hmac_impl && (hmac_impl->refcnt == 0)) {
        vscf_dealloc(hmac_impl);
    }
}

//
//  Destroy given implementation context and it's dependencies.
//  This is a reverse action of the function 'vscf_hmac_new()'.
//  Given reference is nullified.
//
VSCF_PUBLIC void
vscf_hmac_destroy(vscf_hmac_impl_t **hmac_impl_ref) {

    VSCF_ASSERT_PTR(hmac_impl_ref);

    vscf_hmac_impl_t *hmac_impl = *hmac_impl_ref;
    *hmac_impl_ref = NULL;

    vscf_hmac_delete(hmac_impl);
}

//
//  Copy given implementation context by increasing reference counter.
//  If deep copy is required interface 'clonable' can be used.
//
VSCF_PUBLIC vscf_hmac_impl_t *
vscf_hmac_copy(vscf_hmac_impl_t *hmac_impl) {

    // Proxy to the parent implementation.
    return (vscf_hmac_impl_t *)vscf_impl_copy((vscf_impl_t *)hmac_impl);
}

//
//  Returns instance of the implemented interface 'mac'.
//
VSCF_PUBLIC const vscf_mac_api_t *
vscf_hmac_mac_api(void) {

    return &mac_api;
}

//
//  Return size of 'vscf_hmac_impl_t' type.
//
VSCF_PUBLIC size_t
vscf_hmac_impl_size(void) {

    return sizeof (vscf_hmac_impl_t);
}

//
//  Cast to the 'vscf_impl_t' type.
//
VSCF_PUBLIC vscf_impl_t *
vscf_hmac_impl(vscf_hmac_impl_t *hmac_impl) {

    VSCF_ASSERT_PTR(hmac_impl);
    return (vscf_impl_t *)(hmac_impl);
}

//
//  Setup dependency to the interface 'hash stream' with shared ownership.
//
VSCF_PUBLIC void
vscf_hmac_use_hash(vscf_hmac_impl_t *hmac_impl, vscf_impl_t *hash) {

    VSCF_ASSERT_PTR(hmac_impl);
    VSCF_ASSERT_PTR(hash);
    VSCF_ASSERT_PTR(hmac_impl->hash == NULL);

    VSCF_ASSERT(vscf_hash_stream_is_implemented(hash));

    hmac_impl->hash = vscf_impl_copy(hash);
}

//
//  Setup dependency to the interface 'hash stream' and transfer ownership.
//  Note, transfer ownership does not mean that object is uniquely owned by the target object.
//
VSCF_PUBLIC void
vscf_hmac_take_hash(vscf_hmac_impl_t *hmac_impl, vscf_impl_t *hash) {

    VSCF_ASSERT_PTR(hmac_impl);
    VSCF_ASSERT_PTR(hash);
    VSCF_ASSERT_PTR(hmac_impl->hash == NULL);

    VSCF_ASSERT(vscf_hash_stream_is_implemented(hash));

    hmac_impl->hash = hash;
}

//
//  Release dependency to the interface 'hash stream'.
//
VSCF_PUBLIC void
vscf_hmac_release_hash(vscf_hmac_impl_t *hmac_impl) {

    VSCF_ASSERT_PTR(hmac_impl);

    vscf_impl_destroy(&hmac_impl->hash);
}


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end