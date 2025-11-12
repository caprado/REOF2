void func_001d53d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d53d0: addiu $sp, $sp, -0x10
    v1 = *(uint8_t*)(a0);                                       // 0x001d53d8: lbu $v1, 0($a0)
    v1 = v1 + -1;                                               // 0x001d53dc: addiu $v1, $v1, -1
    *(uint8_t*)(a0) = v1;                                       // 0x001d53e0: sb $v1, 0($a0)
    v1 = v1 & 0xff;                                             // 0x001d53e4: andi $v1, $v1, 0xff
    if (v1 != 0) goto label_0x1d5400;                           // 0x001d53e8: bnez $v1, 0x1d5400
    /* nop */                                                   // 0x001d53ec: nop 
    *(uint8_t*)((a0) + 0x10) = 0;                               // 0x001d53f0: sb $zero, 0x10($a0)
    *(uint8_t*)((a0) + 0xf) = 0;                                // 0x001d53f4: sb $zero, 0xf($a0)
    func_001d5730();  // 0x1d56d0                                // 0x001d53f8: jal 0x1d56d0
    a0 = a0 + 2;                                                // 0x001d53fc: addiu $a0, $a0, 2
label_0x1d5400:
    return;                                                     // 0x001d5404: jr $ra
    sp = sp + 0x10;                                             // 0x001d5408: addiu $sp, $sp, 0x10
}