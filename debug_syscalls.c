#define CONFIG_DANGEROUS_CODE_INJECTION
#include <sel4/sel4.h>

#if CONFIG_DEBUG_BUILD

void _seL4_DebugPutChar(char c) {
    seL4_DebugPutChar(c);
}

void _seL4_DebugDumpScheduler() {
    seL4_DebugDumpScheduler();
}

void _seL4_DebugHalt() {
    seL4_DebugHalt();
}

void _seL4_DebugSnapshot() {
    seL4_DebugSnapshot();
}

seL4_Uint32 _seL4_DebugCapIdentify(seL4_CPtr cap) {
    return seL4_DebugCapIdentify(cap);
}

void _seL4_DebugNameThread(seL4_CPtr tcb, const char *name) {
    seL4_DebugNameThread(tcb, name);
}

#ifdef CONFIG_ENABLE_SMP_SUPPORT
seL4_Word _seL4_DebugGetThreadAffinity(seL4_CPtr tcb) {
    return seL4_DebugGetThreadAffinity(tcb);
}

#endif /* CONFIG_ENABLE_SMP_SUPPORT */
#endif /* CONFIG_DEBUG_BUILD */

#ifdef CONFIG_DANGEROUS_CODE_INJECTION
void _seL4_DebugRun(void(*userfn)(void *), void *userarg) {
    seL4_DebugRun(userfn, userarg);
}
#endif /* CONFIG_DANGEROUS_CODE_INJECTION */
