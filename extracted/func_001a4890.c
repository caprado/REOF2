void func_001a4890() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a4890: addiu $sp, $sp, -0x10
    v0 = 0x4d42;                                                // 0x001a4894: addiu $v0, $zero, 0x4d42
    v1 = *(uint16_t*)(a1);                                      // 0x001a489c: lhu $v1, 0($a1)
    if (v1 == v0) goto label_0x1a48bc;                          // 0x001a48a0: beq $v1, $v0, 0x1a48bc
    /* nop */                                                   // 0x001a48a4: nop 
    a0 = 0x23 << 16;                                            // 0x001a48a8: lui $a0, 0x23
    func_001a56b0();  // 1a56b0                                // 0x001a48ac: jal 0x1a56b0
    a0 = &str_0022a630;  // "Not support except 24bit. @plCreateContextFromBMPImage" // 0x001a48b0: addiu $a0, $a0, -0x59d0
    goto label_0x1a4960;                                        // 0x001a48b4: b 0x1a4960
label_0x1a48bc:
    v1 = *(uint16_t*)((a1) + 0x14);                             // 0x001a48bc: lhu $v1, 0x14($a1)
    v0 = 0x18;                                                  // 0x001a48c0: addiu $v0, $zero, 0x18
    a2 = *(uint16_t*)((a1) + 0x12);                             // 0x001a48c4: lhu $a2, 0x12($a1)
    v1 = v1 << 0x10;                                            // 0x001a48c8: sll $v1, $v1, 0x10
    v1 = a2 | v1;                                               // 0x001a48cc: or $v1, $a2, $v1
    g_0022a634 = v1;  // Global at 0x0022a634                   // 0x001a48d0: sw $v1, 4($a0)
    v1 = *(uint16_t*)((a1) + 0x18);                             // 0x001a48d4: lhu $v1, 0x18($a1)
    a2 = *(uint16_t*)((a1) + 0x16);                             // 0x001a48d8: lhu $a2, 0x16($a1)
    v1 = v1 << 0x10;                                            // 0x001a48dc: sll $v1, $v1, 0x10
    v1 = a2 | v1;                                               // 0x001a48e0: or $v1, $a2, $v1
    g_0022a638 = v1;  // Global at 0x0022a638                   // 0x001a48e4: sw $v1, 8($a0)
    v1 = *(uint16_t*)((a1) + 0x1c);                             // 0x001a48e8: lhu $v1, 0x1c($a1)
    if (v1 == v0) goto label_0x1a4908;                          // 0x001a48ec: beq $v1, $v0, 0x1a4908
    v0 = 3;                                                     // 0x001a48f0: addiu $v0, $zero, 3
    a0 = 0x23 << 16;                                            // 0x001a48f4: lui $a0, 0x23
    func_001a56b0();  // 1a56b0                                // 0x001a48f8: jal 0x1a56b0
    a0 = &str_0022a670;  // "This is not BMP image. @plCreateContextFromBMPImage" // 0x001a48fc: addiu $a0, $a0, -0x5990
    goto label_0x1a4960;                                        // 0x001a4900: b 0x1a4960
label_0x1a4908:
    a2 = 8;                                                     // 0x001a4908: addiu $a2, $zero, 8
    g_0022a684 = v0;  // Global at 0x0022a684                   // 0x001a490c: sw $v0, 0x14($a0)
    a1 = 0x10;                                                  // 0x001a4910: addiu $a1, $zero, 0x10
    t0 = g_0022a674;  // Global at 0x0022a674                   // 0x001a4914: lw $t0, 4($a0)
    v1 = 0xff;                                                  // 0x001a4918: addiu $v1, $zero, 0xff
    v0 = 1;                                                     // 0x001a491c: addiu $v0, $zero, 1
    a3 = t0 << 1;                                               // 0x001a4920: sll $a3, $t0, 1
    a3 = a3 + t0;                                               // 0x001a4924: addu $a3, $a3, $t0
    g_0022a67c = a3;  // Global at 0x0022a67c                   // 0x001a4928: sw $a3, 0xc($a0)
    g_0022a688 = a2;  // Global at 0x0022a688                   // 0x001a492c: sw $a2, 0x18($a0)
    g_0022a68c = a1;  // Global at 0x0022a68c                   // 0x001a4930: sw $a1, 0x1c($a0)
    g_0022a690 = v1;  // Global at 0x0022a690                   // 0x001a4934: sw $v1, 0x20($a0)
    g_0022a694 = a2;  // Global at 0x0022a694                   // 0x001a4938: sw $a2, 0x24($a0)
    g_0022a698 = a2;  // Global at 0x0022a698                   // 0x001a493c: sw $a2, 0x28($a0)
    g_0022a69c = v1;  // Global at 0x0022a69c                   // 0x001a4940: sw $v1, 0x2c($a0)
    g_0022a6a0 = a2;  // Global at 0x0022a6a0                   // 0x001a4944: sw $a2, 0x30($a0)
    g_0022a6a4 = 0;  // Global at 0x0022a6a4                    // 0x001a4948: sw $zero, 0x34($a0)
    g_0022a6a8 = v1;  // Global at 0x0022a6a8                   // 0x001a494c: sw $v1, 0x38($a0)
    g_0022a6ac = 0;  // Global at 0x0022a6ac                    // 0x001a4950: sw $zero, 0x3c($a0)
    str_0022a6b0 = 0;  // Global at 0x0022a6b0                  // 0x001a4954: sw $zero, 0x40($a0)
    g_0022a6b4 = 0;  // Global at 0x0022a6b4                    // 0x001a4958: sw $zero, 0x44($a0)
    str_0022a670 = 0;  // Global at 0x0022a670                  // 0x001a495c: sw $zero, 0($a0)
label_0x1a4960:
    return;                                                     // 0x001a4964: jr $ra
    sp = sp + 0x10;                                             // 0x001a4968: addiu $sp, $sp, 0x10
}