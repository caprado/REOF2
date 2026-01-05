void func_001ca8b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001ca8b0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ca8bc: addu.qb $zero, $sp, $s1
    func_001ca260();  // 1ca260                                // 0x001ca8c4: jal 0x1ca260
    s0 = 0x31 << 16;                                            // 0x001ca8cc: lui $s0, 0x31
    s0 = s0 + 0x6ce0;                                           // 0x001ca8d4: addiu $s0, $s0, 0x6ce0
label_0x1ca8d8:
    func_0010b0e8();  // 10b0e8                                // 0x001ca8e0: jal 0x10b0e8
    a2 = 0x100;                                                 // 0x001ca8e4: addiu $a2, $zero, 0x100
    if (v0 == 0) goto label_0x1caac8;                           // 0x001ca8e8: beqz $v0, 0x1caac8
    /* nop */                                                   // 0x001ca8ec: nop 
    v0 = s1 + 1;                                                // 0x001ca8f0: addiu $v0, $s1, 1
    v0 = (s1 < 8) ? 1 : 0;                                      // 0x001ca8fc: slti $v0, $s1, 8
    if (v0 != 0) goto label_0x1ca8d8;                           // 0x001ca900: bnez $v0, 0x1ca8d8
    s0 = s0 + 0x134;                                            // 0x001ca904: addiu $s0, $s0, 0x134
    at = 0x31 << 16;                                            // 0x001ca908: lui $at, 0x31
    v0 = 0x31 << 16;                                            // 0x001ca90c: lui $v0, 0x31
    a1 = g_00316cd0;  // Global at 0x00316cd0                   // 0x001ca910: lw $a1, 0x6cd0($at)
    v1 = 0x134;                                                 // 0x001ca914: addiu $v1, $zero, 0x134
    v0 = v0 + 0x6ce0;                                           // 0x001ca918: addiu $v0, $v0, 0x6ce0
    /* multiply: a1 * v1 -> hi:lo */                            // 0x001ca920: mult $ac3, $a1, $v1
    func_001c88d0();  // 1c88d0                                // 0x001ca924: jal 0x1c88d0
    s0 = v0 + v1;                                               // 0x001ca928: addu $s0, $v0, $v1
    v0 = -1;                                                    // 0x001ca934: addiu $v0, $zero, -1
    if (s1 == v0) goto label_0x1ca958;                          // 0x001ca938: beq $s1, $v0, 0x1ca958
    /* nop */                                                   // 0x001ca93c: nop 
    v0 = -0x21;                                                 // 0x001ca940: addiu $v0, $zero, -0x21
    if (s1 == v0) goto label_0x1ca958;                          // 0x001ca944: beq $s1, $v0, 0x1ca958
    /* nop */                                                   // 0x001ca948: nop 
    goto label_0x1ca968;                                        // 0x001ca94c: b 0x1ca968
    /* nop */                                                   // 0x001ca950: nop 
    /* nop */                                                   // 0x001ca954: nop 
label_0x1ca958:
    v0 = -1;                                                    // 0x001ca958: addiu $v0, $zero, -1
    at = 0x31 << 16;                                            // 0x001ca95c: lui $at, 0x31
    goto label_0x1caaf8;                                        // 0x001ca960: b 0x1caaf8
    g_00317690 = v0;  // Global at 0x00317690                   // 0x001ca964: sw $v0, 0x7690($at)
label_0x1ca968:
    func_001ca270();  // 1ca270                                // 0x001ca968: jal 0x1ca270
    /* nop */                                                   // 0x001ca96c: nop 
label_0x1ca970:
    func_001ca260();  // 1ca260                                // 0x001ca970: jal 0x1ca260
    /* nop */                                                   // 0x001ca974: nop 
    a0 = 0x31 << 16;                                            // 0x001ca978: lui $a0, 0x31
    a0 = a0 + 0x7680;                                           // 0x001ca980: addiu $a0, $a0, 0x7680
    v1 = 1;                                                     // 0x001ca984: addiu $v1, $zero, 1
label_0x1ca988:
    v0 = g_00317680;  // Global at 0x00317680                   // 0x001ca988: lw $v0, 0($a0)
    if (v0 != v1) goto label_0x1ca9c8;                          // 0x001ca98c: bne $v0, $v1, 0x1ca9c8
    a1 = -1;                                                    // 0x001ca99c: addiu $a1, $zero, -1
    v1 = v0 << 2;                                               // 0x001ca9a0: sll $v1, $v0, 2
    v0 = 0x31 << 16;                                            // 0x001ca9a4: lui $v0, 0x31
    v0 = v0 + 0x7680;                                           // 0x001ca9a8: addiu $v0, $v0, 0x7680
    v0 = v0 + v1;                                               // 0x001ca9ac: addu $v0, $v0, $v1
    func_001c8930();  // 1c8930                                // 0x001ca9b0: jal 0x1c8930
    g_00317680 = a1;  // Global at 0x00317680                   // 0x001ca9b4: sw $a1, 0($v0)
    v0 = 0x71;                                                  // 0x001ca9b8: addiu $v0, $zero, 0x71
    at = 0x31 << 16;                                            // 0x001ca9bc: lui $at, 0x31
    goto label_0x1caaf8;                                        // 0x001ca9c0: b 0x1caaf8
    g_00317690 = v0;  // Global at 0x00317690                   // 0x001ca9c4: sw $v0, 0x7690($at)
label_0x1ca9c8:
    v0 = a1 + 1;                                                // 0x001ca9c8: addiu $v0, $a1, 1
    v0 = (a1 < 3) ? 1 : 0;                                      // 0x001ca9d4: slti $v0, $a1, 3
    if (v0 != 0) goto label_0x1ca988;                           // 0x001ca9d8: bnez $v0, 0x1ca988
    a0 = a0 + 4;                                                // 0x001ca9dc: addiu $a0, $a0, 4
    func_001c8980();  // 1c8980                                // 0x001ca9e4: jal 0x1c8980
    a1 = s0 + 0x100;                                            // 0x001ca9e8: addiu $a1, $s0, 0x100
    v0 = -2;                                                    // 0x001ca9f4: addiu $v0, $zero, -2
    if (v1 == v0) goto label_0x1caa38;                          // 0x001ca9f8: beq $v1, $v0, 0x1caa38
    /* nop */                                                   // 0x001ca9fc: nop 
    v0 = -1;                                                    // 0x001caa00: addiu $v0, $zero, -1
    if (v1 == v0) goto label_0x1caa20;                          // 0x001caa04: beq $v1, $v0, 0x1caa20
    v0 = -6;                                                    // 0x001caa08: addiu $v0, $zero, -6
    if (v1 == v0) goto label_0x1caa20;                          // 0x001caa0c: beq $v1, $v0, 0x1caa20
    /* nop */                                                   // 0x001caa10: nop 
    goto label_0x1caa38;                                        // 0x001caa14: b 0x1caa38
    /* nop */                                                   // 0x001caa18: nop 
    /* nop */                                                   // 0x001caa1c: nop 
label_0x1caa20:
    func_001c8930();  // 1c8930                                // 0x001caa20: jal 0x1c8930
    v0 = 1;                                                     // 0x001caa28: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001caa2c: lui $at, 0x31
    goto label_0x1caaf8;                                        // 0x001caa30: b 0x1caaf8
    g_00317690 = v0;  // Global at 0x00317690                   // 0x001caa34: sw $v0, 0x7690($at)
label_0x1caa38:
    at = (0 < v1) ? 1 : 0;                                      // 0x001caa38: slt $at, $zero, $v1
    if (at == 0) goto label_0x1caa60;                           // 0x001caa3c: beqz $at, 0x1caa60
    func_001c8930();  // 1c8930                                // 0x001caa44: jal 0x1c8930
    /* nop */                                                   // 0x001caa48: nop 
    func_001ca270();  // 1ca270                                // 0x001caa4c: jal 0x1ca270
    /* nop */                                                   // 0x001caa50: nop 
    goto label_0x1caa78;                                        // 0x001caa54: b 0x1caa78
    /* nop */                                                   // 0x001caa58: nop 
    /* nop */                                                   // 0x001caa5c: nop 
label_0x1caa60:
    func_001ca270();  // 1ca270                                // 0x001caa60: jal 0x1ca270
    /* nop */                                                   // 0x001caa64: nop 
    func_001cb250();  // 1cb250                                // 0x001caa68: jal 0x1cb250
    /* nop */                                                   // 0x001caa6c: nop 
    goto label_0x1ca970;                                        // 0x001caa70: b 0x1ca970
    /* nop */                                                   // 0x001caa74: nop 
label_0x1caa78:
    func_001ca260();  // 1ca260                                // 0x001caa78: jal 0x1ca260
    /* nop */                                                   // 0x001caa7c: nop 
    func_0010b2a0();  // 10b2a0                                // 0x001caa88: jal 0x10b2a0
    a2 = 0x100;                                                 // 0x001caa8c: addiu $a2, $zero, 0x100
    at = 0x31 << 16;                                            // 0x001caa90: lui $at, 0x31
    v0 = g_00316cd0;  // Global at 0x00316cd0                   // 0x001caa94: lw $v0, 0x6cd0($at)
    v0 = v0 + 1;                                                // 0x001caa98: addiu $v0, $v0, 1
    at = 0x31 << 16;                                            // 0x001caa9c: lui $at, 0x31
    g_00316cd0 = v0;  // Global at 0x00316cd0                   // 0x001caaa0: sw $v0, 0x6cd0($at)
    at = 0x31 << 16;                                            // 0x001caaa4: lui $at, 0x31
    v1 = g_00316cd0;  // Global at 0x00316cd0                   // 0x001caaa8: lw $v1, 0x6cd0($at)
    if (v1 >= 0) goto label_0x1caac0;                           // 0x001caaac: bgez $v1, 0x1caac0
    v0 = v1 & 7;                                                // 0x001caab0: andi $v0, $v1, 7
    if (v0 == 0) goto label_0x1caac0;                           // 0x001caab4: beqz $v0, 0x1caac0
    /* nop */                                                   // 0x001caab8: nop 
    v0 = v0 + -8;                                               // 0x001caabc: addiu $v0, $v0, -8
label_0x1caac0:
    at = 0x31 << 16;                                            // 0x001caac0: lui $at, 0x31
    g_00316cd0 = v0;  // Global at 0x00316cd0                   // 0x001caac4: sw $v0, 0x6cd0($at)
label_0x1caac8:
    g_00316f38 = 0;  // Global at 0x00316f38                    // 0x001caac8: sw $zero, 0x124($s0)
    v1 = 2;                                                     // 0x001caacc: addiu $v1, $zero, 2
    v0 = 4;                                                     // 0x001caad0: addiu $v0, $zero, 4
    g_00316f3c = v1;  // Global at 0x00316f3c                   // 0x001caad4: sw $v1, 0x128($s0)
    g_00316f40 = v0;  // Global at 0x00316f40                   // 0x001caad8: sw $v0, 0x12c($s0)
    v1 = s0 + 0x100;                                            // 0x001caadc: addiu $v1, $s0, 0x100
    v0 = s0 + 0x110;                                            // 0x001caae0: addiu $v0, $s0, 0x110
    g_00316f24 = v1;  // Global at 0x00316f24                   // 0x001caae4: sw $v1, 0x110($s0)
    func_001ca270();  // 1ca270                                // 0x001caae8: jal 0x1ca270
    g_00316f44 = v0;  // Global at 0x00316f44                   // 0x001caaec: sw $v0, 0x130($s0)
    goto label_0x1cab08;                                        // 0x001caaf0: b 0x1cab08
    v0 = s0 + 0x120;                                            // 0x001caaf4: addiu $v0, $s0, 0x120
label_0x1caaf8:
    func_001ca270();  // 1ca270                                // 0x001caaf8: jal 0x1ca270
    /* nop */                                                   // 0x001caafc: nop 
    /* nop */                                                   // 0x001cab04: nop 
label_0x1cab08:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cab0c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cab10: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cab14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cab18: jr $ra
    sp = sp + 0x40;                                             // 0x001cab1c: addiu $sp, $sp, 0x40
}