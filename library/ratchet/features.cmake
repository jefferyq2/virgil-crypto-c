#   @license
#   -------------------------------------------------------------------------
#   Copyright (C) 2015-2019 Virgil Security, Inc.
#
#   All rights reserved.
#
#   Redistribution and use in source and binary forms, with or without
#   modification, are permitted provided that the following conditions are
#   met:
#
#       (1) Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#
#       (2) Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in
#       the documentation and/or other materials provided with the
#       distribution.
#
#       (3) Neither the name of the copyright holder nor the names of its
#       contributors may be used to endorse or promote products derived from
#       this software without specific prior written permission.
#
#   THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
#   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
#   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
#   DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
#   INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
#   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
#   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
#   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
#   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
#   IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
#   POSSIBILITY OF SUCH DAMAGE.
#
#   Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>
#   -------------------------------------------------------------------------

#   @warning
#   -------------------------------------------------------------------------
#   This file is fully generated by script 'cmake_files_codegen.gsl'.
#   It can be changed temporary for debug purposes only.
#   -------------------------------------------------------------------------
#   @end


include_guard()

option(VSCR_LIBRARY "Enable build of the 'ratchet' library" ON)
option(VSCR_RATCHET_COMMON "Enable class 'ratchet common'." ON)
option(VSCR_RATCHET_COMMON_HIDDEN "Enable class 'ratchet common hidden'." ON)
option(VSCR_RATCHET_KEY_UTILS "Enable class 'ratchet key utils'." ON)
option(VSCR_RATCHET_KEY_ID "Enable class 'ratchet key id'." ON)
option(VSCR_ERROR "Enable class 'error'." ON)
option(VSCR_RATCHET_X3DH "Enable class 'ratchet x3dh'." ON)
option(VSCR_RATCHET_SKIPPED_MESSAGES "Enable class 'ratchet skipped messages'." ON)
option(VSCR_RATCHET_RECEIVER_CHAINS "Enable class 'ratchet receiver chains'." ON)
option(VSCR_RATCHET_MESSAGE "Enable class 'ratchet message'." ON)
option(VSCR_RATCHET_PADDING "Enable class 'ratchet padding'." ON)
option(VSCR_RATCHET_CIPHER "Enable class 'ratchet cipher'." ON)
option(VSCR_RATCHET_CHAIN_KEY "Enable class 'ratchet chain key'." ON)
option(VSCR_RATCHET_MESSAGE_KEY "Enable class 'ratchet message key'." ON)
option(VSCR_RATCHET_RECEIVER_CHAIN "Enable class 'ratchet receiver chain'." ON)
option(VSCR_RATCHET_RECEIVER_CHAIN_LIST_NODE "Enable class 'ratchet receiver chain list node'." ON)
option(VSCR_RATCHET_SKIPPED_MESSAGE_KEY "Enable class 'ratchet skipped message key'." ON)
option(VSCR_RATCHET_SKIPPED_MESSAGE_KEY_LIST_NODE "Enable class 'ratchet skipped message key list node'." ON)
option(VSCR_RATCHET_SENDER_CHAIN "Enable class 'ratchet sender chain'." ON)
option(VSCR_RATCHET_KEYS "Enable class 'ratchet keys'." ON)
option(VSCR_RATCHET "Enable class 'ratchet'." ON)
option(VSCR_RATCHET_SESSION "Enable class 'ratchet session'." ON)
option(VSCR_RATCHET_GROUP_PARTICIPANT_EPOCH "Enable class 'ratchet group participant epoch'." ON)
option(VSCR_RATCHET_GROUP_PARTICIPANT_DATA "Enable class 'ratchet group participant data'." ON)
option(VSCR_RATCHET_GROUP_MESSAGE "Enable class 'ratchet group message'." ON)
option(VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY "Enable class 'ratchet skipped group message key'." ON)
option(VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_NODE "Enable class 'ratchet skipped group message key node'." ON)
option(VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_ROOT_NODE "Enable class 'ratchet skipped group message key root node'." ON)
option(VSCR_RATCHET_GROUP_TICKET "Enable class 'ratchet group ticket'." ON)
option(VSCR_RATCHET_GROUP_SESSION "Enable class 'ratchet group session'." ON)
mark_as_advanced(
        VSCR_LIBRARY
        VSCR_RATCHET_COMMON
        VSCR_RATCHET_COMMON_HIDDEN
        VSCR_RATCHET_KEY_UTILS
        VSCR_RATCHET_KEY_ID
        VSCR_ERROR
        VSCR_RATCHET_X3DH
        VSCR_RATCHET_SKIPPED_MESSAGES
        VSCR_RATCHET_RECEIVER_CHAINS
        VSCR_RATCHET_MESSAGE
        VSCR_RATCHET_PADDING
        VSCR_RATCHET_CIPHER
        VSCR_RATCHET_CHAIN_KEY
        VSCR_RATCHET_MESSAGE_KEY
        VSCR_RATCHET_RECEIVER_CHAIN
        VSCR_RATCHET_RECEIVER_CHAIN_LIST_NODE
        VSCR_RATCHET_SKIPPED_MESSAGE_KEY
        VSCR_RATCHET_SKIPPED_MESSAGE_KEY_LIST_NODE
        VSCR_RATCHET_SENDER_CHAIN
        VSCR_RATCHET_KEYS
        VSCR_RATCHET
        VSCR_RATCHET_SESSION
        VSCR_RATCHET_GROUP_PARTICIPANT_EPOCH
        VSCR_RATCHET_GROUP_PARTICIPANT_DATA
        VSCR_RATCHET_GROUP_MESSAGE
        VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY
        VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_NODE
        VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_ROOT_NODE
        VSCR_RATCHET_GROUP_TICKET
        VSCR_RATCHET_GROUP_SESSION
        )

if(VSCR_RATCHET_COMMON_HIDDEN AND NOT VSC_BUFFER)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_COMMON_HIDDEN depends on the feature:")
    message("     VSC_BUFFER - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEY_UTILS AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEY_UTILS depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEY_UTILS AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEY_UTILS depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEY_UTILS AND NOT VSCF_KEY_DER_DESERIALIZER)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEY_UTILS depends on the feature:")
    message("     VSCF_KEY_DER_DESERIALIZER - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEY_ID AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEY_ID depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEY_ID AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEY_ID depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEY_ID AND NOT VSCF_SHA512)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEY_ID depends on the feature:")
    message("     VSCF_SHA512 - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SKIPPED_MESSAGES AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SKIPPED_MESSAGES depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SKIPPED_MESSAGES AND NOT VSCR_RATCHET_CHAIN_KEY)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SKIPPED_MESSAGES depends on the feature:")
    message("     VSCR_RATCHET_CHAIN_KEY - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_RECEIVER_CHAINS AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_RECEIVER_CHAINS depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_RECEIVER_CHAINS AND NOT VSCR_RATCHET_CHAIN_KEY)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_RECEIVER_CHAINS depends on the feature:")
    message("     VSCR_RATCHET_CHAIN_KEY - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_MESSAGE AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_MESSAGE depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_MESSAGE AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_MESSAGE depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_MESSAGE AND NOT VSCF_SHA512)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_MESSAGE depends on the feature:")
    message("     VSCF_SHA512 - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_PADDING AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_PADDING depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_CIPHER AND NOT VSCF_SHA512)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_CIPHER depends on the feature:")
    message("     VSCF_SHA512 - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_CIPHER AND NOT VSCF_HKDF)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_CIPHER depends on the feature:")
    message("     VSCF_HKDF - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_CIPHER AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_CIPHER depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_CHAIN_KEY AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_CHAIN_KEY depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_MESSAGE_KEY AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_MESSAGE_KEY depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_RECEIVER_CHAIN AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_RECEIVER_CHAIN depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_RECEIVER_CHAIN_LIST_NODE AND NOT VSCR_RATCHET_RECEIVER_CHAIN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_RECEIVER_CHAIN_LIST_NODE depends on the feature:")
    message("     VSCR_RATCHET_RECEIVER_CHAIN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SKIPPED_MESSAGE_KEY AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SKIPPED_MESSAGE_KEY depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SKIPPED_MESSAGE_KEY_LIST_NODE AND NOT VSCR_RATCHET_SKIPPED_MESSAGE_KEY_LIST_NODE)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SKIPPED_MESSAGE_KEY_LIST_NODE depends on the feature:")
    message("     VSCR_RATCHET_SKIPPED_MESSAGE_KEY_LIST_NODE - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SENDER_CHAIN AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SENDER_CHAIN depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEYS AND NOT VSCF_SHA512)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEYS depends on the feature:")
    message("     VSCF_SHA512 - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEYS AND NOT VSCF_HMAC)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEYS depends on the feature:")
    message("     VSCF_HMAC - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEYS AND NOT VSCF_HKDF)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEYS depends on the feature:")
    message("     VSCF_HKDF - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEYS AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEYS depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_KEYS AND NOT VSCR_RATCHET_CHAIN_KEY)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_KEYS depends on the feature:")
    message("     VSCR_RATCHET_CHAIN_KEY - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET AND NOT VSCF_SHA512)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET depends on the feature:")
    message("     VSCF_SHA512 - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET AND NOT VSCF_HMAC)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET depends on the feature:")
    message("     VSCF_HMAC - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET AND NOT VSCF_HKDF)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET depends on the feature:")
    message("     VSCF_HKDF - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET AND NOT VSCR_RATCHET_CHAIN_KEY)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET depends on the feature:")
    message("     VSCR_RATCHET_CHAIN_KEY - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET AND NOT VSCR_RATCHET_RECEIVER_CHAIN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET depends on the feature:")
    message("     VSCR_RATCHET_RECEIVER_CHAIN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET AND NOT VSCR_RATCHET_KEYS)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET depends on the feature:")
    message("     VSCR_RATCHET_KEYS - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SESSION AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SESSION depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SESSION AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SESSION depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SESSION AND NOT VSCR_RATCHET_X3DH)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SESSION depends on the feature:")
    message("     VSCR_RATCHET_X3DH - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SESSION AND NOT VSCF_CTR_DRBG)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SESSION depends on the feature:")
    message("     VSCF_CTR_DRBG - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_PARTICIPANT_EPOCH AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_PARTICIPANT_EPOCH depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_PARTICIPANT_EPOCH AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_PARTICIPANT_EPOCH depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_PARTICIPANT_EPOCH AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_PARTICIPANT_EPOCH depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_PARTICIPANT_DATA AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_PARTICIPANT_DATA depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_PARTICIPANT_DATA AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_PARTICIPANT_DATA depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_PARTICIPANT_DATA AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_PARTICIPANT_DATA depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_MESSAGE AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_MESSAGE depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_MESSAGE AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_MESSAGE depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_ROOT_NODE AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_ROOT_NODE depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_TICKET AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_TICKET depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_TICKET AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_TICKET depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_TICKET AND NOT VSCR_RATCHET_CHAIN_KEY)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_TICKET depends on the feature:")
    message("     VSCR_RATCHET_CHAIN_KEY - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_TICKET AND NOT VSCF_CTR_DRBG)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_TICKET depends on the feature:")
    message("     VSCF_CTR_DRBG - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_SESSION AND NOT VSCR_RATCHET_COMMON)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_SESSION depends on the feature:")
    message("     VSCR_RATCHET_COMMON - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_SESSION AND NOT VSCR_RATCHET_COMMON_HIDDEN)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_SESSION depends on the feature:")
    message("     VSCR_RATCHET_COMMON_HIDDEN - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_SESSION AND NOT VSCF_SHA512)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_SESSION depends on the feature:")
    message("     VSCF_SHA512 - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_SESSION AND NOT VSCR_RATCHET_KEYS)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_SESSION depends on the feature:")
    message("     VSCR_RATCHET_KEYS - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()

if(VSCR_RATCHET_GROUP_SESSION AND NOT VSCF_CTR_DRBG)
    message("-- error --")
    message("--")
    message("Feature VSCR_RATCHET_GROUP_SESSION depends on the feature:")
    message("     VSCF_CTR_DRBG - which is disabled.")
    message("--")
    message(FATAL_ERROR)
endif()
