void func_001558d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001558d8: addiu $sp, $sp, -0x10
    v0 = 0x25 << 16;                                            // 0x001558dc: lui $v0, 0x25
    a3 = v0 + 0x6390;                                           // 0x001558ec: addiu $a3, $v0, 0x6390
    func_00150738();  // 150738                                // 0x0015596c: jal 0x150738
    func_001557e8();  // 1557e8                                // 0x00155974: jal 0x1557e8
    a0 = s0 + 0x58;                                             // 0x00155978: addiu $a0, $s0, 0x58
    v0 = 2;                                                     // 0x0015597c: addiu $v0, $zero, 2
    *(uint32_t*)(s0) = v0;                                      // 0x00155980: sw $v0, 0($s0)
    return;                                                     // 0x00155990: jr $ra
    sp = sp + 0x10;                                             // 0x00155994: addiu $sp, $sp, 0x10
}