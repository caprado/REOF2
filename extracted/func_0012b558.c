void func_0012b558() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0012b558: addiu $sp, $sp, -0x40
    s6 = 0x1f << 16;                                            // 0x0012b560: lui $s6, 0x1f
    v1 = s6 + 0x6b50;                                           // 0x0012b568: addiu $v1, $s6, 0x6b50
    if (v0 != 0) goto label_0x12b5e0;                           // 0x0012b588: bnez $v0, 0x12b5e0
    s5 = 0x1f << 16;                                            // 0x0012b58c: lui $s5, 0x1f
    s4 = 0x1f << 16;                                            // 0x0012b590: lui $s4, 0x1f
    s2 = s5 + 0x6b48;                                           // 0x0012b598: addiu $s2, $s5, 0x6b48
    s1 = 1;                                                     // 0x0012b59c: addiu $s1, $zero, 1
    s0 = s4 + 0x6af0;                                           // 0x0012b5a0: addiu $s0, $s4, 0x6af0
    /* nop */                                                   // 0x0012b5a4: nop 
label_0x12b5a8:
    a1 = 1;                                                     // 0x0012b5ac: addiu $a1, $zero, 1
    iChangeThreadPriority();  // 0x114170                       // 0x0012b5b0: jal 0x114170
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012b5b4: lw $a0, 0($s0)
    _iWakeupThread();  // 0x114210                              // 0x0012b5b8: jal 0x114210
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012b5bc: lw $a0, 0($s0)
    EndOfHeap();  // 0x114270                                   // 0x0012b5c0: jal 0x114270
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012b5c4: lw $a0, 0($s0)
    if (v1 == 0) goto label_0x12b5a8;                           // 0x0012b5cc: beqz $v1, 0x12b5a8
    v0 = s6 + 0x6b50;                                           // 0x0012b5d0: addiu $v0, $s6, 0x6b50
    goto label_0x12b5ec;                                        // 0x0012b5d4: b 0x12b5ec
    /* nop */                                                   // 0x0012b5dc: nop 
label_0x12b5e0:
    s4 = 0x1f << 16;                                            // 0x0012b5e0: lui $s4, 0x1f
    v0 = s6 + 0x6b50;                                           // 0x0012b5e4: addiu $v0, $s6, 0x6b50
label_0x12b5ec:
    v1 = s5 + 0x6b48;                                           // 0x0012b5ec: addiu $v1, $s5, 0x6b48
    a0 = s4 + 0x6af0;                                           // 0x0012b5f4: addiu $a0, $s4, 0x6af0
    g_001f6af0 = 0;  // Global at 0x001f6af0                    // 0x0012b618: sw $zero, 0($a0)
    return;                                                     // 0x0012b61c: jr $ra
    sp = sp + 0x40;                                             // 0x0012b620: addiu $sp, $sp, 0x40
}