void func_001189b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xa0;                                            // 0x001189b8: addiu $sp, $sp, -0xa0
    s4 = 0x25 << 16;                                            // 0x001189c4: lui $s4, 0x25
    s2 = s4 + -0x1e40;                                          // 0x001189cc: addiu $s2, $s4, -0x1e40
    func_00117eb8();  // 117eb8                                // 0x001189d8: jal 0x117eb8
    func_00118330();  // 118330                                // 0x001189e4: jal 0x118330
    a0 = 1;                                                     // 0x001189e8: addiu $a0, $zero, 1
    v1 = 0x1f << 16;                                            // 0x001189ec: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x001189f0: lw $v0, 0x3dc($v1)
    if (v0 != 0) goto label_0x118a0c;                           // 0x001189f4: bnez $v0, 0x118a0c
    /* nop */                                                   // 0x001189f8: nop 
    func_00118360();  // 118360                                // 0x001189fc: jal 0x118360
    /* nop */                                                   // 0x00118a00: nop 
    goto label_0x118b14;                                        // 0x00118a04: b 0x118b14
    v0 = -1;                                                    // 0x00118a08: addiu $v0, $zero, -1
label_0x118a0c:
    if (s0 == 0) goto label_0x118a20;                           // 0x00118a0c: beqz $s0, 0x118a20
    /* nop */                                                   // 0x00118a10: nop 
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00118a14: lw $v0, 4($s0)
    /* bnezl $v0, 0x118a30 */                                   // 0x00118a18: bnezl $v0, 0x118a30
    v1 = *(int32_t*)(s0);                                       // 0x00118a1c: lw $v1, 0($s0)
label_0x118a20:
    func_00118360();  // 118360                                // 0x00118a20: jal 0x118360
    /* nop */                                                   // 0x00118a24: nop 
    goto label_0x118b14;                                        // 0x00118a28: b 0x118b14
    v0 = -9;                                                    // 0x00118a2c: addiu $v0, $zero, -9
    v0 = 0x25 << 16;                                            // 0x00118a30: lui $v0, 0x25
    v0 = v0 + -0x940;                                           // 0x00118a34: addiu $v0, $v0, -0x940
    a0 = 1;                                                     // 0x00118a38: addiu $a0, $zero, 1
    g_0024e1cc = v1;  // Global at 0x0024e1cc                   // 0x00118a3c: sw $v1, 0xc($s2)
    v0 = s0 - v0;                                               // 0x00118a40: subu $v0, $s0, $v0
    local_14 = a0;                                              // 0x00118a44: sw $a0, 0x14($sp)
    v0 = v0 >> 4;                                               // 0x00118a48: sra $v0, $v0, 4
    g_0024e1d0 = v0;  // Global at 0x0024e1d0                   // 0x00118a4c: sw $v0, 0x10($s2)
    a0 = sp + 0x10;                                             // 0x00118a50: addiu $a0, $sp, 0x10
    local_18 = 0;                                               // 0x00118a54: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00118a58: jal 0x1142e0
    local_24 = 0;                                               // 0x00118a5c: sw $zero, 0x24($sp)
    v1 = sp + 0x30;                                             // 0x00118a64: addiu $v1, $sp, 0x30
    v0 = 0x25 << 16;                                            // 0x00118a68: lui $v0, 0x25
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x00118a6c: sw $s1, -0x1e40($s4)
    s3 = v0 + -0x1200;                                          // 0x00118a70: addiu $s3, $v0, -0x1200
    a0 = 0x25 << 16;                                            // 0x00118a74: lui $a0, 0x25
    v0 = 4;                                                     // 0x00118a78: addiu $v0, $zero, 4
    g_0024e1c4 = v1;  // Global at 0x0024e1c4                   // 0x00118a7c: sw $v1, 4($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x00118a80: sw $v0, 8($s2)
    a0 = a0 + -0x740;                                           // 0x00118a84: addiu $a0, $a0, -0x740
    a1 = 1;                                                     // 0x00118a8c: addiu $a1, $zero, 1
    local_0 = 0;                                                // 0x00118a90: sw $zero, 0($sp)
    t0 = 0x14;                                                  // 0x00118a98: addiu $t0, $zero, 0x14
    t2 = 4;                                                     // 0x00118aa0: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x00118aa4: jal 0x1176a8
    if (v0 >= 0) goto label_0x118acc;                           // 0x00118aac: bgezl $v0, 0x118acc
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00118ab0: sw $zero, 4($s0)
    SignalSema();  // 0x1142f0                                  // 0x00118ab4: jal 0x1142f0
    func_00118360();  // 118360                                // 0x00118abc: jal 0x118360
    /* nop */                                                   // 0x00118ac0: nop 
    goto label_0x118b14;                                        // 0x00118ac4: b 0x118b14
    v0 = -0xb;                                                  // 0x00118ac8: addiu $v0, $zero, -0xb
label_0x118acc:
    v0 = 0x2000 << 16;                                          // 0x00118acc: lui $v0, 0x2000
    v0 = s3 | v0;                                               // 0x00118ad0: or $v0, $s3, $v0
    func_00118360();  // 118360                                // 0x00118ad4: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00118ad8: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x118af4;                           // 0x00118adc: bnez $s0, 0x118af4
    /* nop */                                                   // 0x00118ae0: nop 
    SignalSema();  // 0x1142f0                                  // 0x00118ae4: jal 0x1142f0
    goto label_0x118b14;                                        // 0x00118aec: b 0x118b14
    v0 = -0xb;                                                  // 0x00118af0: addiu $v0, $zero, -0xb
label_0x118af4:
    PollSema();  // 0x114320                                    // 0x00118af4: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00118afc: jal 0x1142f0
    v0 = local_30;                                              // 0x00118b04: lw $v0, 0x30($sp)
    v1 = -1;                                                    // 0x00118b08: addiu $v1, $zero, -1
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x00118b0c: slt $v1, $v1, $v0
    if (v1 != 0) v0 = 0;                                        // 0x00118b10: movn $v0, $zero, $v1
label_0x118b14:
    return;                                                     // 0x00118b2c: jr $ra
    sp = sp + 0xa0;                                             // 0x00118b30: addiu $sp, $sp, 0xa0
}