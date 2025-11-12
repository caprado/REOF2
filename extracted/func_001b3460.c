void func_001b3460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001b3460: lui $at, 0x31
    v1 = g_00313804;  // Global at 0x00313804                   // 0x001b3464: lhu $v1, 0x3804($at)
    if (v1 == 0) goto label_0x1b347c;                           // 0x001b3468: beqz $v1, 0x1b347c
    at = 0x2b << 16;                                            // 0x001b346c: lui $at, 0x2b
    g_002ac448 = a0;  // Global at 0x002ac448                   // 0x001b3470: sw $a0, -0x3bb8($at)
    at = 0x2b << 16;                                            // 0x001b3474: lui $at, 0x2b
    g_002ac44c = a1;  // Global at 0x002ac44c                   // 0x001b3478: sw $a1, -0x3bb4($at)
label_0x1b347c:
    return;                                                     // 0x001b347c: jr $ra
    /* nop */                                                   // 0x001b3480: nop 
}