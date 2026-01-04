/** @category audio/settings @status complete @author caprado */
void func_001b7e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b7e60: addiu $sp, $sp, -0x20
    thunk_func_001ac980();  // 1ac980                          // 0x001b7e6c: jal 0x1ac980
    func_001addb0();  // 1addb0                                // 0x001b7e74: jal 0x1addb0
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b7e80: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b7e84: jr $ra
    sp = sp + 0x20;                                             // 0x001b7e88: addiu $sp, $sp, 0x20
}