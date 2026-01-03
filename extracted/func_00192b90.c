void func_00192b90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x00192b90: addiu $sp, $sp, -0xa0
    /* FPU: dps.w.ph $ac0, $sp, $s6 */                          // 0x00192b9c: dps.w.ph $ac0, $sp, $s6
    /* FPU: subu.qb $zero, $sp, $s4 */                          // 0x00192ba8: subu.qb $zero, $sp, $s4
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x00192bb8: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00192bc8: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00192bcc: swc1 $f20, 0($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x00192bd0: mov.s $f20, $f12
label_0x192bd4:
    v1 = a0 << 2;                                               // 0x00192bd4: sll $v1, $a0, 2
    v0 = a1 + v1;                                               // 0x00192bd8: addu $v0, $a1, $v1
    a0 = a0 + 1;                                                // 0x00192bdc: addiu $a0, $a0, 1
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x00192be0: lwc1 $f0, 0($v0)
    v1 = s4 + v1;                                               // 0x00192be4: addu $v1, $s4, $v1
    v0 = (a0 < 0xa) ? 1 : 0;                                    // 0x00192be8: slti $v0, $a0, 0xa
    if (v0 != 0) goto label_0x192bd4;                           // 0x00192bec: bnez $v0, 0x192bd4
    *(float*)(v1) = FPU_F0;  // Store float                     // 0x00192bf0: swc1 $f0, 0($v1)
    if (s5 == 0) goto label_0x192d18;                           // 0x00192bf4: beqz $s5, 0x192d18
    /* nop */                                                   // 0x00192bf8: nop 
    v1 = *(uint16_t*)(s5);                                      // 0x00192bfc: lhu $v1, 0($s5)
    v0 = 0x2000;                                                // 0x00192c00: addiu $v0, $zero, 0x2000
    v1 = v1 & 0xf000;                                           // 0x00192c04: andi $v1, $v1, 0xf000
    if (v1 == v0) goto label_0x192c78;                          // 0x00192c08: beq $v1, $v0, 0x192c78
    v0 = 0x1000;                                                // 0x00192c0c: addiu $v0, $zero, 0x1000
    if (v1 == v0) goto label_0x192c20;                          // 0x00192c10: beq $v1, $v0, 0x192c20
    /* nop */                                                   // 0x00192c14: nop 
    goto label_0x192d1c;                                        // 0x00192c18: b 0x192d1c
    FPU_F12 = *(float*)(s4);  // Load float                     // 0x00192c1c: lwc1 $f12, 0($s4)
label_0x192c20:
    v1 = *(int32_t*)((s5) + 4);                                 // 0x00192c20: lw $v1, 4($s5)
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x00192c28: lw $v0, -0x64dc($gp)
    goto label_0x192c60;                                        // 0x00192c2c: b 0x192c60
    s2 = v1 + v0;                                               // 0x00192c30: addu $s2, $v1, $v0
label_0x192c34:
    s1 = *(uint8_t*)((s2) + 1);                                 // 0x00192c34: lbu $s1, 1($s2)
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192c38: mov.s $f12, $f20
    v0 = s1 << 1;                                               // 0x00192c40: sll $v0, $s1, 1
    func_0018e220();  // 18e220                                // 0x00192c44: jal 0x18e220
    a1 = s7 + v0;                                               // 0x00192c48: addu $a1, $s7, $v0
    v0 = s1 << 2;                                               // 0x00192c4c: sll $v0, $s1, 2
    s0 = s0 + 1;                                                // 0x00192c50: addiu $s0, $s0, 1
    v0 = s4 + v0;                                               // 0x00192c54: addu $v0, $s4, $v0
    s2 = s2 + 8;                                                // 0x00192c58: addiu $s2, $s2, 8
    *(float*)(v0) = FPU_F0;  // Store float                     // 0x00192c5c: swc1 $f0, 0($v0)
label_0x192c60:
    v0 = *(int16_t*)((s5) + 2);                                 // 0x00192c60: lh $v0, 2($s5)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x00192c64: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x192c34;                           // 0x00192c68: bnez $v0, 0x192c34
    /* nop */                                                   // 0x00192c6c: nop 
    goto label_0x192d18;                                        // 0x00192c70: b 0x192d18
    /* nop */                                                   // 0x00192c74: nop 
label_0x192c78:
    v1 = *(int32_t*)((s5) + 4);                                 // 0x00192c78: lw $v1, 4($s5)
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x00192c80: lw $v0, -0x64dc($gp)
    goto label_0x192d08;                                        // 0x00192c84: b 0x192d08
    s0 = v1 + v0;                                               // 0x00192c88: addu $s0, $v1, $v0
label_0x192c8c:
    s2 = *(uint8_t*)((s0) + 1);                                 // 0x00192c8c: lbu $s2, 1($s0)
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192c90: mov.s $f12, $f20
    v1 = s2 << 2;                                               // 0x00192c98: sll $v1, $s2, 2
    v0 = s2 << 1;                                               // 0x00192c9c: sll $v0, $s2, 1
    s1 = s4 + v1;                                               // 0x00192ca0: addu $s1, $s4, $v1
    func_0018e220();  // 18e220                                // 0x00192ca4: jal 0x18e220
    a1 = s7 + v0;                                               // 0x00192ca8: addu $a1, $s7, $v0
    v1 = s2 & 0xffff;                                           // 0x00192cac: andi $v1, $s2, 0xffff
    v0 = 5;                                                     // 0x00192cb0: addiu $v0, $zero, 5
    if (v1 == v0) goto label_0x192cd8;                          // 0x00192cb4: beq $v1, $v0, 0x192cd8
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x00192cb8: swc1 $f0, 0($s1)
    v0 = 4;                                                     // 0x00192cbc: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x192cd8;                          // 0x00192cc0: beq $v1, $v0, 0x192cd8
    v0 = 3;                                                     // 0x00192cc4: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x192cd8;                          // 0x00192cc8: beq $v1, $v0, 0x192cd8
    /* nop */                                                   // 0x00192ccc: nop 
    goto label_0x192cec;                                        // 0x00192cd0: b 0x192cec
    FPU_F0 = *(float*)(s1);  // Load float                      // 0x00192cd4: lwc1 $f0, 0($s1)
label_0x192cd8:
    FPU_F1 = *(float*)(s1);  // Load float                      // 0x00192cd8: lwc1 $f1, 0($s1)
    FPU_F0 = *(float*)((gp) + -0x7f38);  // Load float          // 0x00192cdc: lwc1 $f0, -0x7f38($gp)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00192ce0: mul.s $f0, $f1, $f0
    goto label_0x192d00;                                        // 0x00192ce4: b 0x192d00
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x00192ce8: swc1 $f0, 0($s1)
label_0x192cec:
    v0 = 0x4180 << 16;                                          // 0x00192cec: lui $v0, 0x4180
    /* move to FPU: $v0, $f1 */                                 // 0x00192cf0: mtc1 $v0, $f1
    /* nop */                                                   // 0x00192cf4: nop 
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x00192cf8: div.s $f0, $f0, $f1
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x00192cfc: swc1 $f0, 0($s1)
label_0x192d00:
    s6 = s6 + 1;                                                // 0x00192d00: addiu $s6, $s6, 1
    s0 = s0 + 8;                                                // 0x00192d04: addiu $s0, $s0, 8
label_0x192d08:
    v0 = *(int16_t*)((s5) + 2);                                 // 0x00192d08: lh $v0, 2($s5)
    v0 = (s6 < v0) ? 1 : 0;                                     // 0x00192d0c: slt $v0, $s6, $v0
    if (v0 != 0) goto label_0x192c8c;                           // 0x00192d10: bnez $v0, 0x192c8c
    /* nop */                                                   // 0x00192d14: nop 
label_0x192d18:
    FPU_F12 = *(float*)(s4);  // Load float                     // 0x00192d18: lwc1 $f12, 0($s4)
label_0x192d1c:
    FPU_F13 = *(float*)((s4) + 4);  // Load float               // 0x00192d1c: lwc1 $f13, 4($s4)
    FPU_F14 = *(float*)((s4) + 8);  // Load float               // 0x00192d20: lwc1 $f14, 8($s4)
    func_0018fc10();  // 18fc10                                // 0x00192d24: jal 0x18fc10
    FPU_F12 = *(float*)((s4) + 0xc);  // Load float             // 0x00192d2c: lwc1 $f12, 0xc($s4)
    FPU_F13 = *(float*)((s4) + 0x10);  // Load float            // 0x00192d30: lwc1 $f13, 0x10($s4)
    FPU_F14 = *(float*)((s4) + 0x14);  // Load float            // 0x00192d34: lwc1 $f14, 0x14($s4)
    func_001907c0();  // 1907c0                                // 0x00192d38: jal 0x1907c0
    FPU_F0 = *(float*)((s4) + 0x18);  // Load float             // 0x00192d40: lwc1 $f0, 0x18($s4)
    v0 = 1;                                                     // 0x00192d44: addiu $v0, $zero, 1
    *(float*)((s3) + 0x30) = FPU_F0;  // Store float            // 0x00192d48: swc1 $f0, 0x30($s3)
    FPU_F0 = *(float*)((s4) + 0x1c);  // Load float             // 0x00192d4c: lwc1 $f0, 0x1c($s4)
    *(float*)((s3) + 0x34) = FPU_F0;  // Store float            // 0x00192d50: swc1 $f0, 0x34($s3)
    FPU_F0 = *(float*)((s4) + 0x20);  // Load float             // 0x00192d54: lwc1 $f0, 0x20($s4)
    *(float*)((s3) + 0x38) = FPU_F0;  // Store float            // 0x00192d58: swc1 $f0, 0x38($s3)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00192d60: lwc1 $f20, 0($sp)
    /* FPU: xori.b $w2, $w0, 0xb7 */                            // 0x00192d64: xori.b $w2, $w0, 0xb7
    /* FPU: ld.b $w1, -0x4b($zero) */                           // 0x00192d6c: ld.b $w1, -0x4b($zero)
    /* FPU: aver_u.h $w1, $w0, $w20 */                          // 0x00192d70: aver_u.h $w1, $w0, $w20
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x00192d74: xori.b $w1, $w0, 0xb3
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00192d7c: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00192d80: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x00192d84: jr $ra
    sp = sp + 0xa0;                                             // 0x00192d88: addiu $sp, $sp, 0xa0
}