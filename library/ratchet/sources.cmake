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

if(NOT TARGET ratchet)
    message(FATAL_ERROR "Expected target 'ratchet' to be defined first.")
endif()

configure_file(
        "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_platform.h.in"
        "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/ratchet/vscr_platform.h"
        )

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_assert.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_library.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_memory.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/ratchet/vscr_platform.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_error.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_common.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_group_message.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_group_session.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_group_ticket.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_key_id.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_message.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_session.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_status.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_msg_type.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_group_msg_type.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_public.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

target_sources(ratchet
    PRIVATE
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_assert.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_library.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_memory.h"
            "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/ratchet/vscr_platform.h"
            "$<$<BOOL:${VSCR_ERROR}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_error.h>"
            "$<$<BOOL:${VSCR_RATCHET}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet.h>"
            "$<$<BOOL:${VSCR_RATCHET_CHAIN_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_chain_key.h>"
            "$<$<BOOL:${VSCR_RATCHET_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/private/vscr_ratchet_cipher.h>"
            "$<$<BOOL:${VSCR_RATCHET_COMMON}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_common.h>"
            "$<$<BOOL:${VSCR_RATCHET_COMMON_HIDDEN}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/private/vscr_ratchet_common_hidden.h>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_group_message.h>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/private/vscr_ratchet_group_message_defs.h>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_PARTICIPANT_DATA}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_group_participant_data.h>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_SESSION}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_group_session.h>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_TICKET}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_group_ticket.h>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_TICKET}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/private/vscr_ratchet_group_ticket_defs.h>"
            "$<$<BOOL:${VSCR_RATCHET_KEY_ID}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_key_id.h>"
            "$<$<BOOL:${VSCR_RATCHET_KEY_UTILS}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_key_utils.h>"
            "$<$<BOOL:${VSCR_RATCHET_KEYS}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_keys.h>"
            "$<$<BOOL:${VSCR_RATCHET_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_message.h>"
            "$<$<BOOL:${VSCR_RATCHET_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/private/vscr_ratchet_message_defs.h>"
            "$<$<BOOL:${VSCR_RATCHET_MESSAGE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_message_key.h>"
            "$<$<BOOL:${VSCR_RATCHET_RECEIVER_CHAIN}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_receiver_chain.h>"
            "$<$<BOOL:${VSCR_RATCHET_RECEIVER_CHAIN_LIST_NODE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_receiver_chain_list_node.h>"
            "$<$<BOOL:${VSCR_RATCHET_RECEIVER_CHAINS}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_receiver_chains.h>"
            "$<$<BOOL:${VSCR_RATCHET_SENDER_CHAIN}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_sender_chain.h>"
            "$<$<BOOL:${VSCR_RATCHET_SESSION}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_session.h>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_NODE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_group_message_key_node.h>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_ROOT_NODE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_group_message_key_root_node.h>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_MESSAGE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_message_key.h>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_MESSAGE_KEY_LIST_NODE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_message_key_list_node.h>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_MESSAGES}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_messages.h>"
            "$<$<BOOL:${VSCR_RATCHET_X3DH}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_x3dh.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_status.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_msg_type.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_group_msg_type.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/vscr_ratchet_public.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/private/vscr_ratchet_private.h"

            "${CMAKE_CURRENT_LIST_DIR}/src/vscr_assert.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscr_library.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscr_memory.c"
            "$<$<BOOL:${VSCR_ERROR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_error.c>"
            "$<$<BOOL:${VSCR_RATCHET}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet.c>"
            "$<$<BOOL:${VSCR_RATCHET_CHAIN_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_chain_key.c>"
            "$<$<BOOL:${VSCR_RATCHET_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_cipher.c>"
            "$<$<BOOL:${VSCR_RATCHET_COMMON}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_common.c>"
            "$<$<BOOL:${VSCR_RATCHET_COMMON_HIDDEN}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_common_hidden.c>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_group_message.c>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_group_message_defs.c>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_PARTICIPANT_DATA}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_group_participant_data.c>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_SESSION}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_group_session.c>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_TICKET}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_group_ticket.c>"
            "$<$<BOOL:${VSCR_RATCHET_GROUP_TICKET}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_group_ticket_defs.c>"
            "$<$<BOOL:${VSCR_RATCHET_KEY_ID}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_key_id.c>"
            "$<$<BOOL:${VSCR_RATCHET_KEY_UTILS}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_key_utils.c>"
            "$<$<BOOL:${VSCR_RATCHET_KEYS}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_keys.c>"
            "$<$<BOOL:${VSCR_RATCHET_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_message.c>"
            "$<$<BOOL:${VSCR_RATCHET_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_message_defs.c>"
            "$<$<BOOL:${VSCR_RATCHET_MESSAGE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_message_key.c>"
            "$<$<BOOL:${VSCR_RATCHET_RECEIVER_CHAIN}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_receiver_chain.c>"
            "$<$<BOOL:${VSCR_RATCHET_RECEIVER_CHAIN_LIST_NODE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_receiver_chain_list_node.c>"
            "$<$<BOOL:${VSCR_RATCHET_RECEIVER_CHAINS}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_receiver_chains.c>"
            "$<$<BOOL:${VSCR_RATCHET_SENDER_CHAIN}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_sender_chain.c>"
            "$<$<BOOL:${VSCR_RATCHET_SESSION}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_session.c>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_NODE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_group_message_key_node.c>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_GROUP_MESSAGE_KEY_ROOT_NODE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_group_message_key_root_node.c>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_MESSAGE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_message_key.c>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_MESSAGE_KEY_LIST_NODE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_message_key_list_node.c>"
            "$<$<BOOL:${VSCR_RATCHET_SKIPPED_MESSAGES}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_skipped_messages.c>"
            "$<$<BOOL:${VSCR_RATCHET_X3DH}>:${CMAKE_CURRENT_LIST_DIR}/src/vscr_ratchet_x3dh.c>"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscr_status.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscr_msg_type.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscr_group_msg_type.c"
        )

target_include_directories(ratchet
        PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/ratchet/private>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/ratchet>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/ratchet/private>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/src>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        )
