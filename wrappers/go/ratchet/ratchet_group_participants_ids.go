package ratchet

// #include <virgil/crypto/ratchet/vscr_ratchet_public.h>
import "C"
import "runtime"


/*
* Container for array of participants ids
*/
type RatchetGroupParticipantsIds struct {
    cCtx *C.vscr_ratchet_group_participants_ids_t /*ct2*/
}

/* Handle underlying C context. */
func (obj *RatchetGroupParticipantsIds) ctx() *C.vscf_impl_t {
    return (*C.vscf_impl_t)(obj.cCtx)
}

func NewRatchetGroupParticipantsIds() *RatchetGroupParticipantsIds {
    ctx := C.vscr_ratchet_group_participants_ids_new()
    obj := &RatchetGroupParticipantsIds {
        cCtx: ctx,
    }
    runtime.SetFinalizer(obj, obj.Delete)
    return obj
}

/* Acquire C context.
* Note. This method is used in generated code only, and SHOULD NOT be used in another way.
*/
func newRatchetGroupParticipantsIdsWithCtx(ctx *C.vscr_ratchet_group_participants_ids_t /*ct2*/) *RatchetGroupParticipantsIds {
    obj := &RatchetGroupParticipantsIds {
        cCtx: ctx,
    }
    runtime.SetFinalizer(obj, obj.Delete)
    return obj
}

/* Acquire retained C context.
* Note. This method is used in generated code only, and SHOULD NOT be used in another way.
*/
func newRatchetGroupParticipantsIdsCopy(ctx *C.vscr_ratchet_group_participants_ids_t /*ct2*/) *RatchetGroupParticipantsIds {
    obj := &RatchetGroupParticipantsIds {
        cCtx: C.vscr_ratchet_group_participants_ids_shallow_copy(ctx),
    }
    runtime.SetFinalizer(obj, obj.Delete)
    return obj
}

/*
* Release underlying C context.
*/
func (obj *RatchetGroupParticipantsIds) Delete() {
    runtime.SetFinalizer(obj, nil)
    obj.clear()
}

/*
* Release underlying C context.
*/
func (obj *RatchetGroupParticipantsIds) delete() {
    C.vscr_ratchet_group_participants_ids_delete(obj.cCtx)
}

/*
* Creates new array for size elements
*/
func NewRatchetGroupParticipantsIdsSize(size uint32) *RatchetGroupParticipantsIds {
    proxyResult := /*pr4*/C.vscr_ratchet_group_participants_ids_new_size((C.uint)(size)/*pa10*/)

    obj := &RatchetGroupParticipantsIds {
        cCtx: proxyResult,
    }
    runtime.SetFinalizer(obj, obj.Delete)
    return obj
}

/*
* Add participant id to array
*/
func (obj *RatchetGroupParticipantsIds) AddId(id []byte) {
    idData := helperWrapData (id)

    C.vscr_ratchet_group_participants_ids_add_id(obj.cCtx, idData)

    return
}
