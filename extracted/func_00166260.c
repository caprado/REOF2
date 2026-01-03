void func_00166260() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00166260: addiu $sp, $sp, -0x10
    a1 = 6;                                                     // 0x00166264: addiu $a1, $zero, 6
    func_001752e8();  // 1752e8                                // 0x00166270: jal 0x1752e8
    a1 = 3;                                                     // 0x0016627c: addiu $a1, $zero, 3
    a2 = 6;                                                     // 0x00166280: addiu $a2, $zero, 6
    if (v0 == 0) goto label_0x166298;                           // 0x00166288: beqz $v0, 0x166298
    func_001778a0();  // 1778a0                                // 0x00166290: jal 0x1778a0
    /* nop */                                                   // 0x00166294: nop 
label_0x166298:
    return;                                                     // 0x001662a0: jr $ra
    sp = sp + 0x10;                                             // 0x001662a4: addiu $sp, $sp, 0x10
}