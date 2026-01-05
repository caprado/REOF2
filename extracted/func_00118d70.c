void func_00118d70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xe0;                                            // 0x00118d70: addiu $sp, $sp, -0xe0
    s4 = 0x25 << 16;                                            // 0x00118d8c: lui $s4, 0x25
    s1 = s4 + -0x1e40;                                          // 0x00118d94: addiu $s1, $s4, -0x1e40
    func_00117eb8();  // 117eb8                                // 0x00118da8: jal 0x117eb8
    func_00118330();  // 118330                                // 0x00118db4: jal 0x118330
    a0 = 2;                                                     // 0x00118db8: addiu $a0, $zero, 2
    v1 = 0x1f << 16;                                            // 0x00118dbc: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x00118dc0: lw $v0, 0x3dc($v1)
    if (v0 != 0) goto label_0x118ddc;                           // 0x00118dc4: bnez $v0, 0x118ddc
    /* nop */                                                   // 0x00118dc8: nop 
    func_00118360();  // 118360                                // 0x00118dcc: jal 0x118360
    /* nop */                                                   // 0x00118dd0: nop 
    goto label_0x118fa0;                                        // 0x00118dd4: b 0x118fa0
    v0 = -1;                                                    // 0x00118dd8: addiu $v0, $zero, -1
label_0x118ddc:
    if (s0 == 0) goto label_0x118df0;                           // 0x00118ddc: beqz $s0, 0x118df0
    /* nop */                                                   // 0x00118de0: nop 
    s3 = g_0024ee04;  // Global at 0x0024ee04                   // 0x00118de4: lw $s3, 4($s0)
    /* bnezl $s3, 0x118e00 */                                   // 0x00118de8: bnezl $s3, 0x118e00
    v1 = g_0024ee00;  // Global at 0x0024ee00                   // 0x00118dec: lw $v1, 0($s0)
label_0x118df0:
    func_00118360();  // 118360                                // 0x00118df0: jal 0x118360
    /* nop */                                                   // 0x00118df4: nop 
    goto label_0x118fa0;                                        // 0x00118df8: b 0x118fa0
    v0 = -9;                                                    // 0x00118dfc: addiu $v0, $zero, -9
    v0 = 0x25 << 16;                                            // 0x00118e00: lui $v0, 0x25
    v0 = v0 + -0x940;                                           // 0x00118e04: addiu $v0, $v0, -0x940
    a0 = 1;                                                     // 0x00118e08: addiu $a0, $zero, 1
    g_0024e1cc = v1;  // Global at 0x0024e1cc                   // 0x00118e0c: sw $v1, 0xc($s1)
    v0 = s0 - v0;                                               // 0x00118e10: subu $v0, $s0, $v0
    local_14 = a0;                                              // 0x00118e14: sw $a0, 0x14($sp)
    v0 = v0 >> 4;                                               // 0x00118e18: sra $v0, $v0, 4
    g_0024e1dc = v0;  // Global at 0x0024e1dc                   // 0x00118e1c: sw $v0, 0x1c($s1)
    a0 = sp + 0x10;                                             // 0x00118e20: addiu $a0, $sp, 0x10
    g_0024e1d0 = s6;  // Global at 0x0024e1d0                   // 0x00118e24: sw $s6, 0x10($s1)
    g_0024e1d4 = s7;  // Global at 0x0024e1d4                   // 0x00118e28: sw $s7, 0x14($s1)
    local_18 = 0;                                               // 0x00118e2c: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00118e30: jal 0x1142e0
    local_24 = 0;                                               // 0x00118e34: sw $zero, 0x24($sp)
    v1 = 4;                                                     // 0x00118e3c: addiu $v1, $zero, 4
    v0 = sp + 0x30;                                             // 0x00118e40: addiu $v0, $sp, 0x30
    g_0024e1c8 = v1;  // Global at 0x0024e1c8                   // 0x00118e44: sw $v1, 8($s1)
    g_0024e1c4 = v0;  // Global at 0x0024e1c4                   // 0x00118e48: sw $v0, 4($s1)
    v0 = s3 & 0x8000;                                           // 0x00118e4c: andi $v0, $s3, 0x8000
    if (v0 == 0) goto label_0x118ed8;                           // 0x00118e50: beqz $v0, 0x118ed8
    g_0024e1c0 = s2;  // Global at 0x0024e1c0                   // 0x00118e54: sw $s2, -0x1e40($s4)
    s0 = 0x1f << 16;                                            // 0x00118e58: lui $s0, 0x1f
    PollSema();  // 0x114320                                    // 0x00118e5c: jal 0x114320
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x00118e60: lw $a0, 0x3ec($s0)
    a3 = 0x1f << 16;                                            // 0x00118e64: lui $a3, 0x1f
    v1 = g_001f0358;  // Global at 0x001f0358                   // 0x00118e6c: lw $v1, 0x358($a3)
    v0 = -1;                                                    // 0x00118e70: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x118e90;                          // 0x00118e74: bne $v1, $v0, 0x118e90
    fp = 0x25 << 16;                                            // 0x00118e78: lui $fp, 0x25
    v1 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x00118e7c: lw $v1, -0x1e40($s4)
    v0 = -v1;                                                   // 0x00118e80: negu $v0, $v1
    g_001f0358 = v1;  // Global at 0x001f0358                   // 0x00118e84: sw $v1, 0x358($a3)
    goto label_0x118ec8;                                        // 0x00118e88: b 0x118ec8
    g_0024e1c0 = v0;  // Global at 0x0024e1c0                   // 0x00118e8c: sw $v0, -0x1e40($s4)
label_0x118e90:
    a2 = a2 + 1;                                                // 0x00118e90: addiu $a2, $a2, 1
label_0x118e94:
    v0 = (a2 < 0x20) ? 1 : 0;                                   // 0x00118e94: slti $v0, $a2, 0x20
    if (v0 == 0) goto label_0x118ec8;                           // 0x00118e98: beqz $v0, 0x118ec8
    v0 = a2 << 2;                                               // 0x00118e9c: sll $v0, $a2, 2
    v1 = a3 + 0x358;                                            // 0x00118ea0: addiu $v1, $a3, 0x358
    a1 = v0 + v1;                                               // 0x00118ea4: addu $a1, $v0, $v1
    a0 = -1;                                                    // 0x00118ea8: addiu $a0, $zero, -1
    v0 = *(int32_t*)(a1);                                       // 0x00118eac: lw $v0, 0($a1)
    if (v0 != a0) goto label_0x118e94;                          // 0x00118eb0: bne $v0, $a0, 0x118e94
    a2 = a2 + 1;                                                // 0x00118eb4: addiu $a2, $a2, 1
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x00118eb8: lw $v0, 0($s1)
    v1 = -v0;                                                   // 0x00118ebc: negu $v1, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x00118ec0: sw $v0, 0($a1)
    g_0024e1c0 = v1;  // Global at 0x0024e1c0                   // 0x00118ec4: sw $v1, 0($s1)
label_0x118ec8:
    iSignalSema();  // 0x114300                                 // 0x00118ec8: jal 0x114300
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x00118ecc: lw $a0, 0x3ec($s0)
    goto label_0x118ee0;                                        // 0x00118ed0: b 0x118ee0
    s5 = 0x2000 << 16;                                          // 0x00118ed4: lui $s5, 0x2000
label_0x118ed8:
    fp = 0x25 << 16;                                            // 0x00118ed8: lui $fp, 0x25
    s5 = 0x2000 << 16;                                          // 0x00118edc: lui $s5, 0x2000
label_0x118ee0:
    v0 = s3 & s5;                                               // 0x00118ee0: and $v0, $s3, $s5
    if (v0 != 0) goto label_0x118efc;                           // 0x00118ee4: bnez $v0, 0x118efc
    func_00116c90();  // 116c90                                // 0x00118ef0: jal 0x116c90
label_0x118efc:
    func_00116c90();  // 116c90                                // 0x00118efc: jal 0x116c90
    a1 = 0x20;                                                  // 0x00118f00: addiu $a1, $zero, 0x20
    s0 = fp + -0x1200;                                          // 0x00118f04: addiu $s0, $fp, -0x1200
    v0 = 0x25 << 16;                                            // 0x00118f08: lui $v0, 0x25
    a3 = s4 + -0x1e40;                                          // 0x00118f0c: addiu $a3, $s4, -0x1e40
    a0 = v0 + -0x740;                                           // 0x00118f10: addiu $a0, $v0, -0x740
    local_0 = 0;                                                // 0x00118f14: sw $zero, 0($sp)
    a1 = 2;                                                     // 0x00118f18: addiu $a1, $zero, 2
    t0 = 0x20;                                                  // 0x00118f20: addiu $t0, $zero, 0x20
    t2 = 4;                                                     // 0x00118f28: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x00118f2c: jal 0x1176a8
    if (v0 >= 0) goto label_0x118f54;                           // 0x00118f34: bgez $v0, 0x118f54
    v0 = s5 | s0;                                               // 0x00118f38: or $v0, $s5, $s0
    SignalSema();  // 0x1142f0                                  // 0x00118f3c: jal 0x1142f0
    func_00118360();  // 118360                                // 0x00118f44: jal 0x118360
    /* nop */                                                   // 0x00118f48: nop 
    goto label_0x118fa0;                                        // 0x00118f4c: b 0x118fa0
    v0 = -0xb;                                                  // 0x00118f50: addiu $v0, $zero, -0xb
label_0x118f54:
    func_00118360();  // 118360                                // 0x00118f54: jal 0x118360
    s0 = g_00250000;  // Global at 0x00250000                   // 0x00118f58: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x118f74;                           // 0x00118f5c: bnez $s0, 0x118f74
    v0 = s3 & 0x8000;                                           // 0x00118f60: andi $v0, $s3, 0x8000
    SignalSema();  // 0x1142f0                                  // 0x00118f64: jal 0x1142f0
    goto label_0x118fa0;                                        // 0x00118f6c: b 0x118fa0
    v0 = -0xb;                                                  // 0x00118f70: addiu $v0, $zero, -0xb
label_0x118f74:
    if (v0 == 0) goto label_0x118f8c;                           // 0x00118f74: beqz $v0, 0x118f8c
    /* nop */                                                   // 0x00118f78: nop 
    SignalSema();  // 0x1142f0                                  // 0x00118f7c: jal 0x1142f0
    goto label_0x118fa0;                                        // 0x00118f84: b 0x118fa0
label_0x118f8c:
    PollSema();  // 0x114320                                    // 0x00118f8c: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00118f94: jal 0x1142f0
    v0 = local_30;                                              // 0x00118f9c: lw $v0, 0x30($sp)
label_0x118fa0:
    return;                                                     // 0x00118fc8: jr $ra
    sp = sp + 0xe0;                                             // 0x00118fcc: addiu $sp, $sp, 0xe0
}