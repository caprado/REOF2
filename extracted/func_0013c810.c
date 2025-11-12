void func_0013c810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = 0x20 << 16;                                            // 0x0013c810: lui $a2, 0x20
    v1 = a2 + 0x4710;                                           // 0x0013c818: addiu $v1, $a2, 0x4710
    v0 = g_00204710;  // Global at 0x00204710                   // 0x0013c81c: lb $v0, 0($v1)
    if (v0 != 0) goto label_0x13c830;                           // 0x0013c820: bnez $v0, 0x13c830
    goto label_0x13c868;                                        // 0x0013c828: b 0x13c868
label_0x13c830:
    a1 = a1 + 1;                                                // 0x0013c830: addiu $a1, $a1, 1
    v0 = a1 << 3;                                               // 0x0013c834: sll $v0, $a1, 3
    v1 = (a1 < 0x10) ? 1 : 0;                                   // 0x0013c838: slti $v1, $a1, 0x10
    if (v1 == 0) goto label_0x13c868;                           // 0x0013c83c: beqz $v1, 0x13c868
    v0 = v0 + a1;                                               // 0x0013c840: addu $v0, $v0, $a1
    v0 = v0 << 3;                                               // 0x0013c844: sll $v0, $v0, 3
    a0 = a2 + 0x4710;                                           // 0x0013c848: addiu $a0, $a2, 0x4710
    v0 = v0 - a1;                                               // 0x0013c84c: subu $v0, $v0, $a1
    v0 = v0 << 3;                                               // 0x0013c850: sll $v0, $v0, 3
    v0 = v0 + a0;                                               // 0x0013c854: addu $v0, $v0, $a0
    v1 = *(int8_t*)(v0);                                        // 0x0013c858: lb $v1, 0($v0)
    /* bnezl $v1, 0x13c834 */                                   // 0x0013c85c: bnezl $v1, 0x13c834
    a1 = a1 + 1;                                                // 0x0013c860: addiu $a1, $a1, 1
label_0x13c868:
    return;                                                     // 0x0013c868: jr $ra
}