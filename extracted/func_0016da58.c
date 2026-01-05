void func_0016da58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016da58: addiu $sp, $sp, -0x30
    v0 = a1 << 2;                                               // 0x0016da5c: sll $v0, $a1, 2
    s3 = 0x23 << 16;                                            // 0x0016da64: lui $s3, 0x23
    s3 = s3 + v0;                                               // 0x0016da68: addu $s3, $s3, $v0
    s3 = g_00229370;  // Global at 0x00229370                   // 0x0016da6c: lw $s3, -0x6c90($s3)
    a2 = 0x157 << 16;                                           // 0x0016da78: lui $a2, 0x157
    a2 = a2 | 0x52a0;                                           // 0x0016da80: ori $a2, $a2, 0x52a0
    s2 = 0x23 << 16;                                            // 0x0016da98: lui $s2, 0x23
    s2 = s2 + v0;                                               // 0x0016da9c: addu $s2, $s2, $v0
    s2 = g_00229118;  // Global at 0x00229118                   // 0x0016daa0: lw $s2, -0x6ee8($s2)
    func_0015b7b0();  // 15b7b0                                // 0x0016daa4: jal 0x15b7b0
    v1 = v0 - s0;                                               // 0x0016daac: subu $v1, $v0, $s0
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x0016dab0: slti $v0, $v1, 0
    if (s1 == 0) goto label_0x16dbc8;                           // 0x0016dab4: beqz $s1, 0x16dbc8
    if (v0 != 0) v1 = 0;                                        // 0x0016dab8: movn $v1, $zero, $v0
    v0 = 0x7512;                                                // 0x0016dabc: addiu $v0, $zero, 0x7512
    if (s3 == v0) goto label_0x16dad8;                          // 0x0016dac0: beq $s3, $v0, 0x16dad8
    v0 = 0 | 0xea24;                                            // 0x0016dac4: ori $v0, $zero, 0xea24
    if (s3 != v0) goto label_0x16dbcc;                          // 0x0016dac8: bnel $s3, $v0, 0x16dbcc
    /* divide: v1 / s2 -> hi:lo */                              // 0x0016dacc: div $zero, $v1, $s2
    goto label_0x16dae8;                                        // 0x0016dad0: b 0x16dae8
    v0 = 0x23 << 16;                                            // 0x0016dad4: lui $v0, 0x23
label_0x16dad8:
    v0 = 0x23 << 16;                                            // 0x0016dad8: lui $v0, 0x23
    goto label_0x16daec;                                        // 0x0016dadc: b 0x16daec
    t0 = v0 + -0x6ec0;                                          // 0x0016dae0: addiu $t0, $v0, -0x6ec0
    /* nop */                                                   // 0x0016dae4: nop 
label_0x16dae8:
    t0 = v0 + -0x6ea0;                                          // 0x0016dae8: addiu $t0, $v0, -0x6ea0
label_0x16daec:
    v0 = g_00229160;  // Global at 0x00229160                   // 0x0016daec: lw $v0, 0($t0)
    /* divide: v1 / v0 -> hi:lo */                              // 0x0016daf0: div $zero, $v1, $v0
    /* beqzl $v0, 0x16dafc */                                   // 0x0016daf4: beqzl $v0, 0x16dafc
    /* break (trap) */                                          // 0x0016daf8: break 0, 7
    v1 = g_00229164;  // Global at 0x00229164                   // 0x0016dafc: lw $v1, 4($t0)
    a2 = g_00229168;  // Global at 0x00229168                   // 0x0016db00: lw $a2, 8($t0)
    /* mfhi $a0 */                                              // 0x0016db04
    /* mflo $a1 */                                              // 0x0016db08
    /* divide: a0 / v1 -> hi:lo */                              // 0x0016db0c: div $zero, $a0, $v1
    /* mfhi $v0 */                                              // 0x0016db14
    /* mflo $a0 */                                              // 0x0016db18
    v0 = (v1 < a2) ? 1 : 0;                                     // 0x0016db20: slt $v0, $v1, $a2
    if (v0 == 0) goto label_0x16db50;                           // 0x0016db24: beqz $v0, 0x16db50
    v0 = g_00229174;  // Global at 0x00229174                   // 0x0016db2c: lw $v0, 0x14($t0)
    /* divide: v1 / v0 -> hi:lo */                              // 0x0016db34: div $zero, $v1, $v0
    /* beqzl $v0, 0x16db40 */                                   // 0x0016db38: beqzl $v0, 0x16db40
    /* break (trap) */                                          // 0x0016db3c: break 0, 7
    /* mflo $v1 */                                              // 0x0016db40
    /* mfhi $a0 */                                              // 0x0016db44
    goto label_0x16dbb0;                                        // 0x0016db48: b 0x16dbb0
label_0x16db50:
    v0 = g_0022916c;  // Global at 0x0022916c                   // 0x0016db50: lw $v0, 0xc($t0)
    v1 = v1 - a2;                                               // 0x0016db54: subu $v1, $v1, $a2
    /* divide: v1 / v0 -> hi:lo */                              // 0x0016db58: div $zero, $v1, $v0
    /* beqzl $v0, 0x16db64 */                                   // 0x0016db5c: beqzl $v0, 0x16db64
    /* break (trap) */                                          // 0x0016db60: break 0, 7
    a2 = g_00229170;  // Global at 0x00229170                   // 0x0016db64: lw $a2, 0x10($t0)
    /* mfhi $v1 */                                              // 0x0016db68
    /* mflo $a0 */                                              // 0x0016db6c
    v0 = (v1 < a2) ? 1 : 0;                                     // 0x0016db70: slt $v0, $v1, $a2
    if (v0 == 0) goto label_0x16db90;                           // 0x0016db74: beqz $v0, 0x16db90
    a1 = a0 + 1;                                                // 0x0016db78: addiu $a1, $a0, 1
    v0 = g_0022917c;  // Global at 0x0022917c                   // 0x0016db7c: lw $v0, 0x1c($t0)
    goto label_0x16dbb4;                                        // 0x0016db84: b 0x16dbb4
    a3 = v1 + v0;                                               // 0x0016db88: addu $a3, $v1, $v0
    /* nop */                                                   // 0x0016db8c: nop 
label_0x16db90:
    v0 = g_00229174;  // Global at 0x00229174                   // 0x0016db90: lw $v0, 0x14($t0)
    v1 = v1 - a2;                                               // 0x0016db94: subu $v1, $v1, $a2
    /* divide: v1 / v0 -> hi:lo */                              // 0x0016db98: div $zero, $v1, $v0
    /* beqzl $v0, 0x16dba4 */                                   // 0x0016db9c: beqzl $v0, 0x16dba4
    /* break (trap) */                                          // 0x0016dba0: break 0, 7
    /* mflo $v1 */                                              // 0x0016dba4
    /* mfhi $a0 */                                              // 0x0016dba8
    a2 = v1 + 1;                                                // 0x0016dbac: addiu $a2, $v1, 1
label_0x16dbb0:
label_0x16dbb4:
    v0 = g_00229178;  // Global at 0x00229178                   // 0x0016dbb4: lw $v0, 0x18($t0)
    /* multiply: v0 * t2 -> hi:lo */                            // 0x0016dbb8: mult $ac3, $v0, $t2
    goto label_0x16dc0c;                                        // 0x0016dbbc: b 0x16dc0c
    a1 = v1 + a1;                                               // 0x0016dbc0: addu $a1, $v1, $a1
    /* nop */                                                   // 0x0016dbc4: nop 
label_0x16dbc8:
    /* divide: v1 / s2 -> hi:lo */                              // 0x0016dbc8: div $zero, $v1, $s2
label_0x16dbcc:
    v1 = 0x3c;                                                  // 0x0016dbcc: addiu $v1, $zero, 0x3c
    a0 = 0x3c;                                                  // 0x0016dbd0: addiu $a0, $zero, 0x3c
    /* beqzl $s2, 0x16dbdc */                                   // 0x0016dbd4: beqzl $s2, 0x16dbdc
    /* break (trap) */                                          // 0x0016dbd8: break 0, 7
    a1 = 0x3c;                                                  // 0x0016dbdc: addiu $a1, $zero, 0x3c
    a2 = 0x3c;                                                  // 0x0016dbe0: addiu $a2, $zero, 0x3c
    /* mflo $v0 */                                              // 0x0016dbe4
    /* mfhi $a3 */                                              // 0x0016dbe8
    /* divide: v0 / v1 -> hi:lo */                              // 0x0016dbec: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x0016dbf0
    /* mfhi $a0 */                                              // 0x0016dbf4
    /* divide: v0 / v1 -> hi:lo */                              // 0x0016dbf8: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x0016dc00
    /* mfhi $a1 */                                              // 0x0016dc04
label_0x16dc0c:
    *(uint32_t*)((s4) + 0x14) = a3;                             // 0x0016dc0c: sw $a3, 0x14($s4)
    *(uint32_t*)((s4) + 8) = t1;                                // 0x0016dc10: sw $t1, 8($s4)
    *(uint32_t*)((s4) + 0xc) = a1;                              // 0x0016dc14: sw $a1, 0xc($s4)
    *(uint32_t*)((s4) + 0x10) = a2;                             // 0x0016dc18: sw $a2, 0x10($s4)
    return;                                                     // 0x0016dc34: jr $ra
    sp = sp + 0x30;                                             // 0x0016dc38: addiu $sp, $sp, 0x30
}