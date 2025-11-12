void func_00146668() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0xb0;                                            // 0x00146668: addiu $sp, $sp, -0xb0
    v0 = 0xfff << 16;                                           // 0x0014666c: lui $v0, 0xfff
    v0 = v0 | 0xffff;                                           // 0x00146674: ori $v0, $v0, 0xffff
    local_0 = a0;                                               // 0x00146680: sw $a0, 0($sp)
    a2 = local_0;                                               // 0x001466a4: lw $a2, 0($sp)
    v1 = *(int32_t*)(s6);                                       // 0x001466a8: lw $v1, 0($s6)
    a0 = g_100000f0;  // Global at 0x100000f0                   // 0x001466ac: lw $a0, 0xf0($a0)
    a1 = *(int32_t*)((a2) + 0x18c);                             // 0x001466b0: lw $a1, 0x18c($a2)
    s2 = v1 & v0;                                               // 0x001466b4: and $s2, $v1, $v0
    a0 = a0 & v0;                                               // 0x001466b8: and $a0, $a0, $v0
    v1 = 3;                                                     // 0x001466bc: addiu $v1, $zero, 3
    if (a1 == v1) goto label_0x1466dc;                          // 0x001466c0: beq $a1, $v1, 0x1466dc
    local_8 = a0;                                               // 0x001466c4: sw $a0, 8($sp)
    a0 = *(int32_t*)((a2) + 0xf8);                              // 0x001466c8: lw $a0, 0xf8($a2)
    if (a0 != 0) goto label_0x146714;                           // 0x001466cc: bnez $a0, 0x146714
    goto label_0x1466e8;                                        // 0x001466d4: b 0x1466e8
    v0 = *(int32_t*)((s6) + 0x10);                              // 0x001466d8: lw $v0, 0x10($s6)
label_0x1466dc:
    a3 = local_0;                                               // 0x001466dc: lw $a3, 0($sp)
    v1 = *(int32_t*)((a3) + 0xf8);                              // 0x001466e0: lw $v1, 0xf8($a3)
    v0 = *(int32_t*)((s6) + 0x10);                              // 0x001466e4: lw $v0, 0x10($s6)
label_0x1466e8:
    a0 = 0x180;                                                 // 0x001466e8: addiu $a0, $zero, 0x180
    if (v1 == 0) goto label_0x146704;                           // 0x001466f0: beqz $v1, 0x146704
    s4 = s5 >> 4;                                               // 0x001466f4: sra $s4, $s5, 4
    v0 = v1 >> 4;                                               // 0x001466f8: sra $v0, $v1, 4
    goto label_0x146708;                                        // 0x001466fc: b 0x146708
label_0x146704:
label_0x146708:
    v0 = 1;                                                     // 0x00146708: addiu $v0, $zero, 1
    goto label_0x14673c;                                        // 0x0014670c: b 0x14673c
    local_4 = v0;                                               // 0x00146710: sw $v0, 4($sp)
label_0x146714:
    v0 = *(int32_t*)((s6) + 0x10);                              // 0x00146714: lw $v0, 0x10($s6)
    a1 = 0x180;                                                 // 0x00146718: addiu $a1, $zero, 0x180
    v1 = 0xc0;                                                  // 0x0014671c: addiu $v1, $zero, 0xc0
    a0 = a0 >> 4;                                               // 0x00146720: sra $a0, $a0, 4
    v0 = v0 >> 1;                                               // 0x00146724: sra $v0, $v0, 1
    v1 = 2;                                                     // 0x00146730: addiu $v1, $zero, 2
    local_4 = v1;                                               // 0x00146734: sw $v1, 4($sp)
    s4 = s5 >> 4;                                               // 0x00146738: sra $s4, $s5, 4
label_0x14673c:
    a2 = local_4;                                               // 0x0014673c: lw $a2, 4($sp)
    if (a2 == 0) goto label_0x1468c8;                           // 0x00146740: beqz $a2, 0x1468c8
    a2 = *(int32_t*)((s6) + 0xc);                               // 0x00146748: lw $a2, 0xc($s6)
    /* nop */                                                   // 0x0014674c: nop 
label_0x146750:
    s1 = local_8;                                               // 0x00146750: lw $s1, 8($sp)
    if (a2 <= 0) goto label_0x146894;                           // 0x00146754: blez $a2, 0x146894
    s7 = a1 + 1;                                                // 0x0014675c: addiu $s7, $a1, 1
label_0x146760:
    func_0011d378();  // 0x11d320                                // 0x00146760: jal 0x11d320
    /* nop */                                                   // 0x00146764: nop 
    v1 = 0x1000 << 16;                                          // 0x00146768: lui $v1, 0x1000
    a1 = 0x1000 << 16;                                          // 0x0014676c: lui $a1, 0x1000
    v1 = v1 | 0xd480;                                           // 0x00146770: ori $v1, $v1, 0xd480
    a1 = a1 | 0xd410;                                           // 0x00146774: ori $a1, $a1, 0xd410
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00146778: sw $zero, 0($v1)
    a0 = 0x1000 << 16;                                          // 0x0014677c: lui $a0, 0x1000
    g_10000000 = s2;  // Global at 0x10000000                   // 0x00146780: sw $s2, 0($a1)
    a0 = a0 | 0xd420;                                           // 0x00146784: ori $a0, $a0, 0xd420
    a1 = 0x1000 << 16;                                          // 0x00146788: lui $a1, 0x1000
    g_10000000 = s4;  // Global at 0x10000000                   // 0x0014678c: sw $s4, 0($a0)
    a1 = a1 | 0xd400;                                           // 0x00146790: ori $a1, $a1, 0xd400
    v1 = 0x101;                                                 // 0x00146794: addiu $v1, $zero, 0x101
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00146798: sw $v1, 0($a1)
    if (v0 == 0) goto label_0x1467b0;                           // 0x0014679c: beqz $v0, 0x1467b0
    v1 = 0x1000 << 16;                                          // 0x001467a0: lui $v1, 0x1000
    func_0011d390();  // 0x11d378                                // 0x001467a4: jal 0x11d378
    /* nop */                                                   // 0x001467a8: nop 
    v1 = 0x1000 << 16;                                          // 0x001467ac: lui $v1, 0x1000
label_0x1467b0:
    s3 = s2 + s5;                                               // 0x001467b0: addu $s3, $s2, $s5
    s0 = s0 + 1;                                                // 0x001467b4: addiu $s0, $s0, 1
    s2 = s1 + fp;                                               // 0x001467b8: addu $s2, $s1, $fp
    v1 = v1 | 0xd400;                                           // 0x001467bc: ori $v1, $v1, 0xd400
label_0x1467c0:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001467c0: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x001467c4: andi $v0, $v0, 0x100
    /* nop */                                                   // 0x001467c8: nop 
    /* nop */                                                   // 0x001467cc: nop 
    /* nop */                                                   // 0x001467d0: nop 
    if (v0 != 0) goto label_0x1467c0;                           // 0x001467d4: bnez $v0, 0x1467c0
    /* nop */                                                   // 0x001467d8: nop 
    func_0011d378();  // 0x11d320                                // 0x001467dc: jal 0x11d320
    /* nop */                                                   // 0x001467e0: nop 
    v1 = 0x1000 << 16;                                          // 0x001467e4: lui $v1, 0x1000
    a1 = 0x1000 << 16;                                          // 0x001467e8: lui $a1, 0x1000
    v1 = v1 | 0xd080;                                           // 0x001467ec: ori $v1, $v1, 0xd080
    a1 = a1 | 0xd010;                                           // 0x001467f0: ori $a1, $a1, 0xd010
    g_10000000 = 0;  // Global at 0x10000000                    // 0x001467f4: sw $zero, 0($v1)
    a0 = 0x1000 << 16;                                          // 0x001467f8: lui $a0, 0x1000
    g_10000000 = s1;  // Global at 0x10000000                   // 0x001467fc: sw $s1, 0($a1)
    a0 = a0 | 0xd020;                                           // 0x00146800: ori $a0, $a0, 0xd020
    a1 = 0x1000 << 16;                                          // 0x00146804: lui $a1, 0x1000
    g_10000000 = s4;  // Global at 0x10000000                   // 0x00146808: sw $s4, 0($a0)
    a1 = a1 | 0xd000;                                           // 0x0014680c: ori $a1, $a1, 0xd000
    v1 = 0x100;                                                 // 0x00146810: addiu $v1, $zero, 0x100
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00146814: sw $v1, 0($a1)
    if (v0 == 0) goto label_0x14682c;                           // 0x00146818: beqz $v0, 0x14682c
    v1 = 0x1000 << 16;                                          // 0x0014681c: lui $v1, 0x1000
    func_0011d390();  // 0x11d378                                // 0x00146820: jal 0x11d378
    /* nop */                                                   // 0x00146824: nop 
    v1 = 0x1000 << 16;                                          // 0x00146828: lui $v1, 0x1000
label_0x14682c:
    a2 = *(int32_t*)((s6) + 0xc);                               // 0x0014682c: lw $a2, 0xc($s6)
    v1 = v1 | 0xd000;                                           // 0x00146830: ori $v1, $v1, 0xd000
    /* nop */                                                   // 0x00146834: nop 
label_0x146838:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00146838: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x0014683c: andi $v0, $v0, 0x100
    /* nop */                                                   // 0x00146840: nop 
    /* nop */                                                   // 0x00146844: nop 
    /* nop */                                                   // 0x00146848: nop 
    if (v0 != 0) goto label_0x146838;                           // 0x0014684c: bnez $v0, 0x146838
    /* nop */                                                   // 0x00146850: nop 
    v1 = 0x1000 << 16;                                          // 0x00146854: lui $v1, 0x1000
    v1 = v1 | 0xd020;                                           // 0x00146858: ori $v1, $v1, 0xd020
    /* nop */                                                   // 0x0014685c: nop 
label_0x146860:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00146860: lw $v0, 0($v1)
    /* nop */                                                   // 0x00146864: nop 
    /* nop */                                                   // 0x00146868: nop 
    /* nop */                                                   // 0x0014686c: nop 
    /* nop */                                                   // 0x00146870: nop 
    if (v0 != 0) goto label_0x146860;                           // 0x00146874: bnez $v0, 0x146860
    /* nop */                                                   // 0x00146878: nop 
    v0 = (s0 < a2) ? 1 : 0;                                     // 0x00146880: slt $v0, $s0, $a2
    if (v0 != 0) goto label_0x146760;                           // 0x00146884: bnez $v0, 0x146760
    goto label_0x14689c;                                        // 0x0014688c: b 0x14689c
    a3 = local_0;                                               // 0x00146890: lw $a3, 0($sp)
label_0x146894:
    s7 = a1 + 1;                                                // 0x00146894: addiu $s7, $a1, 1
    a3 = local_0;                                               // 0x00146898: lw $a3, 0($sp)
label_0x14689c:
    v1 = 0xc0;                                                  // 0x001468a0: addiu $v1, $zero, 0xc0
    v0 = *(int32_t*)((a3) + 0xfc);                              // 0x001468a4: lw $v0, 0xfc($a3)
    a3 = local_4;                                               // 0x001468a8: lw $a3, 4($sp)
    a0 = (a1 < a3) ? 1 : 0;                                     // 0x001468ac: slt $a0, $a1, $a3
    a3 = local_8;                                               // 0x001468b0: lw $a3, 8($sp)
    /* mtlo $a3 */                                              // 0x001468b4
    /* madd $v0, $v1 */                                         // 0x001468b8: madd $v0, $v1
    /* mflo $a3 */                                              // 0x001468bc
    if (a0 != 0) goto label_0x146750;                           // 0x001468c0: bnez $a0, 0x146750
    local_8 = a3;                                               // 0x001468c4: sw $a3, 8($sp)
label_0x1468c8:
    return;                                                     // 0x001468f0: jr $ra
    sp = sp + 0xb0;                                             // 0x001468f4: addiu $sp, $sp, 0xb0
}