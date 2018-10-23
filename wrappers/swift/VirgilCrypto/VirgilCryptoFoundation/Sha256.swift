/// Copyright (C) 2015-2018 Virgil Security Inc.
///
/// All rights reserved.
///
/// Redistribution and use in source and binary forms, with or without
/// modification, are permitted provided that the following conditions are
/// met:
///
///     (1) Redistributions of source code must retain the above copyright
///     notice, this list of conditions and the following disclaimer.
///
///     (2) Redistributions in binary form must reproduce the above copyright
///     notice, this list of conditions and the following disclaimer in
///     the documentation and/or other materials provided with the
///     distribution.
///
///     (3) Neither the name of the copyright holder nor the names of its
///     contributors may be used to endorse or promote products derived from
///     this software without specific prior written permission.
///
/// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
/// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
/// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
/// DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
/// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
/// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
/// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
/// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
/// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
/// IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
/// POSSIBILITY OF SUCH DAMAGE.
///
/// Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>


import Foundation
import VSCFoundation

/// This is MbedTLS implementation of SHA256.
@objc(VSCFSha256) public class Sha256: NSObject, HashInfo, Hash, HashStream {

    /// Handle underlying C context.
    @objc private let c_ctx: OpaquePointer
    /// Length of the digest (hashing output) in bytes.
    @objc public static let digestLen: Int = 32
    /// Block length of the digest function in bytes.
    @objc public static let blockLen: Int = 64

    /// Initialize underlying C context.
    public override init() {
        self.c_ctx = vscf_sha256_new()
        super.init()
    }

    /// Release underlying C context.
    deinit {
        vscf_sha256_delete(self.c_ctx)
    }

    @objc public static func hash(data: Data) -> Data {
        let digestCount = Sha256.digestLen
        var digest = Data(count: digestCount)
        var digestBuf = vsc_buffer_new()
        defer {
            vsc_buffer_delete(digestBuf)
        }

        data.withUnsafeBytes({ (dataPointer: UnsafePointer<byte>) -> Void in
            digest.withUnsafeMutableBytes({ (digestPointer: UnsafeMutablePointer<byte>) -> Void in
                vsc_buffer_init(digestBuf)
                vsc_buffer_use(digestBuf, digestPointer, digestCount)
                vscf_sha256_hash(vsc_data(dataPointer, data.count), digestBuf)
            })
        })

        return digest
    }

    @objc public func start() {
        vscf_sha256_start(self.c_ctx)
    }

    @objc public func update(data: Data) {
        data.withUnsafeBytes({ (dataPointer: UnsafePointer<byte>) -> Void in
            vscf_sha256_update(self.c_ctx, vsc_data(dataPointer, data.count))
        })
    }

    @objc public func finish() -> Data {
        let digestCount = Sha256.digestLen
        var digest = Data(count: digestCount)
        var digestBuf = vsc_buffer_new()
        defer {
            vsc_buffer_delete(digestBuf)
        }

        digest.withUnsafeMutableBytes({ (digestPointer: UnsafeMutablePointer<byte>) -> Void in
            vsc_buffer_init(digestBuf)
            vsc_buffer_use(digestBuf, digestPointer, digestCount)
            vscf_sha256_finish(self.c_ctx, digestBuf)
        })

        return digest
    }
}
