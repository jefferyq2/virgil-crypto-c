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


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------


//  @description
// --------------------------------------------------------------------------
//  Mix-in interface that provides specific functionality to authenticated
//  encryption and decryption.
// --------------------------------------------------------------------------

#ifndef VSCF_CIPHER_AUTH_H_INCLUDED
#define VSCF_CIPHER_AUTH_H_INCLUDED

#include "vscf_library.h"
#include "vscf_error.h"
#include "vscf_impl.h"
#include "vscf_cipher_auth_info.h"
#include "vscf_auth_encrypt.h"
#include "vscf_auth_decrypt.h"
#include "vscf_api.h"
//  @end


#ifdef __cplusplus
extern "C" {
#endif


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Contains API requirements of the interface 'cipher auth'.
//
typedef struct vscf_cipher_auth_api_t vscf_cipher_auth_api_t;

//
//  Return cipher auth API, or NULL if it is not implemented.
//
VSCF_PUBLIC const vscf_cipher_auth_api_t *
vscf_cipher_auth_api(vscf_impl_t *impl);

//
//  Return cipher auth info API.
//
VSCF_PUBLIC const vscf_cipher_auth_info_api_t *
vscf_cipher_auth_cipher_auth_info_api(const vscf_cipher_auth_api_t *cipher_auth_api);

//
//  Return auth encrypt API.
//
VSCF_PUBLIC const vscf_auth_encrypt_api_t *
vscf_cipher_auth_auth_encrypt_api(const vscf_cipher_auth_api_t *cipher_auth_api);

//
//  Return auth decrypt API.
//
VSCF_PUBLIC const vscf_auth_decrypt_api_t *
vscf_cipher_auth_auth_decrypt_api(const vscf_cipher_auth_api_t *cipher_auth_api);

//
//  Check if given object implements interface 'cipher auth'.
//
VSCF_PUBLIC bool
vscf_cipher_auth_is_implemented(vscf_impl_t *impl);

//
//  Returns interface unique identifier.
//
VSCF_PUBLIC vscf_api_tag_t
vscf_cipher_auth_api_tag(const vscf_cipher_auth_api_t *cipher_auth_api);

//
//  Returns implementation unique identifier.
//
VSCF_PUBLIC vscf_impl_tag_t
vscf_cipher_auth_impl_tag(const vscf_cipher_auth_api_t *cipher_auth_api);


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


#ifdef __cplusplus
}
#endif


//  @footer
#endif // VSCF_CIPHER_AUTH_H_INCLUDED
//  @end
