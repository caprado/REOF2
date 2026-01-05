void func_0013f190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013f190: addiu $sp, $sp, -0x30
    func_0013ef18();  // 13ef18                                // 0x0013f1b4: jal 0x13ef18
    if (s2 != 0) goto label_0x13f1d0;                           // 0x0013f1bc: bnez $s2, 0x13f1d0
    v0 = 1;                                                     // 0x0013f1c0: addiu $v0, $zero, 1
    *(uint32_t*)(s0) = 0;                                       // 0x0013f1c4: sw $zero, 0($s0)
    goto label_0x13f230;                                        // 0x0013f1c8: b 0x13f230
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0013f1cc: sw $zero, 4($s0)
label_0x13f1d0:
    if (s2 != v0) goto label_0x13f218;                          // 0x0013f1d0: bnel $s2, $v0, 0x13f218
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x0013f1d4: lw $v0, 0x1c($s1)
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x0013f1d8: lw $v0, 0xc($s1)
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x0013f1dc: lw $a1, 0x14($s1)
    v1 = (v0 < s3) ? 1 : 0;                                     // 0x0013f1e0: slt $v1, $v0, $s3
    if (v1 == 0) v0 = s3;                                       // 0x0013f1e4: movz $v0, $s3, $v1
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0013f1e8: sw $v0, 4($s0)
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x0013f1ec: lw $a0, 0x10($s1)
    v1 = *(int32_t*)((s1) + 0xc);                               // 0x0013f1f0: lw $v1, 0xc($s1)
    v0 = a0 + v0;                                               // 0x0013f1f4: addu $v0, $a0, $v0
    a1 = a1 + a0;                                               // 0x0013f1f8: addu $a1, $a1, $a0
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x0013f1fc: sw $v0, 0x10($s1)
    *(uint32_t*)(s0) = a1;                                      // 0x0013f200: sw $a1, 0($s0)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0013f204: lw $v0, 4($s0)
    v1 = v1 - v0;                                               // 0x0013f208: subu $v1, $v1, $v0
    goto label_0x13f230;                                        // 0x0013f20c: b 0x13f230
    *(uint32_t*)((s1) + 0xc) = v1;                              // 0x0013f210: sw $v1, 0xc($s1)
    /* nop */                                                   // 0x0013f214: nop 
label_0x13f218:
    *(uint32_t*)(s0) = 0;                                       // 0x0013f218: sw $zero, 0($s0)
    if (v0 == 0) goto label_0x13f230;                           // 0x0013f21c: beqz $v0, 0x13f230
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0013f220: sw $zero, 4($s0)
    a0 = *(int32_t*)((s1) + 0x20);                              // 0x0013f224: lw $a0, 0x20($s1)
    /* call function at address in v0 */                        // 0x0013f228: jalr $v0
    a1 = -3;                                                    // 0x0013f22c: addiu $a1, $zero, -3
label_0x13f230:
    return func_0013ef80();  // Tail call                        // 0x0013f244: j 0x13ef30
    sp = sp + 0x30;                                             // 0x0013f248: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0013f24c: nop 
    sp = sp + -0x20;                                            // 0x0013f250: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0013f26c: lw $v0, 4($s0)
    if (v0 <= 0) goto label_0x13f2d0;                           // 0x0013f270: blez $v0, 0x13f2d0
    v0 = *(int32_t*)(s0);                                       // 0x0013f278: lw $v0, 0($s0)
    /* beqzl $v0, 0x13f2d4 */                                   // 0x0013f27c: beqzl $v0, 0x13f2d4
    func_0013ef18();  // 13ef18                                // 0x0013f284: jal 0x13ef18
    /* nop */                                                   // 0x0013f288: nop 
    if (s1 == 0) goto label_0x13f2b8;                           // 0x0013f28c: beqz $s1, 0x13f2b8
    v0 = 1;                                                     // 0x0013f290: addiu $v0, $zero, 1
    if (s1 == v0) goto label_0x13f2bc;                          // 0x0013f294: beql $s1, $v0, 0x13f2bc
    v0 = *(int32_t*)((s2) + 0x1c);                              // 0x0013f29c: lw $v0, 0x1c($s2)
    *(uint32_t*)(s0) = 0;                                       // 0x0013f2a0: sw $zero, 0($s0)
    if (v0 == 0) goto label_0x13f2b8;                           // 0x0013f2a4: beqz $v0, 0x13f2b8
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0013f2a8: sw $zero, 4($s0)
    a0 = *(int32_t*)((s2) + 0x20);                              // 0x0013f2ac: lw $a0, 0x20($s2)
    /* call function at address in v0 */                        // 0x0013f2b0: jalr $v0
    a1 = -3;                                                    // 0x0013f2b4: addiu $a1, $zero, -3
label_0x13f2b8:
label_0x13f2bc:
    return func_0013ef80();  // Tail call                        // 0x0013f2c8: j 0x13ef30
    sp = sp + 0x20;                                             // 0x0013f2cc: addiu $sp, $sp, 0x20
label_0x13f2d0:
    return;                                                     // 0x0013f2e0: jr $ra
    sp = sp + 0x20;                                             // 0x0013f2e4: addiu $sp, $sp, 0x20
}