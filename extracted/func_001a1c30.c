void func_001a1c30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001a1c30: addiu $sp, $sp, -0xa0
    /* FPU: dps.w.ph $ac0, $sp, $s6 */                          // 0x001a1c38: dps.w.ph $ac0, $sp, $s6
    /* FPU: subu.qb $zero, $sp, $s4 */                          // 0x001a1c40: subu.qb $zero, $sp, $s4
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001a1c4c: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001a1c5c: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x001a1c64: swc1 $f21, 4($sp)
    func_001a1aa0();  // 1a1aa0                                // 0x001a1c68: jal 0x1a1aa0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001a1c6c: swc1 $f20, 0($sp)
    func_001a49c0();  // 1a49c0                                // 0x001a1c78: jal 0x1a49c0
    *(uint32_t*)((gp) + -0x6428) = s3;                          // 0x001a1c7c: sw $s3, -0x6428($gp)
    a0 = 0x2a << 16;                                            // 0x001a1c80: lui $a0, 0x2a
    a0 = a0 + 0x500;                                            // 0x001a1c88: addiu $a0, $a0, 0x500
    func_00189860();  // 189860                                // 0x001a1c90: jal 0x189860
    a3 = 1;                                                     // 0x001a1c94: addiu $a3, $zero, 1
    a0 = 0x2a << 16;                                            // 0x001a1c98: lui $a0, 0x2a
    a1 = 0x20;                                                  // 0x001a1c9c: addiu $a1, $zero, 0x20
    a0 = a0 + 0x500;                                            // 0x001a1ca0: addiu $a0, $a0, 0x500
    func_001898e0();  // 1898e0                                // 0x001a1ca4: jal 0x1898e0
    func_001a2720();  // 1a2720                                // 0x001a1cb0: jal 0x1a2720
    *(uint16_t*)(s0) = 0;                                       // 0x001a1cb8: sh $zero, 0($s0)
    a0 = 0x2a << 16;                                            // 0x001a1cbc: lui $a0, 0x2a
    *(uint16_t*)((s0) + 2) = v0;                                // 0x001a1cc4: sh $v0, 2($s0)
    a1 = v0 << 2;                                               // 0x001a1cc8: sll $a1, $v0, 2
    a0 = a0 + 0x500;                                            // 0x001a1ccc: addiu $a0, $a0, 0x500
    func_001898e0();  // 1898e0                                // 0x001a1cd0: jal 0x1898e0
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001a1cd8: sw $v0, 0x10($s0)
    /* move to FPU: $zero, $f20 */                              // 0x001a1cdc: mtc1 $zero, $f20
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x001a1ce0: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = s4;                             // 0x001a1ce4: sw $s4, 0x18($s0)
    s4 = *(int32_t*)((s0) + 0x10);                              // 0x001a1ce8: lw $s4, 0x10($s0)
    FPU_F21 = *(float*)((gp) + -0x7eec);  // Load float         // 0x001a1cec: lwc1 $f21, -0x7eec($gp)
    goto label_0x1a1d54;                                        // 0x001a1cf0: b 0x1a1d54
label_0x1a1cf8:
    a1 = 8;                                                     // 0x001a1cf8: addiu $a1, $zero, 8
    a0 = a0 + 0x500;                                            // 0x001a1cfc: addiu $a0, $a0, 0x500
    func_001898e0();  // 1898e0                                // 0x001a1d00: jal 0x1898e0
    *(uint32_t*)(s4) = v0;                                      // 0x001a1d08: sw $v0, 0($s4)
    a0 = *(int32_t*)(s4);                                       // 0x001a1d10: lw $a0, 0($s4)
    func_001a1e50();  // 1a1e50                                // 0x001a1d14: jal 0x1a1e50
    func_001a2620();  // 1a2620                                // 0x001a1d1c: jal 0x1a2620
    a0 = *(int32_t*)(s4);                                       // 0x001a1d20: lw $a0, 0($s4)
    /* FPU: c.ole.s $f0, $f20 */                                // 0x001a1d24: c.ole.s $f0, $f20
    /* bc1t 0x1a1d34 */                                         // 0x001a1d28: bc1t 0x1a1d34
    /* nop */                                                   // 0x001a1d2c: nop 
    /* FPU: mov.s $f20, $f0 */                                  // 0x001a1d30: mov.s $f20, $f0
    func_001a26a0();  // 1a26a0                                // 0x001a1d34: jal 0x1a26a0
    a0 = *(int32_t*)(s4);                                       // 0x001a1d38: lw $a0, 0($s4)
    /* FPU: c.olt.s $f0, $f21 */                                // 0x001a1d3c: c.olt.s $f0, $f21
    /* bc1f 0x1a1d4c */                                         // 0x001a1d40: bc1f 0x1a1d4c
    /* nop */                                                   // 0x001a1d44: nop 
    /* FPU: mov.s $f21, $f0 */                                  // 0x001a1d48: mov.s $f21, $f0
    s4 = s4 + 4;                                                // 0x001a1d4c: addiu $s4, $s4, 4
    s1 = s1 + 1;                                                // 0x001a1d50: addiu $s1, $s1, 1
label_0x1a1d54:
    v0 = (s1 < s6) ? 1 : 0;                                     // 0x001a1d54: slt $v0, $s1, $s6
    if (v0 != 0) goto label_0x1a1cf8;                           // 0x001a1d58: bnez $v0, 0x1a1cf8
    a0 = 0x2a << 16;                                            // 0x001a1d5c: lui $a0, 0x2a
    *(float*)((s0) + 4) = FPU_F21;  // Store float              // 0x001a1d60: swc1 $f21, 4($s0)
    a1 = sp + 0x9c;                                             // 0x001a1d68: addiu $a1, $sp, 0x9c
    func_001a1a60();  // 1a1a60                                // 0x001a1d6c: jal 0x1a1a60
    *(float*)((s0) + 8) = FPU_F20;  // Store float              // 0x001a1d70: swc1 $f20, 8($s0)
    if (v0 == 0) goto label_0x1a1d94;                           // 0x001a1d74: beqz $v0, 0x1a1d94
    /* nop */                                                   // 0x001a1d78: nop 
    v0 = *(uint16_t*)(s0);                                      // 0x001a1d7c: lhu $v0, 0($s0)
    v0 = v0 | 0x8000;                                           // 0x001a1d80: ori $v0, $v0, 0x8000
    *(uint16_t*)(s0) = v0;                                      // 0x001a1d84: sh $v0, 0($s0)
    FPU_F0 = *(float*)((sp) + 0x9c);  // Load float             // 0x001a1d88: lwc1 $f0, 0x9c($sp)
    goto label_0x1a1da4;                                        // 0x001a1d8c: b 0x1a1da4
    *(float*)((s0) + 0xc) = FPU_F0;  // Store float             // 0x001a1d90: swc1 $f0, 0xc($s0)
label_0x1a1d94:
    v0 = *(uint16_t*)(s0);                                      // 0x001a1d94: lhu $v0, 0($s0)
    v0 = v0 & 0x7fff;                                           // 0x001a1d98: andi $v0, $v0, 0x7fff
    *(uint16_t*)(s0) = v0;                                      // 0x001a1d9c: sh $v0, 0($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x001a1da0: sw $zero, 0xc($s0)
label_0x1a1da4:
    goto label_0x1a1dcc;                                        // 0x001a1da4: b 0x1a1dcc
label_0x1a1dac:
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001a1dac: lw $v1, 0x10($s0)
    a0 = a1 << 2;                                               // 0x001a1db0: sll $a0, $a1, 2
    v0 = *(int32_t*)((gp) + -0x6428);                           // 0x001a1db4: lw $v0, -0x6428($gp)
    a1 = a1 + 1;                                                // 0x001a1db8: addiu $a1, $a1, 1
    a0 = v1 + a0;                                               // 0x001a1dbc: addu $a0, $v1, $a0
    v1 = g_002a0000;  // Global at 0x002a0000                   // 0x001a1dc0: lw $v1, 0($a0)
    v0 = v1 - v0;                                               // 0x001a1dc4: subu $v0, $v1, $v0
    g_002a0000 = v0;  // Global at 0x002a0000                   // 0x001a1dc8: sw $v0, 0($a0)
label_0x1a1dcc:
    v0 = (a1 < s6) ? 1 : 0;                                     // 0x001a1dcc: slt $v0, $a1, $s6
    if (v0 != 0) goto label_0x1a1dac;                           // 0x001a1dd0: bnez $v0, 0x1a1dac
    /* nop */                                                   // 0x001a1dd4: nop 
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001a1dd8: lw $v1, 0x10($s0)
    a0 = 4;                                                     // 0x001a1ddc: addiu $a0, $zero, 4
    v0 = *(int32_t*)((gp) + -0x6428);                           // 0x001a1de0: lw $v0, -0x6428($gp)
    v0 = v1 - v0;                                               // 0x001a1de8: subu $v0, $v1, $v0
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001a1dec: sw $v0, 0x10($s0)
label_0x1a1df0:
    v1 = *(int32_t*)(s0);                                       // 0x001a1df0: lw $v1, 0($s0)
    a0 = a0 + -1;                                               // 0x001a1df4: addiu $a0, $a0, -1
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001a1df8: lw $v0, 4($s0)
    *(uint32_t*)(a1) = v1;                                      // 0x001a1dfc: sw $v1, 0($a1)
    s0 = s0 + 8;                                                // 0x001a1e00: addiu $s0, $s0, 8
    *(uint32_t*)((a1) + 4) = v0;                                // 0x001a1e04: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x1a1df0;                            // 0x001a1e08: bgtz $a0, 0x1a1df0
    a1 = a1 + 8;                                                // 0x001a1e0c: addiu $a1, $a1, 8
    *(uint32_t*)((s5) + 0x14) = s3;                             // 0x001a1e10: sw $s3, 0x14($s5)
    v0 = 1;                                                     // 0x001a1e14: addiu $v0, $zero, 1
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x001a1e1c: lwc1 $f21, 4($sp)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001a1e24: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w1, -0x4b($zero) */                           // 0x001a1e28: ld.b $w1, -0x4b($zero)
    /* FPU: aver_u.h $w1, $w0, $w20 */                          // 0x001a1e2c: aver_u.h $w1, $w0, $w20
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x001a1e30: xori.b $w1, $w0, 0xb3
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001a1e38: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001a1e3c: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001a1e40: jr $ra
    sp = sp + 0xa0;                                             // 0x001a1e44: addiu $sp, $sp, 0xa0
}