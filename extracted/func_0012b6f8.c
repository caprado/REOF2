void func_0012b6f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0012b6f8: addiu $sp, $sp, -0x40
    s6 = 0x1f << 16;                                            // 0x0012b700: lui $s6, 0x1f
    v1 = s6 + 0x6b20;                                           // 0x0012b708: addiu $v1, $s6, 0x6b20
    if (v0 != 0) goto label_0x12b780;                           // 0x0012b728: bnez $v0, 0x12b780
    s5 = 0x1f << 16;                                            // 0x0012b72c: lui $s5, 0x1f
    s4 = 0x1f << 16;                                            // 0x0012b730: lui $s4, 0x1f
    s2 = s5 + 0x6b18;                                           // 0x0012b738: addiu $s2, $s5, 0x6b18
    s1 = 1;                                                     // 0x0012b73c: addiu $s1, $zero, 1
    s0 = s4 + 0x6ae0;                                           // 0x0012b740: addiu $s0, $s4, 0x6ae0
    /* nop */                                                   // 0x0012b744: nop 
label_0x12b748:
    a1 = 1;                                                     // 0x0012b74c: addiu $a1, $zero, 1
    iChangeThreadPriority();  // 0x114170                       // 0x0012b750: jal 0x114170
    a0 = g_001f6ae0;  // Global at 0x001f6ae0                   // 0x0012b754: lw $a0, 0($s0)
    _iWakeupThread();  // 0x114210                              // 0x0012b758: jal 0x114210
    a0 = g_001f6ae0;  // Global at 0x001f6ae0                   // 0x0012b75c: lw $a0, 0($s0)
    EndOfHeap();  // 0x114270                                   // 0x0012b760: jal 0x114270
    a0 = g_001f6ae0;  // Global at 0x001f6ae0                   // 0x0012b764: lw $a0, 0($s0)
    if (v1 == 0) goto label_0x12b748;                           // 0x0012b76c: beqz $v1, 0x12b748
    v0 = s6 + 0x6b20;                                           // 0x0012b770: addiu $v0, $s6, 0x6b20
    goto label_0x12b78c;                                        // 0x0012b774: b 0x12b78c
    /* nop */                                                   // 0x0012b77c: nop 
label_0x12b780:
    s4 = 0x1f << 16;                                            // 0x0012b780: lui $s4, 0x1f
    v0 = s6 + 0x6b20;                                           // 0x0012b784: addiu $v0, $s6, 0x6b20
label_0x12b78c:
    v1 = s5 + 0x6b18;                                           // 0x0012b78c: addiu $v1, $s5, 0x6b18
    a0 = s4 + 0x6ae0;                                           // 0x0012b794: addiu $a0, $s4, 0x6ae0
    g_001f6ae0 = 0;  // Global at 0x001f6ae0                    // 0x0012b7b8: sw $zero, 0($a0)
    return;                                                     // 0x0012b7bc: jr $ra
    sp = sp + 0x40;                                             // 0x0012b7c0: addiu $sp, $sp, 0x40
}