void func_001ba9c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba9c0: addiu $sp, $sp, -0x10
    func_001ad600();  // 1ad600                                // 0x001ba9c8: jal 0x1ad600
    /* nop */                                                   // 0x001ba9cc: nop 
    func_001b7ab0();  // 1b7ab0                                // 0x001ba9d0: jal 0x1b7ab0
    /* nop */                                                   // 0x001ba9d4: nop 
    func_001ae690();  // 1ae690                                // 0x001ba9d8: jal 0x1ae690
    /* nop */                                                   // 0x001ba9dc: nop 
    func_001ba3c0();  // 1ba3c0                                // 0x001ba9e0: jal 0x1ba3c0
    /* nop */                                                   // 0x001ba9e4: nop 
    func_001aefc0();  // 1aefc0                                // 0x001ba9e8: jal 0x1aefc0
    /* nop */                                                   // 0x001ba9ec: nop 
    func_001d33e0();  // 1d33e0                                // 0x001ba9f0: jal 0x1d33e0
    /* nop */                                                   // 0x001ba9f4: nop 
    func_001af240();  // 1af240                                // 0x001ba9f8: jal 0x1af240
    /* nop */                                                   // 0x001ba9fc: nop 
    v0 = 1;                                                     // 0x001baa00: addiu $v0, $zero, 1
    func_001ba8b0();  // 1ba8b0                                // 0x001baa04: jal 0x1ba8b0
    *(uint32_t*)((gp) + -0x7cc0) = v0;                          // 0x001baa08: sw $v0, -0x7cc0($gp)
    func_001ae5a0();  // 1ae5a0                                // 0x001baa0c: jal 0x1ae5a0
    /* nop */                                                   // 0x001baa10: nop 
    func_001b7490();  // 1b7490                                // 0x001baa14: jal 0x1b7490
    /* nop */                                                   // 0x001baa18: nop 
    *(uint32_t*)((gp) + -0x6360) = 0;                           // 0x001baa1c: sw $zero, -0x6360($gp)
    return;                                                     // 0x001baa24: jr $ra
    sp = sp + 0x10;                                             // 0x001baa28: addiu $sp, $sp, 0x10
}