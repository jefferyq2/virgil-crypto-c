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
//
// --------------------------------------------------------------------------

#ifndef VSF_SHA256_INTERNAL_H_INCLUDED
#define VSF_SHA256_INTERNAL_H_INCLUDED

#include "vsf_library.h"
#include "vsf_sha256.h"
//  @end


#ifdef __cplusplus
extern "C" {
#endif


//  @generated
// --------------------------------------------------------------------------
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Return size of 'vsf_sha256_impl_t' type.
//
VSF_PUBLIC size_t
vsf_sha256_impl_size (void);

//
//  Cast to the 'vsf_impl_t' type.
//
VSF_PUBLIC vsf_impl_t*
vsf_sha256_impl (vsf_sha256_impl_t* sha256_impl);

//
//  Perform initialization of preallocated implementation context.
//
VSF_PUBLIC void
vsf_sha256_init (vsf_sha256_impl_t* sha256_impl);

//
//  Allocate implementation context and perform it's initialization.
//  Return NULL if allocation fails.
//
VSF_PUBLIC vsf_sha256_impl_t*
vsf_sha256_new (void);

//
//  Cleanup sensitive data within implementation context.
//  Note, dependencies are cleaned up as well.
//
VSF_PUBLIC void
vsf_sha256_cleanup (vsf_sha256_impl_t* sha256_impl);

//
//  Destroy given implementation context and it's dependencies.
//  This function SHOULD be called even if context was statically allocated,
//  because it automatically detect this fact for context itself and
//  dependencies as well and destroy them appropriately.
//
VSF_PUBLIC void
vsf_sha256_destroy (vsf_sha256_impl_t** sha256_impl_ref);


// --------------------------------------------------------------------------
//  Generated section end.
// --------------------------------------------------------------------------
//  @end


#ifdef __cplusplus
}
#endif


//  @footer
#endif // VSF_SHA256_INTERNAL_H_INCLUDED
//  @end
