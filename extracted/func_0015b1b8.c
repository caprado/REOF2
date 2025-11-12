void func_0015b1b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x0015b1b8: lui $v0, 0x25
    v0 = v0 + 0x63f0;                                           // 0x0015b1c0: addiu $v0, $v0, 0x63f0
    a1 = g_00256444;  // Global at 0x00256444                   // 0x0015b1c4: lw $a1, 0x54($v0)
    if (a1 <= 0) goto label_0x15b1fc;                           // 0x0015b1c8: blez $a1, 0x15b1fc
    a0 = g_00256448;  // Global at 0x00256448                   // 0x0015b1cc: lw $a0, 0x58($v0)
    a3 = 1;                                                     // 0x0015b1d0: addiu $a3, $zero, 1
    v1 = *(int32_t*)((a0) + 0x188);                             // 0x0015b1d4: lw $v1, 0x188($a0)
    if (v1 == a3) goto label_0x15b200;                          // 0x0015b1dc: beq $v1, $a3, 0x15b200
    a0 = a0 + 0x3e0;                                            // 0x0015b1e0: addiu $a0, $a0, 0x3e0
    a2 = a2 + 1;                                                // 0x0015b1e4: addiu $a2, $a2, 1
    v0 = (a2 < a1) ? 1 : 0;                                     // 0x0015b1e8: slt $v0, $a2, $a1
    /* nop */                                                   // 0x0015b1ec: nop 
    /* nop */                                                   // 0x0015b1f0: nop 
    /* bnezl $v0, 0x15b1d8 */                                   // 0x0015b1f4: bnezl $v0, 0x15b1d8
    v1 = *(int32_t*)((a0) + 0x188);                             // 0x0015b1f8: lw $v1, 0x188($a0)
label_0x15b1fc:
label_0x15b200:
    return;                                                     // 0x0015b200: jr $ra
    /* nop */                                                   // 0x0015b204: nop 
}