void func_001aec20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001aec20: addiu $sp, $sp, -0x10
    a0 = 2;                                                     // 0x001aec24: addiu $a0, $zero, 2
    func_001a8fc0();  // 1a8fc0                                // 0x001aec2c: jal 0x1a8fc0
    if (v0 == 0) goto label_0x1aec4c;                           // 0x001aec34: beqz $v0, 0x1aec4c
    a0 = 2;                                                     // 0x001aec38: addiu $a0, $zero, 2
    func_005bf7b0();  // 0x5bf7b0                               // 0x001aec3c: jal 0x5bf7b0
    a1 = -1;                                                    // 0x001aec40: addiu $a1, $zero, -1
    func_001d6440();  // 1d6440                                // 0x001aec44: jal 0x1d6440
    /* nop */                                                   // 0x001aec48: nop 
label_0x1aec4c:
    func_001d3430();  // 1d3430                                // 0x001aec4c: jal 0x1d3430
    /* nop */                                                   // 0x001aec50: nop 
    func_001b1620();  // 1b1620                                // 0x001aec54: jal 0x1b1620
    /* nop */                                                   // 0x001aec58: nop 
    func_001b1df0();  // 1b1df0                                // 0x001aec5c: jal 0x1b1df0
    /* nop */                                                   // 0x001aec60: nop 
    func_001b16a0();  // 1b16a0                                // 0x001aec64: jal 0x1b16a0
    /* nop */                                                   // 0x001aec68: nop 
    a0 = 2;                                                     // 0x001aec6c: addiu $a0, $zero, 2
    func_001a8fc0();  // 1a8fc0                                // 0x001aec70: jal 0x1a8fc0
    if (v0 == 0) goto label_0x1aec88;                           // 0x001aec78: beqz $v0, 0x1aec88
    /* nop */                                                   // 0x001aec7c: nop 
    func_005be900();  // 0x5be900                               // 0x001aec80: jal 0x5be900
    /* nop */                                                   // 0x001aec84: nop 
label_0x1aec88:
    func_001ac990();  // 1ac990                                // 0x001aec88: jal 0x1ac990
    /* nop */                                                   // 0x001aec8c: nop 
    func_001adbe0();  // 1adbe0                                // 0x001aec90: jal 0x1adbe0
    /* nop */                                                   // 0x001aec94: nop 
    func_00344ad0();  // 0x344ad0                               // 0x001aec98: jal 0x344ad0
    /* nop */                                                   // 0x001aec9c: nop 
    func_001d3430();  // 1d3430                                // 0x001aeca0: jal 0x1d3430
    /* nop */                                                   // 0x001aeca4: nop 
    func_001bb060();  // 1bb060                                // 0x001aeca8: jal 0x1bb060
    /* nop */                                                   // 0x001aecac: nop 
    func_0034acc0();  // 0x34acc0                               // 0x001aecb0: jal 0x34acc0
    /* nop */                                                   // 0x001aecb4: nop 
    func_001b3860();  // 1b3860                                // 0x001aecb8: jal 0x1b3860
    /* nop */                                                   // 0x001aecbc: nop 
    func_001bbab0();  // 1bbab0                                // 0x001aecc0: jal 0x1bbab0
    /* nop */                                                   // 0x001aecc4: nop 
    return;                                                     // 0x001aeccc: jr $ra
    sp = sp + 0x10;                                             // 0x001aecd0: addiu $sp, $sp, 0x10
}