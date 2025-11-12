void func_00188828() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_8;
    
    sp = sp + -0x70;                                            // 0x00188828: addiu $sp, $sp, -0x70
    v1 = 1;                                                     // 0x0018882c: addiu $v1, $zero, 1
    s3 = 0x21 << 16;                                            // 0x00188834: lui $s3, 0x21
    v0 = g_00216338;  // Global at 0x00216338                   // 0x0018883c: lw $v0, 0x6338($s3)
    if (v0 != v1) goto label_0x188858;                          // 0x00188848: bne $v0, $v1, 0x188858
    goto label_0x188a48;                                        // 0x00188850: b 0x188a48
    v0 = 1;                                                     // 0x00188854: addiu $v0, $zero, 1
label_0x188858:
    s2 = 0x28 << 16;                                            // 0x00188858: lui $s2, 0x28
    func_00116ee0();  // 0x116d40                                // 0x00188860: jal 0x116d40
    g_00284800 = 0;  // Global at 0x00284800                    // 0x00188864: sw $zero, 0x4800($s2)
    goto label_0x188894;                                        // 0x00188868: b 0x188894
    s1 = 0x28 << 16;                                            // 0x0018886c: lui $s1, 0x28
label_0x188870:
    v0 = -1;                                                    // 0x00188870: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00188874: nop 
label_0x188878:
    v1 = v1 + -1;                                               // 0x00188878: addiu $v1, $v1, -1
    /* nop */                                                   // 0x0018887c: nop 
    /* nop */                                                   // 0x00188880: nop 
    /* nop */                                                   // 0x00188884: nop 
    /* nop */                                                   // 0x00188888: nop 
    if (v1 != v0) goto label_0x188878;                          // 0x0018888c: bne $v1, $v0, 0x188878
    /* nop */                                                   // 0x00188890: nop 
label_0x188894:
    s0 = s1 + 0x1248;                                           // 0x00188894: addiu $s0, $s1, 0x1248
    a1 = 0x8000 << 16;                                          // 0x00188898: lui $a1, 0x8000
    a1 = a1 | 0x1300;                                           // 0x001888a0: ori $a1, $a1, 0x1300
    func_001176a8();  // 0x1174d8                                // 0x001888a4: jal 0x1174d8
    if (v0 < 0) goto label_0x1889e0;                            // 0x001888ac: bltz $v0, 0x1889e0
    a0 = 0x23 << 16;                                            // 0x001888b0: lui $a0, 0x23
    v0 = g_0028126c;  // Global at 0x0028126c                   // 0x001888b4: lw $v0, 0x24($s0)
    if (v0 == 0) goto label_0x188870;                           // 0x001888b8: beqz $v0, 0x188870
    v1 = 1 << 16;                                               // 0x001888bc: lui $v1, 1
    goto label_0x1888ec;                                        // 0x001888c0: b 0x1888ec
    s1 = 0x28 << 16;                                            // 0x001888c4: lui $s1, 0x28
label_0x1888c8:
    v0 = -1;                                                    // 0x001888c8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001888cc: nop 
label_0x1888d0:
    v1 = v1 + -1;                                               // 0x001888d0: addiu $v1, $v1, -1
    /* nop */                                                   // 0x001888d4: nop 
    /* nop */                                                   // 0x001888d8: nop 
    /* nop */                                                   // 0x001888dc: nop 
    /* nop */                                                   // 0x001888e0: nop 
    if (v1 != v0) goto label_0x1888d0;                          // 0x001888e4: bne $v1, $v0, 0x1888d0
    /* nop */                                                   // 0x001888e8: nop 
label_0x1888ec:
    s0 = s1 + 0x1270;                                           // 0x001888ec: addiu $s0, $s1, 0x1270
    a1 = 0x8000 << 16;                                          // 0x001888f0: lui $a1, 0x8000
    a1 = a1 | 0x131b;                                           // 0x001888f8: ori $a1, $a1, 0x131b
    func_001176a8();  // 0x1174d8                                // 0x001888fc: jal 0x1174d8
    if (v0 < 0) goto label_0x1889e0;                            // 0x00188904: bltz $v0, 0x1889e0
    a0 = 0x23 << 16;                                            // 0x00188908: lui $a0, 0x23
    v0 = g_00281294;  // Global at 0x00281294                   // 0x0018890c: lw $v0, 0x24($s0)
    if (v0 == 0) goto label_0x1888c8;                           // 0x00188910: beqz $v0, 0x1888c8
    v1 = 1 << 16;                                               // 0x00188914: lui $v1, 1
    goto label_0x188944;                                        // 0x00188918: b 0x188944
    s1 = 0x28 << 16;                                            // 0x0018891c: lui $s1, 0x28
label_0x188920:
    v0 = -1;                                                    // 0x00188920: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00188924: nop 
label_0x188928:
    v1 = v1 + -1;                                               // 0x00188928: addiu $v1, $v1, -1
    /* nop */                                                   // 0x0018892c: nop 
    /* nop */                                                   // 0x00188930: nop 
    /* nop */                                                   // 0x00188934: nop 
    /* nop */                                                   // 0x00188938: nop 
    if (v1 != v0) goto label_0x188928;                          // 0x0018893c: bne $v1, $v0, 0x188928
    /* nop */                                                   // 0x00188940: nop 
label_0x188944:
    s0 = s1 + 0x1298;                                           // 0x00188944: addiu $s0, $s1, 0x1298
    a1 = 0x8000 << 16;                                          // 0x00188948: lui $a1, 0x8000
    a1 = a1 | 0x131c;                                           // 0x00188950: ori $a1, $a1, 0x131c
    func_001176a8();  // 0x1174d8                                // 0x00188954: jal 0x1174d8
    if (v0 < 0) goto label_0x1889e0;                            // 0x0018895c: bltz $v0, 0x1889e0
    a0 = 0x23 << 16;                                            // 0x00188960: lui $a0, 0x23
    v0 = g_002812bc;  // Global at 0x002812bc                   // 0x00188964: lw $v0, 0x24($s0)
    if (v0 == 0) goto label_0x188920;                           // 0x00188968: beqz $v0, 0x188920
    v1 = 1 << 16;                                               // 0x0018896c: lui $v1, 1
    func_00188828();  // 0x1887d0                                // 0x00188970: jal 0x1887d0
    /* nop */                                                   // 0x00188974: nop 
    v0 = 3;                                                     // 0x0018897c: addiu $v0, $zero, 3
    s0 = s1 >> 8;                                               // 0x00188980: sra $s0, $s1, 8
    if (s0 == v0) goto label_0x1889b8;                          // 0x00188984: beq $s0, $v0, 0x1889b8
    a0 = 0x23 << 16;                                            // 0x00188988: lui $a0, 0x23
    func_00116598();  // 0x116508                                // 0x0018898c: jal 0x116508
    a0 = &str_0022a058;  // "[libdbc.a = %d.%d, dbcman.irx = %d.%d]\n" // 0x00188990: addiu $a0, $a0, -0x5fa8
    a0 = 0x23 << 16;                                            // 0x00188994: lui $a0, 0x23
    a0 = &str_0022a080;  // "libdbc: SifDmaAddr %08x\n"         // 0x0018899c: addiu $a0, $a0, -0x5f80
    t0 = s1 & 0xff;                                             // 0x001889a0: andi $t0, $s1, 0xff
    a1 = 3;                                                     // 0x001889a4: addiu $a1, $zero, 3
    func_00116598();  // 0x116508                                // 0x001889a8: jal 0x116508
    goto label_0x188a48;                                        // 0x001889b0: b 0x188a48
label_0x1889b8:
    v0 = 1;                                                     // 0x001889b8: addiu $v0, $zero, 1
    v1 = 0x7f;                                                  // 0x001889bc: addiu $v1, $zero, 0x7f
    local_8 = v0;                                               // 0x001889c0: sw $v0, 8($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001889c8: jal 0x1142e0
    local_4 = v1;                                               // 0x001889cc: sw $v1, 4($sp)
    if (v0 >= 0) goto label_0x1889f0;                           // 0x001889d0: bgez $v0, 0x1889f0
    g_00284800 = v0;  // Global at 0x00284800                   // 0x001889d4: sw $v0, 0x4800($s2)
    goto label_0x188a48;                                        // 0x001889d8: b 0x188a48
label_0x1889e0:
    func_001896f0();  // 0x1896c8                                // 0x001889e0: jal 0x1896c8
    a0 = a0 + -0x5fc0;                                          // 0x001889e4: addiu $a0, $a0, -0x5fc0
    goto label_0x188a48;                                        // 0x001889e8: b 0x188a48
label_0x1889f0:
    v0 = 0x28 << 16;                                            // 0x001889f0: lui $v0, 0x28
    v1 = 0xf;                                                   // 0x001889f4: addiu $v1, $zero, 0xf
    v0 = v0 + 0x47c0;                                           // 0x001889f8: addiu $v0, $v0, 0x47c0
    v0 = v0 + 0x3c;                                             // 0x001889fc: addiu $v0, $v0, 0x3c
label_0x188a00:
    g_002847fc = 0;  // Global at 0x002847fc                    // 0x00188a00: sw $zero, 0($v0)
    v1 = v1 + -1;                                               // 0x00188a04: addiu $v1, $v1, -1
    v0 = v0 + -4;                                               // 0x00188a08: addiu $v0, $v0, -4
    /* nop */                                                   // 0x00188a0c: nop 
    /* nop */                                                   // 0x00188a10: nop 
    if (v1 >= 0) goto label_0x188a00;                           // 0x00188a14: bgez $v1, 0x188a00
    /* nop */                                                   // 0x00188a18: nop 
    s0 = 0x28 << 16;                                            // 0x00188a1c: lui $s0, 0x28
    a0 = 0x23 << 16;                                            // 0x00188a20: lui $a0, 0x23
    s0 = s0 + 0x4740;                                           // 0x00188a24: addiu $s0, $s0, 0x4740
    a0 = &str_0022a0a8;  // "sceDbcSetWorkAddr: rpc error\n"    // 0x00188a28: addiu $a0, $a0, -0x5f58
    func_001896f0();  // 0x1896c8                                // 0x00188a2c: jal 0x1896c8
    func_00188b20();  // 0x188ab0                                // 0x00188a34: jal 0x188ab0
    v1 = 1;                                                     // 0x00188a3c: addiu $v1, $zero, 1
    v0 = 1;                                                     // 0x00188a40: addiu $v0, $zero, 1
    g_00216338 = v1;  // Global at 0x00216338                   // 0x00188a44: sw $v1, 0x6338($s3)
label_0x188a48:
    return;                                                     // 0x00188a5c: jr $ra
    sp = sp + 0x70;                                             // 0x00188a60: addiu $sp, $sp, 0x70
}