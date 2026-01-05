void func_00155748() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00155748: addiu $sp, $sp, -0x20
    a2 = s0 << 3;                                               // 0x00155758: sll $a2, $s0, 3
    v0 = a2 - s0;                                               // 0x00155760: subu $v0, $a2, $s0
    v0 = v0 << 8;                                               // 0x00155768: sll $v0, $v0, 8
    v0 = v0 + 0x40;                                             // 0x0015576c: addiu $v0, $v0, 0x40
    v1 = ((unsigned)a3 < (unsigned)v0) ? 1 : 0;                 // 0x00155770: sltu $v1, $a3, $v0
    if (v1 == 0) goto label_0x1557a4;                           // 0x00155774: beqz $v1, 0x1557a4
    /* nop */                                                   // 0x00155784: nop 
label_0x155788:
    a0 = a0 + -0x700;                                           // 0x00155788: addiu $a0, $a0, -0x700
    v1 = v1 + -8;                                               // 0x0015578c: addiu $v1, $v1, -8
    v0 = ((unsigned)a3 < (unsigned)a0) ? 1 : 0;                 // 0x00155790: sltu $v0, $a3, $a0
    s0 = s0 + -1;                                               // 0x00155794: addiu $s0, $s0, -1
    /* nop */                                                   // 0x00155798: nop 
    if (v0 != 0) goto label_0x155788;                           // 0x0015579c: bnez $v0, 0x155788
label_0x1557a4:
    v1 = s1 + 0x3f;                                             // 0x001557a4: addiu $v1, $s1, 0x3f
    v0 = -0x40;                                                 // 0x001557a8: addiu $v0, $zero, -0x40
    s1 = v1 & v0;                                               // 0x001557ac: and $s1, $v1, $v0
    a2 = a2 - s0;                                               // 0x001557b0: subu $a2, $a2, $s0
    a2 = a2 << 8;                                               // 0x001557b8: sll $a2, $a2, 8
    func_00107c70();  // 107c70                                // 0x001557bc: jal 0x107c70
    v1 = 0x25 << 16;                                            // 0x001557c4: lui $v1, 0x25
    v1 = v1 + 0x6390;                                           // 0x001557c8: addiu $v1, $v1, 0x6390
    g_002563d4 = s1;  // Global at 0x002563d4                   // 0x001557d0: sw $s1, 0x44($v1)
    g_002563d0 = s0;  // Global at 0x002563d0                   // 0x001557d4: sw $s0, 0x40($v1)
    return;                                                     // 0x001557e0: jr $ra
    sp = sp + 0x20;                                             // 0x001557e4: addiu $sp, $sp, 0x20
}