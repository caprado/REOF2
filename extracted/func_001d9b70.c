void func_001d9b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0, local_b0, local_c0;
    
    sp = sp + -0x160;                                           // 0x001d9b70: addiu $sp, $sp, -0x160
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001d9b7c: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d9b84: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d9b90: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d9ba0: addu.qb $zero, $sp, $s1
    local_c0 = a2;                                              // 0x001d9ba8: sw $a2, 0xc0($sp)
    func_001a2740();  // 1a2740                                // 0x001d9bac: jal 0x1a2740
    local_b0 = a3;                                              // 0x001d9bb0: sw $a3, 0xb0($sp)
    *(uint16_t*)((s5) + 0x816) = v0;                            // 0x001d9bb4: sh $v0, 0x816($s5)
    func_001a2780();  // 1a2780                                // 0x001d9bb8: jal 0x1a2780
    at = 0x47 << 16;                                            // 0x001d9bc0: lui $at, 0x47
    goto label_0x1d9c10;                                        // 0x001d9bc8: b 0x1d9c10
    g_004747e3 = v0;  // Global at 0x004747e3                   // 0x001d9bcc: sb $v0, 0x47e3($at)
label_0x1d9bd0:
    v0 = s1 << 1;                                               // 0x001d9bd4: sll $v0, $s1, 1
    v0 = v0 + sp;                                               // 0x001d9bdc: addu $v0, $v0, $sp
    func_001a27b0();  // 1a27b0                                // 0x001d9be0: jal 0x1a27b0
    s0 = v0 + 0x120;                                            // 0x001d9be4: addiu $s0, $v0, 0x120
    g_00477451 = v0;  // Global at 0x00477451                   // 0x001d9be8: sh $v0, 0($s0)
    a0 = s2 << 1;                                               // 0x001d9bec: sll $a0, $s2, 1
    a1 = g_00477451;  // Global at 0x00477451                   // 0x001d9bf0: lhu $a1, 0($s0)
    v0 = 0x47 << 16;                                            // 0x001d9bf4: lui $v0, 0x47
    v0 = v0 + 0x47e0;                                           // 0x001d9bf8: addiu $v0, $v0, 0x47e0
    v1 = v0 + s1;                                               // 0x001d9bfc: addu $v1, $v0, $s1
    v0 = s3 + 1;                                                // 0x001d9c00: addiu $v0, $s3, 1
    s3 = v0 & 0xffff;                                           // 0x001d9c04: andi $s3, $v0, 0xffff
    v0 = a1 - a0;                                               // 0x001d9c08: subu $v0, $a1, $a0
    *(uint8_t*)((v1) + 0x2b20) = v0;                            // 0x001d9c0c: sb $v0, 0x2b20($v1)
label_0x1d9c10:
    at = 0x47 << 16;                                            // 0x001d9c10: lui $at, 0x47
    s2 = s3 & 0xffff;                                           // 0x001d9c14: andi $s2, $s3, 0xffff
    v0 = g_004747e3;  // Global at 0x004747e3                   // 0x001d9c18: lbu $v0, 0x47e3($at)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x001d9c1c: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x1d9bd0;                           // 0x001d9c20: bnez $v0, 0x1d9bd0
    s1 = s3 & 0xffff;                                           // 0x001d9c24: andi $s1, $s3, 0xffff
    a1 = *(uint16_t*)((s5) + 0x816);                            // 0x001d9c28: lhu $a1, 0x816($s5)
    v0 = s2 << 1;                                               // 0x001d9c2c: sll $v0, $s2, 1
    v1 = v0 + sp;                                               // 0x001d9c30: addu $v1, $v0, $sp
    at = 0x31 << 16;                                            // 0x001d9c34: lui $at, 0x31
    v0 = 0x20 << 16;                                            // 0x001d9c38: lui $v0, 0x20
    a0 = sp + 0xd0;                                             // 0x001d9c3c: addiu $a0, $sp, 0xd0
    *(uint16_t*)((v1) + 0x120) = a1;                            // 0x001d9c40: sh $a1, 0x120($v1)
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d9c44: lw $v1, 0x37fc($at)
    func_0018fba0();  // 18fba0                                // 0x001d9c48: jal 0x18fba0
    s3 = v1 + v0;                                               // 0x001d9c4c: addu $s3, $v1, $v0
    goto label_0x1d9e54;                                        // 0x001d9c50: b 0x1d9e54
label_0x1d9c58:
    a0 = sp + 0x110;                                            // 0x001d9c58: addiu $a0, $sp, 0x110
    thunk_func_001da600();  // 1da600                          // 0x001d9c60: jal 0x1da600
    func_00192230();  // 192230                                // 0x001d9c68: jal 0x192230
    a0 = sp + 0x110;                                            // 0x001d9c6c: addiu $a0, $sp, 0x110
    *(uint32_t*)((s5) + 0x80c) = v0;                            // 0x001d9c70: sw $v0, 0x80c($s5)
    func_001b0e30();  // 1b0e30                                // 0x001d9c74: jal 0x1b0e30
    a0 = *(int32_t*)((s5) + 0x80c);                             // 0x001d9c78: lw $a0, 0x80c($s5)
    a1 = *(int32_t*)((s5) + 0x80c);                             // 0x001d9c7c: lw $a1, 0x80c($s5)
    func_00193400();  // 193400                                // 0x001d9c80: jal 0x193400
    v0 = s0 << 1;                                               // 0x001d9c88: sll $v0, $s0, 1
    a0 = s3 + 0x190;                                            // 0x001d9c8c: addiu $a0, $s3, 0x190
    v0 = v0 + sp;                                               // 0x001d9c90: addu $v0, $v0, $sp
    s0 = s2 & 0xffff;                                           // 0x001d9c94: andi $s0, $s2, 0xffff
    fp = v0 + 0x122;                                            // 0x001d9c98: addiu $fp, $v0, 0x122
    v0 = s0 << 1;                                               // 0x001d9c9c: sll $v0, $s0, 1
    v1 = g_00200122;  // Global at 0x00200122                   // 0x001d9ca0: lhu $v1, 0($fp)
    v0 = v0 + sp;                                               // 0x001d9ca4: addu $v0, $v0, $sp
    v0 = g_00200120;  // Global at 0x00200120                   // 0x001d9ca8: lhu $v0, 0x120($v0)
    v0 = v0 + 1;                                                // 0x001d9cac: addiu $v0, $v0, 1
    goto label_0x1d9d24;                                        // 0x001d9cb0: b 0x1d9d24
    a1 = v0 & 0xffff;                                           // 0x001d9cb4: andi $a1, $v0, 0xffff
label_0x1d9cb8:
    v0 = *(int32_t*)((a0) + 0x174);                             // 0x001d9cb8: lw $v0, 0x174($a0)
    if (v0 >= 0) goto label_0x1d9d1c;                           // 0x001d9cbc: bgez $v0, 0x1d9d1c
    v0 = a1 + 1;                                                // 0x001d9cc0: addiu $v0, $a1, 1
    FPU_F1 = *(float*)((a0) + 0xdc);  // Load float             // 0x001d9cc4: lwc1 $f1, 0xdc($a0)
    v0 = 0x4f00 << 16;                                          // 0x001d9cc8: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001d9ccc: mtc1 $v0, $f0
    /* nop */                                                   // 0x001d9cd0: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001d9cd4: c.ole.s $f0, $f1
    /* bc1t 0x1d9cf0 */                                         // 0x001d9cd8: bc1t 0x1d9cf0
    /* nop */                                                   // 0x001d9cdc: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001d9ce0: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001d9ce4: mfc1 $v1, $f1
    goto label_0x1d9d08;                                        // 0x001d9ce8: b 0x1d9d08
    /* nop */                                                   // 0x001d9cec: nop 
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001d9cf0: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001d9cf4: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001d9cf8: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001d9cfc: mfc1 $v1, $f1
    /* nop */                                                   // 0x001d9d00: nop 
    v1 = v1 | v0;                                               // 0x001d9d04: or $v1, $v1, $v0
label_0x1d9d08:
    v0 = 0x47 << 16;                                            // 0x001d9d08: lui $v0, 0x47
    v0 = v0 + 0x47e0;                                           // 0x001d9d0c: addiu $v0, $v0, 0x47e0
    v0 = v0 + s0;                                               // 0x001d9d10: addu $v0, $v0, $s0
    goto label_0x1d9d34;                                        // 0x001d9d14: b 0x1d9d34
    g_00477318 = v1;  // Global at 0x00477318                   // 0x001d9d18: sb $v1, 0x2b38($v0)
label_0x1d9d1c:
    a0 = a0 + 0x190;                                            // 0x001d9d1c: addiu $a0, $a0, 0x190
    a1 = v0 & 0xffff;                                           // 0x001d9d20: andi $a1, $v0, 0xffff
label_0x1d9d24:
    v0 = a1 & 0xffff;                                           // 0x001d9d24: andi $v0, $a1, 0xffff
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x001d9d28: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x1d9cb8;                           // 0x001d9d2c: bnez $v0, 0x1d9cb8
    /* nop */                                                   // 0x001d9d30: nop 
label_0x1d9d34:
    func_001930d0();  // 1930d0                                // 0x001d9d38: jal 0x1930d0
    a1 = sp + 0xd0;                                             // 0x001d9d3c: addiu $a1, $sp, 0xd0
    v1 = s0 << 1;                                               // 0x001d9d40: sll $v1, $s0, 1
    a1 = 0x47 << 16;                                            // 0x001d9d44: lui $a1, 0x47
    v0 = v1 + s0;                                               // 0x001d9d48: addu $v0, $v1, $s0
    a1 = a1 + 0x47e0;                                           // 0x001d9d4c: addiu $a1, $a1, 0x47e0
    v0 = v0 << 2;                                               // 0x001d9d50: sll $v0, $v0, 2
    a0 = a1 + s0;                                               // 0x001d9d54: addu $a0, $a1, $s0
    v0 = a1 + v0;                                               // 0x001d9d58: addu $v0, $a1, $v0
    v1 = v1 + sp;                                               // 0x001d9d5c: addu $v1, $v1, $sp
    *(uint8_t*)((a0) + 4) = 0;                                  // 0x001d9d60: sb $zero, 4($a0)
    v0 = v0 + 0x2b50;                                           // 0x001d9d64: addiu $v0, $v0, 0x2b50
    s6 = v1 + 0x120;                                            // 0x001d9d68: addiu $s6, $v1, 0x120
    local_a0 = v0;                                              // 0x001d9d6c: sw $v0, 0xa0($sp)
    s0 = *(uint16_t*)(s6);                                      // 0x001d9d70: lhu $s0, 0($s6)
    goto label_0x1d9e24;                                        // 0x001d9d78: b 0x1d9e24
    s7 = a0 + 4;                                                // 0x001d9d7c: addiu $s7, $a0, 4
label_0x1d9d80:
    v0 = *(uint16_t*)(s6);                                      // 0x001d9d80: lhu $v0, 0($s6)
    if (v1 != v0) goto label_0x1d9d98;                          // 0x001d9d84: bne $v1, $v0, 0x1d9d98
    /* nop */                                                   // 0x001d9d88: nop 
    a0 = local_a0;                                              // 0x001d9d8c: lw $a0, 0xa0($sp)
    func_0018fe90();  // 18fe90                                // 0x001d9d90: jal 0x18fe90
label_0x1d9d98:
    v0 = *(int32_t*)((s1) + 0x174);                             // 0x001d9d98: lw $v0, 0x174($s1)
    if (v0 < 0) goto label_0x1d9e18;                            // 0x001d9d9c: bltz $v0, 0x1d9e18
    v1 = v0 << 6;                                               // 0x001d9da0: sll $v1, $v0, 6
    a0 = 8;                                                     // 0x001d9da4: addiu $a0, $zero, 8
    v0 = local_c0;                                              // 0x001d9da8: lw $v0, 0xc0($sp)
    a2 = v0 + v1;                                               // 0x001d9db0: addu $a2, $v0, $v1
label_0x1d9db4:
    v1 = g_004747e0;  // Global at 0x004747e0                   // 0x001d9db4: lw $v1, 0($a1)
    a0 = a0 + -1;                                               // 0x001d9db8: addiu $a0, $a0, -1
    v0 = g_004747e4;  // Global at 0x004747e4                   // 0x001d9dbc: lw $v0, 4($a1)
    *(uint32_t*)(a2) = v1;                                      // 0x001d9dc0: sw $v1, 0($a2)
    a1 = a1 + 8;                                                // 0x001d9dc4: addiu $a1, $a1, 8
    *(uint32_t*)((a2) + 4) = v0;                                // 0x001d9dc8: sw $v0, 4($a2)
    if (a0 > 0) goto label_0x1d9db4;                            // 0x001d9dcc: bgtz $a0, 0x1d9db4
    a2 = a2 + 8;                                                // 0x001d9dd0: addiu $a2, $a2, 8
    v0 = *(int32_t*)((s1) + 0x174);                             // 0x001d9dd4: lw $v0, 0x174($s1)
    a0 = 8;                                                     // 0x001d9dd8: addiu $a0, $zero, 8
    v1 = v0 << 6;                                               // 0x001d9de0: sll $v1, $v0, 6
    v0 = local_b0;                                              // 0x001d9de4: lw $v0, 0xb0($sp)
    a2 = v0 + v1;                                               // 0x001d9de8: addu $a2, $v0, $v1
label_0x1d9dec:
    v1 = g_004747e8;  // Global at 0x004747e8                   // 0x001d9dec: lw $v1, 0($a1)
    a0 = a0 + -1;                                               // 0x001d9df0: addiu $a0, $a0, -1
    v0 = g_004747ec;  // Global at 0x004747ec                   // 0x001d9df4: lw $v0, 4($a1)
    *(uint32_t*)(a2) = v1;                                      // 0x001d9df8: sw $v1, 0($a2)
    a1 = a1 + 8;                                                // 0x001d9dfc: addiu $a1, $a1, 8
    *(uint32_t*)((a2) + 4) = v0;                                // 0x001d9e00: sw $v0, 4($a2)
    if (a0 > 0) goto label_0x1d9dec;                            // 0x001d9e04: bgtz $a0, 0x1d9dec
    a2 = a2 + 8;                                                // 0x001d9e08: addiu $a2, $a2, 8
    v0 = *(uint8_t*)(s7);                                       // 0x001d9e0c: lbu $v0, 0($s7)
    v0 = v0 + 1;                                                // 0x001d9e10: addiu $v0, $v0, 1
    *(uint8_t*)(s7) = v0;                                       // 0x001d9e14: sb $v0, 0($s7)
label_0x1d9e18:
    v0 = s0 + 1;                                                // 0x001d9e18: addiu $v0, $s0, 1
    s1 = s1 + 0x190;                                            // 0x001d9e1c: addiu $s1, $s1, 0x190
    s0 = v0 & 0xffff;                                           // 0x001d9e20: andi $s0, $v0, 0xffff
label_0x1d9e24:
    v0 = g_00200122;  // Global at 0x00200122                   // 0x001d9e24: lhu $v0, 0($fp)
    v1 = s0 & 0xffff;                                           // 0x001d9e28: andi $v1, $s0, 0xffff
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001d9e2c: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1d9d80;                           // 0x001d9e30: bnez $v0, 0x1d9d80
    /* nop */                                                   // 0x001d9e34: nop 
    func_00192330();  // 192330                                // 0x001d9e38: jal 0x192330
    a0 = *(int32_t*)((s5) + 0x80c);                             // 0x001d9e3c: lw $a0, 0x80c($s5)
    func_001b0e80();  // 1b0e80                                // 0x001d9e40: jal 0x1b0e80
    a0 = *(int32_t*)((s5) + 0x80c);                             // 0x001d9e44: lw $a0, 0x80c($s5)
    v1 = s2 + 1;                                                // 0x001d9e48: addiu $v1, $s2, 1
    *(uint32_t*)((s5) + 0x80c) = 0;                             // 0x001d9e4c: sw $zero, 0x80c($s5)
    s2 = v1 & 0xffff;                                           // 0x001d9e50: andi $s2, $v1, 0xffff
label_0x1d9e54:
    at = 0x47 << 16;                                            // 0x001d9e54: lui $at, 0x47
    s0 = s2 & 0xffff;                                           // 0x001d9e58: andi $s0, $s2, 0xffff
    v1 = g_004747e3;  // Global at 0x004747e3                   // 0x001d9e5c: lbu $v1, 0x47e3($at)
    v1 = (s0 < v1) ? 1 : 0;                                     // 0x001d9e60: slt $v1, $s0, $v1
    if (v1 != 0) goto label_0x1d9c58;                           // 0x001d9e64: bnez $v1, 0x1d9c58
    a3 = s2 & 0xffff;                                           // 0x001d9e68: andi $a3, $s2, 0xffff
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001d9e70: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d9e78: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d9e7c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d9e80: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d9e88: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9e8c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d9e90: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d9e94: jr $ra
    sp = sp + 0x160;                                            // 0x001d9e98: addiu $sp, $sp, 0x160
}