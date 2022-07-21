/*
* Copyright (C) 2015-2022 Virgil Security, Inc.
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

package com.virgilsecurity.crypto.phe;

import com.virgilsecurity.crypto.foundation.*;

public class PheCommon {

    /*
    * PHE elliptic curve point binary length
    */
    public int getPhePointLength() {
        return 65;
    }

    /*
    * PHE max password length
    */
    public int getPheMaxPasswordLength() {
        return 128;
    }

    /*
    * PHE server identifier length
    */
    public int getPheServerIdentifierLength() {
        return 32;
    }

    /*
    * PHE client identifier length
    */
    public int getPheClientIdentifierLength() {
        return 32;
    }

    /*
    * PHE account key length
    */
    public int getPheAccountKeyLength() {
        return 32;
    }

    /*
    * PHE private key length
    */
    public int getPhePrivateKeyLength() {
        return 32;
    }

    /*
    * PHE public key length
    */
    public int getPhePublicKeyLength() {
        return 65;
    }

    /*
    * PHE hash length
    */
    public int getPheHashLen() {
        return 32;
    }

    /*
    * Maximum data size to encrypt
    */
    public int getPheMaxEncryptLen() {
        return 1024 * 1024 - 64;
    }

    /*
    * Maximum data size to decrypt
    */
    public int getPheMaxDecryptLen() {
        return 1024 * 1024;
    }

    /*
    * Maximum data to authenticate
    */
    public int getPheMaxAuthLen() {
        return 1024;
    }
}

