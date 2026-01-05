void func_0015b368() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015b368: addiu $sp, $sp, -0x20
    v0 = 8;                                                     // 0x0015b36c: addiu $v0, $zero, 8
    if (s2 != v0) goto label_0x15b3a0;                          // 0x0015b38c: bne $s2, $v0, 0x15b3a0
    if (s1 != 0) goto label_0x15b3a0;                           // 0x0015b394: bnez $s1, 0x15b3a0
    v0 = 0x16 << 16;                                            // 0x0015b398: lui $v0, 0x16
    s1 = v0 + -0x4ca0;                                          // 0x0015b39c: addiu $s1, $v0, -0x4ca0
label_0x15b3a0:
    if (s0 != 0) goto label_0x15b3c0;                           // 0x0015b3a0: bnez $s0, 0x15b3c0
    /* nop */                                                   // 0x0015b3a4: nop 
    func_0015b420();  // 15b420                                // 0x0015b3a8: jal 0x15b420
    v0 = 0x25 << 16;                                            // 0x0015b3b0: lui $v0, 0x25
    goto label_0x15b3f4;                                        // 0x0015b3b4: b 0x15b3f4
    a0 = v0 + 0x63f0;                                           // 0x0015b3b8: addiu $a0, $v0, 0x63f0
    /* nop */                                                   // 0x0015b3bc: nop 
label_0x15b3c0:
    func_0015b470();  // 15b470                                // 0x0015b3c0: jal 0x15b470
    a1 = 0xff03 << 16;                                          // 0x0015b3c8: lui $a1, 0xff03
    if (v0 == 0) goto label_0x15b3f0;                           // 0x0015b3cc: beqz $v0, 0x15b3f0
    a1 = a1 | 0x202;                                            // 0x0015b3d8: ori $a1, $a1, 0x202
    return func_00158c48();  // Tail call                        // 0x0015b3e8: j 0x158bf8
    sp = sp + 0x20;                                             // 0x0015b3ec: addiu $sp, $sp, 0x20
label_0x15b3f0:
    a0 = s0 + 0x190;                                            // 0x0015b3f0: addiu $a0, $s0, 0x190
label_0x15b3f4:
    v1 = s2 << 2;                                               // 0x0015b3f4: sll $v1, $s2, 2
    v1 = v1 + a0;                                               // 0x0015b3fc: addu $v1, $v1, $a0
    *(uint32_t*)(v1) = s1;                                      // 0x0015b404: sw $s1, 0($v1)
    return;                                                     // 0x0015b414: jr $ra
    sp = sp + 0x20;                                             // 0x0015b418: addiu $sp, $sp, 0x20
}