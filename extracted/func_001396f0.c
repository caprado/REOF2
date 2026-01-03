void func_001396f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001396f0: addiu $sp, $sp, -0x10
    a2 = 0x48;                                                  // 0x001396fc: addiu $a2, $zero, 0x48
    return func_00107d30();  // Tail call                        // 0x00139704: j 0x107c70
    sp = sp + 0x10;                                             // 0x00139708: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013970c: nop 
    sp = sp + -0x30;                                            // 0x00139710: addiu $sp, $sp, -0x30
    if (s1 != 0) goto label_0x139740;                           // 0x00139728: bnez $s1, 0x139740
    a1 = 0x22 << 16;                                            // 0x00139730: lui $a1, 0x22
    goto label_0x139778;                                        // 0x00139734: b 0x139778
    a1 = &str_00225390;  // "E0092909:rw is illigal.(dvCiOpen)" // 0x00139738: addiu $a1, $a1, 0x5390
    /* nop */                                                   // 0x0013973c: nop 
label_0x139740:
    if (a2 == 0) goto label_0x139758;                           // 0x00139740: beqz $a2, 0x139758
    a1 = 0x22 << 16;                                            // 0x00139744: lui $a1, 0x22
    goto label_0x139778;                                        // 0x0013974c: b 0x139778
    a1 = &str_002253b8;  // "E0092910:not enough handle resource.(dvCiOpen)" // 0x00139750: addiu $a1, $a1, 0x53b8
    /* nop */                                                   // 0x00139754: nop 
label_0x139758:
    func_001396b8();  // 1396b8                                // 0x00139758: jal 0x1396b8
    /* nop */                                                   // 0x0013975c: nop 
    if (s0 != 0) goto label_0x139788;                           // 0x00139764: bnez $s0, 0x139788
    s2 = s0 + 0x20;                                             // 0x00139768: addiu $s2, $s0, 0x20
    a1 = 0x22 << 16;                                            // 0x0013976c: lui $a1, 0x22
    a1 = &str_002253e0;  // "DVCI: File cache was not hit. \\"  // 0x00139774: addiu $a1, $a1, 0x53e0
label_0x139778:
    func_001392b8();  // 1392b8                                // 0x00139778: jal 0x1392b8
    /* nop */                                                   // 0x0013977c: nop 
    goto label_0x139878;                                        // 0x00139780: b 0x139878
label_0x139788:
    func_0013a6c0();  // 13a6c0                                // 0x0013978c: jal 0x13a6c0
    a1 = *(int32_t*)((s0) + 0x24);                              // 0x00139794: lw $a1, 0x24($s0)
    if (a1 != 0) goto label_0x139828;                           // 0x00139798: bnez $a1, 0x139828
    v0 = 0x20 << 16;                                            // 0x001397a0: lui $v0, 0x20
    s1 = v0 + 0x3da0;                                           // 0x001397a8: addiu $s1, $v0, 0x3da0
    func_00139f08();  // 139f08                                // 0x001397ac: jal 0x139f08
    v0 = 0x20 << 16;                                            // 0x001397b4: lui $v0, 0x20
    a0 = g_00203ee8;  // Global at 0x00203ee8                   // 0x001397b8: lw $a0, 0x3ee8($v0)
    v1 = 2;                                                     // 0x001397bc: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1397d4;                          // 0x001397c0: beq $a0, $v1, 0x1397d4
    a0 = 0x22 << 16;                                            // 0x001397c8: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x001397cc: jal 0x116508
    a0 = &str_00225410;  // "E0092911:sceCdSearchFile fail.(dvCiOpen)" // 0x001397d0: addiu $a0, $a0, 0x5410
label_0x1397d4:
    func_00137ec8();  // 137ec8                                // 0x001397d4: jal 0x137ec8
    a0 = 0 | 0x8300;                                            // 0x001397d8: ori $a0, $zero, 0x8300
    func_00100d98();  // 100d98                                // 0x001397dc: jal 0x100d98
    func_00137ec8();  // 137ec8                                // 0x001397e4: jal 0x137ec8
    a0 = 0 | 0x8301;                                            // 0x001397e8: ori $a0, $zero, 0x8301
    func_001392e8();  // 1392e8                                // 0x001397f0: jal 0x1392e8
    /* bnezl $v0, 0x139820 */                                   // 0x001397f8: bnezl $v0, 0x139820
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x001397fc: sb $zero, 1($s0)
    a1 = 0x22 << 16;                                            // 0x00139800: lui $a1, 0x22
    func_001392b8();  // 1392b8                                // 0x00139808: jal 0x1392b8
    a1 = &str_00225438;  // "E0092912:handl is null."           // 0x0013980c: addiu $a1, $a1, 0x5438
    func_001396f0();  // 1396f0                                // 0x00139810: jal 0x1396f0
    goto label_0x139878;                                        // 0x00139818: b 0x139878
    goto label_0x139830;                                        // 0x00139820: b 0x139830
    a1 = *(int32_t*)((s0) + 0x24);                              // 0x00139824: lw $a1, 0x24($s0)
label_0x139828:
    v0 = 1;                                                     // 0x00139828: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x0013982c: sb $v0, 1($s0)
label_0x139830:
    v0 = a1 + 0x7ff;                                            // 0x00139830: addiu $v0, $a1, 0x7ff
    v1 = 1;                                                     // 0x00139834: addiu $v1, $zero, 1
    v0 = (unsigned)v0 >> 0xb;                                   // 0x00139838: srl $v0, $v0, 0xb
    a0 = 1;                                                     // 0x0013983c: addiu $a0, $zero, 1
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00139840: sw $v0, 8($s0)
    *(uint8_t*)(s0) = v1;                                       // 0x00139844: sb $v1, 0($s0)
    *(uint32_t*)((s0) + 4) = a1;                                // 0x00139848: sw $a1, 4($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x0013984c: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x00139850: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x10) = 0;                              // 0x00139854: sw $zero, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00139858: sw $zero, 0x14($s0)
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x0013985c: sb $zero, 2($s0)
    if (s3 != a0) goto label_0x139874;                          // 0x00139860: bne $s3, $a0, 0x139874
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x00139864: sw $zero, 0x1c($s0)
    v0 = 0x7fff << 16;                                          // 0x00139868: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x0013986c: ori $v0, $v0, 0xffff
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00139870: sw $v0, 8($s0)
label_0x139874:
label_0x139878:
    return;                                                     // 0x0013988c: jr $ra
    sp = sp + 0x30;                                             // 0x00139890: addiu $sp, $sp, 0x30
}