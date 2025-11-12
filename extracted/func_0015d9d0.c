void func_0015d9d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 2;                                                     // 0x0015d9d0: addiu $v0, $zero, 2
    a1 = ((unsigned)a0 < (unsigned)3) ? 1 : 0;                  // 0x0015d9d4: sltiu $a1, $a0, 3
    if (a0 == v0) goto label_0x15da04;                          // 0x0015d9d8: beq $a0, $v0, 0x15da04
    v1 = 2;                                                     // 0x0015d9dc: addiu $v1, $zero, 2
    /* beqzl $a1, 0x15d9f8 */                                   // 0x0015d9e0: beqzl $a1, 0x15d9f8
    v0 = 3;                                                     // 0x0015d9e4: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x0015d9e8: addiu $v0, $zero, 1
    goto label_0x15d9fc;                                        // 0x0015d9ec: b 0x15d9fc
    v1 = 1;                                                     // 0x0015d9f0: addiu $v1, $zero, 1
    /* nop */                                                   // 0x0015d9f4: nop 
    v1 = 3;                                                     // 0x0015d9f8: addiu $v1, $zero, 3
label_0x15d9fc:
    if (a0 != v0) goto label_0x15da04;                          // 0x0015d9fc: bnel $a0, $v0, 0x15da04
    v1 = 3;                                                     // 0x0015da00: addiu $v1, $zero, 3
label_0x15da04:
    return;                                                     // 0x0015da04: jr $ra
}