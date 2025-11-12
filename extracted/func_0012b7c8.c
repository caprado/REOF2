void func_0012b7c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0012b7c8: addiu $sp, $sp, -0x40
    s6 = 0x1f << 16;                                            // 0x0012b7d0: lui $s6, 0x1f
    v1 = s6 + 0x6b30;                                           // 0x0012b7d8: addiu $v1, $s6, 0x6b30
    if (v0 != 0) goto label_0x12b850;                           // 0x0012b7f8: bnez $v0, 0x12b850
    s5 = 0x1f << 16;                                            // 0x0012b7fc: lui $s5, 0x1f
    s4 = 0x1f << 16;                                            // 0x0012b800: lui $s4, 0x1f
    s2 = s5 + 0x6b28;                                           // 0x0012b808: addiu $s2, $s5, 0x6b28
    s1 = 1;                                                     // 0x0012b80c: addiu $s1, $zero, 1
    s0 = s4 + 0x6ae4;                                           // 0x0012b810: addiu $s0, $s4, 0x6ae4
    /* nop */                                                   // 0x0012b814: nop 
label_0x12b818:
    a1 = 1;                                                     // 0x0012b81c: addiu $a1, $zero, 1
    iChangeThreadPriority();  // 0x114170                       // 0x0012b820: jal 0x114170
    a0 = g_001f6ae4;  // Global at 0x001f6ae4                   // 0x0012b824: lw $a0, 0($s0)
    _iWakeupThread();  // 0x114210                              // 0x0012b828: jal 0x114210
    a0 = g_001f6ae4;  // Global at 0x001f6ae4                   // 0x0012b82c: lw $a0, 0($s0)
    EndOfHeap();  // 0x114270                                   // 0x0012b830: jal 0x114270
    a0 = g_001f6ae4;  // Global at 0x001f6ae4                   // 0x0012b834: lw $a0, 0($s0)
    if (v1 == 0) goto label_0x12b818;                           // 0x0012b83c: beqz $v1, 0x12b818
    v0 = s6 + 0x6b30;                                           // 0x0012b840: addiu $v0, $s6, 0x6b30
    goto label_0x12b85c;                                        // 0x0012b844: b 0x12b85c
    /* nop */                                                   // 0x0012b84c: nop 
label_0x12b850:
    s4 = 0x1f << 16;                                            // 0x0012b850: lui $s4, 0x1f
    v0 = s6 + 0x6b30;                                           // 0x0012b854: addiu $v0, $s6, 0x6b30
label_0x12b85c:
    v1 = s5 + 0x6b28;                                           // 0x0012b85c: addiu $v1, $s5, 0x6b28
    a0 = s4 + 0x6ae4;                                           // 0x0012b864: addiu $a0, $s4, 0x6ae4
    g_001f6ae4 = 0;  // Global at 0x001f6ae4                    // 0x0012b888: sw $zero, 0($a0)
    return;                                                     // 0x0012b88c: jr $ra
    sp = sp + 0x40;                                             // 0x0012b890: addiu $sp, $sp, 0x40
}