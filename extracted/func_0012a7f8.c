void func_0012a7f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012a7f8: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0012a7fc: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0012a804: lui $v1, 0x1f
    v0 = v0 + 0x6aec;                                           // 0x0012a808: addiu $v0, $v0, 0x6aec
    a1 = g_001f6a78;  // Global at 0x001f6a78                   // 0x0012a80c: lw $a1, 0x6a78($v1)
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012a810: lw $a0, 0($v0)
    return func_0012a7f8();  // Tail call                        // 0x0012a818: j 0x12a720
    sp = sp + 0x10;                                             // 0x0012a81c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0012a820: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0012a824: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0012a82c: lui $v1, 0x1f
    v0 = v0 + 0x6af0;                                           // 0x0012a830: addiu $v0, $v0, 0x6af0
    a1 = g_001f6a7c;  // Global at 0x001f6a7c                   // 0x0012a834: lw $a1, 0x6a7c($v1)
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012a838: lw $a0, 0($v0)
    return func_0012a7f8();  // Tail call                        // 0x0012a840: j 0x12a720
    sp = sp + 0x10;                                             // 0x0012a844: addiu $sp, $sp, 0x10
    v1 = 0x1f << 16;                                            // 0x0012a848: lui $v1, 0x1f
    v1 = v1 + 0x6aa0;                                           // 0x0012a84c: addiu $v1, $v1, 0x6aa0
    return;                                                     // 0x0012a858: jr $ra
}