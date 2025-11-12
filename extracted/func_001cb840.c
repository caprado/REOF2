void func_001cb840() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cb840: addiu $sp, $sp, -0x20
    a1 = 0x32 << 16;                                            // 0x001cb844: lui $a1, 0x32
    a1 = a1 + -0x6950;                                          // 0x001cb84c: addiu $a1, $a1, -0x6950
    a2 = 0x2000;                                                // 0x001cb854: addiu $a2, $zero, 0x2000
    *(uint16_t*)((a0) + 0x1cc) = 0;                             // 0x001cb858: sh $zero, 0x1cc($a0)
    func_001cfd60();  // 0x1cfd50                                // 0x001cb85c: jal 0x1cfd50
    a1 = 0x31 << 16;                                            // 0x001cb864: lui $a1, 0x31
    a0 = s0 + 0x14;                                             // 0x001cb868: addiu $a0, $s0, 0x14
    a1 = a1 + 0x76b0;                                           // 0x001cb86c: addiu $a1, $a1, 0x76b0
    func_001cfd60();  // 0x1cfd50                                // 0x001cb870: jal 0x1cfd50
    a2 = 0x2000;                                                // 0x001cb874: addiu $a2, $zero, 0x2000
    func_001cf790();  // 0x1cf710                                // 0x001cb878: jal 0x1cf710
    a0 = s0 + 0x28;                                             // 0x001cb87c: addiu $a0, $s0, 0x28
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cb884: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cb888: jr $ra
    sp = sp + 0x20;                                             // 0x001cb88c: addiu $sp, $sp, 0x20
}