void func_00193d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x00193d00: addiu $sp, $sp, -0x90
    /* FPU: dps.w.ph $ac0, $sp, $s6 */                          // 0x00193d08: dps.w.ph $ac0, $sp, $s6
    /* FPU: subu.qb $zero, $sp, $s4 */                          // 0x00193d14: subu.qb $zero, $sp, $s4
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x00193d24: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00193d2c: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00193d30: swc1 $f20, 0($sp)
    if (s5 == 0) goto label_0x193e58;                           // 0x00193d34: beqz $s5, 0x193e58
    /* FPU: mov.s $f20, $f12 */                                 // 0x00193d38: mov.s $f20, $f12
    v1 = *(uint16_t*)(s5);                                      // 0x00193d3c: lhu $v1, 0($s5)
    v0 = 0x2000;                                                // 0x00193d40: addiu $v0, $zero, 0x2000
    v1 = v1 & 0xf000;                                           // 0x00193d44: andi $v1, $v1, 0xf000
    if (v1 == v0) goto label_0x193db8;                          // 0x00193d48: beq $v1, $v0, 0x193db8
    v0 = 0x1000;                                                // 0x00193d4c: addiu $v0, $zero, 0x1000
    if (v1 == v0) goto label_0x193d60;                          // 0x00193d50: beq $v1, $v0, 0x193d60
    /* nop */                                                   // 0x00193d54: nop 
    goto label_0x193e5c;                                        // 0x00193d58: b 0x193e5c
label_0x193d60:
    v1 = *(int32_t*)((s5) + 4);                                 // 0x00193d60: lw $v1, 4($s5)
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x00193d68: lw $v0, -0x64dc($gp)
    goto label_0x193da0;                                        // 0x00193d6c: b 0x193da0
    s0 = v1 + v0;                                               // 0x00193d70: addu $s0, $v1, $v0
label_0x193d74:
    s2 = *(uint8_t*)((s0) + 1);                                 // 0x00193d74: lbu $s2, 1($s0)
    /* FPU: mov.s $f12, $f20 */                                 // 0x00193d78: mov.s $f12, $f20
    v0 = s2 << 1;                                               // 0x00193d80: sll $v0, $s2, 1
    func_0018e220();  // 18e220                                // 0x00193d84: jal 0x18e220
    a1 = s6 + v0;                                               // 0x00193d88: addu $a1, $s6, $v0
    v0 = s2 << 2;                                               // 0x00193d8c: sll $v0, $s2, 2
    s1 = s1 + 1;                                                // 0x00193d90: addiu $s1, $s1, 1
    v0 = s4 + v0;                                               // 0x00193d94: addu $v0, $s4, $v0
    s0 = s0 + 8;                                                // 0x00193d98: addiu $s0, $s0, 8
    *(float*)(v0) = FPU_F0;  // Store float                     // 0x00193d9c: swc1 $f0, 0($v0)
label_0x193da0:
    v0 = *(int16_t*)((s5) + 2);                                 // 0x00193da0: lh $v0, 2($s5)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x00193da4: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x193d74;                           // 0x00193da8: bnez $v0, 0x193d74
    /* nop */                                                   // 0x00193dac: nop 
    goto label_0x193e58;                                        // 0x00193db0: b 0x193e58
    /* nop */                                                   // 0x00193db4: nop 
label_0x193db8:
    v1 = *(int32_t*)((s5) + 4);                                 // 0x00193db8: lw $v1, 4($s5)
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x00193dc0: lw $v0, -0x64dc($gp)
    goto label_0x193e48;                                        // 0x00193dc4: b 0x193e48
    s1 = v1 + v0;                                               // 0x00193dc8: addu $s1, $v1, $v0
label_0x193dcc:
    s3 = *(uint8_t*)((s1) + 1);                                 // 0x00193dcc: lbu $s3, 1($s1)
    /* FPU: mov.s $f12, $f20 */                                 // 0x00193dd0: mov.s $f12, $f20
    v1 = s3 << 2;                                               // 0x00193dd8: sll $v1, $s3, 2
    v0 = s3 << 1;                                               // 0x00193ddc: sll $v0, $s3, 1
    s2 = s4 + v1;                                               // 0x00193de0: addu $s2, $s4, $v1
    func_0018e220();  // 18e220                                // 0x00193de4: jal 0x18e220
    a1 = s6 + v0;                                               // 0x00193de8: addu $a1, $s6, $v0
    v1 = s3 & 0xffff;                                           // 0x00193dec: andi $v1, $s3, 0xffff
    v0 = 5;                                                     // 0x00193df0: addiu $v0, $zero, 5
    if (v1 == v0) goto label_0x193e18;                          // 0x00193df4: beq $v1, $v0, 0x193e18
    *(float*)(s2) = FPU_F0;  // Store float                     // 0x00193df8: swc1 $f0, 0($s2)
    v0 = 4;                                                     // 0x00193dfc: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x193e18;                          // 0x00193e00: beq $v1, $v0, 0x193e18
    v0 = 3;                                                     // 0x00193e04: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x193e18;                          // 0x00193e08: beq $v1, $v0, 0x193e18
    /* nop */                                                   // 0x00193e0c: nop 
    goto label_0x193e2c;                                        // 0x00193e10: b 0x193e2c
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x00193e14: lwc1 $f0, 0($s2)
label_0x193e18:
    FPU_F1 = *(float*)(s2);  // Load float                      // 0x00193e18: lwc1 $f1, 0($s2)
    FPU_F0 = *(float*)((gp) + -0x7f38);  // Load float          // 0x00193e1c: lwc1 $f0, -0x7f38($gp)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00193e20: mul.s $f0, $f1, $f0
    goto label_0x193e40;                                        // 0x00193e24: b 0x193e40
    *(float*)(s2) = FPU_F0;  // Store float                     // 0x00193e28: swc1 $f0, 0($s2)
label_0x193e2c:
    v0 = 0x4180 << 16;                                          // 0x00193e2c: lui $v0, 0x4180
    /* move to FPU: $v0, $f1 */                                 // 0x00193e30: mtc1 $v0, $f1
    /* nop */                                                   // 0x00193e34: nop 
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x00193e38: div.s $f0, $f0, $f1
    *(float*)(s2) = FPU_F0;  // Store float                     // 0x00193e3c: swc1 $f0, 0($s2)
label_0x193e40:
    s0 = s0 + 1;                                                // 0x00193e40: addiu $s0, $s0, 1
    s1 = s1 + 8;                                                // 0x00193e44: addiu $s1, $s1, 8
label_0x193e48:
    v0 = *(int16_t*)((s5) + 2);                                 // 0x00193e48: lh $v0, 2($s5)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x00193e4c: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x193dcc;                           // 0x00193e50: bnez $v0, 0x193dcc
    /* nop */                                                   // 0x00193e54: nop 
label_0x193e58:
label_0x193e5c:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00193e5c: lwc1 $f20, 0($sp)
    v0 = 1;                                                     // 0x00193e64: addiu $v0, $zero, 1
    /* FPU: ld.b $w1, -0x4b($zero) */                           // 0x00193e68: ld.b $w1, -0x4b($zero)
    /* FPU: aver_u.h $w1, $w0, $w20 */                          // 0x00193e6c: aver_u.h $w1, $w0, $w20
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x00193e70: xori.b $w1, $w0, 0xb3
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00193e78: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00193e7c: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x00193e80: jr $ra
    sp = sp + 0x90;                                             // 0x00193e84: addiu $sp, $sp, 0x90
}