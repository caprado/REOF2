void func_0012b968() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0012b968: addiu $sp, $sp, -0x40
    s6 = 0x1f << 16;                                            // 0x0012b970: lui $s6, 0x1f
    v1 = s6 + 0x6b00;                                           // 0x0012b978: addiu $v1, $s6, 0x6b00
    if (v0 != 0) goto label_0x12b9f0;                           // 0x0012b998: bnez $v0, 0x12b9f0
    s5 = 0x1f << 16;                                            // 0x0012b99c: lui $s5, 0x1f
    s4 = 0x1f << 16;                                            // 0x0012b9a0: lui $s4, 0x1f
    s2 = s5 + 0x6af8;                                           // 0x0012b9a8: addiu $s2, $s5, 0x6af8
    s1 = 1;                                                     // 0x0012b9ac: addiu $s1, $zero, 1
    s0 = s4 + 0x6ad8;                                           // 0x0012b9b0: addiu $s0, $s4, 0x6ad8
    /* nop */                                                   // 0x0012b9b4: nop 
label_0x12b9b8:
    a1 = 1;                                                     // 0x0012b9bc: addiu $a1, $zero, 1
    iChangeThreadPriority();  // 0x114170                       // 0x0012b9c0: jal 0x114170
    a0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012b9c4: lw $a0, 0($s0)
    _iWakeupThread();  // 0x114210                              // 0x0012b9c8: jal 0x114210
    a0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012b9cc: lw $a0, 0($s0)
    EndOfHeap();  // 0x114270                                   // 0x0012b9d0: jal 0x114270
    a0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012b9d4: lw $a0, 0($s0)
    if (v1 == 0) goto label_0x12b9b8;                           // 0x0012b9dc: beqz $v1, 0x12b9b8
    v0 = s6 + 0x6b00;                                           // 0x0012b9e0: addiu $v0, $s6, 0x6b00
    goto label_0x12b9fc;                                        // 0x0012b9e4: b 0x12b9fc
    /* nop */                                                   // 0x0012b9ec: nop 
label_0x12b9f0:
    s4 = 0x1f << 16;                                            // 0x0012b9f0: lui $s4, 0x1f
    v0 = s6 + 0x6b00;                                           // 0x0012b9f4: addiu $v0, $s6, 0x6b00
label_0x12b9fc:
    v1 = s5 + 0x6af8;                                           // 0x0012b9fc: addiu $v1, $s5, 0x6af8
    a0 = s4 + 0x6ad8;                                           // 0x0012ba04: addiu $a0, $s4, 0x6ad8
    g_001f6ad8 = 0;  // Global at 0x001f6ad8                    // 0x0012ba28: sw $zero, 0($a0)
    return;                                                     // 0x0012ba2c: jr $ra
    sp = sp + 0x40;                                             // 0x0012ba30: addiu $sp, $sp, 0x40
}