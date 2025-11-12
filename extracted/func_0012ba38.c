void func_0012ba38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012ba38: addiu $sp, $sp, -0x10
    return func_001413a8();  // Tail call                        // 0x0012ba44: j 0x141390
    sp = sp + 0x10;                                             // 0x0012ba48: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012ba4c: nop 
    sp = sp + -0x10;                                            // 0x0012ba50: addiu $sp, $sp, -0x10
    return func_001413c0();  // Tail call                        // 0x0012ba5c: j 0x1413a8
    sp = sp + 0x10;                                             // 0x0012ba60: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012ba64: nop 
    v1 = 0x1f << 16;                                            // 0x0012ba68: lui $v1, 0x1f
    return;                                                     // 0x0012ba6c: jr $ra
    v0 = g_001f6a80;  // Global at 0x001f6a80                   // 0x0012ba70: lw $v0, 0x6a80($v1)
}