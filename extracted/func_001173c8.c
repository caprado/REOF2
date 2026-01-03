void func_001173c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001173c8: addiu $sp, $sp, -0x10
    a0 = 0x8000 << 16;                                          // 0x001173d0: lui $a0, 0x8000
    a0 = a0 | 8;                                                // 0x001173d8: ori $a0, $a0, 8
    a2 = 0x40;                                                  // 0x001173dc: addiu $a2, $zero, 0x40
    func_00116b08();  // 116b08                                // 0x001173e8: jal 0x116b08
    v1 = 0x800;                                                 // 0x001173f0: addiu $v1, $zero, 0x800
    if (v0 != 0) v1 = 0;                                        // 0x001173f8: movn $v1, $zero, $v0
    return;                                                     // 0x00117400: jr $ra
    sp = sp + 0x10;                                             // 0x00117404: addiu $sp, $sp, 0x10
}