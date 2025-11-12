void func_00113038() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00113038: addiu $sp, $sp, -0x30
    s0 = a1 & 1;                                                // 0x00113048: andi $s0, $a1, 1
    a0 = 0x28;                                                  // 0x0011304c: addiu $a0, $zero, 0x28
    /* multiply: s0 * a0 -> hi:lo */                            // 0x00113050: mult $ac2, $s0, $a0
    func_00112900();  // 0x112840                                // 0x00113058: jal 0x112840
    a0 = v0 + s1;                                               // 0x0011305c: addu $a0, $v0, $s1
    if (s0 == 0) goto label_0x113078;                           // 0x00113060: beqz $s0, 0x113078
    /* nop */                                                   // 0x00113064: nop 
    func_00112da0();  // 0x112cb8                                // 0x00113068: jal 0x112cb8
    a0 = s1 + 0x140;                                            // 0x0011306c: addiu $a0, $s1, 0x140
    goto label_0x113084;                                        // 0x00113070: b 0x113084
label_0x113078:
    func_00112da0();  // 0x112cb8                                // 0x00113078: jal 0x112cb8
    a0 = s1 + 0x50;                                             // 0x0011307c: addiu $a0, $s1, 0x50
label_0x113084:
    return;                                                     // 0x0011308c: jr $ra
    sp = sp + 0x30;                                             // 0x00113090: addiu $sp, $sp, 0x30
}