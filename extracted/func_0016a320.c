void func_0016a320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_1c, local_4, local_8;
    
    sp = sp + -0x70;                                            // 0x0016a320: addiu $sp, $sp, -0x70
    *(uint32_t*)(s4) = 0;                                       // 0x0016a364: sw $zero, 0($s4)
    *(uint32_t*)(s3) = 0;                                       // 0x0016a368: sw $zero, 0($s3)
    s1 = *(int32_t*)((s2) + 0x1aec);                            // 0x0016a36c: lw $s1, 0x1aec($s2)
    func_00157c48();  // 157c48                                // 0x0016a370: jal 0x157c48
    a0 = *(int32_t*)(s1);                                       // 0x0016a374: lw $a0, 0($s1)
    if (v0 == 0) goto label_0x16a390;                           // 0x0016a378: beqz $v0, 0x16a390
    a1 = 0xff00 << 16;                                          // 0x0016a380: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x0016a384: jal 0x1698d0
    a1 = a1 | 0xd06;                                            // 0x0016a388: ori $a1, $a1, 0xd06
label_0x16a390:
    s0 = local_1c;                                              // 0x0016a390: lw $s0, 0x1c($sp)
    a3 = local_0;                                               // 0x0016a394: lw $a3, 0($sp)
    a2 = local_4;                                               // 0x0016a398: lw $a2, 4($sp)
    a1 = local_8;                                               // 0x0016a39c: lw $a1, 8($sp)
    if (s0 >= 0) goto label_0x16a3c0;                           // 0x0016a3a0: bgez $s0, 0x16a3c0
    t0 = local_14;                                              // 0x0016a3a4: lw $t0, 0x14($sp)
    a1 = 0xff00 << 16;                                          // 0x0016a3a8: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x0016a3b0: jal 0x1698d0
    a1 = a1 | 0xd0e;                                            // 0x0016a3b4: ori $a1, $a1, 0xd0e
    goto label_0x16a458;                                        // 0x0016a3b8: b 0x16a458
label_0x16a3c0:
    if (s0 != 0) goto label_0x16a3e0;                           // 0x0016a3c0: bnez $s0, 0x16a3e0
    v1 = (s5 < s0) ? 1 : 0;                                     // 0x0016a3c4: slt $v1, $s5, $s0
    v0 = 1;                                                     // 0x0016a3c8: addiu $v0, $zero, 1
    *(uint32_t*)(s4) = 0;                                       // 0x0016a3cc: sw $zero, 0($s4)
    *(uint32_t*)(s3) = v0;                                      // 0x0016a3d0: sw $v0, 0($s3)
    goto label_0x16a454;                                        // 0x0016a3d4: b 0x16a454
    /* nop */                                                   // 0x0016a3dc: nop 
label_0x16a3e0:
    if (v1 != 0) goto label_0x16a454;                           // 0x0016a3e0: bnez $v1, 0x16a454
    v0 = a3 << 2;                                               // 0x0016a3e8: sll $v0, $a3, 2
    v0 = v0 + s1;                                               // 0x0016a3ec: addu $v0, $v0, $s1
    a0 = g_0022fd44;  // Global at 0x0022fd44                   // 0x0016a3f0: lw $a0, -0x2bc($v0)
    /* beqzl $a0, 0x16a418 */                                   // 0x0016a3f4: beqzl $a0, 0x16a418
    v1 = a2 << 2;                                               // 0x0016a3f8: sll $v1, $a2, 2
    a2 = *(int32_t*)((s1) + 0x148);                             // 0x0016a3fc: lw $a2, 0x148($s1)
    a1 = *(int32_t*)((s1) + 0x144);                             // 0x0016a404: lw $a1, 0x144($s1)
    func_0016a480();  // 16a480                                // 0x0016a408: jal 0x16a480
    goto label_0x16a438;                                        // 0x0016a410: b 0x16a438
    *(uint32_t*)(s3) = v0;                                      // 0x0016a414: sw $v0, 0($s3)
    v0 = 0x23 << 16;                                            // 0x0016a41c: lui $v0, 0x23
    v0 = v0 + v1;                                               // 0x0016a420: addu $v0, $v0, $v1
    v0 = g_002290d0;  // Global at 0x002290d0                   // 0x0016a424: lw $v0, -0x6f30($v0)
    /* call function at address in v0 */                        // 0x0016a42c: jalr $v0
    *(uint32_t*)(s3) = v0;                                      // 0x0016a434: sw $v0, 0($s3)
label_0x16a438:
    t0 = *(int32_t*)(s3);                                       // 0x0016a438: lw $t0, 0($s3)
    if (t0 == 0) goto label_0x16a450;                           // 0x0016a43c: beqz $t0, 0x16a450
    v0 = 1;                                                     // 0x0016a440: addiu $v0, $zero, 1
    if (t0 != v0) goto label_0x16a450;                          // 0x0016a444: bnel $t0, $v0, 0x16a450
    *(uint32_t*)(s4) = s0;                                      // 0x0016a44c: sw $s0, 0($s4)
label_0x16a450:
label_0x16a454:
label_0x16a458:
    return;                                                     // 0x0016a478: jr $ra
    sp = sp + 0x70;                                             // 0x0016a47c: addiu $sp, $sp, 0x70
}