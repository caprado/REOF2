void func_00148a78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_50, local_58, local_60, local_68, local_70, local_78;
    
    sp = sp + -0x50;                                            // 0x00148a78: addiu $sp, $sp, -0x50
    t6 = 0xfff << 16;                                           // 0x00148a7c: lui $t6, 0xfff
    v0 = local_78;                                              // 0x00148a80: lw $v0, 0x78($sp)
    t6 = t6 | 0xffff;                                           // 0x00148a84: ori $t6, $t6, 0xffff
    v1 = local_70;                                              // 0x00148a88: lw $v1, 0x70($sp)
    /* multiply: v1 * v0 -> hi:lo */                            // 0x00148a90: mult $ac3, $v1, $v0
    s0 = -1;                                                    // 0x00148a94: addiu $s0, $zero, -1
    s2 = 0x180;                                                 // 0x00148a9c: addiu $s2, $zero, 0x180
    t4 = local_58;                                              // 0x00148aa0: lw $t4, 0x58($sp)
    s0 = (s0 < v1) ? 1 : 0;                                     // 0x00148aa8: slt $s0, $s0, $v1
    v0 = v1 + 0x1ff;                                            // 0x00148aac: addiu $v0, $v1, 0x1ff
    if (s0 != 0) v0 = v1;                                       // 0x00148ab0: movn $v0, $v1, $s0
    s1 = t4 & t6;                                               // 0x00148ab4: and $s1, $t4, $t6
    v0 = v0 >> 9;                                               // 0x00148ab8: sra $v0, $v0, 9
    /* multiply: v0 * s2 -> hi:lo */                            // 0x00148ac0: mult $ac3, $v0, $s2
    t5 = local_60;                                              // 0x00148ac4: lw $t5, 0x60($sp)
    s3 = 0x2000 << 16;                                          // 0x00148ac8: lui $s3, 0x2000
    s4 = local_68;                                              // 0x00148ad0: lw $s4, 0x68($sp)
    s1 = s1 | s3;                                               // 0x00148ad4: or $s1, $s1, $s3
    t7 = t5 & t6;                                               // 0x00148ad8: and $t7, $t5, $t6
    *(uint32_t*)(a0) = s1;                                      // 0x00148adc: sw $s1, 0($a0)
    t4 = v1 + t4;                                               // 0x00148ae0: addu $t4, $v1, $t4
    t7 = t7 | s3;                                               // 0x00148ae4: or $t7, $t7, $s3
    /* multiply: v0 * s2 -> hi:lo */                            // 0x00148ae8: mult $ac3, $v0, $s2
    *(uint32_t*)(a1) = t7;                                      // 0x00148af0: sw $t7, 0($a1)
    t4 = t4 & t6;                                               // 0x00148af4: and $t4, $t4, $t6
    t4 = t4 | s3;                                               // 0x00148af8: or $t4, $t4, $s3
    t5 = v1 + t5;                                               // 0x00148b04: addu $t5, $v1, $t5
    v0 = a0 + s4;                                               // 0x00148b08: addu $v0, $a0, $s4
    v1 = s4 & t6;                                               // 0x00148b0c: and $v1, $s4, $t6
    t5 = t5 & t6;                                               // 0x00148b10: and $t5, $t5, $t6
    v1 = v1 | s3;                                               // 0x00148b14: or $v1, $v1, $s3
    v0 = v0 & t6;                                               // 0x00148b18: and $v0, $v0, $t6
    *(uint32_t*)(a2) = v1;                                      // 0x00148b1c: sw $v1, 0($a2)
    t5 = t5 | s3;                                               // 0x00148b20: or $t5, $t5, $s3
    *(uint32_t*)(a3) = s1;                                      // 0x00148b24: sw $s1, 0($a3)
    v0 = v0 | s3;                                               // 0x00148b28: or $v0, $v0, $s3
    *(uint32_t*)(t0) = t7;                                      // 0x00148b2c: sw $t7, 0($t0)
    *(uint32_t*)(t1) = v1;                                      // 0x00148b30: sw $v1, 0($t1)
    *(uint32_t*)(t2) = t4;                                      // 0x00148b34: sw $t4, 0($t2)
    v1 = local_50;                                              // 0x00148b38: lw $v1, 0x50($sp)
    *(uint32_t*)(t3) = t5;                                      // 0x00148b3c: sw $t5, 0($t3)
    *(uint32_t*)(v1) = v0;                                      // 0x00148b4c: sw $v0, 0($v1)
    return;                                                     // 0x00148b50: jr $ra
    sp = sp + 0x50;                                             // 0x00148b54: addiu $sp, $sp, 0x50
}