void func_0016eff8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016eff8: addiu $sp, $sp, -0x30
    s2 = s0 + 0xcc0;                                            // 0x0016f010: addiu $s2, $s0, 0xcc0
    s3 = s0 + 0xd54;                                            // 0x0016f018: addiu $s3, $s0, 0xd54
    v1 = g_00230d78;  // Global at 0x00230d78                   // 0x0016f020: lw $v1, 0x24($s3)
    *(uint32_t*)((s1) + 0x10) = v1;                             // 0x0016f024: sw $v1, 0x10($s1)
    v1 = g_00230dc4;  // Global at 0x00230dc4                   // 0x0016f028: lw $v1, 0xdc4($s0)
    v0 = g_00230d74;  // Global at 0x00230d74                   // 0x0016f02c: lw $v0, 0x20($s3)
    a1 = g_00230de0;  // Global at 0x00230de0                   // 0x0016f030: lw $a1, 0x120($s2)
    v0 = v0 - v1;                                               // 0x0016f034: subu $v0, $v0, $v1
    v0 = v0 + a1;                                               // 0x0016f038: addu $v0, $v0, $a1
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x0016f03c: sw $v0, 0xc($s1)
    v1 = g_00230d74;  // Global at 0x00230d74                   // 0x0016f040: lw $v1, 0x20($s3)
    *(uint32_t*)((s1) + 0x20) = v1;                             // 0x0016f044: sw $v1, 0x20($s1)
    v0 = g_00230d74;  // Global at 0x00230d74                   // 0x0016f048: lw $v0, 0x20($s3)
    v1 = g_00230de0;  // Global at 0x00230de0                   // 0x0016f04c: lw $v1, 0x120($s2)
    v0 = v0 + v1;                                               // 0x0016f050: addu $v0, $v0, $v1
    func_00171200();  // 0x1711f0                                // 0x0016f054: jal 0x1711f0
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x0016f058: sw $v0, 0x24($s1)
    if (v0 == 0) goto label_0x16f0bc;                           // 0x0016f05c: beqz $v0, 0x16f0bc
    v0 = *(int32_t*)((s1) + 0x3c);                              // 0x0016f064: lw $v0, 0x3c($s1)
    v0 = v0 << 2;                                               // 0x0016f068: sll $v0, $v0, 2
    s0 = 0x23 << 16;                                            // 0x0016f06c: lui $s0, 0x23
    s0 = s0 + v0;                                               // 0x0016f070: addu $s0, $s0, $v0
    s0 = g_00229370;  // Global at 0x00229370                   // 0x0016f074: lw $s0, -0x6c90($s0)
    func_00171b28();  // 0x171b18                                // 0x0016f078: jal 0x171b18
    /* nop */                                                   // 0x0016f07c: nop 
    v1 = g_00230ddc;  // Global at 0x00230ddc                   // 0x0016f080: lw $v1, 0x11c($s2)
    a0 = g_00230d78;  // Global at 0x00230d78                   // 0x0016f084: lw $a0, 0x24($s3)
    v0 = v0 - v1;                                               // 0x0016f08c: subu $v0, $v0, $v1
    a1 = v0 << 5;                                               // 0x0016f090: sll $a1, $v0, 5
    a1 = a1 - v0;                                               // 0x0016f094: subu $a1, $a1, $v0
    a1 = a1 << 2;                                               // 0x0016f098: sll $a1, $a1, 2
    a1 = a1 + v0;                                               // 0x0016f09c: addu $a1, $a1, $v0
    func_0015b7b0();  // 0x15b740                                // 0x0016f0a0: jal 0x15b740
    a1 = a1 << 3;                                               // 0x0016f0a4: sll $a1, $a1, 3
    *(uint32_t*)((s1) + 0x20) = v0;                             // 0x0016f0a8: sw $v0, 0x20($s1)
    v1 = g_00230de0;  // Global at 0x00230de0                   // 0x0016f0ac: lw $v1, 0x120($s2)
    v0 = v0 + v1;                                               // 0x0016f0b0: addu $v0, $v0, $v1
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x0016f0b4: sw $v0, 0xc($s1)
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x0016f0b8: sw $v0, 0x24($s1)
label_0x16f0bc:
    v1 = *(int32_t*)((s1) + 0xc);                               // 0x0016f0bc: lw $v1, 0xc($s1)
    v0 = g_00230f00;  // Global at 0x00230f00                   // 0x0016f0c0: lw $v0, 0x240($s2)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0016f0c4: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x16f0dc;                           // 0x0016f0c8: beqz $v0, 0x16f0dc
    g_00230f00 = v1;  // Global at 0x00230f00                   // 0x0016f0d0: sw $v1, 0x240($s2)
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x0016f0d4: lw $v0, 0x10($s1)
    g_00230f04 = v0;  // Global at 0x00230f04                   // 0x0016f0d8: sw $v0, 0x244($s2)
label_0x16f0dc:
    return;                                                     // 0x0016f0ec: jr $ra
    sp = sp + 0x30;                                             // 0x0016f0f0: addiu $sp, $sp, 0x30
}