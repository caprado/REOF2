void func_001bc6d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bc6d0: addiu $sp, $sp, -0x10
    func_001b2080();  // 0x1b2010                                // 0x001bc6d8: jal 0x1b2010
    /* nop */                                                   // 0x001bc6dc: nop 
    func_001b2110();  // 0x1b2080                                // 0x001bc6e0: jal 0x1b2080
    /* nop */                                                   // 0x001bc6e4: nop 
    func_001aef60();  // 0x1aeef0                                // 0x001bc6e8: jal 0x1aeef0
    func_001aea70();  // 0x1ae950                                // 0x001bc6f0: jal 0x1ae950
    a0 = 0x1c << 16;                                            // 0x001bc6f8: lui $a0, 0x1c
    a1 = 0xa;                                                   // 0x001bc6fc: addiu $a1, $zero, 0xa
    func_001b7720();  // 0x1b76c0                                // 0x001bc700: jal 0x1b76c0
    a0 = a0 + -0x4f60;                                          // 0x001bc704: addiu $a0, $a0, -0x4f60
    a0 = 0x1c << 16;                                            // 0x001bc708: lui $a0, 0x1c
    a1 = 0xb;                                                   // 0x001bc70c: addiu $a1, $zero, 0xb
    func_001b7720();  // 0x1b76c0                                // 0x001bc710: jal 0x1b76c0
    a0 = a0 + -0x5410;                                          // 0x001bc714: addiu $a0, $a0, -0x5410
    at = 0x31 << 16;                                            // 0x001bc718: lui $at, 0x31
    func_001dad60();  // 0x1dac50                                // 0x001bc71c: jal 0x1dac50
    g_003137a0 = 0;  // Global at 0x003137a0                    // 0x001bc720: sb $zero, 0x37a0($at)
    func_001d8ec0();  // 0x1d8e00                                // 0x001bc724: jal 0x1d8e00
    /* nop */                                                   // 0x001bc728: nop 
    func_001b3860();  // 0x1b3830                                // 0x001bc72c: jal 0x1b3830
    /* nop */                                                   // 0x001bc730: nop 
    return;                                                     // 0x001bc738: jr $ra
    sp = sp + 0x10;                                             // 0x001bc73c: addiu $sp, $sp, 0x10
}