void func_001c7740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c7740: addiu $sp, $sp, -0x10
    a0 = 0x31 << 16;                                            // 0x001c7744: lui $a0, 0x31
    func_001178a0();  // 1178a0                                // 0x001c774c: jal 0x1178a0
    a0 = a0 + 0x6630;                                           // 0x001c7750: addiu $a0, $a0, 0x6630
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001c7758: sltu $v0, $zero, $v0
    v0 = v0 ^ 1;                                                // 0x001c775c: xori $v0, $v0, 1
    return;                                                     // 0x001c7768: jr $ra
    sp = sp + 0x10;                                             // 0x001c776c: addiu $sp, $sp, 0x10
}