void func_001b3860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b3860: addiu $sp, $sp, -0x10
    func_001b4570();  // 0x1b4550                                // 0x001b3868: jal 0x1b4550
    /* nop */                                                   // 0x001b386c: nop 
    a0 = 0x1b << 16;                                            // 0x001b3870: lui $a0, 0x1b
    func_001af3a0();  // 0x1af2f0                                // 0x001b3874: jal 0x1af2f0
    a0 = a0 + 0x3fa0;                                           // 0x001b3878: addiu $a0, $a0, 0x3fa0
    at = 0x31 << 16;                                            // 0x001b387c: lui $at, 0x31
    v1 = 1;                                                     // 0x001b3880: addiu $v1, $zero, 1
    a0 = g_003137ca;  // Global at 0x003137ca                   // 0x001b3884: lbu $a0, 0x37ca($at)
    return;                                                     // 0x001b388c: jr $ra
    sp = sp + 0x10;                                             // 0x001b3890: addiu $sp, $sp, 0x10
}