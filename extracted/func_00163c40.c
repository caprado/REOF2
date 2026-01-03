void func_00163c40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00163c40: addiu $sp, $sp, -0x30
    func_0015e338();  // 15e338                                // 0x00163c64: jal 0x15e338
    *(uint32_t*)((v0) + 0x4c) = s0;                             // 0x00163c6c: sw $s0, 0x4c($v0)
    *(uint32_t*)((v0) + 0x40) = s1;                             // 0x00163c70: sw $s1, 0x40($v0)
    *(uint32_t*)((v0) + 0x44) = s2;                             // 0x00163c74: sw $s2, 0x44($v0)
    *(uint32_t*)((v0) + 0x48) = s3;                             // 0x00163c78: sw $s3, 0x48($v0)
    return;                                                     // 0x00163c90: jr $ra
    sp = sp + 0x30;                                             // 0x00163c94: addiu $sp, $sp, 0x30
}