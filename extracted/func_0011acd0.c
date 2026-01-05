void func_0011acd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24;
    
    sp = sp + -0xc0;                                            // 0x0011acd0: addiu $sp, $sp, -0xc0
    s5 = 0x25 << 16;                                            // 0x0011acec: lui $s5, 0x25
    s1 = s5 + -0x1e40;                                          // 0x0011acf4: addiu $s1, $s5, -0x1e40
    func_00117eb8();  // 117eb8                                // 0x0011ad00: jal 0x117eb8
    func_00118330();  // 118330                                // 0x0011ad0c: jal 0x118330
    a0 = 0x16;                                                  // 0x0011ad10: addiu $a0, $zero, 0x16
    v1 = 0x1f << 16;                                            // 0x0011ad14: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011ad18: lw $v0, 0x3dc($v1)
    if (v0 != 0) goto label_0x11ad34;                           // 0x0011ad1c: bnez $v0, 0x11ad34
    /* nop */                                                   // 0x0011ad20: nop 
    func_00118360();  // 118360                                // 0x0011ad24: jal 0x118360
    /* nop */                                                   // 0x0011ad28: nop 
    goto label_0x11aee0;                                        // 0x0011ad2c: b 0x11aee0
    v0 = -1;                                                    // 0x0011ad30: addiu $v0, $zero, -1
label_0x11ad34:
    if (s0 == 0) goto label_0x11ad48;                           // 0x0011ad34: beqz $s0, 0x11ad48
    /* nop */                                                   // 0x0011ad38: nop 
    s3 = g_0024ee04;  // Global at 0x0024ee04                   // 0x0011ad3c: lw $s3, 4($s0)
    if (s3 != 0) goto label_0x11ad58;                           // 0x0011ad40: bnez $s3, 0x11ad58
    v0 = 0x25 << 16;                                            // 0x0011ad44: lui $v0, 0x25
label_0x11ad48:
    func_00118360();  // 118360                                // 0x0011ad48: jal 0x118360
    /* nop */                                                   // 0x0011ad4c: nop 
    goto label_0x11aee0;                                        // 0x0011ad50: b 0x11aee0
    v0 = -9;                                                    // 0x0011ad54: addiu $v0, $zero, -9
label_0x11ad58:
    v1 = g_0024ee00;  // Global at 0x0024ee00                   // 0x0011ad58: lw $v1, 0($s0)
    v0 = v0 + -0x940;                                           // 0x0011ad5c: addiu $v0, $v0, -0x940
    v0 = s0 - v0;                                               // 0x0011ad64: subu $v0, $s0, $v0
    g_0024e1cc = v1;  // Global at 0x0024e1cc                   // 0x0011ad68: sw $v1, 0xc($s1)
    v0 = v0 >> 4;                                               // 0x0011ad6c: sra $v0, $v0, 4
    g_0024e1d8 = s4;  // Global at 0x0024e1d8                   // 0x0011ad70: sw $s4, 0x18($s1)
    g_0024e1dc = v0;  // Global at 0x0024e1dc                   // 0x0011ad74: sw $v0, 0x1c($s1)
    a1 = 1;                                                     // 0x0011ad78: addiu $a1, $zero, 1
    a0 = sp + 0x10;                                             // 0x0011ad7c: addiu $a0, $sp, 0x10
    local_14 = a1;                                              // 0x0011ad80: sw $a1, 0x14($sp)
    local_18 = 0;                                               // 0x0011ad84: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x0011ad88: jal 0x1142e0
    local_24 = 0;                                               // 0x0011ad8c: sw $zero, 0x24($sp)
    v1 = 8;                                                     // 0x0011ad94: addiu $v1, $zero, 8
    v0 = sp + 0x30;                                             // 0x0011ad98: addiu $v0, $sp, 0x30
    g_0024e1c8 = v1;  // Global at 0x0024e1c8                   // 0x0011ad9c: sw $v1, 8($s1)
    g_0024e1c4 = v0;  // Global at 0x0024e1c4                   // 0x0011ada0: sw $v0, 4($s1)
    v0 = s3 & 0x8000;                                           // 0x0011ada4: andi $v0, $s3, 0x8000
    if (v0 == 0) goto label_0x11ae3c;                           // 0x0011ada8: beqz $v0, 0x11ae3c
    g_0024e1c0 = s2;  // Global at 0x0024e1c0                   // 0x0011adac: sw $s2, -0x1e40($s5)
    s4 = 0x1f << 16;                                            // 0x0011adb0: lui $s4, 0x1f
    PollSema();  // 0x114320                                    // 0x0011adb4: jal 0x114320
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x0011adb8: lw $a0, 0x3ec($s4)
    a3 = 0x1f << 16;                                            // 0x0011adbc: lui $a3, 0x1f
    v1 = g_001f0358;  // Global at 0x001f0358                   // 0x0011adc4: lw $v1, 0x358($a3)
    v0 = -1;                                                    // 0x0011adc8: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x11adf0;                          // 0x0011adcc: bne $v1, $v0, 0x11adf0
    s6 = 0x25 << 16;                                            // 0x0011add0: lui $s6, 0x25
    v1 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x0011add4: lw $v1, -0x1e40($s5)
    s0 = 0x25 << 16;                                            // 0x0011add8: lui $s0, 0x25
    v0 = -v1;                                                   // 0x0011addc: negu $v0, $v1
    g_001f0358 = v1;  // Global at 0x001f0358                   // 0x0011ade0: sw $v1, 0x358($a3)
    goto label_0x11ae2c;                                        // 0x0011ade4: b 0x11ae2c
    g_0024e1c0 = v0;  // Global at 0x0024e1c0                   // 0x0011ade8: sw $v0, -0x1e40($s5)
    /* nop */                                                   // 0x0011adec: nop 
label_0x11adf0:
    s0 = 0x25 << 16;                                            // 0x0011adf0: lui $s0, 0x25
    a2 = a2 + 1;                                                // 0x0011adf4: addiu $a2, $a2, 1
label_0x11adf8:
    v0 = (a2 < 0x20) ? 1 : 0;                                   // 0x0011adf8: slti $v0, $a2, 0x20
    if (v0 == 0) goto label_0x11ae2c;                           // 0x0011adfc: beqz $v0, 0x11ae2c
    v0 = a2 << 2;                                               // 0x0011ae00: sll $v0, $a2, 2
    v1 = a3 + 0x358;                                            // 0x0011ae04: addiu $v1, $a3, 0x358
    a1 = v0 + v1;                                               // 0x0011ae08: addu $a1, $v0, $v1
    a0 = -1;                                                    // 0x0011ae0c: addiu $a0, $zero, -1
    v0 = *(int32_t*)(a1);                                       // 0x0011ae10: lw $v0, 0($a1)
    if (v0 != a0) goto label_0x11adf8;                          // 0x0011ae14: bne $v0, $a0, 0x11adf8
    a2 = a2 + 1;                                                // 0x0011ae18: addiu $a2, $a2, 1
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x0011ae1c: lw $v0, 0($s1)
    v1 = -v0;                                                   // 0x0011ae20: negu $v1, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x0011ae24: sw $v0, 0($a1)
    g_0024e1c0 = v1;  // Global at 0x0024e1c0                   // 0x0011ae28: sw $v1, 0($s1)
label_0x11ae2c:
    iSignalSema();  // 0x114300                                 // 0x0011ae2c: jal 0x114300
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x0011ae30: lw $a0, 0x3ec($s4)
    goto label_0x11ae48;                                        // 0x0011ae34: b 0x11ae48
    s0 = s0 + -0x1200;                                          // 0x0011ae38: addiu $s0, $s0, -0x1200
label_0x11ae3c:
    s6 = 0x25 << 16;                                            // 0x0011ae3c: lui $s6, 0x25
    s0 = 0x25 << 16;                                            // 0x0011ae40: lui $s0, 0x25
    s0 = s0 + -0x1200;                                          // 0x0011ae44: addiu $s0, $s0, -0x1200
label_0x11ae48:
    a0 = s6 + -0x740;                                           // 0x0011ae48: addiu $a0, $s6, -0x740
    a3 = s5 + -0x1e40;                                          // 0x0011ae4c: addiu $a3, $s5, -0x1e40
    local_0 = 0;                                                // 0x0011ae50: sw $zero, 0($sp)
    a1 = 0x16;                                                  // 0x0011ae54: addiu $a1, $zero, 0x16
    t0 = 0x20;                                                  // 0x0011ae5c: addiu $t0, $zero, 0x20
    t2 = 4;                                                     // 0x0011ae64: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011ae68: jal 0x1176a8
    if (v0 >= 0) goto label_0x11ae90;                           // 0x0011ae70: bgez $v0, 0x11ae90
    v0 = 0x2000 << 16;                                          // 0x0011ae74: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011ae78: jal 0x1142f0
    func_00118360();  // 118360                                // 0x0011ae80: jal 0x118360
    /* nop */                                                   // 0x0011ae84: nop 
    goto label_0x11aee0;                                        // 0x0011ae88: b 0x11aee0
    v0 = -0xb;                                                  // 0x0011ae8c: addiu $v0, $zero, -0xb
label_0x11ae90:
    v0 = s0 | v0;                                               // 0x0011ae90: or $v0, $s0, $v0
    func_00118360();  // 118360                                // 0x0011ae94: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011ae98: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11aeb4;                           // 0x0011ae9c: bnez $s0, 0x11aeb4
    v0 = s3 & 0x8000;                                           // 0x0011aea0: andi $v0, $s3, 0x8000
    SignalSema();  // 0x1142f0                                  // 0x0011aea4: jal 0x1142f0
    goto label_0x11aee0;                                        // 0x0011aeac: b 0x11aee0
    v0 = -0xb;                                                  // 0x0011aeb0: addiu $v0, $zero, -0xb
label_0x11aeb4:
    if (v0 == 0) goto label_0x11aecc;                           // 0x0011aeb4: beqz $v0, 0x11aecc
    /* nop */                                                   // 0x0011aeb8: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011aebc: jal 0x1142f0
    goto label_0x11aee0;                                        // 0x0011aec4: b 0x11aee0
label_0x11aecc:
    PollSema();  // 0x114320                                    // 0x0011aecc: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011aed4: jal 0x1142f0
label_0x11aee0:
    return;                                                     // 0x0011af00: jr $ra
    sp = sp + 0xc0;                                             // 0x0011af04: addiu $sp, $sp, 0xc0
}