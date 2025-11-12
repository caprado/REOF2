void func_0015ccb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015ccb8: addiu $sp, $sp, -0x10
    func_0015e348();  // 0x15e338                                // 0x0015ccc4: jal 0x15e338
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0015ccd0: lw $v0, 0x18($s0)
    a2 = -1;                                                    // 0x0015ccd4: addiu $a2, $zero, -1
    if (v0 != 0) goto label_0x15ccf4;                           // 0x0015ccd8: bnez $v0, 0x15ccf4
    v1 = *(int32_t*)((a1) + 0x28);                              // 0x0015cce0: lw $v1, 0x28($a1)
    v0 = *(int32_t*)((a1) + 0x2c);                              // 0x0015cce8: lw $v0, 0x2c($a1)
    if (v1 != 0) a0 = 0;                                        // 0x0015ccec: movn $a0, $zero, $v1
    if (v0 == 0) a0 = a2;                                       // 0x0015ccf0: movz $a0, $a2, $v0
label_0x15ccf4:
    return;                                                     // 0x0015cd00: jr $ra
    sp = sp + 0x10;                                             // 0x0015cd04: addiu $sp, $sp, 0x10
}