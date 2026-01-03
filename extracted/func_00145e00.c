void func_00145e00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00145e00: addiu $sp, $sp, -0x20
    goto label_0x145e20;                                        // 0x00145e0c: b 0x145e20
    /* nop */                                                   // 0x00145e14: nop 
label_0x145e18:
    func_00145598();  // 145598                                // 0x00145e18: jal 0x145598
    /* nop */                                                   // 0x00145e1c: nop 
label_0x145e20:
    func_001456a8();  // 1456a8                                // 0x00145e24: jal 0x1456a8
    a1 = 1;                                                     // 0x00145e28: addiu $a1, $zero, 1
    if (v0 != 0) goto label_0x145e18;                           // 0x00145e30: bnez $v0, 0x145e18
    a1 = 8;                                                     // 0x00145e34: addiu $a1, $zero, 8
    return;                                                     // 0x00145e40: jr $ra
    sp = sp + 0x20;                                             // 0x00145e44: addiu $sp, $sp, 0x20
}