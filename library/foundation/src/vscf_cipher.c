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
//  Provide interface for symmetric ciphers.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vscf_cipher.h"
#include "vscf_assert.h"
#include "vscf_cipher_api.h"
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Setup IV or nonce.
//
VSCF_PUBLIC void
vscf_cipher_set_nonce(vscf_impl_t *impl, const byte *nonce, size_t nonce_len) {

    const vscf_cipher_api_t *cipher_api = vscf_cipher_api (impl);
    VSCF_ASSERT_PTR (cipher_api);

    VSCF_ASSERT_PTR (cipher_api->set_nonce_cb);
    cipher_api->set_nonce_cb (impl, nonce, nonce_len);
}

//
//  Set cipher encryption / decryption key.
//
VSCF_PUBLIC void
vscf_cipher_set_key(vscf_impl_t *impl, const byte *key, size_t key_len) {

    const vscf_cipher_api_t *cipher_api = vscf_cipher_api (impl);
    VSCF_ASSERT_PTR (cipher_api);

    VSCF_ASSERT_PTR (cipher_api->set_key_cb);
    cipher_api->set_key_cb (impl, key, key_len);
}

//
//  Return cipher API, or NULL if it is not implemented.
//
VSCF_PUBLIC const vscf_cipher_api_t *
vscf_cipher_api(vscf_impl_t *impl) {

    VSCF_ASSERT_PTR (impl);

    const vscf_api_t *api = vscf_impl_api (impl, vscf_api_tag_CIPHER);
    return (const vscf_cipher_api_t *) api;
}

//
//  Return encrypt API.
//
VSCF_PUBLIC const vscf_encrypt_api_t *
vscf_cipher_encrypt_api(const vscf_cipher_api_t *cipher_api) {

    VSCF_ASSERT_PTR (cipher_api);

    return cipher_api->encrypt_api;
}

//
//  Return decrypt API.
//
VSCF_PUBLIC const vscf_decrypt_api_t *
vscf_cipher_decrypt_api(const vscf_cipher_api_t *cipher_api) {

    VSCF_ASSERT_PTR (cipher_api);

    return cipher_api->decrypt_api;
}

//
//  Return cipher info API.
//
VSCF_PUBLIC const vscf_cipher_info_api_t *
vscf_cipher_cipher_info_api(const vscf_cipher_api_t *cipher_api) {

    VSCF_ASSERT_PTR (cipher_api);

    return cipher_api->cipher_info_api;
}

//
//  Check if given object implements interface 'cipher'.
//
VSCF_PUBLIC bool
vscf_cipher_is_implemented(vscf_impl_t *impl) {

    VSCF_ASSERT_PTR (impl);

    return vscf_impl_api (impl, vscf_api_tag_CIPHER) != NULL;
}

//
//  Returns interface unique identifier.
//
VSCF_PUBLIC vscf_api_tag_t
vscf_cipher_api_tag(const vscf_cipher_api_t *cipher_api) {

    VSCF_ASSERT_PTR (cipher_api);

    return cipher_api->api_tag;
}

//
//  Returns implementation unique identifier.
//
VSCF_PUBLIC vscf_impl_tag_t
vscf_cipher_impl_tag(const vscf_cipher_api_t *cipher_api) {

    VSCF_ASSERT_PTR (cipher_api);

    return cipher_api->impl_tag;
}


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end
