void func_0017d7b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017d7b0: addiu $sp, $sp, -0x10
    goto label_0x17d7c8;                                        // 0x0017d7bc: j 0x17d7c8
    sp = sp + 0x10;                                             // 0x0017d7c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017d7c4: nop 
label_0x17d7c8:
    v0 = 0x8000 << 16;                                          // 0x0017d7c8: lui $v0, 0x8000
    v1 = 0x7fff << 16;                                          // 0x0017d7cc: lui $v1, 0x7fff
    a0 = a1 ^ v0;                                               // 0x0017d7d0: xor $a0, $a1, $v0
    v0 = a2 ^ v0;                                               // 0x0017d7d4: xor $v0, $a2, $v0
    v1 = v1 | 0xffff;                                           // 0x0017d7d8: ori $v1, $v1, 0xffff
    t0 = 8;                                                     // 0x0017d7dc: addiu $t0, $zero, 8
    if (v0 == 0) a2 = v1;                                       // 0x0017d7e0: movz $a2, $v1, $v0
    v0 = a3 + 0x20;                                             // 0x0017d7e4: addiu $v0, $a3, 0x20
    if (a0 == 0) a1 = v1;                                       // 0x0017d7e8: movz $a1, $v1, $a0
    /* nop */                                                   // 0x0017d7ec: nop 
label_0x17d7f0:
    t0 = t0 + -1;                                               // 0x0017d7f0: addiu $t0, $t0, -1
    g_80000000 = 0;  // Global at 0x80000000                    // 0x0017d7f4: sw $zero, 0($v0)
    /* nop */                                                   // 0x0017d7f8: nop 
    /* nop */                                                   // 0x0017d7fc: nop 
    /* nop */                                                   // 0x0017d800: nop 
    if (t0 >= 0) goto label_0x17d7f0;                           // 0x0017d804: bgez $t0, 0x17d7f0
    v0 = v0 + -4;                                               // 0x0017d808: addiu $v0, $v0, -4
    v0 = a3 + 0x24;                                             // 0x0017d80c: addiu $v0, $a3, 0x24
    t0 = 7;                                                     // 0x0017d810: addiu $t0, $zero, 7
    /* nop */                                                   // 0x0017d814: nop 
label_0x17d818:
    t0 = t0 + -1;                                               // 0x0017d818: addiu $t0, $t0, -1
    g_7ffffffc = a1;  // Global at 0x7ffffffc                   // 0x0017d81c: sw $a1, 0($v0)
    /* nop */                                                   // 0x0017d820: nop 
    /* nop */                                                   // 0x0017d824: nop 
    /* nop */                                                   // 0x0017d828: nop 
    if (t0 >= 0) goto label_0x17d818;                           // 0x0017d82c: bgez $t0, 0x17d818
    v0 = v0 + 4;                                                // 0x0017d830: addiu $v0, $v0, 4
    if (a1 != a2) goto label_0x17d868;                          // 0x0017d834: bne $a1, $a2, 0x17d868
    t0 = 0x11;                                                  // 0x0017d838: addiu $t0, $zero, 0x11
    v1 = a3 + 0x44;                                             // 0x0017d83c: addiu $v1, $a3, 0x44
label_0x17d840:
    t0 = t0 + 1;                                                // 0x0017d840: addiu $t0, $t0, 1
    g_7fff0000 = a1;  // Global at 0x7fff0000                   // 0x0017d844: sw $a1, 0($v1)
    v0 = (t0 < 0xe0) ? 1 : 0;                                   // 0x0017d848: slti $v0, $t0, 0xe0
    /* nop */                                                   // 0x0017d84c: nop 
    /* nop */                                                   // 0x0017d850: nop 
    if (v0 != 0) goto label_0x17d840;                           // 0x0017d854: bnez $v0, 0x17d840
    v1 = v1 + 4;                                                // 0x0017d858: addiu $v1, $v1, 4
    goto label_0x17d8ac;                                        // 0x0017d85c: b 0x17d8ac
    v0 = a3 + 0x380;                                            // 0x0017d860: addiu $v0, $a3, 0x380
    /* nop */                                                   // 0x0017d864: nop 
label_0x17d868:
    t2 = a2 - a1;                                               // 0x0017d868: subu $t2, $a2, $a1
    t3 = 0xcf;                                                  // 0x0017d86c: addiu $t3, $zero, 0xcf
    t1 = a3 + 0x44;                                             // 0x0017d870: addiu $t1, $a3, 0x44
    /* nop */                                                   // 0x0017d874: nop 
label_0x17d878:
    /* divide: t2 / t3 -> hi:lo */                              // 0x0017d878: divu $zero, $t2, $t3
    v1 = t0 + -0x11;                                            // 0x0017d87c: addiu $v1, $t0, -0x11
    t0 = t0 + 1;                                                // 0x0017d880: addiu $t0, $t0, 1
    /* beqzl $t3, 0x17d88c */                                   // 0x0017d884: beqzl $t3, 0x17d88c
    /* break (trap) */                                          // 0x0017d888: break 0, 7
    a0 = (t0 < 0xe0) ? 1 : 0;                                   // 0x0017d88c: slti $a0, $t0, 0xe0
    /* mflo $v0 */                                              // 0x0017d890
    v0 = t4 + a1;                                               // 0x0017d898: addu $v0, $t4, $a1
    *(uint32_t*)(t1) = v0;                                      // 0x0017d89c: sw $v0, 0($t1)
    if (a0 != 0) goto label_0x17d878;                           // 0x0017d8a0: bnez $a0, 0x17d878
    t1 = t1 + 4;                                                // 0x0017d8a4: addiu $t1, $t1, 4
    v0 = a3 + 0x380;                                            // 0x0017d8a8: addiu $v0, $a3, 0x380
label_0x17d8ac:
    t0 = 0xf;                                                   // 0x0017d8ac: addiu $t0, $zero, 0xf
label_0x17d8b0:
    t0 = t0 + -1;                                               // 0x0017d8b0: addiu $t0, $t0, -1
    g_80000000 = a2;  // Global at 0x80000000                   // 0x0017d8b4: sw $a2, 0($v0)
    /* nop */                                                   // 0x0017d8b8: nop 
    /* nop */                                                   // 0x0017d8bc: nop 
    /* nop */                                                   // 0x0017d8c0: nop 
    if (t0 >= 0) goto label_0x17d8b0;                           // 0x0017d8c4: bgez $t0, 0x17d8b0
    v0 = v0 + 4;                                                // 0x0017d8c8: addiu $v0, $v0, 4
    v0 = 0x7fff << 16;                                          // 0x0017d8cc: lui $v0, 0x7fff
    a3 = a3 + 0x3c0;                                            // 0x0017d8d0: addiu $a3, $a3, 0x3c0
    v0 = v0 | 0xffff;                                           // 0x0017d8d4: ori $v0, $v0, 0xffff
    t0 = 0xf;                                                   // 0x0017d8d8: addiu $t0, $zero, 0xf
    /* nop */                                                   // 0x0017d8dc: nop 
label_0x17d8e0:
    t0 = t0 + -1;                                               // 0x0017d8e0: addiu $t0, $t0, -1
    *(uint32_t*)(a3) = v0;                                      // 0x0017d8e4: sw $v0, 0($a3)
    /* nop */                                                   // 0x0017d8e8: nop 
    /* nop */                                                   // 0x0017d8ec: nop 
    /* nop */                                                   // 0x0017d8f0: nop 
    if (t0 >= 0) goto label_0x17d8e0;                           // 0x0017d8f4: bgez $t0, 0x17d8e0
    a3 = a3 + 4;                                                // 0x0017d8f8: addiu $a3, $a3, 4
    return;                                                     // 0x0017d8fc: jr $ra
    /* nop */                                                   // 0x0017d900: nop 
}