void func_001260d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x22 << 16;                                            // 0x001260d0: lui $a1, 0x22
    sp = sp + -0x10;                                            // 0x001260d4: addiu $sp, $sp, -0x10
    a2 = 4;                                                     // 0x001260d8: addiu $a2, $zero, 4
    a1 = a1 + 0x2450;                                           // 0x001260dc: addiu $a1, $a1, 0x2450
    func_00107a20();  // 107a20                                // 0x001260e8: jal 0x107a20
    a1 = 0x22 << 16;                                            // 0x001260f0: lui $a1, 0x22
    a0 = s0 + 8;                                                // 0x001260f4: addiu $a0, $s0, 8
    a1 = a1 + 0x2458;                                           // 0x001260f8: addiu $a1, $a1, 0x2458
    if (v0 != 0) goto label_0x126120;                           // 0x001260fc: bnez $v0, 0x126120
    a2 = 4;                                                     // 0x00126100: addiu $a2, $zero, 4
    func_00107a20();  // 107a20                                // 0x00126104: jal 0x107a20
    /* nop */                                                   // 0x00126108: nop 
    /* bnezl $v0, 0x126124 */                                   // 0x0012610c: bnezl $v0, 0x126124
    goto label_0x126124;                                        // 0x00126114: b 0x126124
    v0 = 1;                                                     // 0x00126118: addiu $v0, $zero, 1
    /* nop */                                                   // 0x0012611c: nop 
label_0x126120:
label_0x126124:
    return;                                                     // 0x0012612c: jr $ra
    sp = sp + 0x10;                                             // 0x00126130: addiu $sp, $sp, 0x10
}