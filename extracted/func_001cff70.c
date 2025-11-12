void func_001cff70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cff70: addiu $sp, $sp, -0x20
    a2 = 4;                                                     // 0x001cff74: addiu $a2, $zero, 4
    a1 = sp + 0x1c;                                             // 0x001cff7c: addiu $a1, $sp, 0x1c
    *(float*)((sp) + 0x1c) = FPU_F12;  // Store float           // 0x001cff80: swc1 $f12, 0x1c($sp)
    func_001cfdf0();  // 0x1cfd80                                // 0x001cff84: jal 0x1cfd80
    *(float*)((sp) + 0x1c) = FPU_F12;  // Store float           // 0x001cff88: swc1 $f12, 0x1c($sp)
    return;                                                     // 0x001cff90: jr $ra
    sp = sp + 0x20;                                             // 0x001cff94: addiu $sp, $sp, 0x20
}