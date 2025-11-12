void func_00103c80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_20, local_24, local_28;
    uint32_t local_2c, local_30, local_34, local_38, local_3c, local_4, local_40, local_44;
    uint32_t local_48, local_4c, local_50, local_54, local_8, local_c;
    
    sp = sp + -0xb0;                                            // 0x00103c80: addiu $sp, $sp, -0xb0
    local_8 = a2;                                               // 0x00103cb8: sw $a2, 8($sp)
    t3 = *(int32_t*)((s7) + 0x40);                              // 0x00103cbc: lw $t3, 0x40($s7)
    local_c = a3;                                               // 0x00103cc0: sw $a3, 0xc($sp)
    local_10 = t0;                                              // 0x00103cc4: sw $t0, 0x10($sp)
    if (t3 == 0) goto label_0x103cf4;                           // 0x00103cc8: beqz $t3, 0x103cf4
    local_14 = t2;                                              // 0x00103ccc: sw $t2, 0x14($sp)
    a2 = *(int32_t*)((s7) + 0x44);                              // 0x00103cd0: lw $a2, 0x44($s7)
    v1 = 1;                                                     // 0x00103cd4: addiu $v1, $zero, 1
    *(uint32_t*)((t3) + 4) = a2;                                // 0x00103cdc: sw $a2, 4($t3)
    v0 = *(int32_t*)((s7) + 0x44);                              // 0x00103ce0: lw $v0, 0x44($s7)
    v1 = v1 << v0;                                              // 0x00103ce4: sllv $v1, $v1, $v0
    func_00107ed8();  // 0x107ea8                                // 0x00103ce8: jal 0x107ea8
    *(uint32_t*)((t3) + 8) = v1;                                // 0x00103cec: sw $v1, 8($t3)
    *(uint32_t*)((s7) + 0x40) = 0;                              // 0x00103cf0: sw $zero, 0x40($s7)
label_0x103cf4:
    if (a0 >= 0) goto label_0x103d34;                           // 0x00103d00: bgezl $a0, 0x103d34
    g_00220000 = 0;  // Global at 0x00220000                    // 0x00103d04: sw $zero, 0($s0)
    v0 = 0x7fff << 16;                                          // 0x00103d08: lui $v0, 0x7fff
    v1 = 0xffff << 16;                                          // 0x00103d0c: lui $v1, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00103d14: ori $v0, $v0, 0xffff
    s4 = s4 & v1;                                               // 0x00103d18: and $s4, $s4, $v1
    v0 = a0 & v0;                                               // 0x00103d1c: and $v0, $a0, $v0
    v1 = 1;                                                     // 0x00103d20: addiu $v1, $zero, 1
    g_00220000 = v1;  // Global at 0x00220000                   // 0x00103d28: sw $v1, 0($s0)
    s4 = s4 | v0;                                               // 0x00103d2c: or $s4, $s4, $v0
label_0x103d34:
    v1 = 0x7ff0 << 16;                                          // 0x00103d3c: lui $v1, 0x7ff0
    v0 = s0 & v1;                                               // 0x00103d40: and $v0, $s0, $v1
    if (v0 != v1) goto label_0x103da0;                          // 0x00103d44: bne $v0, $v1, 0x103da0
    a0 = local_10;                                              // 0x00103d48: lw $a0, 0x10($sp)
    v0 = -1;                                                    // 0x00103d4c: addiu $v0, $zero, -1
    v1 = 0x270f;                                                // 0x00103d54: addiu $v1, $zero, 0x270f
    v0 = s4 & v0;                                               // 0x00103d58: and $v0, $s4, $v0
    if (v0 != 0) goto label_0x103d70;                           // 0x00103d5c: bnez $v0, 0x103d70
    g_0022000e = v1;  // Global at 0x0022000e                   // 0x00103d60: sw $v1, 0($a0)
    v0 = 0x22 << 16;                                            // 0x00103d64: lui $v0, 0x22
    goto label_0x103d78;                                        // 0x00103d68: b 0x103d78
    s5 = &str_002200f0;  // "?                0000000000000000Inf" // 0x00103d6c: addiu $s5, $v0, 0xf0
label_0x103d70:
    v0 = 0x22 << 16;                                            // 0x00103d70: lui $v0, 0x22
    s5 = v0 + 0x100;                                            // 0x00103d74: addiu $s5, $v0, 0x100
label_0x103d78:
    v0 = local_14;                                              // 0x00103d78: lw $v0, 0x14($sp)
    if (v0 == 0) goto label_0x103de0;                           // 0x00103d7c: beqz $v0, 0x103de0
    v1 = s5 + 8;                                                // 0x00103d80: addiu $v1, $s5, 8
    v0 = g_00220103;  // Global at 0x00220103                   // 0x00103d84: lb $v0, 3($s5)
    a0 = s5 + 3;                                                // 0x00103d88: addiu $a0, $s5, 3
    if (v0 == 0) v1 = a0;                                       // 0x00103d8c: movz $v1, $a0, $v0
    a0 = local_14;                                              // 0x00103d90: lw $a0, 0x14($sp)
    goto label_0x103de0;                                        // 0x00103d94: b 0x103de0
    g_00220103 = v1;  // Global at 0x00220103                   // 0x00103d98: sw $v1, 0($a0)
    /* nop */                                                   // 0x00103d9c: nop 
label_0x103da0:
    func_00111f90();  // 0x111f40                                // 0x00103da8: jal 0x111f40
    /* nop */                                                   // 0x00103dac: nop 
    if (v0 != 0) goto label_0x103de8;                           // 0x00103db0: bnez $v0, 0x103de8
    a0 = local_10;                                              // 0x00103db8: lw $a0, 0x10($sp)
    v0 = 1;                                                     // 0x00103dbc: addiu $v0, $zero, 1
    v1 = 0x22 << 16;                                            // 0x00103dc0: lui $v1, 0x22
    g_00220103 = v0;  // Global at 0x00220103                   // 0x00103dc4: sw $v0, 0($a0)
    v0 = local_14;                                              // 0x00103dc8: lw $v0, 0x14($sp)
    if (v0 == 0) goto label_0x103de0;                           // 0x00103dcc: beqz $v0, 0x103de0
    s5 = v1 + 0x108;                                            // 0x00103dd0: addiu $s5, $v1, 0x108
    v1 = local_14;                                              // 0x00103dd4: lw $v1, 0x14($sp)
    v0 = s5 + 1;                                                // 0x00103dd8: addiu $v0, $s5, 1
    g_00220000 = v0;  // Global at 0x00220000                   // 0x00103ddc: sw $v0, 0($v1)
label_0x103de0:
    goto label_0x104eb4;                                        // 0x00103de0: b 0x104eb4
label_0x103de8:
    func_00108cd8();  // 0x108b50                                // 0x00103df0: jal 0x108b50
    a3 = sp + 4;                                                // 0x00103df4: addiu $a3, $sp, 4
    local_44 = v0;                                              // 0x00103df8: sw $v0, 0x44($sp)
    v0 = (unsigned)s0 >> 0x14;                                  // 0x00103dfc: srl $v0, $s0, 0x14
    s3 = v0 & 0x7ff;                                            // 0x00103e00: andi $s3, $v0, 0x7ff
    if (s3 == 0) goto label_0x103e58;                           // 0x00103e04: beqz $s3, 0x103e58
    v0 = 0xf << 16;                                             // 0x00103e08: lui $v0, 0xf
    v0 = v0 | 0xffff;                                           // 0x00103e14: ori $v0, $v0, 0xffff
    v1 = v1 & v0;                                               // 0x00103e18: and $v1, $v1, $v0
    a1 = 0xffff << 16;                                          // 0x00103e1c: lui $a1, 0xffff
    s6 = s6 & a1;                                               // 0x00103e28: and $s6, $s6, $a1
    s6 = s6 | v1;                                               // 0x00103e2c: or $s6, $s6, $v1
    a0 = 0x3ff0 << 16;                                          // 0x00103e30: lui $a0, 0x3ff0
    s6 = s6 & a1;                                               // 0x00103e38: and $s6, $s6, $a1
    v0 = v0 | a0;                                               // 0x00103e3c: or $v0, $v0, $a0
    s3 = s3 + -0x3ff;                                           // 0x00103e40: addiu $s3, $s3, -0x3ff
    local_40 = 0;                                               // 0x00103e48: sw $zero, 0x40($sp)
    s6 = s6 | v0;                                               // 0x00103e4c: or $s6, $s6, $v0
    goto label_0x103ef8;                                        // 0x00103e50: b 0x103ef8
    s2 = local_4;                                               // 0x00103e54: lw $s2, 4($sp)
label_0x103e58:
    v0 = local_0;                                               // 0x00103e58: lw $v0, 0($sp)
    s2 = local_4;                                               // 0x00103e5c: lw $s2, 4($sp)
    a0 = s2 + v0;                                               // 0x00103e60: addu $a0, $s2, $v0
    s3 = a0 + 0x432;                                            // 0x00103e64: addiu $s3, $a0, 0x432
    v0 = (s3 < 0x21) ? 1 : 0;                                   // 0x00103e68: slti $v0, $s3, 0x21
    if (v0 != 0) goto label_0x103e98;                           // 0x00103e6c: bnez $v0, 0x103e98
    v0 = -s3;                                                   // 0x00103e70: negu $v0, $s3
    a0 = a0 + 0x412;                                            // 0x00103e74: addiu $a0, $a0, 0x412
    v1 = -s3;                                                   // 0x00103e78: negu $v1, $s3
    v1 = s0 << v1;                                              // 0x00103e84: sllv $v1, $s0, $v1
    v0 = (unsigned)v0 >> a0;                                    // 0x00103e88: srlv $v0, $v0, $a0
    goto label_0x103ea4;                                        // 0x00103e8c: b 0x103ea4
    s0 = v1 | v0;                                               // 0x00103e90: or $s0, $v1, $v0
    /* nop */                                                   // 0x00103e94: nop 
label_0x103e98:
    s0 = v1 << v0;                                              // 0x00103ea0: sllv $s0, $v1, $v0
label_0x103ea4:
    func_00112048();  // 0x111f90                                // 0x00103ea4: jal 0x111f90
    if (s0 >= 0) goto label_0x103ec8;                           // 0x00103eac: bgez $s0, 0x103ec8
    /* nop */                                                   // 0x00103eb0: nop 
    a1 = 0 | 0x83e0;                                            // 0x00103eb4: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x00103ec0: jal 0x111998
    /* nop */                                                   // 0x00103ec4: nop 
label_0x103ec8:
    v0 = 0xfe10 << 16;                                          // 0x00103ecc: lui $v0, 0xfe10
    a0 = 0xffff << 16;                                          // 0x00103ed4: lui $a0, 0xffff
    s6 = s6 & a0;                                               // 0x00103edc: and $s6, $s6, $a0
    a0 = 1;                                                     // 0x00103ee0: addiu $a0, $zero, 1
    v1 = v1 + v0;                                               // 0x00103ee4: addu $v1, $v1, $v0
    local_40 = a0;                                              // 0x00103ee8: sw $a0, 0x40($sp)
    s3 = s3 + -0x433;                                           // 0x00103ef0: addiu $s3, $s3, -0x433
    s6 = s6 | v1;                                               // 0x00103ef4: or $s6, $s6, $v1
label_0x103ef8:
    a1 = 0 | 0xffe0;                                            // 0x00103ef8: ori $a1, $zero, 0xffe0
    func_00111a58();  // 0x1119f0                                // 0x00103f04: jal 0x1119f0
    /* nop */                                                   // 0x00103f08: nop 
    at = 0x22 << 16;                                            // 0x00103f0c: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x00103f18: jal 0x111a58
    /* nop */                                                   // 0x00103f1c: nop 
    at = 0x22 << 16;                                            // 0x00103f20: lui $at, 0x22
    func_001119f0();  // 0x111998                                // 0x00103f2c: jal 0x111998
    /* nop */                                                   // 0x00103f30: nop 
    func_00112048();  // 0x111f90                                // 0x00103f38: jal 0x111f90
    at = 0x22 << 16;                                            // 0x00103f40: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x00103f4c: jal 0x111a58
    /* nop */                                                   // 0x00103f50: nop 
    func_001119f0();  // 0x111998                                // 0x00103f5c: jal 0x111998
    /* nop */                                                   // 0x00103f60: nop 
    func_001120e8();  // 0x112048                                // 0x00103f6c: jal 0x112048
    /* nop */                                                   // 0x00103f70: nop 
    func_00111f90();  // 0x111f40                                // 0x00103f7c: jal 0x111f40
    if (v0 >= 0) goto label_0x103fb0;                           // 0x00103f84: bgez $v0, 0x103fb0
    v1 = 1;                                                     // 0x00103f88: addiu $v1, $zero, 1
    func_00112048();  // 0x111f90                                // 0x00103f8c: jal 0x111f90
    func_00111f90();  // 0x111f40                                // 0x00103f9c: jal 0x111f40
    /* nop */                                                   // 0x00103fa0: nop 
    v1 = fp + -1;                                               // 0x00103fa4: addiu $v1, $fp, -1
    if (v0 != 0) fp = v1;                                       // 0x00103fa8: movn $fp, $v1, $v0
    v1 = 1;                                                     // 0x00103fac: addiu $v1, $zero, 1
label_0x103fb0:
    v0 = ((unsigned)fp < (unsigned)0x17) ? 1 : 0;               // 0x00103fb0: sltiu $v0, $fp, 0x17
    if (v0 == 0) goto label_0x103fe4;                           // 0x00103fb4: beqz $v0, 0x103fe4
    local_30 = v1;                                              // 0x00103fb8: sw $v1, 0x30($sp)
    v0 = fp << 3;                                               // 0x00103fbc: sll $v0, $fp, 3
    a1 = 0x22 << 16;                                            // 0x00103fc4: lui $a1, 0x22
    a1 = a1 + v0;                                               // 0x00103fc8: addu $a1, $a1, $v0
    func_00111f90();  // 0x111f40                                // 0x00103fd0: jal 0x111f40
    local_30 = 0;                                               // 0x00103fd4: sw $zero, 0x30($sp)
    v1 = fp + -1;                                               // 0x00103fd8: addiu $v1, $fp, -1
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x00103fdc: slti $v0, $v0, 0
    if (v0 != 0) fp = v1;                                       // 0x00103fe0: movn $fp, $v1, $v0
label_0x103fe4:
    v0 = s2 - s3;                                               // 0x00103fe4: subu $v0, $s2, $s3
    s0 = v0 + -1;                                               // 0x00103fe8: addiu $s0, $v0, -1
    if (s0 < 0) goto label_0x104000;                            // 0x00103fec: bltzl $s0, 0x104000
    s0 = -s0;                                                   // 0x00103ff0: negu $s0, $s0
    local_38 = s0;                                              // 0x00103ff4: sw $s0, 0x38($sp)
    goto label_0x104008;                                        // 0x00103ff8: b 0x104008
    local_18 = 0;                                               // 0x00103ffc: sw $zero, 0x18($sp)
label_0x104000:
    local_38 = 0;                                               // 0x00104000: sw $zero, 0x38($sp)
    local_18 = s0;                                              // 0x00104004: sw $s0, 0x18($sp)
label_0x104008:
    if (fp < 0) goto label_0x104028;                            // 0x00104008: bltz $fp, 0x104028
    a0 = local_38;                                              // 0x0010400c: lw $a0, 0x38($sp)
    local_1c = 0;                                               // 0x00104010: sw $zero, 0x1c($sp)
    a0 = a0 + fp;                                               // 0x00104014: addu $a0, $a0, $fp
    local_3c = fp;                                              // 0x00104018: sw $fp, 0x3c($sp)
    goto label_0x104040;                                        // 0x0010401c: b 0x104040
    local_38 = a0;                                              // 0x00104020: sw $a0, 0x38($sp)
    /* nop */                                                   // 0x00104024: nop 
label_0x104028:
    v0 = local_18;                                              // 0x00104028: lw $v0, 0x18($sp)
    v1 = -fp;                                                   // 0x0010402c: negu $v1, $fp
    local_1c = v1;                                              // 0x00104030: sw $v1, 0x1c($sp)
    v0 = v0 - fp;                                               // 0x00104034: subu $v0, $v0, $fp
    local_3c = 0;                                               // 0x00104038: sw $zero, 0x3c($sp)
    local_18 = v0;                                              // 0x0010403c: sw $v0, 0x18($sp)
label_0x104040:
    a0 = local_8;                                               // 0x00104040: lw $a0, 8($sp)
    s1 = 1;                                                     // 0x00104044: addiu $s1, $zero, 1
    v1 = ((unsigned)a0 < (unsigned)0xa) ? 1 : 0;                // 0x00104048: sltiu $v1, $a0, 0xa
    if (v1 == 0) a0 = 0;                                        // 0x0010404c: movz $a0, $zero, $v1
    v0 = (a0 < 6) ? 1 : 0;                                      // 0x00104050: slti $v0, $a0, 6
    if (v0 != 0) goto label_0x104068;                           // 0x00104054: bnez $v0, 0x104068
    local_8 = a0;                                               // 0x00104058: sw $a0, 8($sp)
    a0 = a0 + -4;                                               // 0x0010405c: addiu $a0, $a0, -4
    local_8 = a0;                                               // 0x00104064: sw $a0, 8($sp)
label_0x104068:
    v1 = local_8;                                               // 0x00104068: lw $v1, 8($sp)
    a0 = 1;                                                     // 0x0010406c: addiu $a0, $zero, 1
    local_34 = a0;                                              // 0x00104070: sw $a0, 0x34($sp)
    v0 = ((unsigned)v1 < (unsigned)6) ? 1 : 0;                  // 0x00104074: sltiu $v0, $v1, 6
    v1 = -1;                                                    // 0x00104078: addiu $v1, $zero, -1
    local_28 = v1;                                              // 0x0010407c: sw $v1, 0x28($sp)
    if (v0 == 0) goto label_0x104104;                           // 0x00104080: beqz $v0, 0x104104
    local_20 = v1;                                              // 0x00104084: sw $v1, 0x20($sp)
    a0 = local_8;                                               // 0x00104088: lw $a0, 8($sp)
    v0 = a0 << 2;                                               // 0x0010408c: sll $v0, $a0, 2
    v1 = 0x22 << 16;                                            // 0x00104090: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x00104094: addu $v1, $v1, $v0
    v1 = g_00220130;  // Global at 0x00220130                   // 0x00104098: lw $v1, 0x130($v1)
    /* jump to address in v1 */                                 // 0x0010409c: jr $v1
    /* nop */                                                   // 0x001040a0: nop 
    /* nop */                                                   // 0x001040a4: nop 
    s3 = 0x12;                                                  // 0x001040a8: addiu $s3, $zero, 0x12
    goto label_0x104104;                                        // 0x001040ac: b 0x104104
    local_c = 0;                                                // 0x001040b0: sw $zero, 0xc($sp)
    /* nop */                                                   // 0x001040b4: nop 
    local_34 = 0;                                               // 0x001040b8: sw $zero, 0x34($sp)
    v1 = local_c;                                               // 0x001040bc: lw $v1, 0xc($sp)
    s3 = 1;                                                     // 0x001040c0: addiu $s3, $zero, 1
    v0 = (0 < v1) ? 1 : 0;                                      // 0x001040c4: slt $v0, $zero, $v1
    if (v0 != 0) s3 = v1;                                       // 0x001040c8: movn $s3, $v1, $v0
    local_c = s3;                                               // 0x001040cc: sw $s3, 0xc($sp)
    local_28 = s3;                                              // 0x001040d0: sw $s3, 0x28($sp)
    goto label_0x104104;                                        // 0x001040d4: b 0x104104
    local_20 = s3;                                              // 0x001040d8: sw $s3, 0x20($sp)
    /* nop */                                                   // 0x001040dc: nop 
    local_34 = 0;                                               // 0x001040e0: sw $zero, 0x34($sp)
    a0 = local_c;                                               // 0x001040e4: lw $a0, 0xc($sp)
    v0 = a0 + fp;                                               // 0x001040e8: addu $v0, $a0, $fp
    a0 = 1;                                                     // 0x001040ec: addiu $a0, $zero, 1
    s3 = v0 + 1;                                                // 0x001040f0: addiu $s3, $v0, 1
    local_28 = v0;                                              // 0x001040f4: sw $v0, 0x28($sp)
    v1 = (0 < s3) ? 1 : 0;                                      // 0x001040f8: slt $v1, $zero, $s3
    local_20 = s3;                                              // 0x001040fc: sw $s3, 0x20($sp)
    if (v1 == 0) s3 = a0;                                       // 0x00104100: movz $s3, $a0, $v1
label_0x104104:
    v0 = ((unsigned)s3 < (unsigned)0x18) ? 1 : 0;               // 0x00104104: sltiu $v0, $s3, 0x18
    *(uint32_t*)((s7) + 0x44) = 0;                              // 0x00104108: sw $zero, 0x44($s7)
    if (v0 != 0) goto label_0x104138;                           // 0x0010410c: bnez $v0, 0x104138
    s0 = 4;                                                     // 0x00104110: addiu $s0, $zero, 4
label_0x104118:
    s0 = s0 << 1;                                               // 0x00104118: sll $s0, $s0, 1
    v0 = s0 + 0x14;                                             // 0x0010411c: addiu $v0, $s0, 0x14
    v0 = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x00104120: sltu $v0, $s3, $v0
    /* nop */                                                   // 0x00104124: nop 
    /* nop */                                                   // 0x00104128: nop 
    if (v0 == 0) goto label_0x104118;                           // 0x0010412c: beqz $v0, 0x104118
    v1 = v1 + 1;                                                // 0x00104130: addiu $v1, $v1, 1
    *(uint32_t*)((s7) + 0x44) = v1;                             // 0x00104134: sw $v1, 0x44($s7)
label_0x104138:
    a1 = *(int32_t*)((s7) + 0x44);                              // 0x00104138: lw $a1, 0x44($s7)
    func_00107ea8();  // 0x107e00                                // 0x0010413c: jal 0x107e00
    local_54 = v0;                                              // 0x00104144: sw $v0, 0x54($sp)
    v1 = local_20;                                              // 0x00104148: lw $v1, 0x20($sp)
    a0 = local_54;                                              // 0x0010414c: lw $a0, 0x54($sp)
    v0 = ((unsigned)v1 < (unsigned)0xf) ? 1 : 0;                // 0x00104150: sltiu $v0, $v1, 0xf
    *(uint32_t*)((s7) + 0x40) = a0;                             // 0x00104154: sw $a0, 0x40($s7)
    if (v0 == 0) goto label_0x1045a8;                           // 0x00104158: beqz $v0, 0x1045a8
    s5 = local_54;                                              // 0x0010415c: lw $s5, 0x54($sp)
    /* beqzl $s1, 0x1045ac */                                   // 0x00104160: beqzl $s1, 0x1045ac
    v1 = local_0;                                               // 0x00104164: lw $v1, 0($sp)
    local_2c = fp;                                              // 0x0010416c: sw $fp, 0x2c($sp)
    local_24 = v1;                                              // 0x00104170: sw $v1, 0x24($sp)
    if (fp <= 0) goto label_0x104210;                           // 0x00104174: blez $fp, 0x104210
    s3 = 2;                                                     // 0x00104178: addiu $s3, $zero, 2
    v0 = fp & 0xf;                                              // 0x0010417c: andi $v0, $fp, 0xf
    s0 = fp >> 4;                                               // 0x00104180: sra $s0, $fp, 4
    v0 = v0 << 3;                                               // 0x00104184: sll $v0, $v0, 3
    v1 = s0 & 0x10;                                             // 0x00104188: andi $v1, $s0, 0x10
    s1 = 0x22 << 16;                                            // 0x0010418c: lui $s1, 0x22
    s1 = s1 + v0;                                               // 0x00104190: addu $s1, $s1, $v0
    if (v1 == 0) goto label_0x1041b8;                           // 0x00104198: beqz $v1, 0x1041b8
    v0 = 0x22 << 16;                                            // 0x0010419c: lui $v0, 0x22
    s0 = s0 & 0xf;                                              // 0x001041a8: andi $s0, $s0, 0xf
    func_00111e20();  // 0x111ce0                                // 0x001041ac: jal 0x111ce0
    s3 = 3;                                                     // 0x001041b0: addiu $s3, $zero, 3
label_0x1041b8:
    if (s0 == 0) goto label_0x1041f4;                           // 0x001041b8: beqz $s0, 0x1041f4
    v0 = 0x22 << 16;                                            // 0x001041bc: lui $v0, 0x22
    s2 = v0 + 0x270;                                            // 0x001041c0: addiu $s2, $v0, 0x270
    /* nop */                                                   // 0x001041c4: nop 
label_0x1041c8:
    v0 = s0 & 1;                                                // 0x001041c8: andi $v0, $s0, 1
    /* beqzl $v0, 0x1041ec */                                   // 0x001041cc: beqzl $v0, 0x1041ec
    s0 = s0 >> 1;                                               // 0x001041d0: sra $s0, $s0, 1
    func_00111ce0();  // 0x111a58                                // 0x001041dc: jal 0x111a58
    s3 = s3 + 1;                                                // 0x001041e0: addiu $s3, $s3, 1
    s0 = s0 >> 1;                                               // 0x001041e8: sra $s0, $s0, 1
    if (s0 != 0) goto label_0x1041c8;                           // 0x001041ec: bnez $s0, 0x1041c8
    s2 = s2 + 8;                                                // 0x001041f0: addiu $s2, $s2, 8
label_0x1041f4:
    func_00111e20();  // 0x111ce0                                // 0x001041fc: jal 0x111ce0
    /* nop */                                                   // 0x00104200: nop 
    goto label_0x104274;                                        // 0x00104204: b 0x104274
    /* nop */                                                   // 0x0010420c: nop 
label_0x104210:
    s1 = -fp;                                                   // 0x00104210: negu $s1, $fp
    if (s1 == 0) goto label_0x104274;                           // 0x00104214: beqz $s1, 0x104274
    v0 = s1 & 0xf;                                              // 0x00104218: andi $v0, $s1, 0xf
    v0 = v0 << 3;                                               // 0x00104220: sll $v0, $v0, 3
    a0 = 0x22 << 16;                                            // 0x00104224: lui $a0, 0x22
    a0 = a0 + v0;                                               // 0x00104228: addu $a0, $a0, $v0
    func_00111ce0();  // 0x111a58                                // 0x00104230: jal 0x111a58
    s0 = s1 >> 4;                                               // 0x00104234: sra $s0, $s1, 4
    if (s0 == 0) goto label_0x104274;                           // 0x00104238: beqz $s0, 0x104274
    v0 = 0x22 << 16;                                            // 0x00104240: lui $v0, 0x22
    s1 = v0 + 0x270;                                            // 0x00104244: addiu $s1, $v0, 0x270
label_0x104248:
    v0 = s0 & 1;                                                // 0x00104248: andi $v0, $s0, 1
    /* beqzl $v0, 0x10426c */                                   // 0x0010424c: beqzl $v0, 0x10426c
    s0 = s0 >> 1;                                               // 0x00104250: sra $s0, $s0, 1
    func_00111ce0();  // 0x111a58                                // 0x0010425c: jal 0x111a58
    s3 = s3 + 1;                                                // 0x00104260: addiu $s3, $s3, 1
    s0 = s0 >> 1;                                               // 0x00104268: sra $s0, $s0, 1
    if (s0 != 0) goto label_0x104248;                           // 0x0010426c: bnez $s0, 0x104248
    s1 = s1 + 8;                                                // 0x00104270: addiu $s1, $s1, 8
label_0x104274:
    v0 = local_30;                                              // 0x00104274: lw $v0, 0x30($sp)
    if (v0 == 0) goto label_0x1042d0;                           // 0x00104278: beqz $v0, 0x1042d0
    /* nop */                                                   // 0x0010427c: nop 
    a1 = 0 | 0xffc0;                                            // 0x00104280: ori $a1, $zero, 0xffc0
    func_00111f90();  // 0x111f40                                // 0x0010428c: jal 0x111f40
    /* nop */                                                   // 0x00104290: nop 
    if (v0 >= 0) goto label_0x1042d0;                           // 0x00104294: bgez $v0, 0x1042d0
    v1 = local_20;                                              // 0x00104298: lw $v1, 0x20($sp)
    if (v1 <= 0) goto label_0x1042d0;                           // 0x0010429c: blez $v1, 0x1042d0
    a0 = local_28;                                              // 0x001042a0: lw $a0, 0x28($sp)
    if (a0 <= 0) goto label_0x104598;                           // 0x001042a4: blez $a0, 0x104598
    v0 = local_24;                                              // 0x001042a8: lw $v0, 0x24($sp)
    v0 = local_28;                                              // 0x001042ac: lw $v0, 0x28($sp)
    a0 = 0 | 0x8048;                                            // 0x001042b4: ori $a0, $zero, 0x8048
    fp = fp + -1;                                               // 0x001042bc: addiu $fp, $fp, -1
    local_20 = v0;                                              // 0x001042c0: sw $v0, 0x20($sp)
    func_00111ce0();  // 0x111a58                                // 0x001042c4: jal 0x111a58
    s3 = s3 + 1;                                                // 0x001042c8: addiu $s3, $s3, 1
label_0x1042d0:
    func_00112048();  // 0x111f90                                // 0x001042d0: jal 0x111f90
    func_00111ce0();  // 0x111a58                                // 0x001042e0: jal 0x111a58
    /* nop */                                                   // 0x001042e4: nop 
    a1 = 0 | 0x8038;                                            // 0x001042e8: ori $a1, $zero, 0x8038
    func_001119f0();  // 0x111998                                // 0x001042f4: jal 0x111998
    /* nop */                                                   // 0x001042f8: nop 
    a0 = 0xffff << 16;                                          // 0x001042fc: lui $a0, 0xffff
    v0 = 0xfcc0 << 16;                                          // 0x00104308: lui $v0, 0xfcc0
    s2 = s2 & a0;                                               // 0x00104310: and $s2, $s2, $a0
    v1 = v1 + v0;                                               // 0x00104314: addu $v1, $v1, $v0
    s2 = s2 | v1;                                               // 0x0010431c: or $s2, $s2, $v1
    v1 = local_20;                                              // 0x00104320: lw $v1, 0x20($sp)
    if (v1 != 0) goto label_0x104390;                           // 0x00104324: bnez $v1, 0x104390
    a0 = local_34;                                              // 0x00104328: lw $a0, 0x34($sp)
    a1 = 0 | 0x8028;                                            // 0x0010432c: ori $a1, $zero, 0x8028
    local_4c = 0;                                               // 0x00104338: sw $zero, 0x4c($sp)
    func_00111a58();  // 0x1119f0                                // 0x0010433c: jal 0x1119f0
    local_50 = 0;                                               // 0x00104340: sw $zero, 0x50($sp)
    func_00111f90();  // 0x111f40                                // 0x00104350: jal 0x111f40
    /* nop */                                                   // 0x00104354: nop 
    if (v0 > 0) goto label_0x104ae8;                            // 0x00104358: bgtz $v0, 0x104ae8
    v1 = local_54;                                              // 0x0010435c: lw $v1, 0x54($sp)
    func_00111a58();  // 0x1119f0                                // 0x00104368: jal 0x1119f0
    /* nop */                                                   // 0x0010436c: nop 
    func_00111f90();  // 0x111f40                                // 0x00104378: jal 0x111f40
    /* nop */                                                   // 0x0010437c: nop 
    if (v0 < 0) goto label_0x104ad8;                            // 0x00104380: bltz $v0, 0x104ad8
    v0 = local_24;                                              // 0x00104384: lw $v0, 0x24($sp)
    goto label_0x104598;                                        // 0x00104388: b 0x104598
    /* nop */                                                   // 0x0010438c: nop 
label_0x104390:
    if (a0 == 0) goto label_0x104490;                           // 0x00104390: beqz $a0, 0x104490
    v1 = local_20;                                              // 0x00104394: lw $v1, 0x20($sp)
    a0 = 0 | 0xff80;                                            // 0x00104398: ori $a0, $zero, 0xff80
    v0 = v1 << 3;                                               // 0x001043a0: sll $v0, $v1, 3
    a1 = 0x22 << 16;                                            // 0x001043a4: lui $a1, 0x22
    a1 = a1 + v0;                                               // 0x001043a8: addu $a1, $a1, $v0
    func_00111e20();  // 0x111ce0                                // 0x001043b0: jal 0x111ce0
    func_00111a58();  // 0x1119f0                                // 0x001043c0: jal 0x1119f0
    /* nop */                                                   // 0x001043c4: nop 
    goto label_0x1043fc;                                        // 0x001043c8: b 0x1043fc
label_0x1043d0:
    a0 = 0 | 0x8048;                                            // 0x001043d0: ori $a0, $zero, 0x8048
    func_00111ce0();  // 0x111a58                                // 0x001043dc: jal 0x111a58
    /* nop */                                                   // 0x001043e0: nop 
    a0 = 0 | 0x8048;                                            // 0x001043e4: ori $a0, $zero, 0x8048
    func_00111ce0();  // 0x111a58                                // 0x001043f0: jal 0x111a58
label_0x1043fc:
    func_001120e8();  // 0x112048                                // 0x00104400: jal 0x112048
    /* nop */                                                   // 0x00104404: nop 
    func_00112048();  // 0x111f90                                // 0x0010440c: jal 0x111f90
    func_00111a58();  // 0x1119f0                                // 0x0010441c: jal 0x1119f0
    /* nop */                                                   // 0x00104420: nop 
    v0 = s0 + 0x30;                                             // 0x0010442c: addiu $v0, $s0, 0x30
    g_00220108 = v0;  // Global at 0x00220108                   // 0x00104430: sb $v0, 0($s5)
    func_00111f90();  // 0x111f40                                // 0x00104438: jal 0x111f40
    s5 = s5 + 1;                                                // 0x0010443c: addiu $s5, $s5, 1
    if (v0 < 0) goto label_0x104e8c;                            // 0x00104440: bltz $v0, 0x104e8c
    a1 = local_44;                                              // 0x00104444: lw $a1, 0x44($sp)
    a0 = 0 | 0xffc0;                                            // 0x00104448: ori $a0, $zero, 0xffc0
    func_00111a58();  // 0x1119f0                                // 0x00104454: jal 0x1119f0
    /* nop */                                                   // 0x00104458: nop 
    func_00111f90();  // 0x111f40                                // 0x00104464: jal 0x111f40
    /* nop */                                                   // 0x00104468: nop 
    if (v0 < 0) goto label_0x1046d4;                            // 0x0010446c: bltz $v0, 0x1046d4
    v1 = 0x39;                                                  // 0x00104470: addiu $v1, $zero, 0x39
    a0 = local_20;                                              // 0x00104474: lw $a0, 0x20($sp)
    s3 = s3 + 1;                                                // 0x00104478: addiu $s3, $s3, 1
    v0 = (s3 < a0) ? 1 : 0;                                     // 0x0010447c: slt $v0, $s3, $a0
    if (v0 != 0) goto label_0x1043d0;                           // 0x00104480: bnez $v0, 0x1043d0
    v0 = local_24;                                              // 0x00104484: lw $v0, 0x24($sp)
    goto label_0x104598;                                        // 0x00104488: b 0x104598
    /* nop */                                                   // 0x0010448c: nop 
label_0x104490:
    v0 = v1 << 3;                                               // 0x00104494: sll $v0, $v1, 3
    a0 = 0x22 << 16;                                            // 0x00104498: lui $a0, 0x22
    a0 = a0 + v0;                                               // 0x0010449c: addu $a0, $a0, $v0
    func_00111ce0();  // 0x111a58                                // 0x001044a4: jal 0x111a58
    s3 = 1;                                                     // 0x001044a8: addiu $s3, $zero, 1
label_0x1044b0:
    func_001120e8();  // 0x112048                                // 0x001044b4: jal 0x112048
    /* nop */                                                   // 0x001044b8: nop 
    func_00112048();  // 0x111f90                                // 0x001044c0: jal 0x111f90
    func_00111a58();  // 0x1119f0                                // 0x001044d0: jal 0x1119f0
    /* nop */                                                   // 0x001044d4: nop 
    v0 = s0 + 0x30;                                             // 0x001044dc: addiu $v0, $s0, 0x30
    g_00220109 = v0;  // Global at 0x00220109                   // 0x001044e0: sb $v0, 0($s5)
    a0 = local_20;                                              // 0x001044e4: lw $a0, 0x20($sp)
    if (s3 != a0) goto label_0x104578;                          // 0x001044e8: bne $s3, $a0, 0x104578
    s5 = s5 + 1;                                                // 0x001044ec: addiu $s5, $s5, 1
    a0 = 0 | 0xff80;                                            // 0x001044f0: ori $a0, $zero, 0xff80
    func_001119f0();  // 0x111998                                // 0x001044fc: jal 0x111998
    /* nop */                                                   // 0x00104500: nop 
    func_00111f90();  // 0x111f40                                // 0x0010450c: jal 0x111f40
    /* nop */                                                   // 0x00104510: nop 
    if (v0 > 0) goto label_0x1046d4;                            // 0x00104514: bgtz $v0, 0x1046d4
    v1 = 0x39;                                                  // 0x00104518: addiu $v1, $zero, 0x39
    a0 = 0 | 0xff80;                                            // 0x0010451c: ori $a0, $zero, 0xff80
    func_00111a58();  // 0x1119f0                                // 0x00104528: jal 0x1119f0
    /* nop */                                                   // 0x0010452c: nop 
    func_00111f90();  // 0x111f40                                // 0x00104538: jal 0x111f40
    /* nop */                                                   // 0x0010453c: nop 
    if (v0 >= 0) goto label_0x104598;                           // 0x00104540: bgez $v0, 0x104598
    v0 = local_24;                                              // 0x00104544: lw $v0, 0x24($sp)
    v1 = 0x30;                                                  // 0x00104548: addiu $v1, $zero, 0x30
    s5 = s5 + -1;                                               // 0x0010454c: addiu $s5, $s5, -1
label_0x104550:
    v0 = g_00220109;  // Global at 0x00220109                   // 0x00104550: lb $v0, 0($s5)
    /* nop */                                                   // 0x00104554: nop 
    /* nop */                                                   // 0x00104558: nop 
    /* nop */                                                   // 0x0010455c: nop 
    /* nop */                                                   // 0x00104560: nop 
    if (v0 == v1) goto label_0x104550;                          // 0x00104564: beql $v0, $v1, 0x104550
    s5 = s5 + -1;                                               // 0x00104568: addiu $s5, $s5, -1
    goto label_0x104e88;                                        // 0x0010456c: b 0x104e88
    s5 = s5 + 1;                                                // 0x00104570: addiu $s5, $s5, 1
    /* nop */                                                   // 0x00104574: nop 
label_0x104578:
    a0 = 0 | 0x8048;                                            // 0x00104578: ori $a0, $zero, 0x8048
    func_00111ce0();  // 0x111a58                                // 0x00104584: jal 0x111a58
    s3 = s3 + 1;                                                // 0x00104588: addiu $s3, $s3, 1
    goto label_0x1044b0;                                        // 0x0010458c: b 0x1044b0
    /* nop */                                                   // 0x00104594: nop 
label_0x104598:
    fp = local_2c;                                              // 0x0010459c: lw $fp, 0x2c($sp)
    local_20 = v0;                                              // 0x001045a0: sw $v0, 0x20($sp)
    s5 = local_54;                                              // 0x001045a4: lw $s5, 0x54($sp)
label_0x1045a8:
    v1 = local_0;                                               // 0x001045a8: lw $v1, 0($sp)
    if (v1 < 0) goto label_0x104758;                            // 0x001045ac: bltz $v1, 0x104758
    v0 = (fp < 0xf) ? 1 : 0;                                    // 0x001045b0: slti $v0, $fp, 0xf
    if (v0 == 0) goto label_0x10475c;                           // 0x001045b4: beqz $v0, 0x10475c
    v0 = local_8;                                               // 0x001045b8: lw $v0, 8($sp)
    v1 = local_c;                                               // 0x001045bc: lw $v1, 0xc($sp)
    v0 = fp << 3;                                               // 0x001045c0: sll $v0, $fp, 3
    s1 = 0x22 << 16;                                            // 0x001045c4: lui $s1, 0x22
    s1 = s1 + v0;                                               // 0x001045c8: addu $s1, $s1, $v0
    if (v1 >= 0) goto label_0x104628;                           // 0x001045d0: bgez $v1, 0x104628
    s3 = 1;                                                     // 0x001045d4: addiu $s3, $zero, 1
    a0 = local_20;                                              // 0x001045d8: lw $a0, 0x20($sp)
    if (a0 > 0) goto label_0x104628;                            // 0x001045dc: bgtz $a0, 0x104628
    /* nop */                                                   // 0x001045e0: nop 
    local_4c = 0;                                               // 0x001045e4: sw $zero, 0x4c($sp)
    if (a0 < 0) goto label_0x104ad8;                            // 0x001045e8: bltz $a0, 0x104ad8
    local_50 = 0;                                               // 0x001045ec: sw $zero, 0x50($sp)
    a1 = 0 | 0x8028;                                            // 0x001045f0: ori $a1, $zero, 0x8028
    func_00111ce0();  // 0x111a58                                // 0x001045fc: jal 0x111a58
    /* nop */                                                   // 0x00104600: nop 
    func_00111f90();  // 0x111f40                                // 0x0010460c: jal 0x111f40
    /* nop */                                                   // 0x00104610: nop 
    if (v0 <= 0) goto label_0x104adc;                           // 0x00104614: blez $v0, 0x104adc
    v0 = local_c;                                               // 0x00104618: lw $v0, 0xc($sp)
    goto label_0x104ae8;                                        // 0x0010461c: b 0x104ae8
    v1 = local_54;                                              // 0x00104620: lw $v1, 0x54($sp)
    /* nop */                                                   // 0x00104624: nop 
label_0x104628:
    func_00111e20();  // 0x111ce0                                // 0x00104630: jal 0x111ce0
    /* nop */                                                   // 0x00104634: nop 
    func_001120e8();  // 0x112048                                // 0x0010463c: jal 0x112048
    /* nop */                                                   // 0x00104640: nop 
    func_00112048();  // 0x111f90                                // 0x00104648: jal 0x111f90
    func_00111ce0();  // 0x111a58                                // 0x00104658: jal 0x111a58
    /* nop */                                                   // 0x0010465c: nop 
    func_00111a58();  // 0x1119f0                                // 0x00104668: jal 0x1119f0
    /* nop */                                                   // 0x0010466c: nop 
    v0 = s0 + 0x30;                                             // 0x00104674: addiu $v0, $s0, 0x30
    g_00220109 = v0;  // Global at 0x00220109                   // 0x00104678: sb $v0, 0($s5)
    v0 = local_20;                                              // 0x0010467c: lw $v0, 0x20($sp)
    if (s3 != v0) goto label_0x104720;                          // 0x00104680: bne $s3, $v0, 0x104720
    s5 = s5 + 1;                                                // 0x00104684: addiu $s5, $s5, 1
    func_001119f0();  // 0x111998                                // 0x0010468c: jal 0x111998
    /* nop */                                                   // 0x00104690: nop 
    func_00111f90();  // 0x111f40                                // 0x001046a0: jal 0x111f40
    /* nop */                                                   // 0x001046a4: nop 
    if (v0 > 0) goto label_0x1046d4;                            // 0x001046a8: bgtz $v0, 0x1046d4
    v1 = 0x39;                                                  // 0x001046ac: addiu $v1, $zero, 0x39
    func_00111f90();  // 0x111f40                                // 0x001046b8: jal 0x111f40
    /* nop */                                                   // 0x001046bc: nop 
    if (v0 != 0) goto label_0x104e8c;                           // 0x001046c0: bnez $v0, 0x104e8c
    a1 = local_44;                                              // 0x001046c4: lw $a1, 0x44($sp)
    v0 = s0 & 1;                                                // 0x001046c8: andi $v0, $s0, 1
    if (v0 == 0) goto label_0x104e8c;                           // 0x001046cc: beqz $v0, 0x104e8c
    v1 = 0x39;                                                  // 0x001046d0: addiu $v1, $zero, 0x39
label_0x1046d4:
    a1 = 0x30;                                                  // 0x001046d4: addiu $a1, $zero, 0x30
    s5 = s5 + -1;                                               // 0x001046d8: addiu $s5, $s5, -1
    /* nop */                                                   // 0x001046dc: nop 
label_0x1046e0:
    v0 = g_00220109;  // Global at 0x00220109                   // 0x001046e0: lb $v0, 0($s5)
    if (v0 != v1) goto label_0x104710;                          // 0x001046e4: bne $v0, $v1, 0x104710
    a0 = g_00220109;  // Global at 0x00220109                   // 0x001046e8: lbu $a0, 0($s5)
    a0 = local_54;                                              // 0x001046ec: lw $a0, 0x54($sp)
    /* nop */                                                   // 0x001046f0: nop 
    /* nop */                                                   // 0x001046f4: nop 
    /* nop */                                                   // 0x001046f8: nop 
    if (s5 != a0) goto label_0x1046e0;                          // 0x001046fc: bnel $s5, $a0, 0x1046e0
    s5 = s5 + -1;                                               // 0x00104700: addiu $s5, $s5, -1
    g_00220000 = a1;  // Global at 0x00220000                   // 0x00104704: sb $a1, 0($a0)
    fp = fp + 1;                                                // 0x0010470c: addiu $fp, $fp, 1
label_0x104710:
    v0 = a0 + 1;                                                // 0x00104710: addiu $v0, $a0, 1
    g_00220108 = v0;  // Global at 0x00220108                   // 0x00104714: sb $v0, 0($s5)
    goto label_0x104e88;                                        // 0x00104718: b 0x104e88
    s5 = s5 + 1;                                                // 0x0010471c: addiu $s5, $s5, 1
label_0x104720:
    a0 = 0 | 0x8048;                                            // 0x00104720: ori $a0, $zero, 0x8048
    func_00111ce0();  // 0x111a58                                // 0x00104728: jal 0x111a58
    /* nop */                                                   // 0x0010472c: nop 
    func_00111f90();  // 0x111f40                                // 0x0010473c: jal 0x111f40
    /* nop */                                                   // 0x00104740: nop 
    if (v0 == 0) goto label_0x104e88;                           // 0x00104744: beqz $v0, 0x104e88
    s3 = s3 + 1;                                                // 0x00104748: addiu $s3, $s3, 1
    goto label_0x104628;                                        // 0x0010474c: b 0x104628
    /* nop */                                                   // 0x00104750: nop 
    /* nop */                                                   // 0x00104754: nop 
label_0x104758:
    v0 = local_8;                                               // 0x00104758: lw $v0, 8($sp)
label_0x10475c:
    a0 = local_34;                                              // 0x0010475c: lw $a0, 0x34($sp)
    s1 = local_18;                                              // 0x00104760: lw $s1, 0x18($sp)
    s6 = (v0 < 2) ? 1 : 0;                                      // 0x00104764: slti $s6, $v0, 2
    s2 = local_1c;                                              // 0x00104768: lw $s2, 0x1c($sp)
    local_48 = 0;                                               // 0x0010476c: sw $zero, 0x48($sp)
    if (a0 == 0) goto label_0x104814;                           // 0x00104770: beqz $a0, 0x104814
    local_4c = 0;                                               // 0x00104774: sw $zero, 0x4c($sp)
    /* beqzl $s6, 0x1047a0 */                                   // 0x00104778: beqzl $s6, 0x1047a0
    v1 = local_20;                                              // 0x0010477c: lw $v1, 0x20($sp)
    v0 = local_40;                                              // 0x00104780: lw $v0, 0x40($sp)
    if (v0 != 0) goto label_0x1047ec;                           // 0x00104784: bnez $v0, 0x1047ec
    s3 = v1 + 0x433;                                            // 0x00104788: addiu $s3, $v1, 0x433
    v1 = local_4;                                               // 0x0010478c: lw $v1, 4($sp)
    v0 = 0x36;                                                  // 0x00104790: addiu $v0, $zero, 0x36
    goto label_0x1047ec;                                        // 0x00104794: b 0x1047ec
    s3 = v0 - v1;                                               // 0x00104798: subu $s3, $v0, $v1
    /* nop */                                                   // 0x0010479c: nop 
    a0 = local_1c;                                              // 0x001047a0: lw $a0, 0x1c($sp)
    s0 = v1 + -1;                                               // 0x001047a4: addiu $s0, $v1, -1
    v0 = (a0 < s0) ? 1 : 0;                                     // 0x001047a8: slt $v0, $a0, $s0
    if (v0 == 0) goto label_0x1047d4;                           // 0x001047ac: beqz $v0, 0x1047d4
    s2 = a0 - s0;                                               // 0x001047b0: subu $s2, $a0, $s0
    v0 = local_1c;                                              // 0x001047b4: lw $v0, 0x1c($sp)
    v1 = local_3c;                                              // 0x001047bc: lw $v1, 0x3c($sp)
    s0 = s0 - v0;                                               // 0x001047c0: subu $s0, $s0, $v0
    v0 = v0 + s0;                                               // 0x001047c4: addu $v0, $v0, $s0
    v1 = v1 + s0;                                               // 0x001047c8: addu $v1, $v1, $s0
    local_1c = v0;                                              // 0x001047cc: sw $v0, 0x1c($sp)
    local_3c = v1;                                              // 0x001047d0: sw $v1, 0x3c($sp)
label_0x1047d4:
    s3 = local_20;                                              // 0x001047d4: lw $s3, 0x20($sp)
    if (s3 >= 0) goto label_0x1047f0;                           // 0x001047d8: bgez $s3, 0x1047f0
    v0 = local_38;                                              // 0x001047dc: lw $v0, 0x38($sp)
    a0 = local_18;                                              // 0x001047e0: lw $a0, 0x18($sp)
    s1 = a0 - s3;                                               // 0x001047e4: subu $s1, $a0, $s3
label_0x1047ec:
    v0 = local_38;                                              // 0x001047ec: lw $v0, 0x38($sp)
label_0x1047f0:
    a1 = 1;                                                     // 0x001047f4: addiu $a1, $zero, 1
    v0 = v0 + s3;                                               // 0x001047f8: addu $v0, $v0, $s3
    func_00108288();  // 0x108250                                // 0x001047fc: jal 0x108250
    local_38 = v0;                                              // 0x00104800: sw $v0, 0x38($sp)
    v1 = local_18;                                              // 0x00104804: lw $v1, 0x18($sp)
    local_4c = v0;                                              // 0x00104808: sw $v0, 0x4c($sp)
    v1 = v1 + s3;                                               // 0x0010480c: addu $v1, $v1, $s3
    local_18 = v1;                                              // 0x00104810: sw $v1, 0x18($sp)
label_0x104814:
    if (s1 <= 0) goto label_0x10484c;                           // 0x00104814: blez $s1, 0x10484c
    v1 = local_1c;                                              // 0x00104818: lw $v1, 0x1c($sp)
    a0 = local_38;                                              // 0x0010481c: lw $a0, 0x38($sp)
    if (a0 <= 0) goto label_0x10484c;                           // 0x00104820: blez $a0, 0x10484c
    v0 = (s1 < s3) ? 1 : 0;                                     // 0x00104828: slt $v0, $s1, $s3
    if (v0 != 0) s3 = s1;                                       // 0x0010482c: movn $s3, $s1, $v0
    v0 = local_18;                                              // 0x00104830: lw $v0, 0x18($sp)
    a0 = a0 - s3;                                               // 0x00104834: subu $a0, $a0, $s3
    s1 = s1 - s3;                                               // 0x00104838: subu $s1, $s1, $s3
    v0 = v0 - s3;                                               // 0x0010483c: subu $v0, $v0, $s3
    local_38 = a0;                                              // 0x00104840: sw $a0, 0x38($sp)
    local_18 = v0;                                              // 0x00104844: sw $v0, 0x18($sp)
    v1 = local_1c;                                              // 0x00104848: lw $v1, 0x1c($sp)
label_0x10484c:
    if (v1 <= 0) goto label_0x1048dc;                           // 0x0010484c: blez $v1, 0x1048dc
    a0 = local_34;                                              // 0x00104854: lw $a0, 0x34($sp)
    if (a0 == 0) goto label_0x1048c8;                           // 0x00104858: beqz $a0, 0x1048c8
    a1 = local_44;                                              // 0x0010485c: lw $a1, 0x44($sp)
    if (s2 <= 0) goto label_0x1048a4;                           // 0x00104860: blez $s2, 0x1048a4
    v0 = local_1c;                                              // 0x00104864: lw $v0, 0x1c($sp)
    a1 = local_4c;                                              // 0x00104868: lw $a1, 0x4c($sp)
    func_00108598();  // 0x108498                                // 0x00104870: jal 0x108498
    a2 = local_44;                                              // 0x0010487c: lw $a2, 0x44($sp)
    func_00108498();  // 0x108288                                // 0x00104884: jal 0x108288
    local_4c = v0;                                              // 0x00104888: sw $v0, 0x4c($sp)
    a1 = local_44;                                              // 0x00104890: lw $a1, 0x44($sp)
    func_00107ed8();  // 0x107ea8                                // 0x00104894: jal 0x107ea8
    local_44 = s0;                                              // 0x0010489c: sw $s0, 0x44($sp)
    v0 = local_1c;                                              // 0x001048a0: lw $v0, 0x1c($sp)
label_0x1048a4:
    s0 = v0 - s2;                                               // 0x001048a4: subu $s0, $v0, $s2
    /* beqzl $s0, 0x1048dc */                                   // 0x001048a8: beqzl $s0, 0x1048dc
    a1 = local_44;                                              // 0x001048b0: lw $a1, 0x44($sp)
    func_00108598();  // 0x108498                                // 0x001048b8: jal 0x108498
    goto label_0x1048d8;                                        // 0x001048c0: b 0x1048d8
    local_44 = v0;                                              // 0x001048c4: sw $v0, 0x44($sp)
label_0x1048c8:
    func_00108598();  // 0x108498                                // 0x001048cc: jal 0x108498
    a2 = local_1c;                                              // 0x001048d0: lw $a2, 0x1c($sp)
    local_44 = v0;                                              // 0x001048d4: sw $v0, 0x44($sp)
label_0x1048d8:
label_0x1048dc:
    func_00108288();  // 0x108250                                // 0x001048dc: jal 0x108250
    a1 = 1;                                                     // 0x001048e0: addiu $a1, $zero, 1
    v1 = local_3c;                                              // 0x001048e4: lw $v1, 0x3c($sp)
    if (v1 <= 0) goto label_0x104904;                           // 0x001048e8: blez $v1, 0x104904
    local_50 = v0;                                              // 0x001048ec: sw $v0, 0x50($sp)
    func_00108598();  // 0x108498                                // 0x001048f8: jal 0x108498
    local_50 = v0;                                              // 0x00104900: sw $v0, 0x50($sp)
label_0x104904:
    if (s6 == 0) goto label_0x10494c;                           // 0x00104904: beqz $s6, 0x10494c
    v0 = -1;                                                    // 0x0010490c: addiu $v0, $zero, -1
    v0 = s4 & v0;                                               // 0x00104914: and $v0, $s4, $v0
    if (v0 != 0) goto label_0x104950;                           // 0x00104918: bnez $v0, 0x104950
    v1 = local_3c;                                              // 0x0010491c: lw $v1, 0x3c($sp)
    v1 = 0x7ff0 << 16;                                          // 0x00104924: lui $v1, 0x7ff0
    v0 = v0 & v1;                                               // 0x00104928: and $v0, $v0, $v1
    if (v0 == 0) goto label_0x10494c;                           // 0x0010492c: beqz $v0, 0x10494c
    a0 = local_18;                                              // 0x00104930: lw $a0, 0x18($sp)
    s0 = 1;                                                     // 0x00104934: addiu $s0, $zero, 1
    v0 = local_38;                                              // 0x00104938: lw $v0, 0x38($sp)
    a0 = a0 + 1;                                                // 0x0010493c: addiu $a0, $a0, 1
    v0 = v0 + 1;                                                // 0x00104940: addiu $v0, $v0, 1
    local_18 = a0;                                              // 0x00104944: sw $a0, 0x18($sp)
    local_38 = v0;                                              // 0x00104948: sw $v0, 0x38($sp)
label_0x10494c:
    v1 = local_3c;                                              // 0x0010494c: lw $v1, 0x3c($sp)
label_0x104950:
    if (v1 == 0) goto label_0x104978;                           // 0x00104950: beqz $v1, 0x104978
    a0 = local_50;                                              // 0x00104954: lw $a0, 0x50($sp)
    v0 = g_00220011;  // Global at 0x00220011                   // 0x00104958: lw $v0, 0x10($a0)
    v0 = v0 << 2;                                               // 0x0010495c: sll $v0, $v0, 2
    v0 = v0 + a0;                                               // 0x00104960: addu $v0, $v0, $a0
    func_00108190();  // 0x108110                                // 0x00104964: jal 0x108110
    a0 = g_00220012;  // Global at 0x00220012                   // 0x00104968: lw $a0, 0x10($v0)
    v1 = local_38;                                              // 0x0010496c: lw $v1, 0x38($sp)
    goto label_0x104980;                                        // 0x00104970: b 0x104980
    v0 = v1 - v0;                                               // 0x00104974: subu $v0, $v1, $v0
label_0x104978:
    a0 = local_38;                                              // 0x00104978: lw $a0, 0x38($sp)
    v0 = a0 + 1;                                                // 0x0010497c: addiu $v0, $a0, 1
label_0x104980:
    s3 = v0 & 0x1f;                                             // 0x00104980: andi $s3, $v0, 0x1f
    if (s3 == 0) goto label_0x104990;                           // 0x00104984: beqz $s3, 0x104990
    v0 = 0x20;                                                  // 0x00104988: addiu $v0, $zero, 0x20
    s3 = v0 - s3;                                               // 0x0010498c: subu $s3, $v0, $s3
label_0x104990:
    v0 = (s3 < 5) ? 1 : 0;                                      // 0x00104990: slti $v0, $s3, 5
    if (v0 != 0) goto label_0x1049c0;                           // 0x00104994: bnez $v0, 0x1049c0
    v0 = (s3 < 4) ? 1 : 0;                                      // 0x00104998: slti $v0, $s3, 4
    v0 = local_38;                                              // 0x0010499c: lw $v0, 0x38($sp)
    s3 = s3 + -4;                                               // 0x001049a0: addiu $s3, $s3, -4
    v1 = local_18;                                              // 0x001049a4: lw $v1, 0x18($sp)
    s1 = s1 + s3;                                               // 0x001049a8: addu $s1, $s1, $s3
    v0 = v0 + s3;                                               // 0x001049ac: addu $v0, $v0, $s3
    v1 = v1 + s3;                                               // 0x001049b0: addu $v1, $v1, $s3
    local_38 = v0;                                              // 0x001049b4: sw $v0, 0x38($sp)
    goto label_0x1049e8;                                        // 0x001049b8: b 0x1049e8
    local_18 = v1;                                              // 0x001049bc: sw $v1, 0x18($sp)
label_0x1049c0:
    if (v0 == 0) goto label_0x1049ec;                           // 0x001049c0: beqz $v0, 0x1049ec
    v1 = local_18;                                              // 0x001049c4: lw $v1, 0x18($sp)
    a0 = local_38;                                              // 0x001049c8: lw $a0, 0x38($sp)
    s3 = s3 + 0x1c;                                             // 0x001049cc: addiu $s3, $s3, 0x1c
    v0 = local_18;                                              // 0x001049d0: lw $v0, 0x18($sp)
    s1 = s1 + s3;                                               // 0x001049d4: addu $s1, $s1, $s3
    a0 = a0 + s3;                                               // 0x001049d8: addu $a0, $a0, $s3
    v0 = v0 + s3;                                               // 0x001049dc: addu $v0, $v0, $s3
    local_38 = a0;                                              // 0x001049e0: sw $a0, 0x38($sp)
    local_18 = v0;                                              // 0x001049e4: sw $v0, 0x18($sp)
label_0x1049e8:
    v1 = local_18;                                              // 0x001049e8: lw $v1, 0x18($sp)
label_0x1049ec:
    if (v1 <= 0) goto label_0x104a0c;                           // 0x001049ec: blezl $v1, 0x104a0c
    a0 = local_38;                                              // 0x001049f0: lw $a0, 0x38($sp)
    a1 = local_44;                                              // 0x001049f4: lw $a1, 0x44($sp)
    func_001086f0();  // 0x108598                                // 0x001049fc: jal 0x108598
    local_44 = v0;                                              // 0x00104a04: sw $v0, 0x44($sp)
    a0 = local_38;                                              // 0x00104a08: lw $a0, 0x38($sp)
label_0x104a0c:
    if (a0 <= 0) goto label_0x104a2c;                           // 0x00104a0c: blez $a0, 0x104a2c
    v0 = local_30;                                              // 0x00104a10: lw $v0, 0x30($sp)
    a1 = local_50;                                              // 0x00104a14: lw $a1, 0x50($sp)
    func_001086f0();  // 0x108598                                // 0x00104a1c: jal 0x108598
    local_50 = v0;                                              // 0x00104a24: sw $v0, 0x50($sp)
    v0 = local_30;                                              // 0x00104a28: lw $v0, 0x30($sp)
label_0x104a2c:
    if (v0 == 0) goto label_0x104a88;                           // 0x00104a2c: beqz $v0, 0x104a88
    a0 = local_44;                                              // 0x00104a30: lw $a0, 0x44($sp)
    func_00108758();  // 0x1086f0                                // 0x00104a34: jal 0x1086f0
    a1 = local_50;                                              // 0x00104a38: lw $a1, 0x50($sp)
    if (v0 >= 0) goto label_0x104a8c;                           // 0x00104a3c: bgezl $v0, 0x104a8c
    v0 = local_20;                                              // 0x00104a40: lw $v0, 0x20($sp)
    a1 = local_44;                                              // 0x00104a44: lw $a1, 0x44($sp)
    a2 = 0xa;                                                   // 0x00104a4c: addiu $a2, $zero, 0xa
    func_00107fe0();  // 0x107ed8                                // 0x00104a50: jal 0x107ed8
    fp = fp + -1;                                               // 0x00104a58: addiu $fp, $fp, -1
    v1 = local_34;                                              // 0x00104a5c: lw $v1, 0x34($sp)
    if (v1 == 0) goto label_0x104a80;                           // 0x00104a60: beqz $v1, 0x104a80
    local_44 = v0;                                              // 0x00104a64: sw $v0, 0x44($sp)
    a1 = local_4c;                                              // 0x00104a68: lw $a1, 0x4c($sp)
    a2 = 0xa;                                                   // 0x00104a70: addiu $a2, $zero, 0xa
    func_00107fe0();  // 0x107ed8                                // 0x00104a74: jal 0x107ed8
    local_4c = v0;                                              // 0x00104a7c: sw $v0, 0x4c($sp)
label_0x104a80:
    a0 = local_28;                                              // 0x00104a80: lw $a0, 0x28($sp)
    local_20 = a0;                                              // 0x00104a84: sw $a0, 0x20($sp)
label_0x104a88:
    v0 = local_20;                                              // 0x00104a88: lw $v0, 0x20($sp)
label_0x104a8c:
    if (v0 > 0) goto label_0x104b00;                            // 0x00104a8c: bgtz $v0, 0x104b00
    a0 = local_34;                                              // 0x00104a90: lw $a0, 0x34($sp)
    v1 = local_8;                                               // 0x00104a94: lw $v1, 8($sp)
    v0 = (v1 < 3) ? 1 : 0;                                      // 0x00104a98: slti $v0, $v1, 3
    if (v0 != 0) goto label_0x104b00;                           // 0x00104a9c: bnez $v0, 0x104b00
    /* nop */                                                   // 0x00104aa0: nop 
    a0 = local_20;                                              // 0x00104aa4: lw $a0, 0x20($sp)
    if (a0 < 0) goto label_0x104ad8;                            // 0x00104aa8: bltz $a0, 0x104ad8
    a1 = local_50;                                              // 0x00104aac: lw $a1, 0x50($sp)
    a2 = 5;                                                     // 0x00104ab4: addiu $a2, $zero, 5
    func_00107fe0();  // 0x107ed8                                // 0x00104ab8: jal 0x107ed8
    a0 = local_44;                                              // 0x00104ac0: lw $a0, 0x44($sp)
    func_00108758();  // 0x1086f0                                // 0x00104ac8: jal 0x1086f0
    local_50 = v0;                                              // 0x00104acc: sw $v0, 0x50($sp)
    if (v0 > 0) goto label_0x104ae8;                            // 0x00104ad0: bgtzl $v0, 0x104ae8
    v1 = local_54;                                              // 0x00104ad4: lw $v1, 0x54($sp)
label_0x104ad8:
    v0 = local_c;                                               // 0x00104ad8: lw $v0, 0xc($sp)
label_0x104adc:
    goto label_0x104e4c;                                        // 0x00104adc: b 0x104e4c
    fp = ~(0 | v0);                                             // 0x00104ae0: nor $fp, $zero, $v0
    /* nop */                                                   // 0x00104ae4: nop 
label_0x104ae8:
    v0 = 0x31;                                                  // 0x00104ae8: addiu $v0, $zero, 0x31
    fp = fp + 1;                                                // 0x00104aec: addiu $fp, $fp, 1
    s5 = v1 + 1;                                                // 0x00104af0: addiu $s5, $v1, 1
    goto label_0x104e4c;                                        // 0x00104af4: b 0x104e4c
    g_7ff00000 = v0;  // Global at 0x7ff00000                   // 0x00104af8: sb $v0, 0($v1)
    /* nop */                                                   // 0x00104afc: nop 
label_0x104b00:
    if (a0 == 0) goto label_0x104d6c;                           // 0x00104b00: beqz $a0, 0x104d6c
    s3 = 1;                                                     // 0x00104b04: addiu $s3, $zero, 1
    if (s1 <= 0) goto label_0x104b28;                           // 0x00104b08: blez $s1, 0x104b28
    v0 = local_4c;                                              // 0x00104b0c: lw $v0, 0x4c($sp)
    a1 = local_4c;                                              // 0x00104b10: lw $a1, 0x4c($sp)
    func_001086f0();  // 0x108598                                // 0x00104b18: jal 0x108598
    local_4c = v0;                                              // 0x00104b20: sw $v0, 0x4c($sp)
    v0 = local_4c;                                              // 0x00104b24: lw $v0, 0x4c($sp)
label_0x104b28:
    if (s0 == 0) goto label_0x104b70;                           // 0x00104b28: beqz $s0, 0x104b70
    local_48 = v0;                                              // 0x00104b2c: sw $v0, 0x48($sp)
    a1 = g_00220006;  // Global at 0x00220006                   // 0x00104b30: lw $a1, 4($v0)
    func_00107ea8();  // 0x107e00                                // 0x00104b34: jal 0x107e00
    v1 = local_48;                                              // 0x00104b3c: lw $v1, 0x48($sp)
    a0 = v0 + 0xc;                                              // 0x00104b40: addiu $a0, $v0, 0xc
    local_4c = v0;                                              // 0x00104b44: sw $v0, 0x4c($sp)
    a1 = v1 + 0xc;                                              // 0x00104b48: addiu $a1, $v1, 0xc
    a2 = g_7ff00010;  // Global at 0x7ff00010                   // 0x00104b4c: lw $a2, 0x10($v1)
    a2 = a2 << 2;                                               // 0x00104b50: sll $a2, $a2, 2
    func_00107b68();  // 0x107ab8                                // 0x00104b54: jal 0x107ab8
    a2 = a2 + 8;                                                // 0x00104b58: addiu $a2, $a2, 8
    a1 = local_4c;                                              // 0x00104b60: lw $a1, 0x4c($sp)
    func_001086f0();  // 0x108598                                // 0x00104b64: jal 0x108598
    a2 = 1;                                                     // 0x00104b68: addiu $a2, $zero, 1
    local_4c = v0;                                              // 0x00104b6c: sw $v0, 0x4c($sp)
label_0x104b70:
    s3 = 1;                                                     // 0x00104b78: addiu $s3, $zero, 1
    goto label_0x104c00;                                        // 0x00104b7c: b 0x104c00
    s6 = v0 & 1;                                                // 0x00104b80: andi $s6, $v0, 1
    /* nop */                                                   // 0x00104b84: nop 
label_0x104b88:
    a1 = local_44;                                              // 0x00104b88: lw $a1, 0x44($sp)
    a2 = 0xa;                                                   // 0x00104b90: addiu $a2, $zero, 0xa
    func_00107fe0();  // 0x107ed8                                // 0x00104b94: jal 0x107ed8
    local_44 = v0;                                              // 0x00104b9c: sw $v0, 0x44($sp)
    a0 = local_48;                                              // 0x00104ba0: lw $a0, 0x48($sp)
    v0 = local_4c;                                              // 0x00104ba4: lw $v0, 0x4c($sp)
    if (a0 != v0) goto label_0x104bd0;                          // 0x00104ba8: bne $a0, $v0, 0x104bd0
    a1 = local_48;                                              // 0x00104bac: lw $a1, 0x48($sp)
    a2 = 0xa;                                                   // 0x00104bb8: addiu $a2, $zero, 0xa
    func_00107fe0();  // 0x107ed8                                // 0x00104bbc: jal 0x107ed8
    local_4c = v0;                                              // 0x00104bc4: sw $v0, 0x4c($sp)
    goto label_0x104bfc;                                        // 0x00104bc8: b 0x104bfc
    local_48 = v0;                                              // 0x00104bcc: sw $v0, 0x48($sp)
label_0x104bd0:
    a2 = 0xa;                                                   // 0x00104bd0: addiu $a2, $zero, 0xa
    func_00107fe0();  // 0x107ed8                                // 0x00104bd8: jal 0x107ed8
    a1 = local_4c;                                              // 0x00104be4: lw $a1, 0x4c($sp)
    a2 = 0xa;                                                   // 0x00104be8: addiu $a2, $zero, 0xa
    func_00107fe0();  // 0x107ed8                                // 0x00104bf0: jal 0x107ed8
    local_48 = v0;                                              // 0x00104bf4: sw $v0, 0x48($sp)
    local_4c = v0;                                              // 0x00104bf8: sw $v0, 0x4c($sp)
label_0x104bfc:
    s3 = s3 + 1;                                                // 0x00104bfc: addiu $s3, $s3, 1
label_0x104c00:
    a0 = local_44;                                              // 0x00104c00: lw $a0, 0x44($sp)
    func_00103c80();  // 0x103a50                                // 0x00104c04: jal 0x103a50
    a1 = local_50;                                              // 0x00104c08: lw $a1, 0x50($sp)
    a0 = local_44;                                              // 0x00104c0c: lw $a0, 0x44($sp)
    s4 = v0 + 0x30;                                             // 0x00104c10: addiu $s4, $v0, 0x30
    func_00108758();  // 0x1086f0                                // 0x00104c14: jal 0x1086f0
    a1 = local_48;                                              // 0x00104c18: lw $a1, 0x48($sp)
    a1 = local_50;                                              // 0x00104c20: lw $a1, 0x50($sp)
    func_001088e8();  // 0x108758                                // 0x00104c28: jal 0x108758
    a2 = local_4c;                                              // 0x00104c2c: lw $a2, 0x4c($sp)
    v0 = g_00220284;  // Global at 0x00220284                   // 0x00104c34: lw $v0, 0xc($s2)
    if (v0 != 0) goto label_0x104c50;                           // 0x00104c38: bnez $v0, 0x104c50
    s1 = 1;                                                     // 0x00104c3c: addiu $s1, $zero, 1
    a0 = local_44;                                              // 0x00104c40: lw $a0, 0x44($sp)
    func_00108758();  // 0x1086f0                                // 0x00104c44: jal 0x1086f0
label_0x104c50:
    func_00107ed8();  // 0x107ea8                                // 0x00104c54: jal 0x107ea8
    if (s1 != 0) goto label_0x104c88;                           // 0x00104c5c: bnez $s1, 0x104c88
    v1 = local_8;                                               // 0x00104c60: lw $v1, 8($sp)
    if (v1 != 0) goto label_0x104c88;                           // 0x00104c64: bnez $v1, 0x104c88
    /* nop */                                                   // 0x00104c68: nop 
    if (s6 != 0) goto label_0x104c88;                           // 0x00104c6c: bnez $s6, 0x104c88
    a0 = 0x39;                                                  // 0x00104c70: addiu $a0, $zero, 0x39
    if (s4 == a0) goto label_0x104d1c;                          // 0x00104c74: beq $s4, $a0, 0x104d1c
    v0 = (s1 < s0) ? 1 : 0;                                     // 0x00104c78: slt $v0, $s1, $s0
    s4 = s4 + v0;                                               // 0x00104c7c: addu $s4, $s4, $v0
    goto label_0x104e48;                                        // 0x00104c80: b 0x104e48
    g_7ff00001 = s4;  // Global at 0x7ff00001                   // 0x00104c84: sb $s4, 0($s5)
label_0x104c88:
    if (s0 < 0) goto label_0x104ca8;                            // 0x00104c88: bltz $s0, 0x104ca8
    /* nop */                                                   // 0x00104c8c: nop 
    if (s0 != 0) goto label_0x104d08;                           // 0x00104c90: bnez $s0, 0x104d08
    v0 = local_8;                                               // 0x00104c94: lw $v0, 8($sp)
    if (v0 != 0) goto label_0x104d08;                           // 0x00104c98: bnez $v0, 0x104d08
    /* nop */                                                   // 0x00104c9c: nop 
    if (s6 != 0) goto label_0x104d08;                           // 0x00104ca0: bnez $s6, 0x104d08
    /* nop */                                                   // 0x00104ca4: nop 
label_0x104ca8:
    if (s1 <= 0) goto label_0x104e48;                           // 0x00104ca8: blezl $s1, 0x104e48
    g_7ff00001 = s4;  // Global at 0x7ff00001                   // 0x00104cac: sb $s4, 0($s5)
    a1 = local_44;                                              // 0x00104cb0: lw $a1, 0x44($sp)
    a2 = 1;                                                     // 0x00104cb4: addiu $a2, $zero, 1
    func_001086f0();  // 0x108598                                // 0x00104cb8: jal 0x108598
    a1 = local_50;                                              // 0x00104cc0: lw $a1, 0x50($sp)
    func_00108758();  // 0x1086f0                                // 0x00104cc8: jal 0x1086f0
    local_44 = v0;                                              // 0x00104ccc: sw $v0, 0x44($sp)
    if (s1 > 0) goto label_0x104cf4;                            // 0x00104cd4: bgtzl $s1, 0x104cf4
    s4 = s4 + 1;                                                // 0x00104cd8: addiu $s4, $s4, 1
    /* bnezl $s1, 0x104e48 */                                   // 0x00104cdc: bnezl $s1, 0x104e48
    g_7ff00001 = s4;  // Global at 0x7ff00001                   // 0x00104ce0: sb $s4, 0($s5)
    v0 = s4 & 1;                                                // 0x00104ce4: andi $v0, $s4, 1
    /* beqzl $v0, 0x104e48 */                                   // 0x00104ce8: beqzl $v0, 0x104e48
    g_7ff00001 = s4;  // Global at 0x7ff00001                   // 0x00104cec: sb $s4, 0($s5)
    s4 = s4 + 1;                                                // 0x00104cf0: addiu $s4, $s4, 1
label_0x104cf4:
    v0 = 0x3a;                                                  // 0x00104cf4: addiu $v0, $zero, 0x3a
    if (s4 == v0) goto label_0x104d20;                          // 0x00104cf8: beql $s4, $v0, 0x104d20
    a0 = 0x39;                                                  // 0x00104cfc: addiu $a0, $zero, 0x39
    goto label_0x104e48;                                        // 0x00104d00: b 0x104e48
    g_7ff00001 = s4;  // Global at 0x7ff00001                   // 0x00104d04: sb $s4, 0($s5)
label_0x104d08:
    if (s1 <= 0) goto label_0x104d38;                           // 0x00104d08: blezl $s1, 0x104d38
    g_7ff00001 = s4;  // Global at 0x7ff00001                   // 0x00104d0c: sb $s4, 0($s5)
    v1 = 0x39;                                                  // 0x00104d10: addiu $v1, $zero, 0x39
    if (s4 != v1) goto label_0x104d30;                          // 0x00104d14: bne $s4, $v1, 0x104d30
    v0 = s4 + 1;                                                // 0x00104d18: addiu $v0, $s4, 1
label_0x104d1c:
    a0 = 0x39;                                                  // 0x00104d1c: addiu $a0, $zero, 0x39
label_0x104d20:
    g_7ff00001 = a0;  // Global at 0x7ff00001                   // 0x00104d20: sb $a0, 0($s5)
    goto label_0x104dd0;                                        // 0x00104d24: b 0x104dd0
    s5 = s5 + 1;                                                // 0x00104d28: addiu $s5, $s5, 1
    /* nop */                                                   // 0x00104d2c: nop 
label_0x104d30:
    goto label_0x104e48;                                        // 0x00104d30: b 0x104e48
    g_7ff00002 = v0;  // Global at 0x7ff00002                   // 0x00104d34: sb $v0, 0($s5)
label_0x104d38:
    v0 = local_20;                                              // 0x00104d38: lw $v0, 0x20($sp)
    if (s3 != v0) goto label_0x104b88;                          // 0x00104d3c: bne $s3, $v0, 0x104b88
    s5 = s5 + 1;                                                // 0x00104d40: addiu $s5, $s5, 1
    goto label_0x104d94;                                        // 0x00104d44: b 0x104d94
    a1 = local_44;                                              // 0x00104d48: lw $a1, 0x44($sp)
    /* nop */                                                   // 0x00104d4c: nop 
label_0x104d50:
    a1 = local_44;                                              // 0x00104d50: lw $a1, 0x44($sp)
    a2 = 0xa;                                                   // 0x00104d58: addiu $a2, $zero, 0xa
    func_00107fe0();  // 0x107ed8                                // 0x00104d5c: jal 0x107ed8
    s3 = s3 + 1;                                                // 0x00104d64: addiu $s3, $s3, 1
    local_44 = v0;                                              // 0x00104d68: sw $v0, 0x44($sp)
label_0x104d6c:
    a0 = local_44;                                              // 0x00104d6c: lw $a0, 0x44($sp)
    func_00103c80();  // 0x103a50                                // 0x00104d70: jal 0x103a50
    a1 = local_50;                                              // 0x00104d74: lw $a1, 0x50($sp)
    a0 = local_20;                                              // 0x00104d78: lw $a0, 0x20($sp)
    s4 = v0 + 0x30;                                             // 0x00104d7c: addiu $s4, $v0, 0x30
    g_7ff00003 = s4;  // Global at 0x7ff00003                   // 0x00104d80: sb $s4, 0($s5)
    v1 = (s3 < a0) ? 1 : 0;                                     // 0x00104d84: slt $v1, $s3, $a0
    if (v1 != 0) goto label_0x104d50;                           // 0x00104d88: bnez $v1, 0x104d50
    s5 = s5 + 1;                                                // 0x00104d8c: addiu $s5, $s5, 1
    a1 = local_44;                                              // 0x00104d90: lw $a1, 0x44($sp)
label_0x104d94:
    a2 = 1;                                                     // 0x00104d94: addiu $a2, $zero, 1
    func_001086f0();  // 0x108598                                // 0x00104d98: jal 0x108598
    a1 = local_50;                                              // 0x00104da0: lw $a1, 0x50($sp)
    func_00108758();  // 0x1086f0                                // 0x00104da8: jal 0x1086f0
    local_44 = v0;                                              // 0x00104dac: sw $v0, 0x44($sp)
    if (s0 > 0) goto label_0x104dd4;                            // 0x00104db4: bgtzl $s0, 0x104dd4
    s5 = s5 + -1;                                               // 0x00104db8: addiu $s5, $s5, -1
    if (s0 != 0) goto label_0x104e28;                           // 0x00104dbc: bnez $s0, 0x104e28
    v1 = 0x30;                                                  // 0x00104dc0: addiu $v1, $zero, 0x30
    v0 = s4 & 1;                                                // 0x00104dc4: andi $v0, $s4, 1
    /* beqzl $v0, 0x104e2c */                                   // 0x00104dc8: beqzl $v0, 0x104e2c
    s5 = s5 + -1;                                               // 0x00104dcc: addiu $s5, $s5, -1
label_0x104dd0:
    s5 = s5 + -1;                                               // 0x00104dd0: addiu $s5, $s5, -1
label_0x104dd4:
    goto label_0x104df0;                                        // 0x00104dd4: b 0x104df0
    v1 = 0x39;                                                  // 0x00104dd8: addiu $v1, $zero, 0x39
    /* nop */                                                   // 0x00104ddc: nop 
label_0x104de0:
    v0 = local_54;                                              // 0x00104de0: lw $v0, 0x54($sp)
    if (s5 == v0) goto label_0x104e10;                          // 0x00104de4: beql $s5, $v0, 0x104e10
    v1 = local_54;                                              // 0x00104de8: lw $v1, 0x54($sp)
    s5 = s5 + -1;                                               // 0x00104dec: addiu $s5, $s5, -1
label_0x104df0:
    v0 = g_7ff00000;  // Global at 0x7ff00000                   // 0x00104df0: lb $v0, 0($s5)
    /* nop */                                                   // 0x00104df4: nop 
    /* nop */                                                   // 0x00104df8: nop 
    if (v0 == v1) goto label_0x104de0;                          // 0x00104dfc: beq $v0, $v1, 0x104de0
    a0 = g_7ff00000;  // Global at 0x7ff00000                   // 0x00104e00: lbu $a0, 0($s5)
    v0 = a0 + 1;                                                // 0x00104e04: addiu $v0, $a0, 1
    goto label_0x104e48;                                        // 0x00104e08: b 0x104e48
    g_7ff00000 = v0;  // Global at 0x7ff00000                   // 0x00104e0c: sb $v0, 0($s5)
label_0x104e10:
    v0 = 0x31;                                                  // 0x00104e10: addiu $v0, $zero, 0x31
    fp = fp + 1;                                                // 0x00104e14: addiu $fp, $fp, 1
    g_7ff00000 = v0;  // Global at 0x7ff00000                   // 0x00104e18: sb $v0, 0($v1)
    goto label_0x104e4c;                                        // 0x00104e1c: b 0x104e4c
    s5 = v1 + 1;                                                // 0x00104e20: addiu $s5, $v1, 1
    /* nop */                                                   // 0x00104e24: nop 
label_0x104e28:
    s5 = s5 + -1;                                               // 0x00104e28: addiu $s5, $s5, -1
label_0x104e2c:
    v0 = g_7ff00000;  // Global at 0x7ff00000                   // 0x00104e2c: lb $v0, 0($s5)
    /* nop */                                                   // 0x00104e30: nop 
    /* nop */                                                   // 0x00104e34: nop 
    /* nop */                                                   // 0x00104e38: nop 
    /* nop */                                                   // 0x00104e3c: nop 
    if (v0 == v1) goto label_0x104e2c;                          // 0x00104e40: beql $v0, $v1, 0x104e2c
    s5 = s5 + -1;                                               // 0x00104e44: addiu $s5, $s5, -1
label_0x104e48:
    s5 = s5 + 1;                                                // 0x00104e48: addiu $s5, $s5, 1
label_0x104e4c:
    a1 = local_50;                                              // 0x00104e4c: lw $a1, 0x50($sp)
    func_00107ed8();  // 0x107ea8                                // 0x00104e50: jal 0x107ea8
    a0 = local_4c;                                              // 0x00104e58: lw $a0, 0x4c($sp)
    if (a0 == 0) goto label_0x104e88;                           // 0x00104e5c: beqz $a0, 0x104e88
    v0 = local_48;                                              // 0x00104e60: lw $v0, 0x48($sp)
    if (v0 == 0) goto label_0x104e80;                           // 0x00104e64: beqz $v0, 0x104e80
    a1 = local_4c;                                              // 0x00104e68: lw $a1, 0x4c($sp)
    if (v0 == a0) goto label_0x104e7c;                          // 0x00104e6c: beq $v0, $a0, 0x104e7c
    func_00107ed8();  // 0x107ea8                                // 0x00104e74: jal 0x107ea8
label_0x104e7c:
    a1 = local_4c;                                              // 0x00104e7c: lw $a1, 0x4c($sp)
label_0x104e80:
    func_00107ed8();  // 0x107ea8                                // 0x00104e80: jal 0x107ea8
label_0x104e88:
    a1 = local_44;                                              // 0x00104e88: lw $a1, 0x44($sp)
label_0x104e8c:
    func_00107ed8();  // 0x107ea8                                // 0x00104e8c: jal 0x107ea8
    g_7ff00000 = 0;  // Global at 0x7ff00000                    // 0x00104e94: sb $zero, 0($s5)
    v0 = fp + 1;                                                // 0x00104e98: addiu $v0, $fp, 1
    v1 = local_10;                                              // 0x00104e9c: lw $v1, 0x10($sp)
    g_7ff00000 = v0;  // Global at 0x7ff00000                   // 0x00104ea0: sw $v0, 0($v1)
    a0 = local_14;                                              // 0x00104ea4: lw $a0, 0x14($sp)
    /* bnezl $a0, 0x104eb0 */                                   // 0x00104ea8: bnezl $a0, 0x104eb0
    g_0022000e = s5;  // Global at 0x0022000e                   // 0x00104eac: sw $s5, 0($a0)
    v0 = local_54;                                              // 0x00104eb0: lw $v0, 0x54($sp)
label_0x104eb4:
    return;                                                     // 0x00104edc: jr $ra
    sp = sp + 0xb0;                                             // 0x00104ee0: addiu $sp, $sp, 0xb0
}