void func_00138fb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00138fb8: addiu $sp, $sp, -0x30
    s3 = 0x20 << 16;                                            // 0x00138fc0: lui $s3, 0x20
    v0 = g_00202a2c;  // Global at 0x00202a2c                   // 0x00138fc4: lw $v0, 0x2a2c($s3)
    if (v0 != 0) goto label_0x139078;                           // 0x00138fd8: bnez $v0, 0x139078
    s0 = 0x20 << 16;                                            // 0x00138fe0: lui $s0, 0x20
    s2 = 0x20 << 16;                                            // 0x00138fe4: lui $s2, 0x20
    s4 = 0x22 << 16;                                            // 0x00138fe8: lui $s4, 0x22
    s1 = s0 + 0x2e70;                                           // 0x00138fec: addiu $s1, $s0, 0x2e70
    a1 = g_00202a14;  // Global at 0x00202a14                   // 0x00138ff0: lw $a1, 0x2a14($s2)
    /* nop */                                                   // 0x00138ff4: nop 
label_0x138ff8:
    a0 = s0 + 0x2e70;                                           // 0x00138ff8: addiu $a0, $s0, 0x2e70
    func_001176a8();  // 0x1174d8                                // 0x00138ffc: jal 0x1174d8
    if (v0 >= 0) goto label_0x139038;                           // 0x00139004: bgezl $v0, 0x139038
    v0 = g_00202e94;  // Global at 0x00202e94                   // 0x00139008: lw $v0, 0x24($s1)
    func_00116598();  // 0x116508                                // 0x0013900c: jal 0x116508
    a0 = &str_00225280;  // "\nDVCI/PS2EE Ver.2.64 Build:Jul 28 2003 17:50:09\n" // 0x00139010: addiu $a0, $s4, 0x5280
    /* nop */                                                   // 0x00139014: nop 
label_0x139018:
    /* nop */                                                   // 0x00139018: nop 
    /* nop */                                                   // 0x0013901c: nop 
    /* nop */                                                   // 0x00139020: nop 
    /* nop */                                                   // 0x00139024: nop 
    /* nop */                                                   // 0x00139028: nop 
    goto label_0x139018;                                        // 0x0013902c: b 0x139018
    /* nop */                                                   // 0x00139030: nop 
    /* nop */                                                   // 0x00139034: nop 
label_0x139038:
    if (v0 != 0) goto label_0x13907c;                           // 0x00139038: bnez $v0, 0x13907c
    v1 = s3 + 0x2a2c;                                           // 0x0013903c: addiu $v1, $s3, 0x2a2c
    v1 = -1;                                                    // 0x00139040: addiu $v1, $zero, -1
    v0 = 0 | 0xffff;                                            // 0x00139044: ori $v0, $zero, 0xffff
    v0 = v0 + -4;                                               // 0x00139048: addiu $v0, $v0, -4
    /* nop */                                                   // 0x0013904c: nop 
label_0x139050:
    /* nop */                                                   // 0x00139050: nop 
    /* nop */                                                   // 0x00139054: nop 
    /* nop */                                                   // 0x00139058: nop 
    /* nop */                                                   // 0x0013905c: nop 
    /* nop */                                                   // 0x00139060: nop 
    if (v0 != v1) goto label_0x139050;                          // 0x00139064: bnel $v0, $v1, 0x139050
    v0 = v0 + -4;                                               // 0x00139068: addiu $v0, $v0, -4
    goto label_0x138ff8;                                        // 0x0013906c: b 0x138ff8
    a1 = g_00202a14;  // Global at 0x00202a14                   // 0x00139070: lw $a1, 0x2a14($s2)
    /* nop */                                                   // 0x00139074: nop 
label_0x139078:
    v1 = s3 + 0x2a2c;                                           // 0x00139078: addiu $v1, $s3, 0x2a2c
label_0x13907c:
    v0 = g_00202a2c;  // Global at 0x00202a2c                   // 0x00139080: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0013908c: addiu $v0, $v0, 1
    g_00202a2c = v0;  // Global at 0x00202a2c                   // 0x0013909c: sw $v0, 0($v1)
    return;                                                     // 0x001390a0: jr $ra
    sp = sp + 0x30;                                             // 0x001390a4: addiu $sp, $sp, 0x30
}