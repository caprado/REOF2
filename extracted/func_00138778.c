void func_00138778() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00138778: addiu $sp, $sp, -0x30
    func_0013ef30();  // 0x13ef18                                // 0x00138794: jal 0x13ef18
    v0 = 0x20 << 16;                                            // 0x0013879c: lui $v0, 0x20
    s1 = v0 + 0x2208;                                           // 0x001387a0: addiu $s1, $v0, 0x2208
    v1 = g_00202208;  // Global at 0x00202208                   // 0x001387a4: lb $v1, 0($s1)
    if (v1 == 0) goto label_0x1387dc;                           // 0x001387a8: beqz $v1, 0x1387dc
label_0x1387b8:
    a1 = a1 + 1;                                                // 0x001387b8: addiu $a1, $a1, 1
    a0 = a0 + 0x40;                                             // 0x001387bc: addiu $a0, $a0, 0x40
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x001387c0: slti $v0, $a1, 0x20
    if (v0 == 0) goto label_0x1387dc;                           // 0x001387c4: beqz $v0, 0x1387dc
    v1 = a1 << 6;                                               // 0x001387c8: sll $v1, $a1, 6
    v0 = g_002251c8;  // Global at 0x002251c8                   // 0x001387cc: lb $v0, 0($a0)
    /* nop */                                                   // 0x001387d0: nop 
    if (v0 != 0) goto label_0x1387b8;                           // 0x001387d4: bnez $v0, 0x1387b8
    s1 = v1 + a2;                                               // 0x001387d8: addu $s1, $v1, $a2
label_0x1387dc:
    v0 = 0x20;                                                  // 0x001387dc: addiu $v0, $zero, 0x20
    if (a1 != v0) goto label_0x138808;                          // 0x001387e0: bne $a1, $v0, 0x138808
    a0 = 0x22 << 16;                                            // 0x001387e8: lui $a0, 0x22
    a1 = 0x20;                                                  // 0x001387ec: addiu $a1, $zero, 0x20
    a0 = &str_00225188;  // "\nDTX Ver.1.04 Build:Jul 28 2003 17:50:08\n" // 0x001387f0: addiu $a0, $a0, 0x5188
    func_00116598();  // 0x116508                                // 0x001387f4: jal 0x116508
    a2 = 0x20;                                                  // 0x001387f8: addiu $a2, $zero, 0x20
    goto label_0x13883c;                                        // 0x001387fc: b 0x13883c
    /* nop */                                                   // 0x00138804: nop 
label_0x138808:
    a2 = 0x40;                                                  // 0x0013880c: addiu $a2, $zero, 0x40
    func_00107d30();  // 0x107c70                                // 0x00138810: jal 0x107c70
    s0 = 0x40;                                                  // 0x00138814: addiu $s0, $zero, 0x40
    g_00202209 = 0;  // Global at 0x00202209                    // 0x00138818: sb $zero, 1($s1)
    v0 = 1;                                                     // 0x0013881c: addiu $v0, $zero, 1
    g_00202240 = s0;  // Global at 0x00202240                   // 0x00138820: sw $s0, 0x38($s1)
    g_0020220c = s2;  // Global at 0x0020220c                   // 0x00138824: sw $s2, 4($s1)
    g_00202210 = s3;  // Global at 0x00202210                   // 0x00138828: sw $s3, 8($s1)
    g_00202208 = v0;  // Global at 0x00202208                   // 0x0013882c: sb $v0, 0($s1)
    g_0020220a = 0;  // Global at 0x0020220a                    // 0x00138830: sb $zero, 2($s1)
    g_00202238 = v0;  // Global at 0x00202238                   // 0x00138834: sw $v0, 0x30($s1)
    g_0020223c = 0;  // Global at 0x0020223c                    // 0x00138838: sw $zero, 0x34($s1)
label_0x13883c:
    func_0013ef80();  // 0x13ef30                                // 0x0013883c: jal 0x13ef30
    /* nop */                                                   // 0x00138840: nop 
    return;                                                     // 0x0013885c: jr $ra
    sp = sp + 0x30;                                             // 0x00138860: addiu $sp, $sp, 0x30
}