void func_001328c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x1328c8:
    sp = sp + -0x30;                                            // 0x001328c8: addiu $sp, $sp, -0x30
    s3 = 0x20 << 16;                                            // 0x001328d0: lui $s3, 0x20
    func_001261b8();  // 0x1261a0                                // 0x001328e4: jal 0x1261a0
    s1 = s3 + 0x1d54;                                           // 0x001328e8: addiu $s1, $s3, 0x1d54
    v0 = g_00201d54;  // Global at 0x00201d54                   // 0x001328ec: lw $v0, 0($s1)
    if (v0 == 0) goto label_0x132910;                           // 0x001328f0: beqz $v0, 0x132910
    return func_001261d0();  // Tail call                        // 0x00132908: j 0x1261b8
    sp = sp + 0x30;                                             // 0x0013290c: addiu $sp, $sp, 0x30
label_0x132910:
    v0 = 1;                                                     // 0x00132910: addiu $v0, $zero, 1
    s2 = 1;                                                     // 0x00132914: addiu $s2, $zero, 1
    func_001261d0();  // 0x1261b8                                // 0x00132918: jal 0x1261b8
    g_00201d54 = v0;  // Global at 0x00201d54                   // 0x0013291c: sw $v0, 0($s1)
    func_001261b8();  // 0x1261a0                                // 0x00132920: jal 0x1261a0
    /* nop */                                                   // 0x00132924: nop 
    func_0012d3a0();  // 0x12d338                                // 0x00132928: jal 0x12d338
    /* nop */                                                   // 0x0013292c: nop 
    v0 = 2;                                                     // 0x00132930: addiu $v0, $zero, 2
    v1 = 0x1f << 16;                                            // 0x00132934: lui $v1, 0x1f
    g_00201d54 = v0;  // Global at 0x00201d54                   // 0x00132938: sw $v0, 0($s1)
    s0 = v1 + 0x59c8;                                           // 0x0013293c: addiu $s0, $v1, 0x59c8
    s1 = 0xf;                                                   // 0x00132940: addiu $s1, $zero, 0xf
    /* nop */                                                   // 0x00132944: nop 
label_0x132948:
    v0 = g_001f59c8;  // Global at 0x001f59c8                   // 0x00132948: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x132960;                          // 0x0013294c: bnel $v0, $s2, 0x132960
    s1 = s1 + -1;                                               // 0x00132950: addiu $s1, $s1, -1
    func_00134a50();  // 0x134918                                // 0x00132954: jal 0x134918
    s1 = s1 + -1;                                               // 0x0013295c: addiu $s1, $s1, -1
label_0x132960:
    if (s1 >= 0) goto label_0x132948;                           // 0x00132960: bgez $s1, 0x132948
    s0 = s0 + 0xc4;                                             // 0x00132964: addiu $s0, $s0, 0xc4
    s0 = s3 + 0x1d54;                                           // 0x00132968: addiu $s0, $s3, 0x1d54
    v0 = 3;                                                     // 0x0013296c: addiu $v0, $zero, 3
    func_0012c488();  // 0x12c458                                // 0x00132970: jal 0x12c458
    g_00201d54 = v0;  // Global at 0x00201d54                   // 0x00132974: sw $v0, 0($s0)
    g_00201d54 = 0;  // Global at 0x00201d54                    // 0x00132978: sw $zero, 0($s0)
    return func_001261d0();  // Tail call                        // 0x00132990: j 0x1261b8
    sp = sp + 0x30;                                             // 0x00132994: addiu $sp, $sp, 0x30
    sp = sp + -0x10;                                            // 0x00132998: addiu $sp, $sp, -0x10
    goto label_0x1328c8;                                        // 0x001329a4: j 0x1328c8
    sp = sp + 0x10;                                             // 0x001329a8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001329ac: nop 
    sp = sp + -0x10;                                            // 0x001329b0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1329d0;                           // 0x001329b4: bnez $a0, 0x1329d0
    a0 = 0x22 << 16;                                            // 0x001329bc: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x001329c0: jal 0x127d90
    a0 = &str_00223be0;  // "E02080844 ADXT_ClearErrCode: parameter error" // 0x001329c4: addiu $a0, $a0, 0x3be0
    goto label_0x1329d4;                                        // 0x001329c8: b 0x1329d4
    v0 = -1;                                                    // 0x001329cc: addiu $v0, $zero, -1
label_0x1329d0:
    v0 = str_00223c40;  // "E02080828 ADXT_SetLpFlg: parameter error" // 0x001329d0: lh $v0, 0x60($a0)
label_0x1329d4:
    return;                                                     // 0x001329d8: jr $ra
    sp = sp + 0x10;                                             // 0x001329dc: addiu $sp, $sp, 0x10
}