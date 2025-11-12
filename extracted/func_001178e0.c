void func_001178e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001178e0: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x001178f4: jal 0x11d320
    v1 = 0x25 << 16;                                            // 0x001178fc: lui $v1, 0x25
    *(uint32_t*)(s1) = s0;                                      // 0x00117900: sw $s0, 0($s1)
    v1 = v1 + -0x1ec0;                                          // 0x00117904: addiu $v1, $v1, -0x1ec0
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00117908: sw $zero, 4($s1)
    v0 = g_0024e168;  // Global at 0x0024e168                   // 0x0011790c: lw $v0, 0x28($v1)
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x00117910: sw $zero, 8($s1)
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x00117914: sw $zero, 0xc($s1)
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x00117918: sw $zero, 0x10($s1)
    if (v0 != 0) goto label_0x11792c;                           // 0x0011791c: bnez $v0, 0x11792c
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x00117920: sw $zero, 0x14($s1)
    goto label_0x117960;                                        // 0x00117924: b 0x117960
    g_0024e168 = s1;  // Global at 0x0024e168                   // 0x00117928: sw $s1, 0x28($v1)
label_0x11792c:
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x00117930: lw $v1, 0x14($a0)
    /* beqzl $v1, 0x117960 */                                   // 0x00117934: beqzl $v1, 0x117960
    *(uint32_t*)((a0) + 0x14) = s1;                             // 0x00117938: sw $s1, 0x14($a0)
    /* nop */                                                   // 0x0011793c: nop 
label_0x117940:
    v0 = *(int32_t*)((a0) + 0x14);                              // 0x00117944: lw $v0, 0x14($a0)
    /* nop */                                                   // 0x0011794c: nop 
    /* nop */                                                   // 0x00117950: nop 
    if (v0 != 0) goto label_0x117940;                           // 0x00117954: bnez $v0, 0x117940
    /* nop */                                                   // 0x00117958: nop 
    *(uint32_t*)((a0) + 0x14) = s1;                             // 0x0011795c: sw $s1, 0x14($a0)
label_0x117960:
    return func_0011d390();  // Tail call                        // 0x0011796c: j 0x11d378
    sp = sp + 0x30;                                             // 0x00117970: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00117974: nop 
    sp = sp + -0x80;                                            // 0x00117978: addiu $sp, $sp, -0x80
    func_0011d378();  // 0x11d320                                // 0x001179b4: jal 0x11d320
    *(uint32_t*)((s5) + 0x3c) = 0;                              // 0x001179bc: sw $zero, 0x3c($s5)
    *(uint32_t*)((s5) + 0x38) = 0;                              // 0x001179c0: sw $zero, 0x38($s5)
    *(uint32_t*)(s5) = s0;                                      // 0x001179c4: sw $s0, 0($s5)
    v0 = *(int32_t*)((s6) + 8);                                 // 0x001179c8: lw $v0, 8($s6)
    *(uint32_t*)((s5) + 4) = s1;                                // 0x001179cc: sw $s1, 4($s5)
    *(uint32_t*)((s5) + 8) = s2;                                // 0x001179d0: sw $s2, 8($s5)
    *(uint32_t*)((s5) + 0x10) = s3;                             // 0x001179d4: sw $s3, 0x10($s5)
    *(uint32_t*)((s5) + 0x14) = s4;                             // 0x001179d8: sw $s4, 0x14($s5)
    if (v0 != 0) goto label_0x1179ec;                           // 0x001179dc: bnez $v0, 0x1179ec
    *(uint32_t*)((s5) + 0x40) = s6;                             // 0x001179e0: sw $s6, 0x40($s5)
    goto label_0x117a20;                                        // 0x001179e4: b 0x117a20
    *(uint32_t*)((s6) + 8) = s5;                                // 0x001179e8: sw $s5, 8($s6)
label_0x1179ec:
    v1 = *(int32_t*)((a0) + 0x38);                              // 0x001179f0: lw $v1, 0x38($a0)
    /* beqzl $v1, 0x117a20 */                                   // 0x001179f4: beqzl $v1, 0x117a20
    *(uint32_t*)((a0) + 0x38) = s5;                             // 0x001179f8: sw $s5, 0x38($a0)
    /* nop */                                                   // 0x001179fc: nop 
label_0x117a00:
    v0 = *(int32_t*)((a0) + 0x38);                              // 0x00117a04: lw $v0, 0x38($a0)
    /* nop */                                                   // 0x00117a0c: nop 
    /* nop */                                                   // 0x00117a10: nop 
    if (v0 != 0) goto label_0x117a00;                           // 0x00117a14: bnez $v0, 0x117a00
    /* nop */                                                   // 0x00117a18: nop 
    *(uint32_t*)((a0) + 0x38) = s5;                             // 0x00117a1c: sw $s5, 0x38($a0)
label_0x117a20:
    return func_0011d390();  // Tail call                        // 0x00117a40: j 0x11d378
    sp = sp + 0x80;                                             // 0x00117a44: addiu $sp, $sp, 0x80
    sp = sp + -0x40;                                            // 0x00117a48: addiu $sp, $sp, -0x40
    func_0011d378();  // 0x11d320                                // 0x00117a60: jal 0x11d320
    s0 = *(int32_t*)((s2) + 8);                                 // 0x00117a68: lw $s0, 8($s2)
    if (s0 != s1) goto label_0x117a80;                          // 0x00117a6c: bne $s0, $s1, 0x117a80
    /* nop */                                                   // 0x00117a70: nop 
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x00117a74: lw $v0, 0x38($s0)
    goto label_0x117ab8;                                        // 0x00117a78: b 0x117ab8
    *(uint32_t*)((s2) + 8) = v0;                                // 0x00117a7c: sw $v0, 8($s2)
label_0x117a80:
    if (s0 == 0) goto label_0x117ab8;                           // 0x00117a80: beqz $s0, 0x117ab8
    /* nop */                                                   // 0x00117a84: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x00117a88: lw $v1, 0x38($s0)
    if (v1 == s1) goto label_0x117ab4;                          // 0x00117a8c: beql $v1, $s1, 0x117ab4
    v0 = *(int32_t*)((s1) + 0x38);                              // 0x00117a90: lw $v0, 0x38($s1)
    /* nop */                                                   // 0x00117a94: nop 
label_0x117a98:
    if (s0 == 0) goto label_0x117ab8;                           // 0x00117a9c: beqz $s0, 0x117ab8
    /* nop */                                                   // 0x00117aa0: nop 
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x00117aa4: lw $v0, 0x38($s0)
    if (v0 != s1) goto label_0x117a98;                          // 0x00117aa8: bne $v0, $s1, 0x117a98
    v0 = *(int32_t*)((s1) + 0x38);                              // 0x00117ab0: lw $v0, 0x38($s1)
label_0x117ab4:
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x00117ab4: sw $v0, 0x38($s0)
label_0x117ab8:
    func_0011d390();  // 0x11d378                                // 0x00117ab8: jal 0x11d378
    /* nop */                                                   // 0x00117abc: nop 
    return;                                                     // 0x00117ad4: jr $ra
    sp = sp + 0x40;                                             // 0x00117ad8: addiu $sp, $sp, 0x40
}