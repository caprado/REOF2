void func_001b2b50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0;
    
    sp = sp + -0xb0;                                            // 0x001b2b50: addiu $sp, $sp, -0xb0
    a0 = a0 & 0xff;                                             // 0x001b2b54: andi $a0, $a0, 0xff
    a1 = 0x49 << 16;                                            // 0x001b2b5c: lui $a1, 0x49
    v1 = a0 + -1;                                               // 0x001b2b64: addiu $v1, $a0, -1
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001b2b68: dps.w.ph $ac0, $sp, $s7
    a3 = v1 & 0xff;                                             // 0x001b2b6c: andi $a3, $v1, 0xff
    a2 = a0 << 1;                                               // 0x001b2b74: sll $a2, $a0, 1
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001b2b78: subu.qb $zero, $sp, $s5
    a1 = a1 + 0xc1c;                                            // 0x001b2b7c: addiu $a1, $a1, 0xc1c
    v1 = a0 << 8;                                               // 0x001b2b84: sll $v1, $a0, 8
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b2b88: dpa.w.ph $ac0, $sp, $s3
    a0 = 0x49 << 16;                                            // 0x001b2b8c: lui $a0, 0x49
    a0 = a0 + 0x810;                                            // 0x001b2b94: addiu $a0, $a0, 0x810
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b2b98: addu.qb $zero, $sp, $s1
    fp = a1 + a2;                                               // 0x001b2b9c: addu $fp, $a1, $a2
    at = 0x31 << 16;                                            // 0x001b2ba4: lui $at, 0x31
    a1 = g_003137bc;  // Global at 0x003137bc                   // 0x001b2ba8: lhu $a1, 0x37bc($at)
    s7 = a0 + v1;                                               // 0x001b2bac: addu $s7, $a0, $v1
    a0 = *(uint16_t*)(fp);                                      // 0x001b2bb0: lhu $a0, 0($fp)
    a1 = a1 << 1;                                               // 0x001b2bb4: sll $a1, $a1, 1
    a1 = s7 + a1;                                               // 0x001b2bb8: addu $a1, $s7, $a1
    a1 = g_00490c1c;  // Global at 0x00490c1c                   // 0x001b2bbc: lhu $a1, 0($a1)
    if (a1 == a0) goto label_0x1b2bd8;                          // 0x001b2bc0: beq $a1, $a0, 0x1b2bd8
    a1 = a3 & 0xff;                                             // 0x001b2bc4: andi $a1, $a3, 0xff
    a0 = gp + -0x61b4;                                          // 0x001b2bc8: addiu $a0, $gp, -0x61b4
    a2 = 1;                                                     // 0x001b2bcc: addiu $a2, $zero, 1
    a0 = a0 + a1;                                               // 0x001b2bd0: addu $a0, $a0, $a1
    g_00490810 = a2;  // Global at 0x00490810                   // 0x001b2bd4: sb $a2, 0($a0)
label_0x1b2bd8:
    a3 = a3 & 0xff;                                             // 0x001b2bd8: andi $a3, $a3, 0xff
    a0 = 0x49 << 16;                                            // 0x001b2bdc: lui $a0, 0x49
    a1 = a3 << 7;                                               // 0x001b2be0: sll $a1, $a3, 7
    a0 = a0 + -0x790;                                           // 0x001b2be4: addiu $a0, $a0, -0x790
    s1 = a0 + a1;                                               // 0x001b2bec: addu $s1, $a0, $a1
    a1 = -1;                                                    // 0x001b2bf0: addiu $a1, $zero, -1
label_0x1b2bf4:
    a0 = t1 << 2;                                               // 0x001b2bf4: sll $a0, $t1, 2
    t0 = s1 + a0;                                               // 0x001b2bf8: addu $t0, $s1, $a0
    t1 = t1 + 1;                                                // 0x001b2bfc: addiu $t1, $t1, 1
    a2 = *(int32_t*)(t0);                                       // 0x001b2c00: lw $a2, 0($t0)
    a0 = (t1 < 0x20) ? 1 : 0;                                   // 0x001b2c04: slti $a0, $t1, 0x20
    *(uint32_t*)((t0) + 0x300) = a2;                            // 0x001b2c08: sw $a2, 0x300($t0)
    a2 = *(int32_t*)((t0) + 0x180);                             // 0x001b2c0c: lw $a2, 0x180($t0)
    *(uint32_t*)((t0) + 0x480) = a2;                            // 0x001b2c10: sw $a2, 0x480($t0)
    *(uint32_t*)(t0) = a1;                                      // 0x001b2c14: sw $a1, 0($t0)
    if (a0 != 0) goto label_0x1b2bf4;                           // 0x001b2c18: bnez $a0, 0x1b2bf4
    *(uint32_t*)((t0) + 0x180) = a1;                            // 0x001b2c1c: sw $a1, 0x180($t0)
    a2 = 0x49 << 16;                                            // 0x001b2c20: lui $a2, 0x49
    s3 = 0x76 << 16;                                            // 0x001b2c24: lui $s3, 0x76
    a2 = a2 + -0x190;                                           // 0x001b2c28: addiu $a2, $a2, -0x190
    a1 = a3 << 1;                                               // 0x001b2c2c: sll $a1, $a3, 1
    a1 = a2 + a1;                                               // 0x001b2c30: addu $a1, $a2, $a1
    s2 = a2 + v1;                                               // 0x001b2c34: addu $s2, $a2, $v1
    a0 = a3 << 8;                                               // 0x001b2c38: sll $a0, $a3, 8
    v1 = a1 + 0xda0;                                            // 0x001b2c3c: addiu $v1, $a1, 0xda0
    s3 = s3 + 0x630;                                            // 0x001b2c48: addiu $s3, $s3, 0x630
    s0 = a2 + a0;                                               // 0x001b2c50: addu $s0, $a2, $a0
    goto label_0x1b2e24;                                        // 0x001b2c54: b 0x1b2e24
    local_a0 = v1;                                              // 0x001b2c58: sw $v1, 0xa0($sp)
label_0x1b2c5c:
    func_0057e6d0();  // 0x57e6d0                               // 0x001b2c5c: jal 0x57e6d0
    a0 = g_00760632;  // Global at 0x00760632                   // 0x001b2c60: lbu $a0, 2($s3)
    if (v1 == 0) goto label_0x1b2e1c;                           // 0x001b2c6c: beqz $v1, 0x1b2e1c
    /* nop */                                                   // 0x001b2c70: nop 
    v1 = local_a0;                                              // 0x001b2c74: lw $v1, 0xa0($sp)
    a0 = g_00760632;  // Global at 0x00760632                   // 0x001b2c78: lbu $a0, 2($s3)
    v1 = g_004919bc;  // Global at 0x004919bc                   // 0x001b2c7c: lhu $v1, 0($v1)
    if (a0 != v1) goto label_0x1b2e1c;                          // 0x001b2c80: bne $a0, $v1, 0x1b2e1c
    at = 0x31 << 16;                                            // 0x001b2c84: lui $at, 0x31
    a1 = g_00760652;  // Global at 0x00760652                   // 0x001b2c88: lbu $a1, 0x22($s3)
    a2 = g_003137bc;  // Global at 0x003137bc                   // 0x001b2c8c: lhu $a2, 0x37bc($at)
    a0 = a1 << 1;                                               // 0x001b2c90: sll $a0, $a1, 1
    v1 = a2 << 1;                                               // 0x001b2c94: sll $v1, $a2, 1
    a0 = s2 + a0;                                               // 0x001b2c98: addu $a0, $s2, $a0
    v1 = s2 + v1;                                               // 0x001b2c9c: addu $v1, $s2, $v1
    a0 = g_00490210;  // Global at 0x00490210                   // 0x001b2ca0: lhu $a0, 0x9a0($a0)
    v1 = g_0049235c;  // Global at 0x0049235c                   // 0x001b2ca4: lhu $v1, 0x9a0($v1)
    if (a0 != v1) goto label_0x1b2e1c;                          // 0x001b2ca8: bne $a0, $v1, 0x1b2e1c
    /* nop */                                                   // 0x001b2cac: nop 
    v1 = g_00760656;  // Global at 0x00760656                   // 0x001b2cb0: lbu $v1, 0x26($s3)
    if (v1 != 0) goto label_0x1b2cc4;                           // 0x001b2cb4: bnez $v1, 0x1b2cc4
    /* nop */                                                   // 0x001b2cb8: nop 
    if (a1 != a2) goto label_0x1b2e1c;                          // 0x001b2cbc: bne $a1, $a2, 0x1b2e1c
    /* nop */                                                   // 0x001b2cc0: nop 
label_0x1b2cc4:
    a0 = g_00760634;  // Global at 0x00760634                   // 0x001b2cc4: lbu $a0, 4($s3)
    a1 = 0x49 << 16;                                            // 0x001b2cc8: lui $a1, 0x49
    v1 = 1;                                                     // 0x001b2ccc: addiu $v1, $zero, 1
    a1 = a1 + -0x190;                                           // 0x001b2cd0: addiu $a1, $a1, -0x190
    a2 = (unsigned)a0 >> 5;                                     // 0x001b2cd4: srl $a2, $a0, 5
    a0 = a0 & 0x1f;                                             // 0x001b2cd8: andi $a0, $a0, 0x1f
    a0 = v1 << a0;                                              // 0x001b2cdc: sllv $a0, $v1, $a0
    v1 = a2 << 2;                                               // 0x001b2ce0: sll $v1, $a2, 2
    v1 = a1 + v1;                                               // 0x001b2ce4: addu $v1, $a1, $v1
    v1 = g_00492a70;  // Global at 0x00492a70                   // 0x001b2ce8: lw $v1, 0x10b4($v1)
    v1 = v1 & a0;                                               // 0x001b2cec: and $v1, $v1, $a0
    if (v1 == 0) goto label_0x1b2e1c;                           // 0x001b2cf0: beqz $v1, 0x1b2e1c
    /* nop */                                                   // 0x001b2cf4: nop 
    if (s5 != 0) goto label_0x1b2d18;                           // 0x001b2cf8: bnez $s5, 0x1b2d18
    a0 = g_00760633;  // Global at 0x00760633                   // 0x001b2d00: lbu $a0, 3($s3)
    v1 = s5 << 2;                                               // 0x001b2d04: sll $v1, $s5, 2
    v1 = s1 + v1;                                               // 0x001b2d08: addu $v1, $s1, $v1
    s5 = s5 + 1;                                                // 0x001b2d0c: addiu $s5, $s5, 1
    goto label_0x1b2d64;                                        // 0x001b2d10: b 0x1b2d64
    g_004919bc = a0;  // Global at 0x004919bc                   // 0x001b2d14: sw $a0, 0($v1)
label_0x1b2d18:
    goto label_0x1b2d3c;                                        // 0x001b2d18: b 0x1b2d3c
label_0x1b2d20:
    a0 = g_00760633;  // Global at 0x00760633                   // 0x001b2d20: lbu $a0, 3($s3)
    v1 = s1 + v1;                                               // 0x001b2d24: addu $v1, $s1, $v1
    v1 = g_004919bc;  // Global at 0x004919bc                   // 0x001b2d28: lw $v1, 0($v1)
    if (a0 != v1) goto label_0x1b2d38;                          // 0x001b2d2c: bne $a0, $v1, 0x1b2d38
    /* nop */                                                   // 0x001b2d30: nop 
    a1 = 1;                                                     // 0x001b2d34: addiu $a1, $zero, 1
label_0x1b2d38:
    a2 = a2 + 1;                                                // 0x001b2d38: addiu $a2, $a2, 1
label_0x1b2d3c:
    v1 = (a2 < s5) ? 1 : 0;                                     // 0x001b2d3c: slt $v1, $a2, $s5
    if (v1 != 0) goto label_0x1b2d20;                           // 0x001b2d40: bnez $v1, 0x1b2d20
    v1 = a2 << 2;                                               // 0x001b2d44: sll $v1, $a2, 2
    if (a1 != 0) goto label_0x1b2d64;                           // 0x001b2d48: bnez $a1, 0x1b2d64
    /* nop */                                                   // 0x001b2d4c: nop 
    a0 = g_00760633;  // Global at 0x00760633                   // 0x001b2d50: lbu $a0, 3($s3)
    v1 = s5 << 2;                                               // 0x001b2d54: sll $v1, $s5, 2
    v1 = s1 + v1;                                               // 0x001b2d58: addu $v1, $s1, $v1
    s5 = s5 + 1;                                                // 0x001b2d5c: addiu $s5, $s5, 1
    g_004919bc = a0;  // Global at 0x004919bc                   // 0x001b2d60: sw $a0, 0($v1)
label_0x1b2d64:
    if (s4 != 0) goto label_0x1b2da0;                           // 0x001b2d64: bnez $s4, 0x1b2da0
    at = 0x31 << 16;                                            // 0x001b2d68: lui $at, 0x31
    at = 0x31 << 16;                                            // 0x001b2d6c: lui $at, 0x31
    v1 = s4 << 2;                                               // 0x001b2d70: sll $v1, $s4, 2
    a0 = g_003137bc;  // Global at 0x003137bc                   // 0x001b2d74: lhu $a0, 0x37bc($at)
    v1 = s1 + v1;                                               // 0x001b2d78: addu $v1, $s1, $v1
    s4 = s4 + 1;                                                // 0x001b2d7c: addiu $s4, $s4, 1
    a0 = a0 << 1;                                               // 0x001b2d80: sll $a0, $a0, 1
    a0 = s2 + a0;                                               // 0x001b2d84: addu $a0, $s2, $a0
    a0 = g_00490210;  // Global at 0x00490210                   // 0x001b2d88: lhu $a0, 0x9a0($a0)
    a0 = a0 << 1;                                               // 0x001b2d8c: sll $a0, $a0, 1
    a0 = s0 + a0;                                               // 0x001b2d90: addu $a0, $s0, $a0
    a0 = g_00490624;  // Global at 0x00490624                   // 0x001b2d94: lhu $a0, 0xdb4($a0)
    goto label_0x1b2e1c;                                        // 0x001b2d98: b 0x1b2e1c
    g_00491b3c = a0;  // Global at 0x00491b3c                   // 0x001b2d9c: sw $a0, 0x180($v1)
label_0x1b2da0:
    v1 = g_003137bc;  // Global at 0x003137bc                   // 0x001b2da4: lhu $v1, 0x37bc($at)
    v1 = v1 << 1;                                               // 0x001b2dac: sll $v1, $v1, 1
    v1 = s2 + v1;                                               // 0x001b2db0: addu $v1, $s2, $v1
    goto label_0x1b2de8;                                        // 0x001b2db4: b 0x1b2de8
    a3 = v1 + 0x9a0;                                            // 0x001b2db8: addiu $a3, $v1, 0x9a0
label_0x1b2dbc:
    v1 = g_0049235c;  // Global at 0x0049235c                   // 0x001b2dbc: lhu $v1, 0($a3)
    a0 = a1 << 2;                                               // 0x001b2dc0: sll $a0, $a1, 2
    a0 = s1 + a0;                                               // 0x001b2dc4: addu $a0, $s1, $a0
    a0 = g_0048f9f0;  // Global at 0x0048f9f0                   // 0x001b2dc8: lw $a0, 0x180($a0)
    v1 = v1 << 1;                                               // 0x001b2dcc: sll $v1, $v1, 1
    v1 = s0 + v1;                                               // 0x001b2dd0: addu $v1, $s0, $v1
    v1 = g_00492770;  // Global at 0x00492770                   // 0x001b2dd4: lhu $v1, 0xdb4($v1)
    if (a0 != v1) goto label_0x1b2de4;                          // 0x001b2dd8: bne $a0, $v1, 0x1b2de4
    /* nop */                                                   // 0x001b2ddc: nop 
    a2 = 1;                                                     // 0x001b2de0: addiu $a2, $zero, 1
label_0x1b2de4:
    a1 = a1 + 1;                                                // 0x001b2de4: addiu $a1, $a1, 1
label_0x1b2de8:
    v1 = (a1 < s4) ? 1 : 0;                                     // 0x001b2de8: slt $v1, $a1, $s4
    if (v1 != 0) goto label_0x1b2dbc;                           // 0x001b2dec: bnez $v1, 0x1b2dbc
    /* nop */                                                   // 0x001b2df0: nop 
    if (a2 != 0) goto label_0x1b2e1c;                           // 0x001b2df4: bnez $a2, 0x1b2e1c
    /* nop */                                                   // 0x001b2df8: nop 
    a0 = g_0049235c;  // Global at 0x0049235c                   // 0x001b2dfc: lhu $a0, 0($a3)
    v1 = s4 << 2;                                               // 0x001b2e00: sll $v1, $s4, 2
    v1 = s1 + v1;                                               // 0x001b2e04: addu $v1, $s1, $v1
    s4 = s4 + 1;                                                // 0x001b2e08: addiu $s4, $s4, 1
    a0 = a0 << 1;                                               // 0x001b2e0c: sll $a0, $a0, 1
    a0 = s0 + a0;                                               // 0x001b2e10: addu $a0, $s0, $a0
    a0 = g_00490624;  // Global at 0x00490624                   // 0x001b2e14: lhu $a0, 0xdb4($a0)
    g_00491b3c = a0;  // Global at 0x00491b3c                   // 0x001b2e18: sw $a0, 0x180($v1)
label_0x1b2e1c:
    s6 = s6 + 1;                                                // 0x001b2e1c: addiu $s6, $s6, 1
    s3 = s3 + 0x60;                                             // 0x001b2e20: addiu $s3, $s3, 0x60
label_0x1b2e24:
    at = 0x49 << 16;                                            // 0x001b2e24: lui $at, 0x49
    v1 = g_0049135e;  // Global at 0x0049135e                   // 0x001b2e28: lbu $v1, 0x135e($at)
    v1 = (s6 < v1) ? 1 : 0;                                     // 0x001b2e2c: slt $v1, $s6, $v1
    if (v1 != 0) goto label_0x1b2c5c;                           // 0x001b2e30: bnez $v1, 0x1b2c5c
    at = 0x31 << 16;                                            // 0x001b2e34: lui $at, 0x31
    v1 = g_003137bc;  // Global at 0x003137bc                   // 0x001b2e38: lhu $v1, 0x37bc($at)
    v1 = v1 << 1;                                               // 0x001b2e3c: sll $v1, $v1, 1
    v1 = s7 + v1;                                               // 0x001b2e40: addu $v1, $s7, $v1
    v1 = g_004919bc;  // Global at 0x004919bc                   // 0x001b2e44: lhu $v1, 0($v1)
    *(uint16_t*)(fp) = v1;                                      // 0x001b2e48: sh $v1, 0($fp)
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001b2e50: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001b2e58: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001b2e5c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b2e60: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b2e68: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b2e6c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b2e70: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b2e74: jr $ra
    sp = sp + 0xb0;                                             // 0x001b2e78: addiu $sp, $sp, 0xb0
}