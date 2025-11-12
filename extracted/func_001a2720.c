void func_001a2720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a2720: addiu $sp, $sp, -0x10
    func_001a1a10();  // 0x1a1a00                                // 0x001a2728: jal 0x1a1a00
    /* nop */                                                   // 0x001a272c: nop 
    v0 = *(int32_t*)((v0) + 4);                                 // 0x001a2734: lw $v0, 4($v0)
    return;                                                     // 0x001a2738: jr $ra
    sp = sp + 0x10;                                             // 0x001a273c: addiu $sp, $sp, 0x10
}