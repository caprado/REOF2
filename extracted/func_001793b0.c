void func_001793b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001793b0: addiu $sp, $sp, -0x50
    func_001793b0();  // 0x179320                                // 0x001793c8: jal 0x179320
    if (v0 == 0) goto label_0x1793ec;                           // 0x001793d8: beqz $v0, 0x1793ec
    func_00179650();  // 0x1795f0                                // 0x001793e0: jal 0x1795f0
    /* nop */                                                   // 0x001793e4: nop 
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001793e8: sltu $v0, $zero, $v0
label_0x1793ec:
    return;                                                     // 0x001793f8: jr $ra
    sp = sp + 0x50;                                             // 0x001793fc: addiu $sp, $sp, 0x50
}