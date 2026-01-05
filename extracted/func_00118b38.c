void func_00118b38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xc0;                                            // 0x00118b38: addiu $sp, $sp, -0xc0
    s5 = 0x25 << 16;                                            // 0x00118b54: lui $s5, 0x25
    s1 = s5 + -0x1e40;                                          // 0x00118b5c: addiu $s1, $s5, -0x1e40
    func_00117eb8();  // 117eb8                                // 0x00118b68: jal 0x117eb8
    func_00118330();  // 118330                                // 0x00118b74: jal 0x118330
    a0 = 4;                                                     // 0x00118b78: addiu $a0, $zero, 4
    v1 = 0x1f << 16;                                            // 0x00118b7c: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x00118b80: lw $v0, 0x3dc($v1)
    if (v0 != 0) goto label_0x118b9c;                           // 0x00118b84: bnez $v0, 0x118b9c
    /* nop */                                                   // 0x00118b88: nop 
    func_00118360();  // 118360                                // 0x00118b8c: jal 0x118360
    /* nop */                                                   // 0x00118b90: nop 
    goto label_0x118d48;                                        // 0x00118b94: b 0x118d48
    v0 = -1;                                                    // 0x00118b98: addiu $v0, $zero, -1
label_0x118b9c:
    if (s0 == 0) goto label_0x118bb0;                           // 0x00118b9c: beqz $s0, 0x118bb0
    /* nop */                                                   // 0x00118ba0: nop 
    s3 = g_0024ee04;  // Global at 0x0024ee04                   // 0x00118ba4: lw $s3, 4($s0)
    if (s3 != 0) goto label_0x118bc0;                           // 0x00118ba8: bnez $s3, 0x118bc0
    v0 = 0x25 << 16;                                            // 0x00118bac: lui $v0, 0x25
label_0x118bb0:
    func_00118360();  // 118360                                // 0x00118bb0: jal 0x118360
    /* nop */                                                   // 0x00118bb4: nop 
    goto label_0x118d48;                                        // 0x00118bb8: b 0x118d48
    v0 = -9;                                                    // 0x00118bbc: addiu $v0, $zero, -9
label_0x118bc0:
    v1 = g_0024ee00;  // Global at 0x0024ee00                   // 0x00118bc0: lw $v1, 0($s0)
    v0 = v0 + -0x940;                                           // 0x00118bc4: addiu $v0, $v0, -0x940
    g_0024e1d0 = s2;  // Global at 0x0024e1d0                   // 0x00118bc8: sw $s2, 0x10($s1)
    v0 = s0 - v0;                                               // 0x00118bcc: subu $v0, $s0, $v0
    g_0024e1cc = v1;  // Global at 0x0024e1cc                   // 0x00118bd0: sw $v1, 0xc($s1)
    v0 = v0 >> 4;                                               // 0x00118bd4: sra $v0, $v0, 4
    g_0024e1d4 = s4;  // Global at 0x0024e1d4                   // 0x00118bd8: sw $s4, 0x14($s1)
    g_0024e1d8 = v0;  // Global at 0x0024e1d8                   // 0x00118bdc: sw $v0, 0x18($s1)
    a1 = 1;                                                     // 0x00118be0: addiu $a1, $zero, 1
    a0 = sp + 0x10;                                             // 0x00118be4: addiu $a0, $sp, 0x10
    local_14 = a1;                                              // 0x00118be8: sw $a1, 0x14($sp)
    local_18 = 0;                                               // 0x00118bec: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00118bf0: jal 0x1142e0
    local_24 = 0;                                               // 0x00118bf4: sw $zero, 0x24($sp)
    v1 = 4;                                                     // 0x00118bfc: addiu $v1, $zero, 4
    v0 = sp + 0x30;                                             // 0x00118c00: addiu $v0, $sp, 0x30
    g_0024e1c8 = v1;  // Global at 0x0024e1c8                   // 0x00118c04: sw $v1, 8($s1)
    g_0024e1c4 = v0;  // Global at 0x0024e1c4                   // 0x00118c08: sw $v0, 4($s1)
    v0 = s3 & 0x8000;                                           // 0x00118c0c: andi $v0, $s3, 0x8000
    if (v0 == 0) goto label_0x118ca4;                           // 0x00118c10: beqz $v0, 0x118ca4
    g_0024e1c0 = s2;  // Global at 0x0024e1c0                   // 0x00118c14: sw $s2, -0x1e40($s5)
    s4 = 0x1f << 16;                                            // 0x00118c18: lui $s4, 0x1f
    PollSema();  // 0x114320                                    // 0x00118c1c: jal 0x114320
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x00118c20: lw $a0, 0x3ec($s4)
    a3 = 0x1f << 16;                                            // 0x00118c24: lui $a3, 0x1f
    v1 = g_001f0358;  // Global at 0x001f0358                   // 0x00118c2c: lw $v1, 0x358($a3)
    v0 = -1;                                                    // 0x00118c30: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x118c58;                          // 0x00118c34: bne $v1, $v0, 0x118c58
    s6 = 0x25 << 16;                                            // 0x00118c38: lui $s6, 0x25
    v1 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x00118c3c: lw $v1, -0x1e40($s5)
    s0 = 0x25 << 16;                                            // 0x00118c40: lui $s0, 0x25
    v0 = -v1;                                                   // 0x00118c44: negu $v0, $v1
    g_001f0358 = v1;  // Global at 0x001f0358                   // 0x00118c48: sw $v1, 0x358($a3)
    goto label_0x118c94;                                        // 0x00118c4c: b 0x118c94
    g_0024e1c0 = v0;  // Global at 0x0024e1c0                   // 0x00118c50: sw $v0, -0x1e40($s5)
    /* nop */                                                   // 0x00118c54: nop 
label_0x118c58:
    s0 = 0x25 << 16;                                            // 0x00118c58: lui $s0, 0x25
    a2 = a2 + 1;                                                // 0x00118c5c: addiu $a2, $a2, 1
label_0x118c60:
    v0 = (a2 < 0x20) ? 1 : 0;                                   // 0x00118c60: slti $v0, $a2, 0x20
    if (v0 == 0) goto label_0x118c94;                           // 0x00118c64: beqz $v0, 0x118c94
    v0 = a2 << 2;                                               // 0x00118c68: sll $v0, $a2, 2
    v1 = a3 + 0x358;                                            // 0x00118c6c: addiu $v1, $a3, 0x358
    a1 = v0 + v1;                                               // 0x00118c70: addu $a1, $v0, $v1
    a0 = -1;                                                    // 0x00118c74: addiu $a0, $zero, -1
    v0 = *(int32_t*)(a1);                                       // 0x00118c78: lw $v0, 0($a1)
    if (v0 != a0) goto label_0x118c60;                          // 0x00118c7c: bne $v0, $a0, 0x118c60
    a2 = a2 + 1;                                                // 0x00118c80: addiu $a2, $a2, 1
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x00118c84: lw $v0, 0($s1)
    v1 = -v0;                                                   // 0x00118c88: negu $v1, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x00118c8c: sw $v0, 0($a1)
    g_0024e1c0 = v1;  // Global at 0x0024e1c0                   // 0x00118c90: sw $v1, 0($s1)
label_0x118c94:
    iSignalSema();  // 0x114300                                 // 0x00118c94: jal 0x114300
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x00118c98: lw $a0, 0x3ec($s4)
    goto label_0x118cb0;                                        // 0x00118c9c: b 0x118cb0
    s0 = s0 + -0x1200;                                          // 0x00118ca0: addiu $s0, $s0, -0x1200
label_0x118ca4:
    s6 = 0x25 << 16;                                            // 0x00118ca4: lui $s6, 0x25
    s0 = 0x25 << 16;                                            // 0x00118ca8: lui $s0, 0x25
    s0 = s0 + -0x1200;                                          // 0x00118cac: addiu $s0, $s0, -0x1200
label_0x118cb0:
    a0 = s6 + -0x740;                                           // 0x00118cb0: addiu $a0, $s6, -0x740
    a3 = s5 + -0x1e40;                                          // 0x00118cb4: addiu $a3, $s5, -0x1e40
    local_0 = 0;                                                // 0x00118cb8: sw $zero, 0($sp)
    a1 = 4;                                                     // 0x00118cbc: addiu $a1, $zero, 4
    t0 = 0x1c;                                                  // 0x00118cc4: addiu $t0, $zero, 0x1c
    t2 = 4;                                                     // 0x00118ccc: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x00118cd0: jal 0x1176a8
    if (v0 >= 0) goto label_0x118cf8;                           // 0x00118cd8: bgez $v0, 0x118cf8
    v0 = 0x2000 << 16;                                          // 0x00118cdc: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x00118ce0: jal 0x1142f0
    func_00118360();  // 118360                                // 0x00118ce8: jal 0x118360
    /* nop */                                                   // 0x00118cec: nop 
    goto label_0x118d48;                                        // 0x00118cf0: b 0x118d48
    v0 = -0xb;                                                  // 0x00118cf4: addiu $v0, $zero, -0xb
label_0x118cf8:
    v0 = s0 | v0;                                               // 0x00118cf8: or $v0, $s0, $v0
    func_00118360();  // 118360                                // 0x00118cfc: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00118d00: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x118d1c;                           // 0x00118d04: bnez $s0, 0x118d1c
    v0 = s3 & 0x8000;                                           // 0x00118d08: andi $v0, $s3, 0x8000
    SignalSema();  // 0x1142f0                                  // 0x00118d0c: jal 0x1142f0
    goto label_0x118d48;                                        // 0x00118d14: b 0x118d48
    v0 = -0xb;                                                  // 0x00118d18: addiu $v0, $zero, -0xb
label_0x118d1c:
    if (v0 == 0) goto label_0x118d34;                           // 0x00118d1c: beqz $v0, 0x118d34
    /* nop */                                                   // 0x00118d20: nop 
    SignalSema();  // 0x1142f0                                  // 0x00118d24: jal 0x1142f0
    goto label_0x118d48;                                        // 0x00118d2c: b 0x118d48
label_0x118d34:
    PollSema();  // 0x114320                                    // 0x00118d34: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00118d3c: jal 0x1142f0
    v0 = local_30;                                              // 0x00118d44: lw $v0, 0x30($sp)
label_0x118d48:
    return;                                                     // 0x00118d68: jr $ra
    sp = sp + 0xc0;                                             // 0x00118d6c: addiu $sp, $sp, 0xc0
}