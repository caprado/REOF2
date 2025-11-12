void func_001cffa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cffa0: addiu $sp, $sp, -0x20
    a2 = 4;                                                     // 0x001cffa4: addiu $a2, $zero, 4
    func_001cfe70();  // 0x1cfdf0                                // 0x001cffac: jal 0x1cfdf0
    a1 = sp + 0x1c;                                             // 0x001cffb0: addiu $a1, $sp, 0x1c
    FPU_F0 = *(float*)((sp) + 0x1c);  // Load float             // 0x001cffb4: lwc1 $f0, 0x1c($sp)
    *(float*)((sp) + 0x1c) = FPU_F0;  // Store float            // 0x001cffb8: swc1 $f0, 0x1c($sp)
    return;                                                     // 0x001cffc0: jr $ra
    sp = sp + 0x20;                                             // 0x001cffc4: addiu $sp, $sp, 0x20
}