void func_0015baf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_4, local_8, local_c;
    
    sp = sp + -0x40;                                            // 0x0015baf8: addiu $sp, $sp, -0x40
    a2 = sp + 4;                                                // 0x0015bb00: addiu $a2, $sp, 4
    a3 = sp + 8;                                                // 0x0015bb04: addiu $a3, $sp, 8
    t0 = sp + 0xc;                                              // 0x0015bb08: addiu $t0, $sp, 0xc
    t1 = sp + 0x10;                                             // 0x0015bb0c: addiu $t1, $sp, 0x10
    t2 = sp + 0x14;                                             // 0x0015bb10: addiu $t2, $sp, 0x14
    func_0015b860();  // 15b860                                // 0x0015bb1c: jal 0x15b860
    a1 = sp + 0x18;                                             // 0x0015bb24: addiu $a1, $sp, 0x18
    a2 = sp + 0x1c;                                             // 0x0015bb28: addiu $a2, $sp, 0x1c
    func_0015b998();  // 15b998                                // 0x0015bb2c: jal 0x15b998
    a1 = sp + 0x20;                                             // 0x0015bb38: addiu $a1, $sp, 0x20
    func_0015bad0();  // 15bad0                                // 0x0015bb3c: jal 0x15bad0
    a2 = sp + 0x24;                                             // 0x0015bb40: addiu $a2, $sp, 0x24
    func_0015baf0();  // 15baf0                                // 0x0015bb44: jal 0x15baf0
    a0 = local_8;                                               // 0x0015bb4c: lw $a0, 8($sp)
    v1 = local_4;                                               // 0x0015bb50: lw $v1, 4($sp)
    a1 = local_c;                                               // 0x0015bb54: lw $a1, 0xc($sp)
    v1 = v1 + a0;                                               // 0x0015bb58: addu $v1, $v1, $a0
    a0 = local_18;                                              // 0x0015bb5c: lw $a0, 0x18($sp)
    a2 = local_0;                                               // 0x0015bb60: lw $a2, 0($sp)
    v1 = v1 + a1;                                               // 0x0015bb64: addu $v1, $v1, $a1
    t0 = local_10;                                              // 0x0015bb68: lw $t0, 0x10($sp)
    v1 = v1 + 0x40;                                             // 0x0015bb6c: addiu $v1, $v1, 0x40
    a1 = local_1c;                                              // 0x0015bb70: lw $a1, 0x1c($sp)
    v1 = v1 + s0;                                               // 0x0015bb74: addu $v1, $v1, $s0
    a3 = local_14;                                              // 0x0015bb78: lw $a3, 0x14($sp)
    a2 = a2 + t0;                                               // 0x0015bb7c: addu $a2, $a2, $t0
    a0 = a0 + 0x40;                                             // 0x0015bb80: addiu $a0, $a0, 0x40
    v1 = v1 + a2;                                               // 0x0015bb84: addu $v1, $v1, $a2
    a1 = a1 + a3;                                               // 0x0015bb88: addu $a1, $a1, $a3
    a0 = a0 + a1;                                               // 0x0015bb90: addu $a0, $a0, $a1
    v1 = v1 + a0;                                               // 0x0015bb98: addu $v1, $v1, $a0
    v1 = v1 + v0;                                               // 0x0015bb9c: addu $v1, $v1, $v0
    v0 = v1 + 0x800;                                            // 0x0015bba0: addiu $v0, $v1, 0x800
    return;                                                     // 0x0015bba4: jr $ra
    sp = sp + 0x40;                                             // 0x0015bba8: addiu $sp, $sp, 0x40
}