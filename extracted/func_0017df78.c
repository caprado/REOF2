void func_0017df78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017df78: addiu $sp, $sp, -0x20
    *(float*)((sp) + 0x18) = FPU_F21;  // Store float           // 0x0017df84: swc1 $f21, 0x18($sp)
    /* FPU: mov.s $f21, $f12 */                                 // 0x0017df88: mov.s $f21, $f12
    *(float*)((sp) + 0x10) = FPU_F20;  // Store float           // 0x0017df8c: swc1 $f20, 0x10($sp)
    func_0017e028();  // 0x17dfe0                                // 0x0017df94: jal 0x17dfe0
    /* FPU: mov.s $f20, $f13 */                                 // 0x0017df98: mov.s $f20, $f13
    a2 = 0x23 << 16;                                            // 0x0017df9c: lui $a2, 0x23
    v1 = 1;                                                     // 0x0017dfa0: addiu $v1, $zero, 1
    a2 = a2 + -0x62e8;                                          // 0x0017dfa8: addiu $a2, $a2, -0x62e8
    if (v0 == v1) goto label_0x17dfbc;                          // 0x0017dfac: beq $v0, $v1, 0x17dfbc
    func_0017cec8();  // 0x17ce88                                // 0x0017dfb4: jal 0x17ce88
    /* nop */                                                   // 0x0017dfb8: nop 
label_0x17dfbc:
    *(float*)((s0) + 0x40) = FPU_F20;  // Store float           // 0x0017dfbc: swc1 $f20, 0x40($s0)
    *(float*)((s0) + 0x3c) = FPU_F21;  // Store float           // 0x0017dfc0: swc1 $f21, 0x3c($s0)
    FPU_F21 = *(float*)((sp) + 0x18);  // Load float            // 0x0017dfcc: lwc1 $f21, 0x18($sp)
    FPU_F20 = *(float*)((sp) + 0x10);  // Load float            // 0x0017dfd0: lwc1 $f20, 0x10($sp)
    return;                                                     // 0x0017dfd4: jr $ra
    sp = sp + 0x20;                                             // 0x0017dfd8: addiu $sp, $sp, 0x20
}