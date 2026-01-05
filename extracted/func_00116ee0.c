void func_00116ee0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00116ee0: addiu $sp, $sp, -0x10
    func_00116860();  // 116860                                // 0x00116ee8: jal 0x116860
    /* nop */                                                   // 0x00116eec: nop 
    v0 = 0x1f << 16;                                            // 0x00116ef0: lui $v0, 0x1f
    g_001f0350 = 0;  // Global at 0x001f0350                    // 0x00116ef8: sw $zero, 0x350($v0)
    return;                                                     // 0x00116efc: jr $ra
    sp = sp + 0x10;                                             // 0x00116f00: addiu $sp, $sp, 0x10
}