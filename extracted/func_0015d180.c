void func_0015d180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = *(int32_t*)((a2) + 4);                                 // 0x0015d184: lw $a3, 4($a2)
    if (a3 == 0) return;  // Branch to 0x15d210                 // 0x0015d188: beqz $a3, 0x15d210
    a0 = *(int32_t*)((a2) + 8);                                 // 0x0015d190: lw $a0, 8($a2)
    v1 = 6 << 16;                                               // 0x0015d194: lui $v1, 6
    a1 = *(int32_t*)((a2) + 0xc);                               // 0x0015d198: lw $a1, 0xc($a2)
    v1 = v1 | 0x5400;                                           // 0x0015d19c: ori $v1, $v1, 0x5400
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x0015d1a4: slt $v1, $v1, $a0
    if (v1 != 0) return;  // Branch to 0x15d210                 // 0x0015d1a8: bnez $v1, 0x15d210
    v1 = 2;                                                     // 0x0015d1ac: addiu $v1, $zero, 2
    if (a3 == v1) return;  // Branch to 0x15d210                // 0x0015d1b0: beq $a3, $v1, 0x15d210
    /* nop */                                                   // 0x0015d1b4: nop 
    v0 = 1;                                                     // 0x0015d1b8: addiu $v0, $zero, 1
    if (a3 != v0) return;  // Branch to 0x15d210                // 0x0015d1bc: bne $a3, $v0, 0x15d210
    /* nop */                                                   // 0x0015d1c0: nop 
    a0 = *(int32_t*)((a2) + 0x14);                              // 0x0015d1c4: lw $a0, 0x14($a2)
    v0 = 0x2ee0;                                                // 0x0015d1c8: addiu $v0, $zero, 0x2ee0
    if (a0 == v0) return;  // Branch to 0x15d210                // 0x0015d1cc: beq $a0, $v0, 0x15d210
    v0 = 1;                                                     // 0x0015d1d0: addiu $v0, $zero, 1
    v0 = (a0 < 0x2ee1) ? 1 : 0;                                 // 0x0015d1d4: slti $v0, $a0, 0x2ee1
    if (v0 == 0) goto label_0x15d1f0;                           // 0x0015d1d8: beqz $v0, 0x15d1f0
    v0 = 0x5dc0;                                                // 0x0015d1dc: addiu $v0, $zero, 0x5dc0
    /* beqzl $a0, 0x15d210 */                                   // 0x0015d1e0: beqzl $a0, 0x15d210
    v0 = 1;                                                     // 0x0015d1e4: addiu $v0, $zero, 1
    goto label_0x15d1fc;                                        // 0x0015d1e8: b 0x15d1fc
    v0 = 0x1770;                                                // 0x0015d1ec: addiu $v0, $zero, 0x1770
label_0x15d1f0:
    if (a0 == v0) return;  // Branch to 0x15d210                // 0x0015d1f0: beq $a0, $v0, 0x15d210
    v0 = 1;                                                     // 0x0015d1f4: addiu $v0, $zero, 1
    v0 = 0 | 0xbb80;                                            // 0x0015d1f8: ori $v0, $zero, 0xbb80
label_0x15d1fc:
    if (a0 == v0) return;  // Branch to 0x15d210                // 0x0015d1fc: beql $a0, $v0, 0x15d210
    v0 = 1;                                                     // 0x0015d200: addiu $v0, $zero, 1
    return;                                                     // 0x0015d204: jr $ra
}