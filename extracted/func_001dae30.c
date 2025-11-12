void func_001dae30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001dae30: addiu $sp, $sp, -0x90
    a1 = 0x24 << 16;                                            // 0x001dae34: lui $a1, 0x24
    at = 0x31 << 16;                                            // 0x001dae3c: lui $at, 0x31
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001dae40: lhu $a2, 0x37ba($at)
    a0 = sp + 0x10;                                             // 0x001dae44: addiu $a0, $sp, 0x10
    func_0010a570();  // 0x10a4d8                                // 0x001dae48: jal 0x10a4d8
    a1 = &str_002479c8;  // "data\\rom\\sound\\ps2\\snd\\"      // 0x001dae4c: addiu $a1, $a1, 0x79c8
    a0 = sp + 0x10;                                             // 0x001dae50: addiu $a0, $sp, 0x10
    func_001daf80();  // 0x1daef0                                // 0x001dae54: jal 0x1daef0
    a1 = 1;                                                     // 0x001dae58: addiu $a1, $zero, 1
    return;                                                     // 0x001dae60: jr $ra
    sp = sp + 0x90;                                             // 0x001dae64: addiu $sp, $sp, 0x90
}