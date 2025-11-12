void func_001a3bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001a3bb0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a3bb8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a3bc8: addu.qb $zero, $sp, $s1
    a1 = 0xa << 16;                                             // 0x001a3bd4: lui $a1, 0xa
    func_001a3230();  // 0x1a31e0                                // 0x001a3bd8: jal 0x1a31e0
    if (v0 != 0) goto label_0x1a3bec;                           // 0x001a3be0: bnez $v0, 0x1a3bec
    /* nop */                                                   // 0x001a3be4: nop 
    s0 = 1;                                                     // 0x001a3be8: addiu $s0, $zero, 1
label_0x1a3bec:
    v0 = 2 << 16;                                               // 0x001a3bec: lui $v0, 2
    v0 = v0 | 0x1000;                                           // 0x001a3bf4: ori $v0, $v0, 0x1000
    func_001a3320();  // 0x1a32e0                                // 0x001a3bf8: jal 0x1a32e0
    *(uint32_t*)(s3) = v0;                                      // 0x001a3bfc: sw $v0, 0($s3)
    func_001a3480();  // 0x1a3420                                // 0x001a3c04: jal 0x1a3420
    *(uint32_t*)((s3) + 4) = v0;                                // 0x001a3c0c: sw $v0, 4($s3)
    func_001a3bb0();  // 0x1a3b20                                // 0x001a3c10: jal 0x1a3b20
    v1 = 1;                                                     // 0x001a3c18: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1a3c34;                          // 0x001a3c1c: bne $v0, $v1, 0x1a3c34
    v1 = *(int32_t*)(s3);                                       // 0x001a3c24: lw $v1, 0($s3)
    v0 = 0x10 << 16;                                            // 0x001a3c28: lui $v0, 0x10
    v0 = v1 | v0;                                               // 0x001a3c2c: or $v0, $v1, $v0
    *(uint32_t*)(s3) = v0;                                      // 0x001a3c30: sw $v0, 0($s3)
label_0x1a3c34:
    goto label_0x1a3c74;                                        // 0x001a3c34: b 0x1a3c74
label_0x1a3c3c:
    func_001a3420();  // 0x1a33a0                                // 0x001a3c3c: jal 0x1a33a0
    goto label_0x1a3c64;                                        // 0x001a3c48: b 0x1a3c64
label_0x1a3c50:
    func_001a3620();  // 0x1a3570                                // 0x001a3c54: jal 0x1a3570
    t4 = t4 + v0;                                               // 0x001a3c5c: addu $t4, $t4, $v0
    t6 = t6 + 1;                                                // 0x001a3c60: addiu $t6, $t6, 1
label_0x1a3c64:
    v0 = (t6 < t5) ? 1 : 0;                                     // 0x001a3c64: slt $v0, $t6, $t5
    if (v0 != 0) goto label_0x1a3c50;                           // 0x001a3c68: bnez $v0, 0x1a3c50
    t7 = t7 + 1;                                                // 0x001a3c70: addiu $t7, $t7, 1
label_0x1a3c74:
    v0 = (t7 < s1) ? 1 : 0;                                     // 0x001a3c74: slt $v0, $t7, $s1
    if (v0 != 0) goto label_0x1a3c3c;                           // 0x001a3c78: bnez $v0, 0x1a3c3c
    a1 = *(int32_t*)((s3) + 4);                                 // 0x001a3c80: lw $a1, 4($s3)
    v0 = 0x10 << 16;                                            // 0x001a3c84: lui $v0, 0x10
    v1 = *(int32_t*)(s3);                                       // 0x001a3c88: lw $v1, 0($s3)
    a0 = a1 + t4;                                               // 0x001a3c8c: addu $a0, $a1, $t4
    v0 = v1 & v0;                                               // 0x001a3c90: and $v0, $v1, $v0
    if (v0 == 0) goto label_0x1a3ca4;                           // 0x001a3c94: beqz $v0, 0x1a3ca4
    a0 = a0 << 1;                                               // 0x001a3c98: sll $a0, $a0, 1
    v0 = a1 << 1;                                               // 0x001a3c9c: sll $v0, $a1, 1
    a0 = a0 + v0;                                               // 0x001a3ca0: addu $a0, $a0, $v0
label_0x1a3ca4:
    v0 = *(int32_t*)((gp) + -0x6420);                           // 0x001a3ca4: lw $v0, -0x6420($gp)
    at = (v0 < a0) ? 1 : 0;                                     // 0x001a3ca8: slt $at, $v0, $a0
    if (at == 0) goto label_0x1a3cb8;                           // 0x001a3cac: beqz $at, 0x1a3cb8
    at = 4 << 16;                                               // 0x001a3cb0: lui $at, 4
    *(uint32_t*)((gp) + -0x6420) = a0;                          // 0x001a3cb4: sw $a0, -0x6420($gp)
label_0x1a3cb8:
    at = at | 1;                                                // 0x001a3cb8: ori $at, $at, 1
    at = (a0 < at) ? 1 : 0;                                     // 0x001a3cbc: slt $at, $a0, $at
    if (at != 0) goto label_0x1a3cd0;                           // 0x001a3cc0: bnez $at, 0x1a3cd0
    goto label_0x1a41ac;                                        // 0x001a3cc8: b 0x1a41ac
label_0x1a3cd0:
    at = 0x31 << 16;                                            // 0x001a3cd0: lui $at, 0x31
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001a3cd4: lw $v1, 0x37fc($at)
    if (v1 != 0) goto label_0x1a3ce8;                           // 0x001a3cd8: bnez $v1, 0x1a3ce8
    v0 = 0x20 << 16;                                            // 0x001a3cdc: lui $v0, 0x20
    goto label_0x1a41a8;                                        // 0x001a3ce0: b 0x1a41a8
label_0x1a3ce8:
    v0 = v1 + v0;                                               // 0x001a3ce8: addu $v0, $v1, $v0
    *(uint32_t*)((s3) + 8) = v0;                                // 0x001a3cec: sw $v0, 8($s3)
    *(uint32_t*)((s3) + 0x1c) = a0;                             // 0x001a3cf0: sw $a0, 0x1c($s3)
    t8 = *(int32_t*)((s3) + 8);                                 // 0x001a3cf4: lw $t8, 8($s3)
    goto label_0x1a3ddc;                                        // 0x001a3cf8: b 0x1a3ddc
label_0x1a3d00:
    func_001a3420();  // 0x1a33a0                                // 0x001a3d00: jal 0x1a33a0
    goto label_0x1a3dcc;                                        // 0x001a3d0c: b 0x1a3dcc
label_0x1a3d14:
    func_001a3620();  // 0x1a3570                                // 0x001a3d18: jal 0x1a3570
    *(uint16_t*)(t8) = v0;                                      // 0x001a3d20: sh $v0, 0($t8)
    func_001a36e0();  // 0x1a3620                                // 0x001a3d30: jal 0x1a3620
    if (v0 == 0) goto label_0x1a3d50;                           // 0x001a3d38: beqz $v0, 0x1a3d50
    /* nop */                                                   // 0x001a3d3c: nop 
    v0 = *(uint16_t*)(t8);                                      // 0x001a3d40: lhu $v0, 0($t8)
    v0 = v0 | 0x8000;                                           // 0x001a3d44: ori $v0, $v0, 0x8000
    goto label_0x1a3d5c;                                        // 0x001a3d48: b 0x1a3d5c
    *(uint16_t*)(t8) = v0;                                      // 0x001a3d4c: sh $v0, 0($t8)
label_0x1a3d50:
    v0 = *(uint16_t*)(t8);                                      // 0x001a3d50: lhu $v0, 0($t8)
    v0 = v0 | 0x4000;                                           // 0x001a3d54: ori $v0, $v0, 0x4000
    *(uint16_t*)(t8) = v0;                                      // 0x001a3d58: sh $v0, 0($t8)
label_0x1a3d5c:
    v1 = *(int32_t*)(s3);                                       // 0x001a3d5c: lw $v1, 0($s3)
    v0 = 0x10 << 16;                                            // 0x001a3d60: lui $v0, 0x10
    v0 = v1 & v0;                                               // 0x001a3d64: and $v0, $v1, $v0
    if (v0 == 0) goto label_0x1a3d88;                           // 0x001a3d68: beqz $v0, 0x1a3d88
    t8 = t8 + 2;                                                // 0x001a3d6c: addiu $t8, $t8, 2
    func_001a3570();  // 0x1a34c0                                // 0x001a3d78: jal 0x1a34c0
    *(uint16_t*)(t8) = v0;                                      // 0x001a3d80: sh $v0, 0($t8)
    t8 = t8 + 2;                                                // 0x001a3d84: addiu $t8, $t8, 2
label_0x1a3d88:
    v0 = *(int32_t*)(s3);                                       // 0x001a3d88: lw $v0, 0($s3)
    v0 = v0 & 0x1000;                                           // 0x001a3d8c: andi $v0, $v0, 0x1000
    if (v0 == 0) goto label_0x1a3dc8;                           // 0x001a3d90: beqz $v0, 0x1a3dc8
    goto label_0x1a3dc0;                                        // 0x001a3d98: b 0x1a3dc0
    v0 = (t9 < t7) ? 1 : 0;                                     // 0x001a3d9c: slt $v0, $t9, $t7
label_0x1a3da0:
    func_001a37c0();  // 0x1a36e0                                // 0x001a3da8: jal 0x1a36e0
    *(uint16_t*)(t8) = v0;                                      // 0x001a3db0: sh $v0, 0($t8)
    t9 = t9 + 1;                                                // 0x001a3db4: addiu $t9, $t9, 1
    t8 = t8 + 2;                                                // 0x001a3db8: addiu $t8, $t8, 2
    v0 = (t9 < t7) ? 1 : 0;                                     // 0x001a3dbc: slt $v0, $t9, $t7
label_0x1a3dc0:
    if (v0 != 0) goto label_0x1a3da0;                           // 0x001a3dc0: bnez $v0, 0x1a3da0
label_0x1a3dc8:
    t4 = t4 + 1;                                                // 0x001a3dc8: addiu $t4, $t4, 1
label_0x1a3dcc:
    v0 = (t4 < t5) ? 1 : 0;                                     // 0x001a3dcc: slt $v0, $t4, $t5
    if (v0 != 0) goto label_0x1a3d14;                           // 0x001a3dd0: bnez $v0, 0x1a3d14
    t6 = t6 + 1;                                                // 0x001a3dd8: addiu $t6, $t6, 1
label_0x1a3ddc:
    v0 = (t6 < s1) ? 1 : 0;                                     // 0x001a3ddc: slt $v0, $t6, $s1
    if (v0 != 0) goto label_0x1a3d00;                           // 0x001a3de0: bnez $v0, 0x1a3d00
    v0 = 0x25;                                                  // 0x001a3de8: addiu $v0, $zero, 0x25
    if (s0 == 0) goto label_0x1a3e00;                           // 0x001a3dec: beqz $s0, 0x1a3e00
    *(uint32_t*)((s3) + 0xc) = v0;                              // 0x001a3df0: sw $v0, 0xc($s3)
    v0 = *(int32_t*)((s3) + 0xc);                               // 0x001a3df4: lw $v0, 0xc($s3)
    v0 = v0 | 0x10;                                             // 0x001a3df8: ori $v0, $v0, 0x10
    *(uint32_t*)((s3) + 0xc) = v0;                              // 0x001a3dfc: sw $v0, 0xc($s3)
label_0x1a3e00:
    func_001a34c0();  // 0x1a3480                                // 0x001a3e00: jal 0x1a3480
    *(uint32_t*)((s3) + 0x14) = v0;                             // 0x001a3e08: sw $v0, 0x14($s3)
    a0 = *(int32_t*)((s3) + 0x14);                              // 0x001a3e0c: lw $a0, 0x14($s3)
    v0 = *(int32_t*)((gp) + -0x6420);                           // 0x001a3e10: lw $v0, -0x6420($gp)
    v1 = a0 << 3;                                               // 0x001a3e14: sll $v1, $a0, 3
    v1 = v1 + a0;                                               // 0x001a3e18: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001a3e1c: sll $v1, $v1, 2
    at = (v0 < v1) ? 1 : 0;                                     // 0x001a3e20: slt $at, $v0, $v1
    if (at == 0) goto label_0x1a3e30;                           // 0x001a3e24: beqz $at, 0x1a3e30
    at = 4 << 16;                                               // 0x001a3e28: lui $at, 4
    *(uint32_t*)((gp) + -0x6420) = v1;                          // 0x001a3e2c: sw $v1, -0x6420($gp)
label_0x1a3e30:
    at = at | 1;                                                // 0x001a3e30: ori $at, $at, 1
    at = (v1 < at) ? 1 : 0;                                     // 0x001a3e34: slt $at, $v1, $at
    if (at != 0) goto label_0x1a3e48;                           // 0x001a3e38: bnez $at, 0x1a3e48
    goto label_0x1a41a8;                                        // 0x001a3e40: b 0x1a41a8
    /* nop */                                                   // 0x001a3e44: nop 
label_0x1a3e48:
    at = 0x31 << 16;                                            // 0x001a3e48: lui $at, 0x31
    a0 = g_003137fc;  // Global at 0x003137fc                   // 0x001a3e4c: lw $a0, 0x37fc($at)
    if (a0 != 0) goto label_0x1a3e60;                           // 0x001a3e50: bnez $a0, 0x1a3e60
    v0 = 0x24 << 16;                                            // 0x001a3e54: lui $v0, 0x24
    goto label_0x1a41a8;                                        // 0x001a3e58: b 0x1a41a8
label_0x1a3e60:
    v0 = a0 + v0;                                               // 0x001a3e60: addu $v0, $a0, $v0
    *(uint32_t*)((s3) + 0x10) = v0;                             // 0x001a3e64: sw $v0, 0x10($s3)
    *(uint32_t*)((s3) + 0x18) = v1;                             // 0x001a3e68: sw $v1, 0x18($s3)
    t1 = *(int32_t*)((s3) + 0x10);                              // 0x001a3e6c: lw $t1, 0x10($s3)
    goto label_0x1a4198;                                        // 0x001a3e70: b 0x1a4198
label_0x1a3e78:
    if (s0 == 0) goto label_0x1a401c;                           // 0x001a3e78: beqz $s0, 0x1a401c
    func_001a3810();  // 0x1a37c0                                // 0x001a3e84: jal 0x1a37c0
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001a3e8c: lwc1 $f0, 0($v0)
    *(float*)(t1) = FPU_F0;  // Store float                     // 0x001a3e98: swc1 $f0, 0($t1)
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x001a3e9c: lwc1 $f0, 4($v0)
    *(float*)((t1) + 4) = FPU_F0;  // Store float               // 0x001a3ea0: swc1 $f0, 4($t1)
    FPU_F0 = *(float*)((v0) + 8);  // Load float                // 0x001a3ea4: lwc1 $f0, 8($v0)
    func_001a3860();  // 0x1a3810                                // 0x001a3ea8: jal 0x1a3810
    *(float*)((t1) + 8) = FPU_F0;  // Store float               // 0x001a3eac: swc1 $f0, 8($t1)
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001a3eb0: lwc1 $f0, 0($v0)
    *(float*)((t1) + 0xc) = FPU_F0;  // Store float             // 0x001a3ebc: swc1 $f0, 0xc($t1)
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x001a3ec0: lwc1 $f0, 4($v0)
    *(float*)((t1) + 0x10) = FPU_F0;  // Store float            // 0x001a3ec4: swc1 $f0, 0x10($t1)
    FPU_F0 = *(float*)((v0) + 8);  // Load float                // 0x001a3ec8: lwc1 $f0, 8($v0)
    func_001a38a0();  // 0x1a3860                                // 0x001a3ecc: jal 0x1a3860
    *(float*)((t1) + 0x14) = FPU_F0;  // Store float            // 0x001a3ed0: swc1 $f0, 0x14($t1)
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001a3ed4: lwc1 $f0, 0($v0)
    *(float*)((t1) + 0x1c) = FPU_F0;  // Store float            // 0x001a3ee0: swc1 $f0, 0x1c($t1)
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x001a3ee4: lwc1 $f0, 4($v0)
    func_001a38e0();  // 0x1a38a0                                // 0x001a3ee8: jal 0x1a38a0
    *(float*)((t1) + 0x20) = FPU_F0;  // Store float            // 0x001a3eec: swc1 $f0, 0x20($t1)
    FPU_F1 = *(float*)((v0) + 0xc);  // Load float              // 0x001a3ef0: lwc1 $f1, 0xc($v0)
    v1 = 0x4f00 << 16;                                          // 0x001a3ef4: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a3ef8: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a3efc: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a3f00: c.ole.s $f0, $f1
    /* bc1t 0x1a3f1c */                                         // 0x001a3f04: bc1t 0x1a3f1c
    /* nop */                                                   // 0x001a3f08: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a3f0c: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a3f10: mfc1 $a0, $f1
    goto label_0x1a3f38;                                        // 0x001a3f14: b 0x1a3f38
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x001a3f18: lwc1 $f1, 0($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a3f1c: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a3f20: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a3f24: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a3f28: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a3f2c: nop 
    a0 = a0 | v1;                                               // 0x001a3f30: or $a0, $a0, $v1
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x001a3f34: lwc1 $f1, 0($v0)
label_0x1a3f38:
    v1 = 0x4f00 << 16;                                          // 0x001a3f38: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a3f3c: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a3f40: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a3f44: c.ole.s $f0, $f1
    /* bc1t 0x1a3f60 */                                         // 0x001a3f48: bc1t 0x1a3f60
    a1 = a0 << 0x18;                                            // 0x001a3f4c: sll $a1, $a0, 0x18
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a3f50: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a3f54: mfc1 $a0, $f1
    goto label_0x1a3f7c;                                        // 0x001a3f58: b 0x1a3f7c
    FPU_F1 = *(float*)((v0) + 4);  // Load float                // 0x001a3f5c: lwc1 $f1, 4($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a3f60: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a3f64: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a3f68: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a3f6c: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a3f70: nop 
    a0 = a0 | v1;                                               // 0x001a3f74: or $a0, $a0, $v1
    FPU_F1 = *(float*)((v0) + 4);  // Load float                // 0x001a3f78: lwc1 $f1, 4($v0)
label_0x1a3f7c:
    v1 = a0 << 0x10;                                            // 0x001a3f7c: sll $v1, $a0, 0x10
    a1 = a1 | v1;                                               // 0x001a3f80: or $a1, $a1, $v1
    v1 = 0x4f00 << 16;                                          // 0x001a3f84: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a3f88: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a3f8c: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a3f90: c.ole.s $f0, $f1
    /* bc1t 0x1a3fac */                                         // 0x001a3f94: bc1t 0x1a3fac
    /* nop */                                                   // 0x001a3f98: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a3f9c: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a3fa0: mfc1 $a0, $f1
    goto label_0x1a3fc8;                                        // 0x001a3fa4: b 0x1a3fc8
    FPU_F1 = *(float*)((v0) + 8);  // Load float                // 0x001a3fa8: lwc1 $f1, 8($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a3fac: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a3fb0: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a3fb4: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a3fb8: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a3fbc: nop 
    a0 = a0 | v1;                                               // 0x001a3fc0: or $a0, $a0, $v1
    FPU_F1 = *(float*)((v0) + 8);  // Load float                // 0x001a3fc4: lwc1 $f1, 8($v0)
label_0x1a3fc8:
    v1 = a0 << 8;                                               // 0x001a3fc8: sll $v1, $a0, 8
    v0 = 0x4f00 << 16;                                          // 0x001a3fcc: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001a3fd0: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a3fd4: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a3fd8: c.ole.s $f0, $f1
    /* bc1t 0x1a3ff4 */                                         // 0x001a3fdc: bc1t 0x1a3ff4
    a0 = v1 | a1;                                               // 0x001a3fe0: or $a0, $v1, $a1
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a3fe4: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a3fe8: mfc1 $v1, $f1
    goto label_0x1a4010;                                        // 0x001a3fec: b 0x1a4010
    v0 = v1 | a0;                                               // 0x001a3ff0: or $v0, $v1, $a0
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a3ff4: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001a3ff8: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a3ffc: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a4000: mfc1 $v1, $f1
    /* nop */                                                   // 0x001a4004: nop 
    v1 = v1 | v0;                                               // 0x001a4008: or $v1, $v1, $v0
    v0 = v1 | a0;                                               // 0x001a400c: or $v0, $v1, $a0
label_0x1a4010:
    *(uint32_t*)((t1) + 0x18) = v0;                             // 0x001a4010: sw $v0, 0x18($t1)
    goto label_0x1a4194;                                        // 0x001a4014: b 0x1a4194
    t1 = t1 + 0x24;                                             // 0x001a4018: addiu $t1, $t1, 0x24
label_0x1a401c:
    func_001a3810();  // 0x1a37c0                                // 0x001a401c: jal 0x1a37c0
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001a4024: lwc1 $f0, 0($v0)
    *(float*)(t1) = FPU_F0;  // Store float                     // 0x001a4030: swc1 $f0, 0($t1)
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x001a4034: lwc1 $f0, 4($v0)
    *(float*)((t1) + 4) = FPU_F0;  // Store float               // 0x001a4038: swc1 $f0, 4($t1)
    FPU_F0 = *(float*)((v0) + 8);  // Load float                // 0x001a403c: lwc1 $f0, 8($v0)
    func_001a3860();  // 0x1a3810                                // 0x001a4040: jal 0x1a3810
    *(float*)((t1) + 8) = FPU_F0;  // Store float               // 0x001a4044: swc1 $f0, 8($t1)
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001a4048: lwc1 $f0, 0($v0)
    *(float*)((t1) + 0xc) = FPU_F0;  // Store float             // 0x001a4054: swc1 $f0, 0xc($t1)
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x001a4058: lwc1 $f0, 4($v0)
    *(float*)((t1) + 0x10) = FPU_F0;  // Store float            // 0x001a405c: swc1 $f0, 0x10($t1)
    FPU_F0 = *(float*)((v0) + 8);  // Load float                // 0x001a4060: lwc1 $f0, 8($v0)
    func_001a38e0();  // 0x1a38a0                                // 0x001a4064: jal 0x1a38a0
    *(float*)((t1) + 0x14) = FPU_F0;  // Store float            // 0x001a4068: swc1 $f0, 0x14($t1)
    FPU_F1 = *(float*)((v0) + 0xc);  // Load float              // 0x001a406c: lwc1 $f1, 0xc($v0)
    v1 = 0x4f00 << 16;                                          // 0x001a4070: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a4074: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a4078: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a407c: c.ole.s $f0, $f1
    /* bc1t 0x1a4098 */                                         // 0x001a4080: bc1t 0x1a4098
    /* nop */                                                   // 0x001a4084: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4088: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a408c: mfc1 $a0, $f1
    goto label_0x1a40b4;                                        // 0x001a4090: b 0x1a40b4
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x001a4094: lwc1 $f1, 0($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a4098: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a409c: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a40a0: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a40a4: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a40a8: nop 
    a0 = a0 | v1;                                               // 0x001a40ac: or $a0, $a0, $v1
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x001a40b0: lwc1 $f1, 0($v0)
label_0x1a40b4:
    v1 = 0x4f00 << 16;                                          // 0x001a40b4: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a40b8: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a40bc: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a40c0: c.ole.s $f0, $f1
    /* bc1t 0x1a40dc */                                         // 0x001a40c4: bc1t 0x1a40dc
    a1 = a0 << 0x18;                                            // 0x001a40c8: sll $a1, $a0, 0x18
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a40cc: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a40d0: mfc1 $a0, $f1
    goto label_0x1a40f8;                                        // 0x001a40d4: b 0x1a40f8
    FPU_F1 = *(float*)((v0) + 4);  // Load float                // 0x001a40d8: lwc1 $f1, 4($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a40dc: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a40e0: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a40e4: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a40e8: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a40ec: nop 
    a0 = a0 | v1;                                               // 0x001a40f0: or $a0, $a0, $v1
    FPU_F1 = *(float*)((v0) + 4);  // Load float                // 0x001a40f4: lwc1 $f1, 4($v0)
label_0x1a40f8:
    v1 = a0 << 0x10;                                            // 0x001a40f8: sll $v1, $a0, 0x10
    a1 = a1 | v1;                                               // 0x001a40fc: or $a1, $a1, $v1
    v1 = 0x4f00 << 16;                                          // 0x001a4100: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a4104: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a4108: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a410c: c.ole.s $f0, $f1
    /* bc1t 0x1a4128 */                                         // 0x001a4110: bc1t 0x1a4128
    /* nop */                                                   // 0x001a4114: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4118: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a411c: mfc1 $a0, $f1
    goto label_0x1a4144;                                        // 0x001a4120: b 0x1a4144
    FPU_F1 = *(float*)((v0) + 8);  // Load float                // 0x001a4124: lwc1 $f1, 8($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a4128: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a412c: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4130: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a4134: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a4138: nop 
    a0 = a0 | v1;                                               // 0x001a413c: or $a0, $a0, $v1
    FPU_F1 = *(float*)((v0) + 8);  // Load float                // 0x001a4140: lwc1 $f1, 8($v0)
label_0x1a4144:
    v1 = a0 << 8;                                               // 0x001a4144: sll $v1, $a0, 8
    v0 = 0x4f00 << 16;                                          // 0x001a4148: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001a414c: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a4150: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a4154: c.ole.s $f0, $f1
    /* bc1t 0x1a4170 */                                         // 0x001a4158: bc1t 0x1a4170
    a0 = v1 | a1;                                               // 0x001a415c: or $a0, $v1, $a1
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4160: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a4164: mfc1 $v1, $f1
    goto label_0x1a418c;                                        // 0x001a4168: b 0x1a418c
    v0 = v1 | a0;                                               // 0x001a416c: or $v0, $v1, $a0
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a4170: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001a4174: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4178: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a417c: mfc1 $v1, $f1
    /* nop */                                                   // 0x001a4180: nop 
    v1 = v1 | v0;                                               // 0x001a4184: or $v1, $v1, $v0
    v0 = v1 | a0;                                               // 0x001a4188: or $v0, $v1, $a0
label_0x1a418c:
    *(uint32_t*)((t1) + 0x18) = v0;                             // 0x001a418c: sw $v0, 0x18($t1)
    t1 = t1 + 0x1c;                                             // 0x001a4190: addiu $t1, $t1, 0x1c
label_0x1a4194:
    t2 = t2 + 1;                                                // 0x001a4194: addiu $t2, $t2, 1
label_0x1a4198:
    v0 = *(int32_t*)((s3) + 0x14);                              // 0x001a4198: lw $v0, 0x14($s3)
    v0 = (t2 < v0) ? 1 : 0;                                     // 0x001a419c: slt $v0, $t2, $v0
    if (v0 != 0) goto label_0x1a3e78;                           // 0x001a41a0: bnez $v0, 0x1a3e78
    v0 = 1;                                                     // 0x001a41a4: addiu $v0, $zero, 1
label_0x1a41a8:
label_0x1a41ac:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a41b0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a41b4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a41b8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a41bc: jr $ra
    sp = sp + 0x50;                                             // 0x001a41c0: addiu $sp, $sp, 0x50
}