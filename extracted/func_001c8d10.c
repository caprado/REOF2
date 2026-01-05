void func_001c8d10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_3c;
    
    sp = sp + -0x50;                                            // 0x001c8d10: addiu $sp, $sp, -0x50
    at = 0x31 << 16;                                            // 0x001c8d14: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8d1c: addu.qb $zero, $sp, $s1
    v0 = g_00316aa0;  // Global at 0x00316aa0                   // 0x001c8d28: lw $v0, 0x6aa0($at)
    if (v0 == 0) goto label_0x1c8d40;                           // 0x001c8d2c: beqz $v0, 0x1c8d40
    goto label_0x1c8e38;                                        // 0x001c8d34: b 0x1c8e38
    /* nop */                                                   // 0x001c8d38: nop 
    /* nop */                                                   // 0x001c8d3c: nop 
label_0x1c8d40:
    at = 0x31 << 16;                                            // 0x001c8d40: lui $at, 0x31
    v1 = g_00316a98;  // Global at 0x00316a98                   // 0x001c8d44: lw $v1, 0x6a98($at)
    if (v1 == 0) goto label_0x1c8d58;                           // 0x001c8d48: beqz $v1, 0x1c8d58
    /* nop */                                                   // 0x001c8d4c: nop 
    goto label_0x1c8e38;                                        // 0x001c8d50: b 0x1c8e38
    /* nop */                                                   // 0x001c8d54: nop 
label_0x1c8d58:
    func_001c8c90();  // 1c8c90                                // 0x001c8d58: jal 0x1c8c90
    /* nop */                                                   // 0x001c8d5c: nop 
    if (v0 != 0) goto label_0x1c8d70;                           // 0x001c8d60: bnez $v0, 0x1c8d70
    at = 0x31 << 16;                                            // 0x001c8d64: lui $at, 0x31
    goto label_0x1c8e38;                                        // 0x001c8d68: b 0x1c8e38
    v0 = g_00316aa0;  // Global at 0x00316aa0                   // 0x001c8d6c: lw $v0, 0x6aa0($at)
label_0x1c8d70:
    v0 = 3;                                                     // 0x001c8d70: addiu $v0, $zero, 3
    if (s1 == v0) goto label_0x1c8df8;                          // 0x001c8d74: beq $s1, $v0, 0x1c8df8
    v0 = 2;                                                     // 0x001c8d78: addiu $v0, $zero, 2
    if (s1 == v0) goto label_0x1c8df8;                          // 0x001c8d7c: beq $s1, $v0, 0x1c8df8
    /* nop */                                                   // 0x001c8d80: nop 
    v0 = 1;                                                     // 0x001c8d84: addiu $v0, $zero, 1
    if (s1 == v0) goto label_0x1c8d98;                          // 0x001c8d88: beq $s1, $v0, 0x1c8d98
    /* nop */                                                   // 0x001c8d8c: nop 
    goto label_0x1c8e30;                                        // 0x001c8d90: b 0x1c8e30
    /* nop */                                                   // 0x001c8d94: nop 
label_0x1c8d98:
    if (s0 == 0) goto label_0x1c8dc0;                           // 0x001c8d98: beqz $s0, 0x1c8dc0
    /* nop */                                                   // 0x001c8d9c: nop 
    func_001ca080();  // 1ca080                                // 0x001c8da0: jal 0x1ca080
    /* nop */                                                   // 0x001c8da4: nop 
    if (v0 >= 0) goto label_0x1c8dc0;                           // 0x001c8da8: bgez $v0, 0x1c8dc0
    /* nop */                                                   // 0x001c8dac: nop 
    v0 = 1;                                                     // 0x001c8db0: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001c8db4: lui $at, 0x31
    goto label_0x1c8e30;                                        // 0x001c8db8: b 0x1c8e30
    g_00316aa0 = v0;  // Global at 0x00316aa0                   // 0x001c8dbc: sw $v0, 0x6aa0($at)
label_0x1c8dc0:
    func_001ca170();  // 1ca170                                // 0x001c8dc0: jal 0x1ca170
    a0 = sp + 0x4c;                                             // 0x001c8dc4: addiu $a0, $sp, 0x4c
    v1 = 1;                                                     // 0x001c8dc8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c8de8;                          // 0x001c8dcc: beq $v0, $v1, 0x1c8de8
    /* nop */                                                   // 0x001c8dd0: nop 
    if (v0 == 0) goto label_0x1c8e30;                           // 0x001c8dd4: beqz $v0, 0x1c8e30
    /* nop */                                                   // 0x001c8dd8: nop 
    goto label_0x1c8e30;                                        // 0x001c8ddc: b 0x1c8e30
    /* nop */                                                   // 0x001c8de0: nop 
    /* nop */                                                   // 0x001c8de4: nop 
label_0x1c8de8:
    v0 = 2;                                                     // 0x001c8de8: addiu $v0, $zero, 2
    at = 0x31 << 16;                                            // 0x001c8dec: lui $at, 0x31
    goto label_0x1c8e30;                                        // 0x001c8df0: b 0x1c8e30
    g_00316aa0 = v0;  // Global at 0x00316aa0                   // 0x001c8df4: sw $v0, 0x6aa0($at)
label_0x1c8df8:
    func_001c9b00();  // 1c9b00                                // 0x001c8df8: jal 0x1c9b00
    a0 = sp + 0x30;                                             // 0x001c8dfc: addiu $a0, $sp, 0x30
    if (v0 >= 0) goto label_0x1c8e18;                           // 0x001c8e00: bgez $v0, 0x1c8e18
    /* nop */                                                   // 0x001c8e04: nop 
    v0 = 1;                                                     // 0x001c8e08: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001c8e0c: lui $at, 0x31
    goto label_0x1c8e30;                                        // 0x001c8e10: b 0x1c8e30
    g_00316aa0 = v0;  // Global at 0x00316aa0                   // 0x001c8e14: sw $v0, 0x6aa0($at)
label_0x1c8e18:
    v1 = local_3c;                                              // 0x001c8e18: lh $v1, 0x3c($sp)
    v0 = 4;                                                     // 0x001c8e1c: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1c8e30;                          // 0x001c8e20: beq $v1, $v0, 0x1c8e30
    v0 = 2;                                                     // 0x001c8e24: addiu $v0, $zero, 2
    at = 0x31 << 16;                                            // 0x001c8e28: lui $at, 0x31
    g_00316aa0 = v0;  // Global at 0x00316aa0                   // 0x001c8e2c: sw $v0, 0x6aa0($at)
label_0x1c8e30:
    at = 0x31 << 16;                                            // 0x001c8e30: lui $at, 0x31
    v0 = g_00316aa0;  // Global at 0x00316aa0                   // 0x001c8e34: lw $v0, 0x6aa0($at)
label_0x1c8e38:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8e3c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8e40: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8e44: jr $ra
    sp = sp + 0x50;                                             // 0x001c8e48: addiu $sp, $sp, 0x50
}