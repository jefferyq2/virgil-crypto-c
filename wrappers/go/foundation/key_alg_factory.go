package foundation

// #include <virgil/crypto/foundation/vscf_foundation_public.h>
import "C"


/*
* Create a bridge between "raw keys" and algorithms that can import them.
*/
type KeyAlgFactory struct {
}

/*
* Create a key algorithm based on an identifier.
*/
func KeyAlgFactoryCreateFromAlgId(algId AlgId, random Random) (KeyAlg, error) {
    var error C.vscf_error_t
    C.vscf_error_reset(&error)

    proxyResult := /*pr4*/C.vscf_key_alg_factory_create_from_alg_id(C.vscf_alg_id_t(algId) /*pa7*/, (*C.vscf_impl_t)(random.ctx()), &error)

    err := FoundationErrorHandleStatus(error.status)
    if err != nil {
        return nil, err
    }

    return FoundationImplementationWrapKeyAlg(proxyResult) /* r4 */
}

/*
* Create a key algorithm correspond to a specific key.
*/
func KeyAlgFactoryCreateFromKey(key Key, random Random) (KeyAlg, error) {
    var error C.vscf_error_t
    C.vscf_error_reset(&error)

    proxyResult := /*pr4*/C.vscf_key_alg_factory_create_from_key((*C.vscf_impl_t)(key.ctx()), (*C.vscf_impl_t)(random.ctx()), &error)

    err := FoundationErrorHandleStatus(error.status)
    if err != nil {
        return nil, err
    }

    return FoundationImplementationWrapKeyAlg(proxyResult) /* r4 */
}

/*
* Create a key algorithm that can import "raw public key".
*/
func KeyAlgFactoryCreateFromRawPublicKey(publicKey *RawPublicKey, random Random) (KeyAlg, error) {
    var error C.vscf_error_t
    C.vscf_error_reset(&error)

    proxyResult := /*pr4*/C.vscf_key_alg_factory_create_from_raw_public_key((*C.vscf_raw_public_key_t)(publicKey.ctx()), (*C.vscf_impl_t)(random.ctx()), &error)

    err := FoundationErrorHandleStatus(error.status)
    if err != nil {
        return nil, err
    }

    return FoundationImplementationWrapKeyAlg(proxyResult) /* r4 */
}

/*
* Create a key algorithm that can import "raw private key".
*/
func KeyAlgFactoryCreateFromRawPrivateKey(privateKey *RawPrivateKey, random Random) (KeyAlg, error) {
    var error C.vscf_error_t
    C.vscf_error_reset(&error)

    proxyResult := /*pr4*/C.vscf_key_alg_factory_create_from_raw_private_key((*C.vscf_raw_private_key_t)(privateKey.ctx()), (*C.vscf_impl_t)(random.ctx()), &error)

    err := FoundationErrorHandleStatus(error.status)
    if err != nil {
        return nil, err
    }

    return FoundationImplementationWrapKeyAlg(proxyResult) /* r4 */
}
