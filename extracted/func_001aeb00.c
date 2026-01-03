void func_001aeb00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001aeb00: addiu $sp, $sp, -0x10
    a0 = 2;                                                     // 0x001aeb04: addiu $a0, $zero, 2
    func_001a8fc0();  // 1a8fc0                                // 0x001aeb0c: jal 0x1a8fc0
    if (v0 == 0) goto label_0x1aeb2c;                           // 0x001aeb14: beqz $v0, 0x1aeb2c
    a0 = 2;                                                     // 0x001aeb18: addiu $a0, $zero, 2
    func_005bf7b0();  // 0x5bf7b0                               // 0x001aeb1c: jal 0x5bf7b0
    a1 = -1;                                                    // 0x001aeb20: addiu $a1, $zero, -1
    func_001d6440();  // 1d6440                                // 0x001aeb24: jal 0x1d6440
    /* nop */                                                   // 0x001aeb28: nop 
label_0x1aeb2c:
    func_001d3430();  // 1d3430                                // 0x001aeb2c: jal 0x1d3430
    /* nop */                                                   // 0x001aeb30: nop 
    func_001b1620();  // 1b1620                                // 0x001aeb34: jal 0x1b1620
    /* nop */                                                   // 0x001aeb38: nop 
    func_001b1df0();  // 1b1df0                                // 0x001aeb3c: jal 0x1b1df0
    /* nop */                                                   // 0x001aeb40: nop 
    func_001b16a0();  // 1b16a0                                // 0x001aeb44: jal 0x1b16a0
    /* nop */                                                   // 0x001aeb48: nop 
    a0 = 2;                                                     // 0x001aeb4c: addiu $a0, $zero, 2
    func_001a8fc0();  // 1a8fc0                                // 0x001aeb50: jal 0x1a8fc0
    if (v0 == 0) goto label_0x1aeb68;                           // 0x001aeb58: beqz $v0, 0x1aeb68
    /* nop */                                                   // 0x001aeb5c: nop 
    func_005be900();  // 0x5be900                               // 0x001aeb60: jal 0x5be900
    /* nop */                                                   // 0x001aeb64: nop 
label_0x1aeb68:
    func_001aeb80();  // 1aeb80                                // 0x001aeb68: jal 0x1aeb80
    /* nop */                                                   // 0x001aeb6c: nop 
    return;                                                     // 0x001aeb74: jr $ra
    sp = sp + 0x10;                                             // 0x001aeb78: addiu $sp, $sp, 0x10
}