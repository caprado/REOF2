void func_001cbcc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cbcc0: addiu $sp, $sp, -0x10
    func_001cfc30();  // 0x1cfc30                               // 0x001cbcc8: jal 0x1cfc30
    a0 = a0 + 0x28;                                             // 0x001cbccc: addiu $a0, $a0, 0x28
    v1 = 3;                                                     // 0x001cbcd0: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1cbce4;                          // 0x001cbcd4: bne $v0, $v1, 0x1cbce4
    /* nop */                                                   // 0x001cbcd8: nop 
    goto label_0x1cbce8;                                        // 0x001cbcdc: b 0x1cbce8
    v0 = 1;                                                     // 0x001cbce0: addiu $v0, $zero, 1
label_0x1cbce4:
label_0x1cbce8:
    return;                                                     // 0x001cbcec: jr $ra
    sp = sp + 0x10;                                             // 0x001cbcf0: addiu $sp, $sp, 0x10
}