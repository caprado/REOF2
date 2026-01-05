void func_0017d628() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_8;
    
    sp = sp + -0x50;                                            // 0x0017d628: addiu $sp, $sp, -0x50
    v0 = 0x23 << 16;                                            // 0x0017d62c: lui $v0, 0x23
    v1 = 0x23 << 16;                                            // 0x0017d630: lui $v1, 0x23
    s3 = &str_00229cd0;  // "ZMVFRM"                            // 0x0017d638: addiu $s3, $v0, -0x6330
    a1 = &str_00229ce0;  // "ZMFDATA"                           // 0x0017d658: addiu $a1, $v1, -0x6320
    t0 = sp + 4;                                                // 0x0017d660: addiu $t0, $sp, 4
    func_0017d730();  // 17d730                                // 0x0017d66c: jal 0x17d730
    a1 = 0x23 << 16;                                            // 0x0017d674: lui $a1, 0x23
    v0 = local_0;                                               // 0x0017d678: lw $v0, 0($sp)
    v1 = 0x7fff << 16;                                          // 0x0017d67c: lui $v1, 0x7fff
    a2 = sp + 8;                                                // 0x0017d680: addiu $a2, $sp, 8
    a1 = a1 + -0x6318;                                          // 0x0017d684: addiu $a1, $a1, -0x6318
    v1 = v1 | 0xffff;                                           // 0x0017d688: ori $v1, $v1, 0xffff
    if (v0 != 0) goto label_0x17d6a0;                           // 0x0017d68c: bnez $v0, 0x17d6a0
    *(uint32_t*)(s0) = 0;                                       // 0x0017d694: sw $zero, 0($s0)
    goto label_0x17d710;                                        // 0x0017d698: b 0x17d710
    *(uint32_t*)(s2) = v1;                                      // 0x0017d69c: sw $v1, 0($s2)
label_0x17d6a0:
    func_0010a570();  // 10a570                                // 0x0017d6a0: jal 0x10a570
    /* nop */                                                   // 0x0017d6a4: nop 
    a1 = 0x23 << 16;                                            // 0x0017d6a8: lui $a1, 0x23
    a1 = &str_00229cf0;  // "%x %x %x"                          // 0x0017d6b4: addiu $a1, $a1, -0x6310
    t0 = sp + 4;                                                // 0x0017d6b8: addiu $t0, $sp, 4
    func_0017d730();  // 17d730                                // 0x0017d6bc: jal 0x17d730
    a1 = 0x23 << 16;                                            // 0x0017d6c4: lui $a1, 0x23
    v1 = local_0;                                               // 0x0017d6c8: lw $v1, 0($sp)
    v0 = 0x7fff << 16;                                          // 0x0017d6cc: lui $v0, 0x7fff
    a1 = &str_00229cf8;  // "AE201314: SFXZ_SetZclip : zclip is invalid." // 0x0017d6d0: addiu $a1, $a1, -0x6308
    a2 = sp + 0xc;                                              // 0x0017d6d4: addiu $a2, $sp, 0xc
    a3 = sp + 0x10;                                             // 0x0017d6d8: addiu $a3, $sp, 0x10
    t0 = sp + 0x14;                                             // 0x0017d6dc: addiu $t0, $sp, 0x14
    if (v1 != 0) goto label_0x17d6f0;                           // 0x0017d6e0: bnez $v1, 0x17d6f0
    v0 = v0 | 0xffff;                                           // 0x0017d6e4: ori $v0, $v0, 0xffff
    goto label_0x17d710;                                        // 0x0017d6e8: b 0x17d710
    *(uint32_t*)(s0) = v0;                                      // 0x0017d6ec: sw $v0, 0($s0)
label_0x17d6f0:
    a0 = local_8;                                               // 0x0017d6f0: lw $a0, 8($sp)
    /* multiply: a0 * s4 -> hi:lo */                            // 0x0017d6f4: mult $ac2, $a0, $s4
    func_0010a570();  // 10a570                                // 0x0017d6f8: jal 0x10a570
    a0 = v0 + v1;                                               // 0x0017d6fc: addu $a0, $v0, $v1
    v1 = local_10;                                              // 0x0017d700: lw $v1, 0x10($sp)
    v0 = local_14;                                              // 0x0017d704: lw $v0, 0x14($sp)
    *(uint32_t*)(s0) = v1;                                      // 0x0017d708: sw $v1, 0($s0)
    *(uint32_t*)(s2) = v0;                                      // 0x0017d70c: sw $v0, 0($s2)
label_0x17d710:
    return;                                                     // 0x0017d728: jr $ra
    sp = sp + 0x50;                                             // 0x0017d72c: addiu $sp, $sp, 0x50
}