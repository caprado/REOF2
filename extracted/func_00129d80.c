void func_00129d80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129d80: addiu $sp, $sp, -0x10
    return func_00129d80();  // Tail call                        // 0x00129d8c: j 0x129ce0
    sp = sp + 0x10;                                             // 0x00129d90: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00129d94: nop 
    v1 = 0x1f << 16;                                            // 0x00129d98: lui $v1, 0x1f
    v1 = v1 + 0x5990;                                           // 0x00129d9c: addiu $v1, $v1, 0x5990
    v0 = g_001f5990;  // Global at 0x001f5990                   // 0x00129da0: lw $v0, 0($v1)
    return;                                                     // 0x00129da4: jr $ra
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00129da8: sltu $v0, $zero, $v0
}