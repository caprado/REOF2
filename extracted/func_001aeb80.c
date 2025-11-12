void func_001aeb80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001aeb80: addiu $sp, $sp, -0x10
    func_001ac9a0();  // 0x1ac990                                // 0x001aeb88: jal 0x1ac990
    /* nop */                                                   // 0x001aeb8c: nop 
    func_001adc60();  // 0x1adbe0                                // 0x001aeb90: jal 0x1adbe0
    /* nop */                                                   // 0x001aeb94: nop 
    func_00344ad0();  // 0x344ad0                               // 0x001aeb98: jal 0x344ad0
    /* nop */                                                   // 0x001aeb9c: nop 
    func_001d34a0();  // 0x1d3430                                // 0x001aeba0: jal 0x1d3430
    /* nop */                                                   // 0x001aeba4: nop 
    func_001ba590();  // 0x1ba3c0                                // 0x001aeba8: jal 0x1ba3c0
    /* nop */                                                   // 0x001aebac: nop 
    func_001bb0a0();  // 0x1bb060                                // 0x001aebb0: jal 0x1bb060
    /* nop */                                                   // 0x001aebb4: nop 
    func_0034acc0();  // 0x34acc0                               // 0x001aebb8: jal 0x34acc0
    /* nop */                                                   // 0x001aebbc: nop 
    func_001b38a0();  // 0x1b3860                                // 0x001aebc0: jal 0x1b3860
    /* nop */                                                   // 0x001aebc4: nop 
    func_001bbb80();  // 0x1bbab0                                // 0x001aebc8: jal 0x1bbab0
    /* nop */                                                   // 0x001aebcc: nop 
    return;                                                     // 0x001aebd4: jr $ra
    sp = sp + 0x10;                                             // 0x001aebd8: addiu $sp, $sp, 0x10
}