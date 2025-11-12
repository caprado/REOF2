void func_001b8810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b8810: addiu $sp, $sp, -0x10
    func_00546420();  // 0x546420                               // 0x001b8818: jal 0x546420
    a0 = a0 + 0x38;                                             // 0x001b881c: addiu $a0, $a0, 0x38
    v0 = v0 & 0xff;                                             // 0x001b8824: andi $v0, $v0, 0xff
    v0 = v0 ^ 1;                                                // 0x001b8828: xori $v0, $v0, 1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001b882c: sltu $v0, $zero, $v0
    return;                                                     // 0x001b8830: jr $ra
    sp = sp + 0x10;                                             // 0x001b8834: addiu $sp, $sp, 0x10
}