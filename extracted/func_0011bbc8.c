void func_0011bbc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011bbc8: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0011bbcc: lui $v0, 0x1f
    v1 = -1;                                                    // 0x0011bbd0: addiu $v1, $zero, -1
    a0 = 0x25 << 16;                                            // 0x0011bbd4: lui $a0, 0x25
    a0 = a0 + -0x258;                                           // 0x0011bbdc: addiu $a0, $a0, -0x258
    g_001f0400 = v1;  // Global at 0x001f0400                   // 0x0011bbe0: sw $v1, 0x400($v0)
    func_00107c70();  // 107c70                                // 0x0011bbe8: jal 0x107c70
    a2 = 4;                                                     // 0x0011bbec: addiu $a2, $zero, 4
    return;                                                     // 0x0011bbf8: jr $ra
    sp = sp + 0x10;                                             // 0x0011bbfc: addiu $sp, $sp, 0x10
}