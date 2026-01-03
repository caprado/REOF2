void func_0012f680() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x0012f680: addiu $sp, $sp, -0x50
    v1 = *(int32_t*)((s1) + 0x58);                              // 0x0012f6a4: lw $v1, 0x58($s1)
    if (v1 <= 0) goto label_0x12f768;                           // 0x0012f6a8: blez $v1, 0x12f768
    /* nop */                                                   // 0x0012f6b4: nop 
label_0x12f6b8:
    v0 = *(int32_t*)((s1) + 0x68);                              // 0x0012f6b8: lw $v0, 0x68($s1)
    s0 = v0 << 1;                                               // 0x0012f6bc: sll $s0, $v0, 1
    if (s0 <= 0) goto label_0x12f758;                           // 0x0012f6c0: blez $s0, 0x12f758
    s3 = s1 + 4;                                                // 0x0012f6c8: addiu $s3, $s1, 4
    s2 = s3 + s4;                                               // 0x0012f6d0: addu $s2, $s3, $s4
    a0 = *(int32_t*)(s2);                                       // 0x0012f6d4: lw $a0, 0($s2)
    v1 = *(int32_t*)(a0);                                       // 0x0012f6d8: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0012f6dc: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0012f6e0: jalr $v0
    v0 = local_4;                                               // 0x0012f6ec: lw $v0, 4($sp)
    if (v0 == s0) goto label_0x12f730;                          // 0x0012f6f0: beq $v0, $s0, 0x12f730
    a0 = *(int32_t*)(s2);                                       // 0x0012f6f8: lw $a0, 0($s2)
    v1 = *(int32_t*)(a0);                                       // 0x0012f6fc: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012f700: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012f704: jalr $v0
    /* nop */                                                   // 0x0012f70c: nop 
label_0x12f710:
    /* nop */                                                   // 0x0012f710: nop 
    /* nop */                                                   // 0x0012f714: nop 
    /* nop */                                                   // 0x0012f718: nop 
    /* nop */                                                   // 0x0012f71c: nop 
    /* nop */                                                   // 0x0012f720: nop 
    goto label_0x12f710;                                        // 0x0012f724: b 0x12f710
    /* nop */                                                   // 0x0012f728: nop 
    /* nop */                                                   // 0x0012f72c: nop 
label_0x12f730:
    func_00107c70();  // 107c70                                // 0x0012f730: jal 0x107c70
    a0 = local_0;                                               // 0x0012f734: lw $a0, 0($sp)
    v1 = s3 + s4;                                               // 0x0012f738: addu $v1, $s3, $s4
    a0 = *(int32_t*)(v1);                                       // 0x0012f73c: lw $a0, 0($v1)
    a1 = 1;                                                     // 0x0012f740: addiu $a1, $zero, 1
    v1 = *(int32_t*)(a0);                                       // 0x0012f744: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012f748: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012f74c: jalr $v0
    v1 = *(int32_t*)((s1) + 0x58);                              // 0x0012f754: lw $v1, 0x58($s1)
label_0x12f758:
    s5 = s5 + 1;                                                // 0x0012f758: addiu $s5, $s5, 1
    v0 = (s5 < v1) ? 1 : 0;                                     // 0x0012f75c: slt $v0, $s5, $v1
    if (v0 != 0) goto label_0x12f6b8;                           // 0x0012f760: bnez $v0, 0x12f6b8
    s4 = s4 + 4;                                                // 0x0012f764: addiu $s4, $s4, 4
label_0x12f768:
    v0 = 1;                                                     // 0x0012f768: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 0x28) = 0;                              // 0x0012f76c: sw $zero, 0x28($s1)
    *(uint8_t*)((s1) + 1) = v0;                                 // 0x0012f770: sb $v0, 1($s1)
    *(uint32_t*)((s1) + 0x2c) = 0;                              // 0x0012f774: sw $zero, 0x2c($s1)
    *(uint32_t*)((s1) + 0x30) = 0;                              // 0x0012f778: sw $zero, 0x30($s1)
    *(uint8_t*)((s1) + 3) = 0;                                  // 0x0012f77c: sb $zero, 3($s1)
    return;                                                     // 0x0012f79c: jr $ra
    sp = sp + 0x50;                                             // 0x0012f7a0: addiu $sp, $sp, 0x50
}