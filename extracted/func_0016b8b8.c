void func_0016b8b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016b8b8: addiu $sp, $sp, -0x10
    a3 = 0x26 << 16;                                            // 0x0016b8bc: lui $a3, 0x26
    a3 = a3 + 0x77e8;                                           // 0x0016b8c4: addiu $a3, $a3, 0x77e8
    v0 = 0x26 << 16;                                            // 0x0016b8c8: lui $v0, 0x26
    t0 = -0x40;                                                 // 0x0016b8cc: addiu $t0, $zero, -0x40
    v1 = g_00267838;  // Global at 0x00267838                   // 0x0016b910: lw $v1, 0x20($a0)
    g_00267808 = v1;  // Global at 0x00267808                   // 0x0016b914: sw $v1, 0x20($a3)
    a0 = v0 + 0x7810;                                           // 0x0016b918: addiu $a0, $v0, 0x7810
    a2 = 8;                                                     // 0x0016b920: addiu $a2, $zero, 8
    v0 = g_002677f8;  // Global at 0x002677f8                   // 0x0016b924: lw $v0, 0x10($a3)
    v1 = g_00267808;  // Global at 0x00267808                   // 0x0016b928: lw $v1, 0x20($a3)
    v0 = v0 + 0x3f;                                             // 0x0016b92c: addiu $v0, $v0, 0x3f
    v1 = v1 + 0x3f;                                             // 0x0016b930: addiu $v1, $v1, 0x3f
    v0 = v0 & t0;                                               // 0x0016b934: and $v0, $v0, $t0
    v1 = v1 & t0;                                               // 0x0016b938: and $v1, $v1, $t0
    g_002677f8 = v0;  // Global at 0x002677f8                   // 0x0016b93c: sw $v0, 0x10($a3)
    func_00107d30();  // 0x107c70                                // 0x0016b940: jal 0x107c70
    g_00267808 = v1;  // Global at 0x00267808                   // 0x0016b944: sw $v1, 0x20($a3)
    a0 = 0x26 << 16;                                            // 0x0016b948: lui $a0, 0x26
    a0 = a0 + 0x7818;                                           // 0x0016b954: addiu $a0, $a0, 0x7818
    a2 = 0x40;                                                  // 0x0016b958: addiu $a2, $zero, 0x40
    return func_00107d30();  // Tail call                        // 0x0016b95c: j 0x107c70
    sp = sp + 0x10;                                             // 0x0016b960: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016b964: nop 
    v0 = 0x26 << 16;                                            // 0x0016b968: lui $v0, 0x26
    v0 = v0 + 0x77e8;                                           // 0x0016b970: addiu $v0, $v0, 0x77e8
    v1 = 0x26 << 16;                                            // 0x0016b974: lui $v1, 0x26
    a0 = *(int32_t*)((t1) + 0x20);                              // 0x0016b9b8: lw $a0, 0x20($t1)
    t3 = v1 + 0x7810;                                           // 0x0016b9bc: addiu $t3, $v1, 0x7810
    g_00267808 = a0;  // Global at 0x00267808                   // 0x0016b9c0: sw $a0, 0x20($v0)
    g_00267808 = 0;  // Global at 0x00267808                    // 0x0016b9c8: sw $zero, 0x20($v0)
    g_002677f8 = 0;  // Global at 0x002677f8                    // 0x0016b9d0: sw $zero, 0x10($v0)
    t2 = -0x40;                                                 // 0x0016b9d4: addiu $t2, $zero, -0x40
label_0x16b9d8:
    a0 = a3 << 2;                                               // 0x0016b9d8: sll $a0, $a3, 2
    a3 = a3 + 1;                                                // 0x0016b9dc: addiu $a3, $a3, 1
    v1 = a0 + t0;                                               // 0x0016b9e0: addu $v1, $a0, $t0
    a0 = a0 + t3;                                               // 0x0016b9e4: addu $a0, $a0, $t3
    v0 = g_00260000;  // Global at 0x00260000                   // 0x0016b9e8: lw $v0, 0($v1)
    a1 = (a3 < 2) ? 1 : 0;                                      // 0x0016b9ec: slti $a1, $a3, 2
    v0 = v0 + 0x3f;                                             // 0x0016b9f0: addiu $v0, $v0, 0x3f
    v0 = v0 & t2;                                               // 0x0016b9f4: and $v0, $v0, $t2
    if (a1 != 0) goto label_0x16b9d8;                           // 0x0016b9f8: bnez $a1, 0x16b9d8
    g_00267818 = v0;  // Global at 0x00267818                   // 0x0016b9fc: sw $v0, 0($a0)
    v0 = 0x26 << 16;                                            // 0x0016ba00: lui $v0, 0x26
    a0 = *(int32_t*)((t1) + 0x1c);                              // 0x0016ba04: lw $a0, 0x1c($t1)
    a1 = v0 + 0x7818;                                           // 0x0016ba08: addiu $a1, $v0, 0x7818
    t2 = -0x40;                                                 // 0x0016ba10: addiu $t2, $zero, -0x40
label_0x16ba18:
    v0 = (a3 < a0) ? 1 : 0;                                     // 0x0016ba18: slt $v0, $a3, $a0
    a3 = a3 + 1;                                                // 0x0016ba1c: addiu $a3, $a3, 1
    if (v0 == 0) goto label_0x16ba40;                           // 0x0016ba20: beqz $v0, 0x16ba40
    t0 = (a3 < 0x10) ? 1 : 0;                                   // 0x0016ba24: slti $t0, $a3, 0x10
    v1 = t1 + a2;                                               // 0x0016ba28: addu $v1, $t1, $a2
    v0 = g_00260000;  // Global at 0x00260000                   // 0x0016ba2c: lw $v0, 0($v1)
    v0 = v0 + 0x3f;                                             // 0x0016ba30: addiu $v0, $v0, 0x3f
    v0 = v0 & t2;                                               // 0x0016ba34: and $v0, $v0, $t2
    goto label_0x16ba44;                                        // 0x0016ba38: b 0x16ba44
    g_00267818 = v0;  // Global at 0x00267818                   // 0x0016ba3c: sw $v0, 0($a1)
label_0x16ba40:
    g_00267818 = 0;  // Global at 0x00267818                    // 0x0016ba40: sw $zero, 0($a1)
label_0x16ba44:
    a1 = a1 + 4;                                                // 0x0016ba44: addiu $a1, $a1, 4
    if (t0 != 0) goto label_0x16ba18;                           // 0x0016ba48: bnez $t0, 0x16ba18
    t1 = t1 + 4;                                                // 0x0016ba4c: addiu $t1, $t1, 4
    return;                                                     // 0x0016ba50: jr $ra
    /* nop */                                                   // 0x0016ba54: nop 
}