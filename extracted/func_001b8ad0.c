void func_001b8ad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b8ad0: addiu $sp, $sp, -0x10
    if (a3 != 0) goto label_0x1b8af4;                           // 0x001b8ad8: bnez $a3, 0x1b8af4
    a0 = 1;                                                     // 0x001b8ae0: addiu $a0, $zero, 1
    func_001b8b40();  // 0x1b8b20                                // 0x001b8ae4: jal 0x1b8b20
    goto label_0x1b8b10;                                        // 0x001b8aec: b 0x1b8b10
label_0x1b8af4:
    a0 = 1;                                                     // 0x001b8af4: addiu $a0, $zero, 1
    t0 = 2;                                                     // 0x001b8afc: addiu $t0, $zero, 2
    func_001b8c20();  // 0x1b8b40                                // 0x001b8b04: jal 0x1b8b40
label_0x1b8b10:
    return;                                                     // 0x001b8b10: jr $ra
    sp = sp + 0x10;                                             // 0x001b8b14: addiu $sp, $sp, 0x10
}