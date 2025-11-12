void func_00120d78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_140, local_144, local_148;
    
    v0 = a2 + -3;                                               // 0x00120d78: addiu $v0, $a2, -3
    t2 = a2 + 4;                                                // 0x00120d7c: addiu $t2, $a2, 4
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x00120d80: slti $v1, $v0, 0
    sp = sp + -0x1b0;                                           // 0x00120d84: addiu $sp, $sp, -0x1b0
    if (v1 != 0) v0 = t2;                                       // 0x00120d88: movn $v0, $t2, $v1
    s7 = v0 >> 3;                                               // 0x00120d90: sra $s7, $v0, 3
    local_144 = t0;                                             // 0x00120d94: sw $t0, 0x144($sp)
    v0 = (s7 < 0) ? 1 : 0;                                      // 0x00120d98: slti $v0, $s7, 0
    t0 = t0 << 2;                                               // 0x00120d9c: sll $t0, $t0, 2
    if (v0 != 0) s7 = 0;                                        // 0x00120da0: movn $s7, $zero, $v0
    s4 = 0x22 << 16;                                            // 0x00120da8: lui $s4, 0x22
    s4 = s4 + t0;                                               // 0x00120dac: addu $s4, $s4, $t0
    s4 = g_00221a28;  // Global at 0x00221a28                   // 0x00120db0: lw $s4, 0x1a28($s4)
    v0 = s7 << 3;                                               // 0x00120db4: sll $v0, $s7, 3
    s2 = a3 + -1;                                               // 0x00120dbc: addiu $s2, $a3, -1
    a2 = a2 - v0;                                               // 0x00120dc0: subu $a2, $a2, $v0
    v1 = s2 + s4;                                               // 0x00120dc4: addu $v1, $s2, $s4
    s1 = a2 + -8;                                               // 0x00120dcc: addiu $s1, $a2, -8
    a1 = s7 - s2;                                               // 0x00120ddc: subu $a1, $s7, $s2
    *(float*)((sp) + 0x1a0) = FPU_F20;  // Store float          // 0x00120df0: swc1 $f20, 0x1a0($sp)
    local_140 = a0;                                             // 0x00120df4: sw $a0, 0x140($sp)
    if (v1 < 0) goto label_0x120e38;                            // 0x00120df8: bltz $v1, 0x120e38
    local_148 = t1;                                             // 0x00120dfc: sw $t1, 0x148($sp)
    v0 = a1 << 2;                                               // 0x00120e00: sll $v0, $a1, 2
    a2 = v1 + 1;                                                // 0x00120e04: addiu $a2, $v1, 1
    v0 = v0 + t1;                                               // 0x00120e08: addu $v0, $v0, $t1
    v1 = sp + 0x50;                                             // 0x00120e0c: addiu $v1, $sp, 0x50
label_0x120e10:
    if (a1 < 0) goto label_0x120e24;                            // 0x00120e10: bltzl $a1, 0x120e24
    g_00220123 = 0;  // Global at 0x00220123                    // 0x00120e14: sw $zero, 0($v1)
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x00120e18: lwc1 $f0, 0($v0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00120e1c: cvt.s.w $f0, $f0
    *(float*)(v1) = FPU_F0;  // Store float                     // 0x00120e20: swc1 $f0, 0($v1)
label_0x120e24:
    a2 = a2 + -1;                                               // 0x00120e24: addiu $a2, $a2, -1
    v1 = v1 + 4;                                                // 0x00120e28: addiu $v1, $v1, 4
    v0 = v0 + 4;                                                // 0x00120e2c: addiu $v0, $v0, 4
    if (a2 != 0) goto label_0x120e10;                           // 0x00120e30: bnez $a2, 0x120e10
    a1 = a1 + 1;                                                // 0x00120e34: addiu $a1, $a1, 1
label_0x120e38:
    if (s4 < 0) goto label_0x120ea8;                            // 0x00120e38: bltz $s4, 0x120ea8
    v0 = sp + 0xf0;                                             // 0x00120e40: addiu $v0, $sp, 0xf0
    /* nop */                                                   // 0x00120e4c: nop 
label_0x120e50:
    /* move to FPU: $zero, $f2 */                               // 0x00120e50: mtc1 $zero, $f2
    if (s2 < 0) goto label_0x120e94;                            // 0x00120e54: bltzl $s2, 0x120e94
    a2 = a2 + 1;                                                // 0x00120e58: addiu $a2, $a2, 1
    a1 = sp + 0x50;                                             // 0x00120e5c: addiu $a1, $sp, 0x50
    v0 = a0 << 2;                                               // 0x00120e60: sll $v0, $a0, 2
    v1 = local_140;                                             // 0x00120e64: lw $v1, 0x140($sp)
    v0 = v0 + a1;                                               // 0x00120e68: addu $v0, $v0, $a1
    a1 = s2 + 1;                                                // 0x00120e6c: addiu $a1, $s2, 1
label_0x120e70:
    FPU_F0 = *(float*)(v1);  // Load float                      // 0x00120e70: lwc1 $f0, 0($v1)
    v1 = v1 + 4;                                                // 0x00120e74: addiu $v1, $v1, 4
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x00120e78: lwc1 $f1, 0($v0)
    v0 = v0 + -4;                                               // 0x00120e7c: addiu $v0, $v0, -4
    a1 = a1 + -1;                                               // 0x00120e80: addiu $a1, $a1, -1
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00120e84: mul.s $f0, $f0, $f1
    if (a1 != 0) goto label_0x120e70;                           // 0x00120e88: bnez $a1, 0x120e70
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x00120e8c: add.s $f2, $f2, $f0
    a2 = a2 + 1;                                                // 0x00120e90: addiu $a2, $a2, 1
label_0x120e94:
    *(float*)(a3) = FPU_F2;  // Store float                     // 0x00120e94: swc1 $f2, 0($a3)
    v0 = (s4 < a2) ? 1 : 0;                                     // 0x00120e98: slt $v0, $s4, $a2
    a0 = a0 + 1;                                                // 0x00120e9c: addiu $a0, $a0, 1
    if (v0 == 0) goto label_0x120e50;                           // 0x00120ea0: beqz $v0, 0x120e50
    a3 = a3 + 4;                                                // 0x00120ea4: addiu $a3, $a3, 4
label_0x120ea8:
label_0x120eac:
    s3 = s0 << 2;                                               // 0x00120eac: sll $s3, $s0, 2
    v1 = sp + 0xf0;                                             // 0x00120eb0: addiu $v1, $sp, 0xf0
    v0 = v1 + s3;                                               // 0x00120eb4: addu $v0, $v1, $s3
    if (s0 <= 0) goto label_0x120f1c;                           // 0x00120ebc: blez $s0, 0x120f1c
    FPU_F20 = *(float*)(v0);  // Load float                     // 0x00120ec0: lwc1 $f20, 0($v0)
    at = 0x3b80 << 16;                                          // 0x00120ec4: lui $at, 0x3b80
    /* move to FPU: $at, $f4 */                                 // 0x00120ec8: mtc1 $at, $f4
    v1 = v0 + -4;                                               // 0x00120ecc: addiu $v1, $v0, -4
    at = 0x4380 << 16;                                          // 0x00120ed0: lui $at, 0x4380
    /* move to FPU: $at, $f3 */                                 // 0x00120ed4: mtc1 $at, $f3
    /* nop */                                                   // 0x00120edc: nop 
label_0x120ee0:
    /* FPU: mul.s $f0, $f20, $f4 */                             // 0x00120ee0: mul.s $f0, $f20, $f4
    FPU_F1 = *(float*)(v1);  // Load float                      // 0x00120ee4: lwc1 $f1, 0($v1)
    a1 = a1 + -1;                                               // 0x00120ee8: addiu $a1, $a1, -1
    v1 = v1 + -4;                                               // 0x00120eec: addiu $v1, $v1, -4
    /* FPU: cvt.w.s $f2, $f0 */                                 // 0x00120ef0: cvt.w.s $f2, $f0
    /* move from FPU: $v0, $f2 */                               // 0x00120ef4: mfc1 $v0, $f2
    /* move to FPU: $v0, $f2 */                                 // 0x00120ef8: mtc1 $v0, $f2
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00120efc: cvt.s.w $f2, $f2
    /* FPU: mul.s $f0, $f2, $f3 */                              // 0x00120f00: mul.s $f0, $f2, $f3
    /* FPU: sub.s $f0, $f20, $f0 */                             // 0x00120f04: sub.s $f0, $f20, $f0
    /* FPU: add.s $f20, $f1, $f2 */                             // 0x00120f08: add.s $f20, $f1, $f2
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x00120f0c: cvt.w.s $f1, $f0
    *(float*)(a0) = FPU_F1;  // Store float                     // 0x00120f10: swc1 $f1, 0($a0)
    if (a1 > 0) goto label_0x120ee0;                            // 0x00120f14: bgtz $a1, 0x120ee0
    a0 = a0 + 4;                                                // 0x00120f18: addiu $a0, $a0, 4
label_0x120f1c:
    /* FPU: mov.s $f12, $f20 */                                 // 0x00120f1c: mov.s $f12, $f20
    func_0010a450();  // 0x10a388                                // 0x00120f20: jal 0x10a388
    at = 0x3e00 << 16;                                          // 0x00120f28: lui $at, 0x3e00
    /* move to FPU: $at, $f12 */                                // 0x00120f2c: mtc1 $at, $f12
    /* FPU: mov.s $f20, $f0 */                                  // 0x00120f30: mov.s $f20, $f0
    func_00122268();  // 0x122190                                // 0x00120f38: jal 0x122190
    /* FPU: mul.s $f12, $f20, $f12 */                           // 0x00120f3c: mul.s $f12, $f20, $f12
    at = 0x4100 << 16;                                          // 0x00120f40: lui $at, 0x4100
    /* move to FPU: $at, $f1 */                                 // 0x00120f44: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00120f48: mul.s $f0, $f0, $f1
    /* FPU: sub.s $f20, $f20, $f0 */                            // 0x00120f4c: sub.s $f20, $f20, $f0
    /* FPU: cvt.w.s $f0, $f20 */                                // 0x00120f50: cvt.w.s $f0, $f20
    /* move from FPU: $s5, $f0 */                               // 0x00120f54: mfc1 $s5, $f0
    /* move to FPU: $s5, $f0 */                                 // 0x00120f58: mtc1 $s5, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00120f5c: cvt.s.w $f0, $f0
    if (s1 <= 0) goto label_0x120fa0;                           // 0x00120f60: blez $s1, 0x120fa0
    /* FPU: sub.s $f20, $f20, $f0 */                            // 0x00120f64: sub.s $f20, $f20, $f0
    v1 = s3 + -4;                                               // 0x00120f68: addiu $v1, $s3, -4
    v0 = 8;                                                     // 0x00120f6c: addiu $v0, $zero, 8
    a1 = sp + v1;                                               // 0x00120f70: addu $a1, $sp, $v1
    v0 = v0 - s1;                                               // 0x00120f74: subu $v0, $v0, $s1
    v1 = *(int32_t*)(a1);                                       // 0x00120f78: lw $v1, 0($a1)
    a0 = 7;                                                     // 0x00120f7c: addiu $a0, $zero, 7
    a0 = a0 - s1;                                               // 0x00120f80: subu $a0, $a0, $s1
    a2 = v1 >> v0;                                              // 0x00120f84: srav $a2, $v1, $v0
    v0 = a2 << v0;                                              // 0x00120f88: sllv $v0, $a2, $v0
    s5 = s5 + a2;                                               // 0x00120f8c: addu $s5, $s5, $a2
    v1 = v1 - v0;                                               // 0x00120f90: subu $v1, $v1, $v0
    *(uint32_t*)(a1) = v1;                                      // 0x00120f94: sw $v1, 0($a1)
    goto label_0x120fcc;                                        // 0x00120f98: b 0x120fcc
    s6 = v1 >> a0;                                              // 0x00120f9c: srav $s6, $v1, $a0
label_0x120fa0:
    if (s1 != 0) goto label_0x120fb8;                           // 0x00120fa0: bnez $s1, 0x120fb8
    v0 = s3 + sp;                                               // 0x00120fa4: addu $v0, $s3, $sp
    v1 = g_0021fff8;  // Global at 0x0021fff8                   // 0x00120fa8: lw $v1, -4($v0)
    goto label_0x120fcc;                                        // 0x00120fac: b 0x120fcc
    s6 = v1 >> 8;                                               // 0x00120fb0: sra $s6, $v1, 8
    /* nop */                                                   // 0x00120fb4: nop 
label_0x120fb8:
    at = 0x3f00 << 16;                                          // 0x00120fb8: lui $at, 0x3f00
    /* move to FPU: $at, $f0 */                                 // 0x00120fbc: mtc1 $at, $f0
    /* FPU: c.ole.s $f0, $f20 */                                // 0x00120fc0: c.ole.s $f0, $f20
    /* bc1tl 0x120fcc */                                        // 0x00120fc4: bc1tl 0x120fcc
    s6 = 2;                                                     // 0x00120fc8: addiu $s6, $zero, 2
label_0x120fcc:
    if (s6 <= 0) goto label_0x121098;                           // 0x00120fcc: blez $s6, 0x121098
    /* nop */                                                   // 0x00120fd0: nop 
    s5 = s5 + 1;                                                // 0x00120fd4: addiu $s5, $s5, 1
    if (s0 <= 0) goto label_0x121024;                           // 0x00120fd8: blez $s0, 0x121024
    t0 = 0x100;                                                 // 0x00120fe0: addiu $t0, $zero, 0x100
    a0 = 0xff;                                                  // 0x00120fe4: addiu $a0, $zero, 0xff
label_0x120ff0:
    if (a3 != 0) goto label_0x121008;                           // 0x00120ff0: bnez $a3, 0x121008
    a1 = g_0021fff4;  // Global at 0x0021fff4                   // 0x00120ff4: lw $a1, 0($v1)
    if (a1 == 0) goto label_0x121010;                           // 0x00120ff8: beqz $a1, 0x121010
    v0 = t0 - a1;                                               // 0x00120ffc: subu $v0, $t0, $a1
    goto label_0x12100c;                                        // 0x00121000: b 0x12100c
    a3 = 1;                                                     // 0x00121004: addiu $a3, $zero, 1
label_0x121008:
    v0 = a0 - a1;                                               // 0x00121008: subu $v0, $a0, $a1
label_0x12100c:
    g_0021fff4 = v0;  // Global at 0x0021fff4                   // 0x0012100c: sw $v0, 0($v1)
label_0x121010:
    a2 = a2 + -1;                                               // 0x00121010: addiu $a2, $a2, -1
    /* nop */                                                   // 0x00121014: nop 
    /* nop */                                                   // 0x00121018: nop 
    if (a2 != 0) goto label_0x120ff0;                           // 0x0012101c: bnez $a2, 0x120ff0
    v1 = v1 + 4;                                                // 0x00121020: addiu $v1, $v1, 4
label_0x121024:
    if (s1 <= 0) goto label_0x121074;                           // 0x00121024: blez $s1, 0x121074
    v0 = 2;                                                     // 0x00121028: addiu $v0, $zero, 2
    v0 = 1;                                                     // 0x0012102c: addiu $v0, $zero, 1
    if (s1 == v0) goto label_0x121048;                          // 0x00121030: beq $s1, $v0, 0x121048
    v0 = 2;                                                     // 0x00121034: addiu $v0, $zero, 2
    if (s1 == v0) goto label_0x121060;                          // 0x00121038: beql $s1, $v0, 0x121060
    v0 = s3 + -4;                                               // 0x0012103c: addiu $v0, $s3, -4
    goto label_0x121074;                                        // 0x00121040: b 0x121074
    /* nop */                                                   // 0x00121044: nop 
label_0x121048:
    v0 = s3 + -4;                                               // 0x00121048: addiu $v0, $s3, -4
    a0 = sp + v0;                                               // 0x0012104c: addu $a0, $sp, $v0
    v1 = *(int32_t*)(a0);                                       // 0x00121050: lw $v1, 0($a0)
    goto label_0x12106c;                                        // 0x00121054: b 0x12106c
    v1 = v1 & 0x7f;                                             // 0x00121058: andi $v1, $v1, 0x7f
    /* nop */                                                   // 0x0012105c: nop 
label_0x121060:
    a0 = sp + v0;                                               // 0x00121060: addu $a0, $sp, $v0
    v1 = *(int32_t*)(a0);                                       // 0x00121064: lw $v1, 0($a0)
    v1 = v1 & 0x3f;                                             // 0x00121068: andi $v1, $v1, 0x3f
label_0x12106c:
    *(uint32_t*)(a0) = v1;                                      // 0x0012106c: sw $v1, 0($a0)
    v0 = 2;                                                     // 0x00121070: addiu $v0, $zero, 2
label_0x121074:
    if (s6 != v0) goto label_0x121098;                          // 0x00121074: bne $s6, $v0, 0x121098
    /* nop */                                                   // 0x00121078: nop 
    at = 0x3f80 << 16;                                          // 0x0012107c: lui $at, 0x3f80
    /* move to FPU: $at, $f12 */                                // 0x00121080: mtc1 $at, $f12
    if (a3 == 0) goto label_0x121098;                           // 0x00121084: beqz $a3, 0x121098
    /* FPU: sub.s $f20, $f12, $f20 */                           // 0x00121088: sub.s $f20, $f12, $f20
    func_0010a450();  // 0x10a388                                // 0x0012108c: jal 0x10a388
    /* FPU: sub.s $f20, $f20, $f0 */                            // 0x00121094: sub.s $f20, $f20, $f0
label_0x121098:
    /* move to FPU: $zero, $f0 */                               // 0x00121098: mtc1 $zero, $f0
    /* FPU: c.eq.s $f20, $f0 */                                 // 0x0012109c: c.eq.s $f20, $f0
    /* bc1f 0x1211e8 */                                         // 0x001210a0: bc1f 0x1211e8
    a2 = s0 + -1;                                               // 0x001210a4: addiu $a2, $s0, -1
    v0 = (a2 < s4) ? 1 : 0;                                     // 0x001210a8: slt $v0, $a2, $s4
    if (v0 != 0) goto label_0x1210dc;                           // 0x001210ac: bnez $v0, 0x1210dc
    v0 = a2 << 2;                                               // 0x001210b4: sll $v0, $a2, 2
    a0 = v0 + sp;                                               // 0x001210b8: addu $a0, $v0, $sp
    /* nop */                                                   // 0x001210bc: nop 
label_0x1210c0:
    v1 = *(int32_t*)(a0);                                       // 0x001210c0: lw $v1, 0($a0)
    a0 = a0 + -4;                                               // 0x001210c4: addiu $a0, $a0, -4
    a2 = a2 + -1;                                               // 0x001210c8: addiu $a2, $a2, -1
    v0 = (a2 < s4) ? 1 : 0;                                     // 0x001210cc: slt $v0, $a2, $s4
    /* nop */                                                   // 0x001210d0: nop 
    if (v0 == 0) goto label_0x1210c0;                           // 0x001210d4: beqz $v0, 0x1210c0
    a1 = a1 | v1;                                               // 0x001210d8: or $a1, $a1, $v1
label_0x1210dc:
    if (a1 != 0) goto label_0x1211e0;                           // 0x001210dc: bnez $a1, 0x1211e0
    v0 = s4 + -1;                                               // 0x001210e0: addiu $v0, $s4, -1
    v0 = v0 << 2;                                               // 0x001210e4: sll $v0, $v0, 2
    v1 = sp + v0;                                               // 0x001210e8: addu $v1, $sp, $v0
    a0 = g_0021fff8;  // Global at 0x0021fff8                   // 0x001210ec: lw $a0, 0($v1)
    if (a0 != 0) goto label_0x121124;                           // 0x001210f0: bnez $a0, 0x121124
    t0 = 1;                                                     // 0x001210f4: addiu $t0, $zero, 1
    v0 = s4 << 2;                                               // 0x001210f8: sll $v0, $s4, 2
    v0 = v0 + sp;                                               // 0x001210fc: addu $v0, $v0, $sp
    v1 = v0 + -4;                                               // 0x00121100: addiu $v1, $v0, -4
    /* nop */                                                   // 0x00121104: nop 
label_0x121108:
    v1 = v1 + -4;                                               // 0x00121108: addiu $v1, $v1, -4
    v0 = g_0021fff7;  // Global at 0x0021fff7                   // 0x0012110c: lw $v0, 0($v1)
    /* nop */                                                   // 0x00121110: nop 
    /* nop */                                                   // 0x00121114: nop 
    /* nop */                                                   // 0x00121118: nop 
    if (v0 == 0) goto label_0x121108;                           // 0x0012111c: beqz $v0, 0x121108
    t0 = t0 + 1;                                                // 0x00121120: addiu $t0, $t0, 1
label_0x121124:
    t1 = s0 + t0;                                               // 0x00121124: addu $t1, $s0, $t0
    a2 = s0 + 1;                                                // 0x00121128: addiu $a2, $s0, 1
    v0 = (t1 < a2) ? 1 : 0;                                     // 0x0012112c: slt $v0, $t1, $a2
    if (v0 != 0) goto label_0x120eac;                           // 0x00121130: bnez $v0, 0x120eac
    t3 = local_148;                                             // 0x00121138: lw $t3, 0x148($sp)
    v0 = s2 + a2;                                               // 0x0012113c: addu $v0, $s2, $a2
    a0 = s7 + a2;                                               // 0x00121140: addu $a0, $s7, $a2
    a1 = sp + 0x50;                                             // 0x00121144: addiu $a1, $sp, 0x50
    v0 = v0 << 2;                                               // 0x00121148: sll $v0, $v0, 2
    a0 = a0 << 2;                                               // 0x0012114c: sll $a0, $a0, 2
    v1 = a2 << 2;                                               // 0x00121150: sll $v1, $a2, 2
    a3 = sp + 0xf0;                                             // 0x00121154: addiu $a3, $sp, 0xf0
    a0 = a0 + t3;                                               // 0x00121158: addu $a0, $a0, $t3
    v1 = v1 + a3;                                               // 0x00121160: addu $v1, $v1, $a3
    t0 = v0 + a1;                                               // 0x00121164: addu $t0, $v0, $a1
    /* nop */                                                   // 0x0012116c: nop 
label_0x121170:
    FPU_F0 = *(float*)(a0);  // Load float                      // 0x00121170: lwc1 $f0, 0($a0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00121174: cvt.s.w $f0, $f0
    v0 = s2 + a2;                                               // 0x00121178: addu $v0, $s2, $a2
    /* move to FPU: $zero, $f2 */                               // 0x0012117c: mtc1 $zero, $f2
    if (s2 < 0) goto label_0x1211b8;                            // 0x00121180: bltz $s2, 0x1211b8
    *(float*)(t0) = FPU_F0;  // Store float                     // 0x00121184: swc1 $f0, 0($t0)
    v0 = v0 << 2;                                               // 0x00121188: sll $v0, $v0, 2
    a3 = local_140;                                             // 0x0012118c: lw $a3, 0x140($sp)
    v0 = v0 + t3;                                               // 0x00121190: addu $v0, $v0, $t3
    a1 = s2 + 1;                                                // 0x00121194: addiu $a1, $s2, 1
label_0x121198:
    FPU_F0 = *(float*)(a3);  // Load float                      // 0x00121198: lwc1 $f0, 0($a3)
    a3 = a3 + 4;                                                // 0x0012119c: addiu $a3, $a3, 4
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x001211a0: lwc1 $f1, 0($v0)
    v0 = v0 + -4;                                               // 0x001211a4: addiu $v0, $v0, -4
    a1 = a1 + -1;                                               // 0x001211a8: addiu $a1, $a1, -1
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x001211ac: mul.s $f0, $f0, $f1
    if (a1 != 0) goto label_0x121198;                           // 0x001211b0: bnez $a1, 0x121198
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x001211b4: add.s $f2, $f2, $f0
label_0x1211b8:
    a2 = a2 + 1;                                                // 0x001211b8: addiu $a2, $a2, 1
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x001211bc: swc1 $f2, 0($v1)
    v0 = (t2 < a2) ? 1 : 0;                                     // 0x001211c0: slt $v0, $t2, $a2
    t0 = t0 + 4;                                                // 0x001211c4: addiu $t0, $t0, 4
    v1 = v1 + 4;                                                // 0x001211c8: addiu $v1, $v1, 4
    if (v0 == 0) goto label_0x121170;                           // 0x001211cc: beqz $v0, 0x121170
    a0 = a0 + 4;                                                // 0x001211d0: addiu $a0, $a0, 4
    goto label_0x120eac;                                        // 0x001211d4: b 0x120eac
    /* nop */                                                   // 0x001211dc: nop 
label_0x1211e0:
    /* move to FPU: $zero, $f0 */                               // 0x001211e0: mtc1 $zero, $f0
    /* FPU: c.eq.s $f20, $f0 */                                 // 0x001211e4: c.eq.s $f20, $f0
    /* bc1f 0x121238 */                                         // 0x001211e8: bc1f 0x121238
    /* FPU: mov.s $f12, $f20 */                                 // 0x001211ec: mov.s $f12, $f20
    s0 = s0 + -1;                                               // 0x001211f0: addiu $s0, $s0, -1
    v0 = s0 << 2;                                               // 0x001211f4: sll $v0, $s0, 2
    v0 = sp + v0;                                               // 0x001211f8: addu $v0, $sp, $v0
    v1 = g_0021fffb;  // Global at 0x0021fffb                   // 0x001211fc: lw $v1, 0($v0)
    if (v1 != 0) goto label_0x1212b0;                           // 0x00121200: bnez $v1, 0x1212b0
    s1 = s1 + -8;                                               // 0x00121204: addiu $s1, $s1, -8
    /* nop */                                                   // 0x0012120c: nop 
label_0x121210:
    v1 = v1 + -4;                                               // 0x00121210: addiu $v1, $v1, -4
    s0 = s0 + -1;                                               // 0x00121214: addiu $s0, $s0, -1
    v0 = g_0021fff7;  // Global at 0x0021fff7                   // 0x00121218: lw $v0, 0($v1)
    /* nop */                                                   // 0x0012121c: nop 
    /* nop */                                                   // 0x00121220: nop 
    if (v0 == 0) goto label_0x121210;                           // 0x00121224: beqz $v0, 0x121210
    s1 = s1 + -8;                                               // 0x00121228: addiu $s1, $s1, -8
    goto label_0x1212b0;                                        // 0x0012122c: b 0x1212b0
    /* nop */                                                   // 0x00121230: nop 
    /* nop */                                                   // 0x00121234: nop 
    func_0010a450();  // 0x10a388                                // 0x00121238: jal 0x10a388
    a0 = -s1;                                                   // 0x0012123c: negu $a0, $s1
    at = 0x4380 << 16;                                          // 0x00121240: lui $at, 0x4380
    /* move to FPU: $at, $f1 */                                 // 0x00121244: mtc1 $at, $f1
    /* FPU: mov.s $f20, $f0 */                                  // 0x00121248: mov.s $f20, $f0
    /* FPU: c.ole.s $f1, $f20 */                                // 0x0012124c: c.ole.s $f1, $f20
    /* bc1f 0x1212a8 */                                         // 0x00121250: bc1f 0x1212a8
    v0 = sp + s3;                                               // 0x00121254: addu $v0, $sp, $s3
    at = 0x3b80 << 16;                                          // 0x00121258: lui $at, 0x3b80
    /* move to FPU: $at, $f0 */                                 // 0x0012125c: mtc1 $at, $f0
    s0 = s0 + 1;                                                // 0x00121260: addiu $s0, $s0, 1
    v0 = s0 << 2;                                               // 0x00121264: sll $v0, $s0, 2
    a0 = sp + s3;                                               // 0x00121268: addu $a0, $sp, $s3
    /* FPU: mul.s $f0, $f20, $f0 */                             // 0x0012126c: mul.s $f0, $f20, $f0
    v1 = sp + v0;                                               // 0x00121270: addu $v1, $sp, $v0
    /* FPU: cvt.w.s $f2, $f0 */                                 // 0x00121274: cvt.w.s $f2, $f0
    /* move from FPU: $v0, $f2 */                               // 0x00121278: mfc1 $v0, $f2
    /* move to FPU: $v0, $f2 */                                 // 0x0012127c: mtc1 $v0, $f2
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00121280: cvt.s.w $f2, $f2
    /* FPU: mul.s $f0, $f2, $f1 */                              // 0x00121284: mul.s $f0, $f2, $f1
    /* FPU: sub.s $f0, $f20, $f0 */                             // 0x00121288: sub.s $f0, $f20, $f0
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x0012128c: cvt.w.s $f1, $f0
    *(float*)(a0) = FPU_F1;  // Store float                     // 0x00121290: swc1 $f1, 0($a0)
    /* FPU: cvt.w.s $f0, $f2 */                                 // 0x00121294: cvt.w.s $f0, $f2
    *(float*)(v1) = FPU_F0;  // Store float                     // 0x00121298: swc1 $f0, 0($v1)
    goto label_0x1212b0;                                        // 0x0012129c: b 0x1212b0
    s1 = s1 + 8;                                                // 0x001212a0: addiu $s1, $s1, 8
    /* nop */                                                   // 0x001212a4: nop 
    /* FPU: cvt.w.s $f0, $f20 */                                // 0x001212a8: cvt.w.s $f0, $f20
    *(float*)(v0) = FPU_F0;  // Store float                     // 0x001212ac: swc1 $f0, 0($v0)
label_0x1212b0:
    at = 0x3f80 << 16;                                          // 0x001212b0: lui $at, 0x3f80
    /* move to FPU: $at, $f12 */                                // 0x001212b4: mtc1 $at, $f12
    func_0010a450();  // 0x10a388                                // 0x001212b8: jal 0x10a388
    if (a2 < 0) goto label_0x12130c;                            // 0x001212c4: bltz $a2, 0x12130c
    /* FPU: mov.s $f2, $f0 */                                   // 0x001212c8: mov.s $f2, $f0
    v0 = sp + 0xf0;                                             // 0x001212cc: addiu $v0, $sp, 0xf0
    at = 0x3b80 << 16;                                          // 0x001212d0: lui $at, 0x3b80
    /* move to FPU: $at, $f1 */                                 // 0x001212d4: mtc1 $at, $f1
    /* nop */                                                   // 0x001212dc: nop 
label_0x1212e0:
    v0 = a2 << 2;                                               // 0x001212e0: sll $v0, $a2, 2
    a2 = a2 + -1;                                               // 0x001212e4: addiu $a2, $a2, -1
    v1 = sp + v0;                                               // 0x001212e8: addu $v1, $sp, $v0
    v0 = a0 + v0;                                               // 0x001212ec: addu $v0, $a0, $v0
    FPU_F0 = *(float*)(v1);  // Load float                      // 0x001212f0: lwc1 $f0, 0($v1)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001212f4: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f2, $f0 */                              // 0x001212f8: mul.s $f0, $f2, $f0
    /* FPU: mul.s $f2, $f2, $f1 */                              // 0x001212fc: mul.s $f2, $f2, $f1
    if (a2 >= 0) goto label_0x1212e0;                           // 0x00121300: bgez $a2, 0x1212e0
    *(float*)(v0) = FPU_F0;  // Store float                     // 0x00121304: swc1 $f0, 0($v0)
label_0x12130c:
    if (a2 < 0) goto label_0x1213a0;                            // 0x0012130c: bltz $a2, 0x1213a0
    v0 = 0x22 << 16;                                            // 0x00121310: lui $v0, 0x22
    v1 = sp + 0xf0;                                             // 0x00121314: addiu $v1, $sp, 0xf0
    t4 = v0 + 0x1a38;                                           // 0x0012131c: addiu $t4, $v0, 0x1a38
    t3 = sp + 0xa0;                                             // 0x00121320: addiu $t3, $sp, 0xa0
    /* nop */                                                   // 0x00121324: nop 
label_0x121328:
    /* move to FPU: $zero, $f2 */                               // 0x00121328: mtc1 $zero, $f2
    if (s4 < 0) goto label_0x121388;                            // 0x0012132c: bltz $s4, 0x121388
    a3 = s0 - a2;                                               // 0x00121334: subu $a3, $s0, $a2
    if (a3 < 0) goto label_0x12138c;                            // 0x00121338: bltz $a3, 0x12138c
    v0 = a2 << 2;                                               // 0x00121340: sll $v0, $a2, 2
    a0 = v0 + t2;                                               // 0x00121348: addu $a0, $v0, $t2
    FPU_F0 = *(float*)(a1);  // Load float                      // 0x0012134c: lwc1 $f0, 0($a1)
    a1 = a1 + 4;                                                // 0x00121350: addiu $a1, $a1, 4
    FPU_F1 = *(float*)(a0);  // Load float                      // 0x00121354: lwc1 $f1, 0($a0)
    a0 = a0 + 4;                                                // 0x00121358: addiu $a0, $a0, 4
    t0 = t0 + 1;                                                // 0x0012135c: addiu $t0, $t0, 1
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00121360: mul.s $f0, $f0, $f1
    v0 = (s4 < t0) ? 1 : 0;                                     // 0x00121364: slt $v0, $s4, $t0
    v1 = (t1 < t0) ? 1 : 0;                                     // 0x00121368: slt $v1, $t1, $t0
    if (v0 != 0) goto label_0x12138c;                           // 0x0012136c: bnez $v0, 0x12138c
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x00121370: add.s $f2, $f2, $f0
    /* beqzl $v1, 0x121350 */                                   // 0x00121374: beqzl $v1, 0x121350
    FPU_F0 = *(float*)(a1);  // Load float                      // 0x00121378: lwc1 $f0, 0($a1)
    goto label_0x121390;                                        // 0x0012137c: b 0x121390
    v0 = a3 << 2;                                               // 0x00121380: sll $v0, $a3, 2
    /* nop */                                                   // 0x00121384: nop 
label_0x121388:
    a3 = s0 - a2;                                               // 0x00121388: subu $a3, $s0, $a2
label_0x12138c:
    v0 = a3 << 2;                                               // 0x0012138c: sll $v0, $a3, 2
label_0x121390:
    a2 = a2 + -1;                                               // 0x00121390: addiu $a2, $a2, -1
    v0 = t3 + v0;                                               // 0x00121394: addu $v0, $t3, $v0
    if (a2 >= 0) goto label_0x121328;                           // 0x00121398: bgez $a2, 0x121328
    *(float*)(v0) = FPU_F2;  // Store float                     // 0x0012139c: swc1 $f2, 0($v0)
label_0x1213a0:
    a1 = local_144;                                             // 0x001213a0: lw $a1, 0x144($sp)
    v0 = (a1 < 3) ? 1 : 0;                                      // 0x001213a4: slti $v0, $a1, 3
    /* beqzl $v0, 0x1213c8 */                                   // 0x001213a8: beqzl $v0, 0x1213c8
    a2 = local_144;                                             // 0x001213ac: lw $a2, 0x144($sp)
    if (a1 > 0) goto label_0x121428;                            // 0x001213b0: bgtzl $a1, 0x121428
    if (a1 == 0) goto label_0x1213e0;                           // 0x001213b8: beqz $a1, 0x1213e0
    v0 = s5 & 7;                                                // 0x001213bc: andi $v0, $s5, 7
    goto label_0x1215ac;                                        // 0x001213c0: b 0x1215ac
    v0 = 3;                                                     // 0x001213c8: addiu $v0, $zero, 3
    if (a2 == v0) goto label_0x1214b0;                          // 0x001213cc: beq $a2, $v0, 0x1214b0
    v0 = s5 & 7;                                                // 0x001213d0: andi $v0, $s5, 7
    goto label_0x1215ac;                                        // 0x001213d4: b 0x1215ac
    /* nop */                                                   // 0x001213dc: nop 
label_0x1213e0:
    /* move to FPU: $zero, $f2 */                               // 0x001213e4: mtc1 $zero, $f2
    if (a2 < 0) goto label_0x121414;                            // 0x001213e8: bltz $a2, 0x121414
    v1 = sp + 0xa0;                                             // 0x001213ec: addiu $v1, $sp, 0xa0
    v0 = a2 << 2;                                               // 0x001213f0: sll $v0, $a2, 2
    v0 = v0 + v1;                                               // 0x001213f4: addu $v0, $v0, $v1
label_0x1213f8:
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001213f8: lwc1 $f0, 0($v0)
    v0 = v0 + -4;                                               // 0x001213fc: addiu $v0, $v0, -4
    a2 = a2 + -1;                                               // 0x00121400: addiu $a2, $a2, -1
    /* nop */                                                   // 0x00121404: nop 
    /* nop */                                                   // 0x00121408: nop 
    if (a2 >= 0) goto label_0x1213f8;                           // 0x0012140c: bgez $a2, 0x1213f8
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x00121410: add.s $f2, $f2, $f0
label_0x121414:
    if (s6 == 0) goto label_0x1215a4;                           // 0x00121414: beqz $s6, 0x1215a4
    *(float*)(fp) = FPU_F2;  // Store float                     // 0x00121418: swc1 $f2, 0($fp)
    /* FPU: neg.s $f0, $f2 */                                   // 0x0012141c: neg.s $f0, $f2
    goto label_0x1215a4;                                        // 0x00121420: b 0x1215a4
    *(float*)(fp) = FPU_F0;  // Store float                     // 0x00121424: swc1 $f0, 0($fp)
label_0x121428:
    /* move to FPU: $zero, $f2 */                               // 0x00121428: mtc1 $zero, $f2
    if (a2 < 0) goto label_0x12145c;                            // 0x0012142c: bltz $a2, 0x12145c
    v1 = sp + 0xa0;                                             // 0x00121430: addiu $v1, $sp, 0xa0
    v0 = a2 << 2;                                               // 0x00121434: sll $v0, $a2, 2
    v0 = v0 + v1;                                               // 0x00121438: addu $v0, $v0, $v1
    /* nop */                                                   // 0x0012143c: nop 
label_0x121440:
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x00121440: lwc1 $f0, 0($v0)
    v0 = v0 + -4;                                               // 0x00121444: addiu $v0, $v0, -4
    a2 = a2 + -1;                                               // 0x00121448: addiu $a2, $a2, -1
    /* nop */                                                   // 0x0012144c: nop 
    /* nop */                                                   // 0x00121450: nop 
    if (a2 >= 0) goto label_0x121440;                           // 0x00121454: bgez $a2, 0x121440
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x00121458: add.s $f2, $f2, $f0
label_0x12145c:
    if (s6 == 0) goto label_0x12146c;                           // 0x0012145c: beqz $s6, 0x12146c
    *(float*)(fp) = FPU_F2;  // Store float                     // 0x00121460: swc1 $f2, 0($fp)
    /* FPU: neg.s $f0, $f2 */                                   // 0x00121464: neg.s $f0, $f2
    *(float*)(fp) = FPU_F0;  // Store float                     // 0x00121468: swc1 $f0, 0($fp)
label_0x12146c:
    FPU_F0 = *(float*)((sp) + 0xa0);  // Load float             // 0x0012146c: lwc1 $f0, 0xa0($sp)
    if (s0 <= 0) goto label_0x12149c;                           // 0x00121470: blez $s0, 0x12149c
    /* FPU: sub.s $f2, $f0, $f2 */                              // 0x00121474: sub.s $f2, $f0, $f2
    v0 = sp + 0xa4;                                             // 0x0012147c: addiu $v0, $sp, 0xa4
label_0x121480:
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x00121480: lwc1 $f0, 0($v0)
    v0 = v0 + 4;                                                // 0x00121484: addiu $v0, $v0, 4
    a2 = a2 + -1;                                               // 0x00121488: addiu $a2, $a2, -1
    /* nop */                                                   // 0x0012148c: nop 
    /* nop */                                                   // 0x00121490: nop 
    if (a2 != 0) goto label_0x121480;                           // 0x00121494: bnez $a2, 0x121480
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x00121498: add.s $f2, $f2, $f0
label_0x12149c:
    if (s6 == 0) goto label_0x1215a4;                           // 0x0012149c: beqz $s6, 0x1215a4
    *(float*)((fp) + 4) = FPU_F2;  // Store float               // 0x001214a0: swc1 $f2, 4($fp)
    /* FPU: neg.s $f0, $f2 */                                   // 0x001214a4: neg.s $f0, $f2
    goto label_0x1215a4;                                        // 0x001214a8: b 0x1215a4
    *(float*)((fp) + 4) = FPU_F0;  // Store float               // 0x001214ac: swc1 $f0, 4($fp)
label_0x1214b0:
    if (a2 <= 0) goto label_0x1214f8;                           // 0x001214b4: blez $a2, 0x1214f8
    v0 = (a2 < 2) ? 1 : 0;                                      // 0x001214b8: slti $v0, $a2, 2
    v0 = a2 << 2;                                               // 0x001214bc: sll $v0, $a2, 2
    v1 = sp + v0;                                               // 0x001214c0: addu $v1, $sp, $v0
    v1 = v1 + 0x9c;                                             // 0x001214c4: addiu $v1, $v1, 0x9c
label_0x1214c8:
    FPU_F1 = *(float*)(v1);  // Load float                      // 0x001214c8: lwc1 $f1, 0($v1)
    a2 = a2 + -1;                                               // 0x001214cc: addiu $a2, $a2, -1
    FPU_F0 = *(float*)((v1) + 4);  // Load float                // 0x001214d0: lwc1 $f0, 4($v1)
    /* FPU: add.s $f2, $f1, $f0 */                              // 0x001214d4: add.s $f2, $f1, $f0
    /* FPU: sub.s $f1, $f1, $f2 */                              // 0x001214d8: sub.s $f1, $f1, $f2
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x001214dc: swc1 $f2, 0($v1)
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x001214e0: add.s $f0, $f0, $f1
    *(float*)((v1) + 4) = FPU_F0;  // Store float               // 0x001214e4: swc1 $f0, 4($v1)
    if (a2 > 0) goto label_0x1214c8;                            // 0x001214e8: bgtz $a2, 0x1214c8
    v1 = v1 + -4;                                               // 0x001214ec: addiu $v1, $v1, -4
    v0 = (a2 < 2) ? 1 : 0;                                      // 0x001214f4: slti $v0, $a2, 2
label_0x1214f8:
    /* bnezl $v0, 0x121540 */                                   // 0x001214f8: bnezl $v0, 0x121540
    v0 = a2 << 2;                                               // 0x00121500: sll $v0, $a2, 2
    v1 = sp + v0;                                               // 0x00121504: addu $v1, $sp, $v0
    v1 = v1 + 0x9c;                                             // 0x00121508: addiu $v1, $v1, 0x9c
    /* nop */                                                   // 0x0012150c: nop 
label_0x121510:
    FPU_F0 = *(float*)(v1);  // Load float                      // 0x00121510: lwc1 $f0, 0($v1)
    a2 = a2 + -1;                                               // 0x00121514: addiu $a2, $a2, -1
    FPU_F1 = *(float*)((v1) + 4);  // Load float                // 0x00121518: lwc1 $f1, 4($v1)
    v0 = (a2 < 2) ? 1 : 0;                                      // 0x0012151c: slti $v0, $a2, 2
    /* FPU: add.s $f2, $f0, $f1 */                              // 0x00121520: add.s $f2, $f0, $f1
    /* FPU: sub.s $f0, $f0, $f2 */                              // 0x00121524: sub.s $f0, $f0, $f2
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x00121528: swc1 $f2, 0($v1)
    /* FPU: add.s $f1, $f1, $f0 */                              // 0x0012152c: add.s $f1, $f1, $f0
    *(float*)((v1) + 4) = FPU_F1;  // Store float               // 0x00121530: swc1 $f1, 4($v1)
    if (v0 == 0) goto label_0x121510;                           // 0x00121534: beqz $v0, 0x121510
    v1 = v1 + -4;                                               // 0x00121538: addiu $v1, $v1, -4
    /* move to FPU: $zero, $f2 */                               // 0x00121540: mtc1 $zero, $f2
    v0 = (a2 < 2) ? 1 : 0;                                      // 0x00121544: slti $v0, $a2, 2
    if (v0 != 0) goto label_0x121574;                           // 0x00121548: bnez $v0, 0x121574
    v0 = a2 << 2;                                               // 0x0012154c: sll $v0, $a2, 2
    v1 = sp + 0xa0;                                             // 0x00121550: addiu $v1, $sp, 0xa0
    v1 = v0 + v1;                                               // 0x00121554: addu $v1, $v0, $v1
label_0x121558:
    FPU_F0 = *(float*)(v1);  // Load float                      // 0x00121558: lwc1 $f0, 0($v1)
    v1 = v1 + -4;                                               // 0x0012155c: addiu $v1, $v1, -4
    a2 = a2 + -1;                                               // 0x00121560: addiu $a2, $a2, -1
    v0 = (a2 < 2) ? 1 : 0;                                      // 0x00121564: slti $v0, $a2, 2
    /* nop */                                                   // 0x00121568: nop 
    if (v0 == 0) goto label_0x121558;                           // 0x0012156c: beqz $v0, 0x121558
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x00121570: add.s $f2, $f2, $f0
label_0x121574:
    if (s6 != 0) goto label_0x121588;                           // 0x00121574: bnez $s6, 0x121588
    FPU_F0 = *(float*)((sp) + 0xa0);  // Load float             // 0x00121578: lwc1 $f0, 0xa0($sp)
    goto label_0x121598;                                        // 0x0012157c: b 0x121598
    FPU_F1 = *(float*)((sp) + 0xa4);  // Load float             // 0x00121580: lwc1 $f1, 0xa4($sp)
    /* nop */                                                   // 0x00121584: nop 
label_0x121588:
    /* FPU: neg.s $f2, $f2 */                                   // 0x00121588: neg.s $f2, $f2
    FPU_F1 = *(float*)((sp) + 0xa4);  // Load float             // 0x0012158c: lwc1 $f1, 0xa4($sp)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00121590: neg.s $f0, $f0
    /* FPU: neg.s $f1, $f1 */                                   // 0x00121594: neg.s $f1, $f1
label_0x121598:
    *(float*)((fp) + 8) = FPU_F2;  // Store float               // 0x00121598: swc1 $f2, 8($fp)
    *(float*)(fp) = FPU_F0;  // Store float                     // 0x0012159c: swc1 $f0, 0($fp)
    *(float*)((fp) + 4) = FPU_F1;  // Store float               // 0x001215a0: swc1 $f1, 4($fp)
label_0x1215a4:
    v0 = s5 & 7;                                                // 0x001215a4: andi $v0, $s5, 7
label_0x1215ac:
    FPU_F20 = *(float*)((sp) + 0x1a0);  // Load float           // 0x001215d0: lwc1 $f20, 0x1a0($sp)
    return;                                                     // 0x001215d4: jr $ra
    sp = sp + 0x1b0;                                            // 0x001215d8: addiu $sp, $sp, 0x1b0
}