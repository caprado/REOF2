void func_001bbed0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bbed0: addiu $sp, $sp, -0x10
    v0 = *(uint8_t*)((a0) + 8);                                 // 0x001bbed8: lbu $v0, 8($a0)
    v0 = v0 + 1;                                                // 0x001bbedc: addiu $v0, $v0, 1
    *(uint8_t*)((a0) + 8) = v0;                                 // 0x001bbee0: sb $v0, 8($a0)
    *(uint8_t*)((a0) + 9) = 0;                                  // 0x001bbee4: sb $zero, 9($a0)
    func_001a8e70();  // 1a8e70                                // 0x001bbee8: jal 0x1a8e70
    a1 = 0x1c << 16;                                            // 0x001bbef0: lui $a1, 0x1c
    func_001b7890();  // 1b7890                                // 0x001bbef8: jal 0x1b7890
    a1 = a1 + -0x38c0;                                          // 0x001bbefc: addiu $a1, $a1, -0x38c0
    func_001bef00();  // 1bef00                                // 0x001bbf00: jal 0x1bef00
    /* nop */                                                   // 0x001bbf04: nop 
    v0 = 1;                                                     // 0x001bbf08: addiu $v0, $zero, 1
    func_001b3830();  // 1b3830                                // 0x001bbf0c: jal 0x1b3830
    *(uint8_t*)((gp) + -0x6350) = v0;                           // 0x001bbf10: sb $v0, -0x6350($gp)
    func_001dac50();  // 1dac50                                // 0x001bbf14: jal 0x1dac50
    /* nop */                                                   // 0x001bbf18: nop 
    a0 = 0x14;                                                  // 0x001bbf1c: addiu $a0, $zero, 0x14
    func_001aefd0();  // 1aefd0                                // 0x001bbf20: jal 0x1aefd0
    a1 = 0xff00 << 16;                                          // 0x001bbf24: lui $a1, 0xff00
    return;                                                     // 0x001bbf2c: jr $ra
    sp = sp + 0x10;                                             // 0x001bbf30: addiu $sp, $sp, 0x10
}