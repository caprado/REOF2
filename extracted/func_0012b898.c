void func_0012b898() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0012b898: addiu $sp, $sp, -0x40
    s6 = 0x1f << 16;                                            // 0x0012b8a0: lui $s6, 0x1f
    v1 = s6 + 0x6b10;                                           // 0x0012b8a8: addiu $v1, $s6, 0x6b10
    if (v0 != 0) goto label_0x12b920;                           // 0x0012b8c8: bnez $v0, 0x12b920
    s5 = 0x1f << 16;                                            // 0x0012b8cc: lui $s5, 0x1f
    s4 = 0x1f << 16;                                            // 0x0012b8d0: lui $s4, 0x1f
    s2 = s5 + 0x6b08;                                           // 0x0012b8d8: addiu $s2, $s5, 0x6b08
    s1 = 1;                                                     // 0x0012b8dc: addiu $s1, $zero, 1
    s0 = s4 + 0x6adc;                                           // 0x0012b8e0: addiu $s0, $s4, 0x6adc
    /* nop */                                                   // 0x0012b8e4: nop 
label_0x12b8e8:
    a1 = 1;                                                     // 0x0012b8ec: addiu $a1, $zero, 1
    iChangeThreadPriority();  // 0x114170                       // 0x0012b8f0: jal 0x114170
    a0 = g_001f6adc;  // Global at 0x001f6adc                   // 0x0012b8f4: lw $a0, 0($s0)
    _iWakeupThread();  // 0x114210                              // 0x0012b8f8: jal 0x114210
    a0 = g_001f6adc;  // Global at 0x001f6adc                   // 0x0012b8fc: lw $a0, 0($s0)
    EndOfHeap();  // 0x114270                                   // 0x0012b900: jal 0x114270
    a0 = g_001f6adc;  // Global at 0x001f6adc                   // 0x0012b904: lw $a0, 0($s0)
    if (v1 == 0) goto label_0x12b8e8;                           // 0x0012b90c: beqz $v1, 0x12b8e8
    v0 = s6 + 0x6b10;                                           // 0x0012b910: addiu $v0, $s6, 0x6b10
    goto label_0x12b92c;                                        // 0x0012b914: b 0x12b92c
    /* nop */                                                   // 0x0012b91c: nop 
label_0x12b920:
    s4 = 0x1f << 16;                                            // 0x0012b920: lui $s4, 0x1f
    v0 = s6 + 0x6b10;                                           // 0x0012b924: addiu $v0, $s6, 0x6b10
label_0x12b92c:
    v1 = s5 + 0x6b08;                                           // 0x0012b92c: addiu $v1, $s5, 0x6b08
    a0 = s4 + 0x6adc;                                           // 0x0012b934: addiu $a0, $s4, 0x6adc
    g_001f6adc = 0;  // Global at 0x001f6adc                    // 0x0012b958: sw $zero, 0($a0)
    return;                                                     // 0x0012b95c: jr $ra
    sp = sp + 0x40;                                             // 0x0012b960: addiu $sp, $sp, 0x40
}