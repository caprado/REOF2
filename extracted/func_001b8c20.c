void func_001b8c20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x100;                                           // 0x001b8c20: addiu $sp, $sp, -0x100
    /* FPU: subu.qb $zero, $sp, $s4 */                          // 0x001b8c28: subu.qb $zero, $sp, $s4
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001b8c34: dpa.w.ph $ac0, $sp, $s2
    a1 = 0x31 << 16;                                            // 0x001b8c40: lui $a1, 0x31
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001b8c44: addu.qb $zero, $sp, $s0
    a0 = sp + 0x70;                                             // 0x001b8c50: addiu $a0, $sp, 0x70
    a1 = a1 + 0x34f0;                                           // 0x001b8c54: addiu $a1, $a1, 0x34f0
    func_001911e0();  // 1911e0                                // 0x001b8c58: jal 0x1911e0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001b8c5c: swc1 $f20, 0($sp)
    FPU_F3 = *(float*)((s4) + 4);  // Load float                // 0x001b8c60: lwc1 $f3, 4($s4)
    FPU_F2 = *(float*)((sp) + 0xa4);  // Load float             // 0x001b8c64: lwc1 $f2, 0xa4($sp)
    FPU_F5 = *(float*)(s4);  // Load float                      // 0x001b8c68: lwc1 $f5, 0($s4)
    FPU_F4 = *(float*)((sp) + 0xa0);  // Load float             // 0x001b8c6c: lwc1 $f4, 0xa0($sp)
    FPU_F1 = *(float*)((s4) + 8);  // Load float                // 0x001b8c70: lwc1 $f1, 8($s4)
    FPU_F0 = *(float*)((sp) + 0xa8);  // Load float             // 0x001b8c74: lwc1 $f0, 0xa8($sp)
    /* FPU: sub.s $f3, $f3, $f2 */                              // 0x001b8c78: sub.s $f3, $f3, $f2
    /* FPU: sub.s $f2, $f1, $f0 */                              // 0x001b8c7c: sub.s $f2, $f1, $f0
    /* FPU: sub.s $f4, $f5, $f4 */                              // 0x001b8c80: sub.s $f4, $f5, $f4
    /* FPU: mul.s $f1, $f4, $f4 */                              // 0x001b8c84: mul.s $f1, $f4, $f4
    /* FPU: mul.s $f0, $f3, $f3 */                              // 0x001b8c88: mul.s $f0, $f3, $f3
    func_003449c0();  // 0x3449c0                               // 0x001b8c90: jal 0x3449c0
    /* FPU: mov.s $f20, $f0 */                                  // 0x001b8c98: mov.s $f20, $f0
    v0 = 0x4596 << 16;                                          // 0x001b8c9c: lui $v0, 0x4596
    /* move to FPU: $v0, $f0 */                                 // 0x001b8ca0: mtc1 $v0, $f0
    s0 = 0x3f;                                                  // 0x001b8ca4: addiu $s0, $zero, 0x3f
    *(uint32_t*)(s1) = s0;                                      // 0x001b8ca8: sw $s0, 0($s1)
    /* FPU: c.olt.s $f20, $f0 */                                // 0x001b8cac: c.olt.s $f20, $f0
    /* bc1t 0x1b8cc0 */                                         // 0x001b8cb0: bc1t 0x1b8cc0
    *(uint32_t*)(s2) = 0;                                       // 0x001b8cb4: sw $zero, 0($s2)
    goto label_0x1b8e0c;                                        // 0x001b8cb8: b 0x1b8e0c
    v0 = 0x42c8 << 16;                                          // 0x001b8cc0: lui $v0, 0x42c8
    /* move to FPU: $v0, $f0 */                                 // 0x001b8cc4: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b8cc8: nop 
    /* FPU: c.ole.s $f20, $f0 */                                // 0x001b8ccc: c.ole.s $f20, $f0
    /* bc1f 0x1b8ce0 */                                         // 0x001b8cd0: bc1f 0x1b8ce0
    a0 = sp + 0xb0;                                             // 0x001b8cd4: addiu $a0, $sp, 0xb0
    goto label_0x1b8e00;                                        // 0x001b8cd8: b 0x1b8e00
    v0 = *(int32_t*)(s3);                                       // 0x001b8cdc: lw $v0, 0($s3)
    func_0018fba0();  // 18fba0                                // 0x001b8ce0: jal 0x18fba0
    /* nop */                                                   // 0x001b8ce4: nop 
    a1 = sp + 0xb0;                                             // 0x001b8ce8: addiu $a1, $sp, 0xb0
    func_001aefd0();  // 1aefd0                                // 0x001b8cec: jal 0x1aefd0
    a0 = 0x1a;                                                  // 0x001b8cf0: addiu $a0, $zero, 0x1a
    func_00191df0();  // 191df0                                // 0x001b8cf8: jal 0x191df0
    a0 = sp + 0xf0;                                             // 0x001b8cfc: addiu $a0, $sp, 0xf0
    FPU_F1 = *(float*)((sp) + 0xf0);  // Load float             // 0x001b8d00: lwc1 $f1, 0xf0($sp)
    /* move to FPU: $zero, $f0 */                               // 0x001b8d04: mtc1 $zero, $f0
    /* nop */                                                   // 0x001b8d08: nop 
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x001b8d0c: c.olt.s $f1, $f0
    /* bc1f 0x1b8d1c */                                         // 0x001b8d10: bc1f 0x1b8d1c
    /* nop */                                                   // 0x001b8d14: nop 
    *(float*)((sp) + 0xf0) = FPU_F0;  // Store float            // 0x001b8d18: swc1 $f0, 0xf0($sp)
    FPU_F1 = *(float*)((sp) + 0xf0);  // Load float             // 0x001b8d1c: lwc1 $f1, 0xf0($sp)
    v0 = 0x4420 << 16;                                          // 0x001b8d20: lui $v0, 0x4420
    /* move to FPU: $v0, $f0 */                                 // 0x001b8d24: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b8d28: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001b8d2c: c.ole.s $f1, $f0
    /* bc1t 0x1b8d3c */                                         // 0x001b8d30: bc1t 0x1b8d3c
    /* nop */                                                   // 0x001b8d34: nop 
    *(float*)((sp) + 0xf0) = FPU_F0;  // Store float            // 0x001b8d38: swc1 $f0, 0xf0($sp)
    FPU_F1 = *(float*)((sp) + 0xfc);  // Load float             // 0x001b8d3c: lwc1 $f1, 0xfc($sp)
    /* move to FPU: $zero, $f0 */                               // 0x001b8d40: mtc1 $zero, $f0
    /* nop */                                                   // 0x001b8d44: nop 
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x001b8d48: c.olt.s $f1, $f0
    /* bc1f 0x1b8d70 */                                         // 0x001b8d4c: bc1f 0x1b8d70
    v0 = 0x4396 << 16;                                          // 0x001b8d50: lui $v0, 0x4396
    FPU_F0 = *(float*)((sp) + 0xf0);  // Load float             // 0x001b8d54: lwc1 $f0, 0xf0($sp)
    v0 = 0x4420 << 16;                                          // 0x001b8d58: lui $v0, 0x4420
    /* move to FPU: $v0, $f1 */                                 // 0x001b8d5c: mtc1 $v0, $f1
    /* nop */                                                   // 0x001b8d60: nop 
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x001b8d64: sub.s $f0, $f1, $f0
    *(float*)((sp) + 0xf0) = FPU_F0;  // Store float            // 0x001b8d68: swc1 $f0, 0xf0($sp)
    v0 = 0x4396 << 16;                                          // 0x001b8d6c: lui $v0, 0x4396
    /* move to FPU: $v0, $f0 */                                 // 0x001b8d70: mtc1 $v0, $f0
    FPU_F2 = *(float*)((sp) + 0xf0);  // Load float             // 0x001b8d74: lwc1 $f2, 0xf0($sp)
    /* FPU: div.s $f12, $f20, $f0 */                            // 0x001b8d78: div.s $f12, $f20, $f0
    FPU_F1 = *(float*)((gp) + -0x7f8c);  // Load float          // 0x001b8d7c: lwc1 $f1, -0x7f8c($gp)
    /* FPU: div.s $f0, $f2, $f1 */                              // 0x001b8d80: div.s $f0, $f2, $f1
    /* nop */                                                   // 0x001b8d84: nop 
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b8d88: cvt.w.s $f0, $f0
    /* move from FPU: $s0, $f0 */                               // 0x001b8d8c: mfc1 $s0, $f0
    func_00191fa0();  // 191fa0                                // 0x001b8d90: jal 0x191fa0
    /* nop */                                                   // 0x001b8d94: nop 
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b8d98: cvt.w.s $f0, $f0
    v0 = 0x4396 << 16;                                          // 0x001b8d9c: lui $v0, 0x4396
    /* move to FPU: $v0, $f1 */                                 // 0x001b8da0: mtc1 $v0, $f1
    /* nop */                                                   // 0x001b8da4: nop 
    /* move from FPU: $v0, $f0 */                               // 0x001b8da8: mfc1 $v0, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001b8dac: cvt.s.w $f0, $f0
    v0 = v0 << 2;                                               // 0x001b8db0: sll $v0, $v0, 2
    v0 = s3 + v0;                                               // 0x001b8db4: addu $v0, $s3, $v0
    v1 = g_43960000;  // Global at 0x43960000                   // 0x001b8db8: lw $v1, 0($v0)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001b8dbc: mul.s $f0, $f1, $f0
    v0 = g_43960004;  // Global at 0x43960004                   // 0x001b8dc0: lw $v0, 4($v0)
    /* FPU: sub.s $f0, $f20, $f0 */                             // 0x001b8dc4: sub.s $f0, $f20, $f0
    v0 = v1 - v0;                                               // 0x001b8dc8: subu $v0, $v1, $v0
    /* FPU: div.s $f1, $f0, $f1 */                              // 0x001b8dcc: div.s $f1, $f0, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x001b8dd0: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b8dd4: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001b8dd8: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001b8ddc: mul.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b8de0: cvt.w.s $f0, $f0
    /* move from FPU: $v0, $f0 */                               // 0x001b8de4: mfc1 $v0, $f0
    /* nop */                                                   // 0x001b8de8: nop 
    v0 = v1 - v0;                                               // 0x001b8dec: subu $v0, $v1, $v0
    if (v0 != 0) goto label_0x1b8e00;                           // 0x001b8df0: bnez $v0, 0x1b8e00
    /* nop */                                                   // 0x001b8df4: nop 
    goto label_0x1b8e0c;                                        // 0x001b8df8: b 0x1b8e0c
label_0x1b8e00:
    *(uint32_t*)(s2) = v0;                                      // 0x001b8e00: sw $v0, 0($s2)
    v0 = 1;                                                     // 0x001b8e04: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = s0;                                      // 0x001b8e08: sw $s0, 0($s1)
label_0x1b8e0c:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001b8e10: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w1, $w0, $w20 */                          // 0x001b8e14: aver_u.h $w1, $w0, $w20
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x001b8e18: xori.b $w1, $w0, 0xb3
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001b8e20: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001b8e24: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001b8e28: jr $ra
    sp = sp + 0x100;                                            // 0x001b8e2c: addiu $sp, $sp, 0x100
}