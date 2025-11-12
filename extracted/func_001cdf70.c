void func_001cdf70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cdf70: addiu $sp, $sp, -0x10
    at = 0x32 << 16;                                            // 0x001cdf74: lui $at, 0x32
    v1 = 7;                                                     // 0x001cdf7c: addiu $v1, $zero, 7
    a3 = g_003257d6;  // Global at 0x003257d6                   // 0x001cdf80: lbu $a3, 0x57d6($at)
    if (a3 == v1) goto label_0x1cdfa8;                          // 0x001cdf84: beq $a3, $v1, 0x1cdfa8
    at = 0x32 << 16;                                            // 0x001cdf88: lui $at, 0x32
    g_00325928 = a1;  // Global at 0x00325928                   // 0x001cdf8c: sw $a1, 0x5928($at)
    at = 0x32 << 16;                                            // 0x001cdf90: lui $at, 0x32
    g_0032592c = a2;  // Global at 0x0032592c                   // 0x001cdf94: sw $a2, 0x592c($at)
    at = 0x32 << 16;                                            // 0x001cdf98: lui $at, 0x32
    g_00325924 = a0;  // Global at 0x00325924                   // 0x001cdf9c: sw $a0, 0x5924($at)
    func_001cdf70();  // 0x1cdf30                                // 0x001cdfa0: jal 0x1cdf30
label_0x1cdfa8:
    return;                                                     // 0x001cdfac: jr $ra
    sp = sp + 0x10;                                             // 0x001cdfb0: addiu $sp, $sp, 0x10
}