void func_00105d48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0xc0;                                            // 0x00105d48: addiu $sp, $sp, -0xc0
    s1 = *(int32_t*)((s0) + 0x54);                              // 0x00105d78: lw $s1, 0x54($s0)
    if (s1 != 0) goto label_0x105d98;                           // 0x00105d7c: bnez $s1, 0x105d98
    v0 = 0x1f << 16;                                            // 0x00105d84: lui $v0, 0x1f
    v1 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00105d88: lw $v1, -0x210($v0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x00105d8c: sw $v1, 0x54($s0)
    /* nop */                                                   // 0x00105d94: nop 
label_0x105d98:
    v0 = *(int32_t*)((s1) + 0x38);                              // 0x00105d98: lw $v0, 0x38($s1)
    /* bnezl $v0, 0x105db4 */                                   // 0x00105d9c: bnezl $v0, 0x105db4
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00105da0: lw $v0, 0xc($s0)
    func_00105518();  // 105518                                // 0x00105da4: jal 0x105518
    s1 = *(int32_t*)((s0) + 0x54);                              // 0x00105dac: lw $s1, 0x54($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00105db0: lw $v0, 0xc($s0)
    v1 = 0x108;                                                 // 0x00105db4: addiu $v1, $zero, 0x108
    v0 = v0 & 0x108;                                            // 0x00105db8: andi $v0, $v0, 0x108
    if (v0 != v1) goto label_0x105dd0;                          // 0x00105dbc: bnel $v0, $v1, 0x105dd0
    s5 = *(int32_t*)((s0) + 0x28);                              // 0x00105dc0: lw $s5, 0x28($s0)
    func_001050b8();  // 1050b8                                // 0x00105dc4: jal 0x1050b8
    s5 = *(int32_t*)((s0) + 0x28);                              // 0x00105dcc: lw $s5, 0x28($s0)
label_0x105dd0:
    /* bnezl $s5, 0x105de0 */                                   // 0x00105dd0: bnezl $s5, 0x105de0
    v0 = 1;                                                     // 0x00105dd4: addiu $v0, $zero, 1
    goto label_0x105ec8;                                        // 0x00105dd8: b 0x105ec8
    v1 = 0x1d;                                                  // 0x00105ddc: addiu $v1, $zero, 0x1d
    if (s4 == v0) goto label_0x105e10;                          // 0x00105de0: beq $s4, $v0, 0x105e10
    v0 = (s4 < 2) ? 1 : 0;                                      // 0x00105de4: slti $v0, $s4, 2
    if (v0 == 0) goto label_0x105e00;                           // 0x00105de8: beqz $v0, 0x105e00
    v0 = 2;                                                     // 0x00105dec: addiu $v0, $zero, 2
    if (s4 == 0) goto label_0x105eb8;                           // 0x00105df0: beqz $s4, 0x105eb8
    v1 = 0x16;                                                  // 0x00105df4: addiu $v1, $zero, 0x16
    goto label_0x105ecc;                                        // 0x00105df8: b 0x105ecc
    v0 = -1;                                                    // 0x00105dfc: addiu $v0, $zero, -1
label_0x105e00:
    if (s4 == v0) goto label_0x105eb8;                          // 0x00105e00: beq $s4, $v0, 0x105eb8
    v1 = 0x16;                                                  // 0x00105e04: addiu $v1, $zero, 0x16
    goto label_0x105ecc;                                        // 0x00105e08: b 0x105ecc
    v0 = -1;                                                    // 0x00105e0c: addiu $v0, $zero, -1
label_0x105e10:
    func_001050b8();  // 1050b8                                // 0x00105e10: jal 0x1050b8
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x00105e18: lhu $a2, 0xc($s0)
    v0 = a2 & 0x1000;                                           // 0x00105e1c: andi $v0, $a2, 0x1000
    /* beqzl $v0, 0x105e30 */                                   // 0x00105e20: beqzl $v0, 0x105e30
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00105e24: lw $a0, 0x1c($s0)
    goto label_0x105e50;                                        // 0x00105e28: b 0x105e50
    s2 = *(int32_t*)((s0) + 0x50);                              // 0x00105e2c: lw $s2, 0x50($s0)
    /* call function at address in s5 */                        // 0x00105e34: jalr $s5
    a2 = 1;                                                     // 0x00105e38: addiu $a2, $zero, 1
    v1 = -1;                                                    // 0x00105e3c: addiu $v1, $zero, -1
    if (s2 == v1) goto label_0x1061c8;                          // 0x00105e44: beq $s2, $v1, 0x1061c8
    v0 = -1;                                                    // 0x00105e48: addiu $v0, $zero, -1
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x00105e4c: lhu $a2, 0xc($s0)
label_0x105e50:
    v0 = a2 & 4;                                                // 0x00105e50: andi $v0, $a2, 4
    if (v0 == 0) goto label_0x105e80;                           // 0x00105e54: beqz $v0, 0x105e80
    v0 = a2 & 8;                                                // 0x00105e58: andi $v0, $a2, 8
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00105e5c: lw $v0, 4($s0)
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x00105e60: lw $a1, 0x30($s0)
    if (a1 == 0) goto label_0x105ea0;                           // 0x00105e64: beqz $a1, 0x105ea0
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x00105e6c: lw $v0, 0x3c($s0)
    a3 = *(int32_t*)((s0) + 0x10);                              // 0x00105e70: lw $a3, 0x10($s0)
    goto label_0x105ea4;                                        // 0x00105e74: b 0x105ea4
    /* nop */                                                   // 0x00105e7c: nop 
label_0x105e80:
    if (v0 == 0) goto label_0x105ea4;                           // 0x00105e80: beqz $v0, 0x105ea4
    a3 = *(int32_t*)((s0) + 0x10);                              // 0x00105e84: lw $a3, 0x10($s0)
    v0 = *(int32_t*)(s0);                                       // 0x00105e88: lw $v0, 0($s0)
    if (v0 == 0) goto label_0x105ea4;                           // 0x00105e8c: beqz $v0, 0x105ea4
    /* nop */                                                   // 0x00105e90: nop 
    v0 = v0 - a3;                                               // 0x00105e94: subu $v0, $v0, $a3
    goto label_0x105ea4;                                        // 0x00105e98: b 0x105ea4
label_0x105ea0:
    a3 = *(int32_t*)((s0) + 0x10);                              // 0x00105ea0: lw $a3, 0x10($s0)
label_0x105ea4:
    goto label_0x105ed8;                                        // 0x00105eac: b 0x105ed8
    s7 = 1;                                                     // 0x00105eb0: addiu $s7, $zero, 1
    /* nop */                                                   // 0x00105eb4: nop 
label_0x105eb8:
    goto label_0x105ed8;                                        // 0x00105ebc: b 0x105ed8
    a3 = *(int32_t*)((s0) + 0x10);                              // 0x00105ec0: lw $a3, 0x10($s0)
    /* nop */                                                   // 0x00105ec4: nop 
label_0x105ec8:
    v0 = -1;                                                    // 0x00105ec8: addiu $v0, $zero, -1
label_0x105ecc:
    goto label_0x1061c8;                                        // 0x00105ecc: b 0x1061c8
    *(uint32_t*)(s1) = v1;                                      // 0x00105ed0: sw $v1, 0($s1)
    /* nop */                                                   // 0x00105ed4: nop 
label_0x105ed8:
    /* bnezl $a3, 0x105eec */                                   // 0x00105ed8: bnezl $a3, 0x105eec
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x00105edc: lhu $a2, 0xc($s0)
    func_00106b60();  // 106b60                                // 0x00105ee0: jal 0x106b60
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x00105ee8: lhu $a2, 0xc($s0)
    v0 = a2 & 0x81a;                                            // 0x00105eec: andi $v0, $a2, 0x81a
    if (v0 != 0) goto label_0x106158;                           // 0x00105ef0: bnez $v0, 0x106158
    v0 = a2 & 0x400;                                            // 0x00105ef4: andi $v0, $a2, 0x400
    if (v0 != 0) goto label_0x105f60;                           // 0x00105ef8: bnez $v0, 0x105f60
    v0 = 0x11 << 16;                                            // 0x00105efc: lui $v0, 0x11
    v0 = v0 + -0x5900;                                          // 0x00105f00: addiu $v0, $v0, -0x5900
    if (s5 != v0) goto label_0x105f48;                          // 0x00105f04: bnel $s5, $v0, 0x105f48
    v0 = a2 | 0x800;                                            // 0x00105f08: ori $v0, $a2, 0x800
    a1 = *(int16_t*)((s0) + 0xe);                               // 0x00105f0c: lh $a1, 0xe($s0)
    if (a1 < 0) goto label_0x105f48;                            // 0x00105f10: bltzl $a1, 0x105f48
    v0 = a2 | 0x800;                                            // 0x00105f14: ori $v0, $a2, 0x800
    func_001061f8();  // 1061f8                                // 0x00105f1c: jal 0x1061f8
    /* bnezl $v0, 0x105f44 */                                   // 0x00105f24: bnezl $v0, 0x105f44
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x00105f28: lhu $a2, 0xc($s0)
    v0 = local_4;                                               // 0x00105f2c: lw $v0, 4($sp)
    v1 = 0 | 0x8000;                                            // 0x00105f30: ori $v1, $zero, 0x8000
    v0 = v0 & 0xf000;                                           // 0x00105f34: andi $v0, $v0, 0xf000
    if (v0 == v1) goto label_0x105f50;                          // 0x00105f38: beql $v0, $v1, 0x105f50
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x00105f3c: lhu $v0, 0xc($s0)
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x00105f40: lhu $a2, 0xc($s0)
    v0 = a2 | 0x800;                                            // 0x00105f44: ori $v0, $a2, 0x800
label_0x105f48:
    goto label_0x106158;                                        // 0x00105f48: b 0x106158
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x00105f4c: sh $v0, 0xc($s0)
label_0x105f50:
    v1 = 0x400;                                                 // 0x00105f50: addiu $v1, $zero, 0x400
    *(uint32_t*)((s0) + 0x4c) = v1;                             // 0x00105f54: sw $v1, 0x4c($s0)
    v0 = v0 | 0x400;                                            // 0x00105f58: ori $v0, $v0, 0x400
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x00105f5c: sh $v0, 0xc($s0)
label_0x105f60:
    if (s4 == 0) goto label_0x105f84;                           // 0x00105f60: beqz $s4, 0x105f84
    a1 = *(int16_t*)((s0) + 0xe);                               // 0x00105f68: lh $a1, 0xe($s0)
    func_001061f8();  // 1061f8                                // 0x00105f70: jal 0x1061f8
    if (v0 != 0) goto label_0x106158;                           // 0x00105f78: bnez $v0, 0x106158
label_0x105f84:
    if (s7 != 0) goto label_0x105fe0;                           // 0x00105f84: bnez $s7, 0x105fe0
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x00105f88: lhu $a2, 0xc($s0)
    v0 = a2 & 0x1000;                                           // 0x00105f8c: andi $v0, $a2, 0x1000
    /* beqzl $v0, 0x105fa0 */                                   // 0x00105f90: beqzl $v0, 0x105fa0
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00105f94: lw $a0, 0x1c($s0)
    goto label_0x105fc0;                                        // 0x00105f98: b 0x105fc0
    s2 = *(int32_t*)((s0) + 0x50);                              // 0x00105f9c: lw $s2, 0x50($s0)
    /* call function at address in s5 */                        // 0x00105fa4: jalr $s5
    a2 = 1;                                                     // 0x00105fa8: addiu $a2, $zero, 1
    v0 = -1;                                                    // 0x00105fb0: addiu $v0, $zero, -1
    if (s2 == v0) goto label_0x106158;                          // 0x00105fb4: beq $s2, $v0, 0x106158
    /* nop */                                                   // 0x00105fb8: nop 
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x00105fbc: lhu $a2, 0xc($s0)
label_0x105fc0:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00105fc0: lw $v0, 4($s0)
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x00105fc4: lw $a1, 0x30($s0)
    if (a1 == 0) goto label_0x106018;                           // 0x00105fc8: beqz $a1, 0x106018
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x00105fd0: lw $v0, 0x3c($s0)
    goto label_0x105fe4;                                        // 0x00105fd4: b 0x105fe4
    /* nop */                                                   // 0x00105fdc: nop 
label_0x105fe0:
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x00105fe0: lw $a1, 0x30($s0)
label_0x105fe4:
    /* beqzl $a1, 0x10601c */                                   // 0x00105fe4: beqzl $a1, 0x10601c
    v0 = *(int32_t*)(s0);                                       // 0x00105fe8: lw $v0, 0($s0)
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x00105fec: lw $v0, 0x38($s0)
    a3 = *(int32_t*)((s0) + 0x10);                              // 0x00105ff0: lw $a3, 0x10($s0)
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00105ff4: lw $v1, 4($s0)
    s1 = v0 - a3;                                               // 0x00105ff8: subu $s1, $v0, $a3
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x00105ffc: lw $a0, 0x3c($s0)
    s1 = s1 + a0;                                               // 0x0010600c: addu $s1, $s1, $a0
    goto label_0x106038;                                        // 0x00106010: b 0x106038
label_0x106018:
    v0 = *(int32_t*)(s0);                                       // 0x00106018: lw $v0, 0($s0)
    a3 = *(int32_t*)((s0) + 0x10);                              // 0x0010601c: lw $a3, 0x10($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00106020: lw $a0, 4($s0)
    s1 = v0 - a3;                                               // 0x00106024: subu $s1, $v0, $a3
    s1 = s1 + a0;                                               // 0x0010602c: addu $s1, $s1, $a0
label_0x106038:
    v0 = a2 & 0x2000;                                           // 0x00106038: andi $v0, $a2, 0x2000
    /* bnezl $v0, 0x1060b8 */                                   // 0x0010603c: bnezl $v0, 0x1060b8
    v0 = *(int32_t*)((s0) + 0x4c);                              // 0x00106040: lw $v0, 0x4c($s0)
    v0 = (s3 < s2) ? 1 : 0;                                     // 0x00106044: slt $v0, $s3, $s2
    /* bnezl $v0, 0x1060b8 */                                   // 0x00106048: bnezl $v0, 0x1060b8
    v0 = *(int32_t*)((s0) + 0x4c);                              // 0x0010604c: lw $v0, 0x4c($s0)
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x0010605c: slt $v0, $s3, $v0
    /* beqzl $v0, 0x1060b8 */                                   // 0x00106060: beqzl $v0, 0x1060b8
    v0 = *(int32_t*)((s0) + 0x4c);                              // 0x00106064: lw $v0, 0x4c($s0)
    v1 = s1 - v0;                                               // 0x00106074: subu $v1, $s1, $v0
    v0 = a3 + v0;                                               // 0x00106078: addu $v0, $a3, $v0
    *(uint32_t*)(s0) = v0;                                      // 0x0010607c: sw $v0, 0($s0)
    if (a1 == 0) goto label_0x1060a4;                           // 0x00106080: beqz $a1, 0x1060a4
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00106084: sw $v1, 4($s0)
    v0 = s0 + 0x40;                                             // 0x00106088: addiu $v0, $s0, 0x40
    if (a1 == v0) goto label_0x1060a4;                          // 0x0010608c: beql $a1, $v0, 0x1060a4
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x00106090: sw $zero, 0x30($s0)
    func_001058e0();  // 1058e0                                // 0x00106094: jal 0x1058e0
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x00106098: lw $a0, 0x54($s0)
    a2 = *(uint16_t*)((s0) + 0xc);                              // 0x0010609c: lhu $a2, 0xc($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001060a0: sw $zero, 0x30($s0)
label_0x1060a4:
    v1 = a2 & 0xffdf;                                           // 0x001060a4: andi $v1, $a2, 0xffdf
    goto label_0x1061c8;                                        // 0x001060ac: b 0x1061c8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001060b0: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001060b4: nop 
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x001060bc: lw $a0, 0x1c($s0)
    v0 = -v0;                                                   // 0x001060c0: negu $v0, $v0
    s2 = v0 & s3;                                               // 0x001060c4: and $s2, $v0, $s3
    /* call function at address in s5 */                        // 0x001060c8: jalr $s5
    v1 = -1;                                                    // 0x001060d0: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x106158;                          // 0x001060d4: beq $v0, $v1, 0x106158
    /* nop */                                                   // 0x001060d8: nop 
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x001060dc: lw $a1, 0x30($s0)
    if (a1 == 0) goto label_0x106100;                           // 0x001060e0: beqz $a1, 0x106100
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001060e4: sw $zero, 4($s0)
    v0 = s0 + 0x40;                                             // 0x001060e8: addiu $v0, $s0, 0x40
    if (a1 == v0) goto label_0x106100;                          // 0x001060ec: beql $a1, $v0, 0x106100
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001060f0: sw $zero, 0x30($s0)
    func_001058e0();  // 1058e0                                // 0x001060f4: jal 0x1058e0
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x001060f8: lw $a0, 0x54($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001060fc: sw $zero, 0x30($s0)
label_0x106100:
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x00106100: lhu $v0, 0xc($s0)
    v0 = v0 & 0xffdf;                                           // 0x00106110: andi $v0, $v0, 0xffdf
    if (s1 == 0) goto label_0x10614c;                           // 0x00106114: beqz $s1, 0x10614c
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x00106118: sh $v0, 0xc($s0)
    func_0010a058();  // 10a058                                // 0x0010611c: jal 0x10a058
    if (v0 != 0) goto label_0x106158;                           // 0x00106124: bnez $v0, 0x106158
    /* nop */                                                   // 0x00106128: nop 
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0010612c: lw $v1, 4($s0)
    v0 = ((unsigned)v1 < (unsigned)s1) ? 1 : 0;                 // 0x00106130: sltu $v0, $v1, $s1
    if (v0 != 0) goto label_0x106158;                           // 0x00106134: bnez $v0, 0x106158
    v1 = v1 - s1;                                               // 0x00106138: subu $v1, $v1, $s1
    v0 = *(int32_t*)(s0);                                       // 0x0010613c: lw $v0, 0($s0)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00106140: sw $v1, 4($s0)
    v0 = v0 + s1;                                               // 0x00106144: addu $v0, $v0, $s1
    *(uint32_t*)(s0) = v0;                                      // 0x00106148: sw $v0, 0($s0)
label_0x10614c:
    goto label_0x1061c8;                                        // 0x0010614c: b 0x1061c8
    /* nop */                                                   // 0x00106154: nop 
label_0x106158:
    func_001050b8();  // 1050b8                                // 0x00106158: jal 0x1050b8
    /* bnezl $v0, 0x1061c8 */                                   // 0x00106160: bnezl $v0, 0x1061c8
    v0 = -1;                                                    // 0x00106164: addiu $v0, $zero, -1
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00106168: lw $a0, 0x1c($s0)
    /* call function at address in s5 */                        // 0x00106170: jalr $s5
    v1 = -1;                                                    // 0x00106178: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x106190;                          // 0x0010617c: bnel $v0, $v1, 0x106190
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x00106180: lw $a1, 0x30($s0)
    goto label_0x1061c8;                                        // 0x00106184: b 0x1061c8
    v0 = -1;                                                    // 0x00106188: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0010618c: nop 
label_0x106190:
    if (a1 == 0) goto label_0x1061ac;                           // 0x00106190: beqz $a1, 0x1061ac
    v0 = s0 + 0x40;                                             // 0x00106194: addiu $v0, $s0, 0x40
    if (a1 == v0) goto label_0x1061ac;                          // 0x00106198: beql $a1, $v0, 0x1061ac
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x0010619c: sw $zero, 0x30($s0)
    func_001058e0();  // 1058e0                                // 0x001061a0: jal 0x1058e0
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x001061a4: lw $a0, 0x54($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001061a8: sw $zero, 0x30($s0)
label_0x1061ac:
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x001061ac: lhu $v1, 0xc($s0)
    a0 = *(int32_t*)((s0) + 0x10);                              // 0x001061b4: lw $a0, 0x10($s0)
    v1 = v1 & 0xffdf;                                           // 0x001061b8: andi $v1, $v1, 0xffdf
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001061bc: sw $zero, 4($s0)
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001061c0: sh $v1, 0xc($s0)
    *(uint32_t*)(s0) = a0;                                      // 0x001061c4: sw $a0, 0($s0)
label_0x1061c8:
    return;                                                     // 0x001061ec: jr $ra
    sp = sp + 0xc0;                                             // 0x001061f0: addiu $sp, $sp, 0xc0
}