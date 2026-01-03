/** @category: game/utility @status: complete @author: caprado */
void func_001a8a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001a8a60: addiu $sp, $sp, -0x60
    v0 = 1;                                                     // 0x001a8a64: addiu $v0, $zero, 1
    return;                                                     // 0x001a8a7c: jr $ra
    sp = sp + 0x60;                                             // 0x001a8a80: addiu $sp, $sp, 0x60
}