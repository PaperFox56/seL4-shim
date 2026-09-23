#include "sel4/shared_types_gen.h"
#include <sel4/sel4.h>

void _seL4_Send(seL4_CPtr dest, seL4_MessageInfo_t msgInfo) {
    seL4_Send(dest, msgInfo);
}

#ifdef config_kernel_mcs
sel4_messageinfo_t _sel4_recv(sel4_cptr src, sel4_word *sender, sel4_cptr reply) {
    return sel4_recv(src, sender, reply);
}

sel4_messageinfo_t _sel4_replyrecv(
    sel4_cptr dest,
    sel4_messageinfo_t msginfo,
    sel4_word *sender,
    sel4_cptr reply
) {
    return sel4_replyrecv(dest, msginfo, sender, reply);
}

sel4_messageinfo_t _sel4_nbrecv(sel4_cptr src, sel4_word *sender, sel4_cptr reply) {
    return sel4_nbrecv(src, sender, reply);
}

sel4_messageinfo_t _sel4_nbsendrecv(
    sel4_cptr dest,
    sel4_messageinfo_t msginfo,
    sel4_cptr src,
    sel4_word *sender,
    sel4_cptr reply
) {
    return sel4_nbsendrecv(dest, msginfo, src, sender, reply);
}

sel4_messageinfo_t _sel4_nbsendwait(
    sel4_cptr dest,
    sel4_messageinfo_t msginfo,
    sel4_cptr src,
    sel4_word *sender
) {
    return sel4_nbsendwait(src, msginfo, src, sender);
}

void _sel4_nbwait(sel4_cptr src, sel4_word *sender) {
    sel4_nbwait(src, sender);
}
#else
seL4_MessageInfo_t _seL4_Recv(seL4_CPtr src, seL4_Word *sender) {
    return seL4_Recv(src, sender);
}

seL4_MessageInfo_t _seL4_ReplyRecv(seL4_CPtr dest, seL4_MessageInfo_t msgInfo, seL4_Word *sender) {
    return seL4_ReplyRecv(dest, msgInfo, sender);
}

seL4_MessageInfo_t _seL4_NBRecv(seL4_CPtr src, seL4_Word *sender) {
    return seL4_NBRecv(src, sender);
}

void _seL4_Reply(seL4_MessageInfo_t msgInfo) {
    seL4_Reply(msgInfo);
}
#endif

seL4_MessageInfo_t _seL4_Call(seL4_CPtr dest, seL4_MessageInfo_t msgInfo) {
    return seL4_Call(dest, msgInfo);
}

void _seL4_NBSend(seL4_CPtr dest, seL4_MessageInfo_t msgInfo) {
    seL4_NBSend(dest, msgInfo);
}

void _seL4_Yield() {
    seL4_Yield();
}

void _seL4_Signal(seL4_CPtr dest) {
    seL4_Signal(dest);
}

void _seL4_Wait(seL4_CPtr src, seL4_Word *sender) {
    seL4_Wait(src, sender);
}

void _seL4_Poll(seL4_CPtr src, seL4_Word *sender) {
    seL4_Poll(src, sender);
}
