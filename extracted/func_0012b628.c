void func_0012b628() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0012b628: addiu $sp, $sp, -0x40
    s6 = 0x1f << 16;                                            // 0x0012b630: lui $s6, 0x1f
    v1 = s6 + 0x6b40;                                           // 0x0012b638: addiu $v1, $s6, 0x6b40
    if (v0 != 0) goto label_0x12b6b0;                           // 0x0012b658: bnez $v0, 0x12b6b0
    s5 = 0x1f << 16;                                            // 0x0012b65c: lui $s5, 0x1f
    s4 = 0x1f << 16;                                            // 0x0012b660: lui $s4, 0x1f
    s2 = s5 + 0x6b38;                                           // 0x0012b668: addiu $s2, $s5, 0x6b38
    s1 = 1;                                                     // 0x0012b66c: addiu $s1, $zero, 1
    s0 = s4 + 0x6aec;                                           // 0x0012b670: addiu $s0, $s4, 0x6aec
    /* nop */                                                   // 0x0012b674: nop 
label_0x12b678:
    a1 = 1;                                                     // 0x0012b67c: addiu $a1, $zero, 1
    iChangeThreadPriority();  // 0x114170                       // 0x0012b680: jal 0x114170
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b684: lw $a0, 0($s0)
    _iWakeupThread();  // 0x114210                              // 0x0012b688: jal 0x114210
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b68c: lw $a0, 0($s0)
    EndOfHeap();  // 0x114270                                   // 0x0012b690: jal 0x114270
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b694: lw $a0, 0($s0)
    if (v1 == 0) goto label_0x12b678;                           // 0x0012b69c: beqz $v1, 0x12b678
    v0 = s6 + 0x6b40;                                           // 0x0012b6a0: addiu $v0, $s6, 0x6b40
    goto label_0x12b6bc;                                        // 0x0012b6a4: b 0x12b6bc
    /* nop */                                                   // 0x0012b6ac: nop 
label_0x12b6b0:
    s4 = 0x1f << 16;                                            // 0x0012b6b0: lui $s4, 0x1f
    v0 = s6 + 0x6b40;                                           // 0x0012b6b4: addiu $v0, $s6, 0x6b40
label_0x12b6bc:
    v1 = s5 + 0x6b38;                                           // 0x0012b6bc: addiu $v1, $s5, 0x6b38
    a0 = s4 + 0x6aec;                                           // 0x0012b6c4: addiu $a0, $s4, 0x6aec
    g_001f6aec = 0;  // Global at 0x001f6aec                    // 0x0012b6e8: sw $zero, 0($a0)
    return;                                                     // 0x0012b6ec: jr $ra
    sp = sp + 0x40;                                             // 0x0012b6f0: addiu $sp, $sp, 0x40
}