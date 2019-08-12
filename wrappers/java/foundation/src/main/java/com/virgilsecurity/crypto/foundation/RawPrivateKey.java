/*
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

package com.virgilsecurity.crypto.foundation;

/*
* Handles interchangeable private key representation.
*/
public class RawPrivateKey implements AutoCloseable, Key, PrivateKey {

    public long cCtx;

    /* Create underlying C context. */
    public RawPrivateKey() {
        super();
        this.cCtx = FoundationJNI.INSTANCE.rawPrivateKey_new();
    }

    /*
    * Return key data.
    */
    public byte[] data() {
        return FoundationJNI.INSTANCE.rawPrivateKey_data(this.cCtx);
    }

    /*
    * Return true if private key contains public key.
    */
    public boolean hasPublicKey() {
        return FoundationJNI.INSTANCE.rawPrivateKey_hasPublicKey(this.cCtx);
    }

    /*
    * Setup public key related to the private key.
    */
    public void setPublicKey(RawPublicKey rawPublicKey) {
        FoundationJNI.INSTANCE.rawPrivateKey_setPublicKey(this.cCtx, rawPublicKey);
    }

    /*
    * Return public key related to the private key.
    */
    public RawPublicKey getPublicKey() {
        return FoundationJNI.INSTANCE.rawPrivateKey_getPublicKey(this.cCtx);
    }

    /*
    * Acquire C context.
    * Note. This method is used in generated code only, and SHOULD NOT be used in another way.
    */
    public static RawPrivateKey getInstance(long cCtx) {
        RawPrivateKey newInstance = new RawPrivateKey();
        newInstance.cCtx = cCtx;
        return newInstance;
    }

    /* Close resource. */
    public void close() {
        FoundationJNI.INSTANCE.rawPrivateKey_close(this.cCtx);
    }

    /*
    * Algorithm identifier the key belongs to.
    */
    public AlgId algId() {
        return FoundationJNI.INSTANCE.rawPrivateKey_algId(this.cCtx);
    }

    /*
    * Return algorithm information that can be used for serialization.
    */
    public AlgInfo algInfo() {
        return FoundationJNI.INSTANCE.rawPrivateKey_algInfo(this.cCtx);
    }

    /*
    * Length of the key in bytes.
    */
    public int len() {
        return FoundationJNI.INSTANCE.rawPrivateKey_len(this.cCtx);
    }

    /*
    * Length of the key in bits.
    */
    public int bitlen() {
        return FoundationJNI.INSTANCE.rawPrivateKey_bitlen(this.cCtx);
    }

    /*
    * Check that key is valid.
    * Note, this operation can be slow.
    */
    public boolean isValid() {
        return FoundationJNI.INSTANCE.rawPrivateKey_isValid(this.cCtx);
    }

    /*
    * Extract public key from the private key.
    */
    public PublicKey extractPublicKey() {
        return FoundationJNI.INSTANCE.rawPrivateKey_extractPublicKey(this.cCtx);
    }
}
