/**
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


const initCurve25519PrivateKey = Module => {
    /**
     * This is implementation of CURVE25519 private key
     */
    class Curve25519PrivateKey {

        /**
         * Define whether a private key can be imported or not.
         */
        static get CAN_IMPORT_PRIVATE_KEY() {
            return true;
        }

        get CAN_IMPORT_PRIVATE_KEY() {
            return Curve25519PrivateKey.CAN_IMPORT_PRIVATE_KEY;
        }

        /**
         * Define whether a private key can be exported or not.
         */
        static get CAN_EXPORT_PRIVATE_KEY() {
            return true;
        }

        get CAN_EXPORT_PRIVATE_KEY() {
            return Curve25519PrivateKey.CAN_EXPORT_PRIVATE_KEY;
        }

        /**
         * Create object with underlying C context.
         *
         * Note. Parameter 'ctxPtr' SHOULD be passed from the generated code only.
         */
        constructor(ctxPtr=undefined) {
            this.name = 'Curve25519PrivateKey';

            if (typeof ctxPtr === 'undefined') {
                this.ctxPtr = Module._vscf_curve25519_private_key_new();
            } else {
                this.ctxPtr = ctxPtr;
            }
        }

        /**
         * Acquire C context by making it's shallow copy.
         *
         * Note. This method is used in generated code only, and SHOULD NOT be used in another way.
         */
        static newAndUseCContext(ctxPtr) {
            // assert(typeof ctxPtr === 'number');
            return new Curve25519PrivateKey(Module._vscf_curve25519_private_key_shallow_copy(ctxPtr));
        }

        /**
         * Acquire C context by taking it ownership.
         *
         * Note. This method is used in generated code only, and SHOULD NOT be used in another way.
         */
        static newAndTakeCContext(ctxPtr) {
            // assert(typeof ctxPtr === 'number');
            return new Curve25519PrivateKey(ctxPtr);
        }

        /**
         * Release underlying C context.
         */
        delete() {
            if (typeof this.ctxPtr !== 'undefined' && this.ctxPtr !== null) {
                Module._vscf_curve25519_private_key_delete(this.ctxPtr);
                this.ctxPtr = null;
            }
        }

        set random(random) {
            Module._vscf_curve25519_private_key_release_random(this.ctxPtr)
            Module._vscf_curve25519_private_key_use_random(this.ctxPtr, random.ctxPtr)
        }

        set ecies(ecies) {
            Module._vscf_curve25519_private_key_release_ecies(this.ctxPtr)
            Module._vscf_curve25519_private_key_use_ecies(this.ctxPtr, ecies.ctxPtr)
        }

        /**
         * Provide algorithm identificator.
         */
        algId() {
            var proxyResult = undefined;
            proxyResult = Module._vscf_curve25519_private_key_alg_id(this.ctxPtr);
            return proxyResult;
        }

        /**
         * Produce object with algorithm information and configuration parameters.
         */
        produceAlgInfo() {
            var proxyResult = undefined;
            proxyResult = Module._vscf_curve25519_private_key_produce_alg_info(this.ctxPtr);

            const jsResult = FoundationInterface.newAndTakeCContext(proxyResult);
            return jsResult;
        }

        /**
         * Restore algorithm configuration from the given object.
         */
        restoreAlgInfo(algInfo) {
            const proxyResult = Module._vscf_curve25519_private_key_restore_alg_info(this.ctxPtr, algInfo.ctxPtr);
            FoundationError.handleStatusCode(proxyResult);
        }

        /**
         * Length of the key in bytes.
         */
        keyLen() {
            var proxyResult = undefined;
            proxyResult = Module._vscf_curve25519_private_key_key_len(this.ctxPtr);
            return proxyResult;
        }

        /**
         * Length of the key in bits.
         */
        keyBitlen() {
            var proxyResult = undefined;
            proxyResult = Module._vscf_curve25519_private_key_key_bitlen(this.ctxPtr);
            return proxyResult;
        }

        /**
         * Generate new private or secret key.
         * Note, this operation can be slow.
         */
        generateKey() {
            const proxyResult = Module._vscf_curve25519_private_key_generate_key(this.ctxPtr);
            FoundationError.handleStatusCode(proxyResult);
        }

        /**
         * Decrypt given data.
         */
        decrypt(data) {
            // assert(typeof data === 'Uint8Array')

            //  Copy bytes from JS memory to the WASM memory.
            const dataSize = data.length * data.BYTES_PER_ELEMENT;
            const dataPtr = Module._malloc(dataSize);
            Module.HEAP8.set(data, dataPtr);

            //  Create C structure vsc_data_t.
            const dataCtxSize = Module._vsc_data_ctx_size();
            const dataCtxPtr = Module._malloc(dataCtxSize);

            //  Point created vsc_data_t object to the copied bytes.
            Module._vsc_data(dataCtxPtr, dataPtr, dataSize);

            const outSize = Curve25519PrivateKey.decryptedLen(data.length);
            const outCtxPtr = Module._vsc_buffer_new_with_capacity(outSize);

            try {
                const proxyResult = Module._vscf_curve25519_private_key_decrypt(this.ctxPtr, dataCtxPtr, outCtxPtr);
                FoundationError.handleStatusCode(proxyResult);

                const outPtr = Module._vsc_buffer_bytes(outCtxPtr);
                const out = Module.HEAPU8.slice(outPtr, outPtr + outSize);
                return out;
            } finally {
                Module._free(dataPtr);
                Module._free(dataCtxPtr);
                Module._vsc_buffer_delete(outCtxPtr);
            }
        }

        /**
         * Calculate required buffer length to hold the decrypted data.
         */
        decryptedLen(dataLen) {
            // assert(typeof dataLen === 'number')

            var proxyResult = undefined;
            proxyResult = Module._vscf_curve25519_private_key_decrypted_len(this.ctxPtr, dataLen);
            return proxyResult;
        }

        /**
         * Extract public part of the key.
         */
        extractPublicKey() {
            var proxyResult = undefined;
            proxyResult = Module._vscf_curve25519_private_key_extract_public_key(this.ctxPtr);

            const jsResult = FoundationInterface.newAndTakeCContext(proxyResult);
            return jsResult;
        }

        /**
         * Export private key in the binary format.
         *
         * Binary format must be defined in the key specification.
         * For instance, RSA private key must be exported in format defined in
         * RFC 3447 Appendix A.1.2.
         */
        exportPrivateKey() {
            const outSize = Curve25519PrivateKey.exportedPrivateKeyLen();
            const outCtxPtr = Module._vsc_buffer_new_with_capacity(outSize);

            try {
                const proxyResult = Module._vscf_curve25519_private_key_export_private_key(this.ctxPtr, outCtxPtr);
                FoundationError.handleStatusCode(proxyResult);

                const outPtr = Module._vsc_buffer_bytes(outCtxPtr);
                const out = Module.HEAPU8.slice(outPtr, outPtr + outSize);
                return out;
            } finally {
                Module._vsc_buffer_delete(outCtxPtr);
            }
        }

        /**
         * Return length in bytes required to hold exported private key.
         */
        exportedPrivateKeyLen() {
            var proxyResult = undefined;
            proxyResult = Module._vscf_curve25519_private_key_exported_private_key_len(this.ctxPtr);
            return proxyResult;
        }

        /**
         * Import private key from the binary format.
         *
         * Binary format must be defined in the key specification.
         * For instance, RSA private key must be imported from the format defined in
         * RFC 3447 Appendix A.1.2.
         */
        importPrivateKey(data) {
            // assert(typeof data === 'Uint8Array')

            //  Copy bytes from JS memory to the WASM memory.
            const dataSize = data.length * data.BYTES_PER_ELEMENT;
            const dataPtr = Module._malloc(dataSize);
            Module.HEAP8.set(data, dataPtr);

            //  Create C structure vsc_data_t.
            const dataCtxSize = Module._vsc_data_ctx_size();
            const dataCtxPtr = Module._malloc(dataCtxSize);

            //  Point created vsc_data_t object to the copied bytes.
            Module._vsc_data(dataCtxPtr, dataPtr, dataSize);

            try {
                const proxyResult = Module._vscf_curve25519_private_key_import_private_key(this.ctxPtr, dataCtxPtr);
                FoundationError.handleStatusCode(proxyResult);
            } finally {
                Module._free(dataPtr);
                Module._free(dataCtxPtr);
            }
        }

        /**
         * Compute shared key for 2 asymmetric keys.
         * Note, shared key can be used only for symmetric cryptography.
         */
        computeSharedKey(publicKey) {
            const sharedKeySize = Curve25519PrivateKey.sharedKeyLen();
            const sharedKeyCtxPtr = Module._vsc_buffer_new_with_capacity(sharedKeySize);

            try {
                const proxyResult = Module._vscf_curve25519_private_key_compute_shared_key(this.ctxPtr, publicKey.ctxPtr, sharedKeyCtxPtr);
                FoundationError.handleStatusCode(proxyResult);

                const sharedKeyPtr = Module._vsc_buffer_bytes(sharedKeyCtxPtr);
                const sharedKey = Module.HEAPU8.slice(sharedKeyPtr, sharedKeyPtr + sharedKeySize);
                return sharedKey;
            } finally {
                Module._vsc_buffer_delete(sharedKeyCtxPtr);
            }
        }

        /**
         * Return number of bytes required to hold shared key.
         */
        sharedKeyLen() {
            var proxyResult = undefined;
            proxyResult = Module._vscf_curve25519_private_key_shared_key_len(this.ctxPtr);
            return proxyResult;
        }

        /**
         * Setup predefined values to the uninitialized class dependencies.
         */
        setupDefaults() {
            const proxyResult = Module._vscf_curve25519_private_key_setup_defaults(this.ctxPtr);
            FoundationError.handleStatusCode(proxyResult);
        }
    }
};

module.exports = initCurve25519PrivateKey;
