void func_001cca80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cca80: addiu $sp, $sp, -0x10
    at = 0x32 << 16;                                            // 0x001cca84: lui $at, 0x32
    v1 = 1;                                                     // 0x001cca8c: addiu $v1, $zero, 1
    a0 = g_003257d7;  // Global at 0x003257d7                   // 0x001cca90: lbu $a0, 0x57d7($at)
    if (a0 == v1) goto label_0x1ccacc;                          // 0x001cca94: beq $a0, $v1, 0x1ccacc
    /* nop */                                                   // 0x001cca98: nop 
    if (a0 == 0) goto label_0x1ccaac;                           // 0x001cca9c: beqz $a0, 0x1ccaac
    at = 0x32 << 16;                                            // 0x001ccaa0: lui $at, 0x32
    goto label_0x1ccae8;                                        // 0x001ccaa4: b 0x1ccae8
label_0x1ccaac:
    v1 = g_00325920;  // Global at 0x00325920                   // 0x001ccaac: lbu $v1, 0x5920($at)
    if (v1 != 0) goto label_0x1ccae4;                           // 0x001ccab0: bnez $v1, 0x1ccae4
    /* nop */                                                   // 0x001ccab4: nop 
    v0 = a0 + 1;                                                // 0x001ccab8: addiu $v0, $a0, 1
    at = 0x32 << 16;                                            // 0x001ccabc: lui $at, 0x32
    a0 = 2;                                                     // 0x001ccac0: addiu $a0, $zero, 2
    func_001ce310();  // 0x1ce240                                // 0x001ccac4: jal 0x1ce240
    g_003257d7 = v0;  // Global at 0x003257d7                   // 0x001ccac8: sb $v0, 0x57d7($at)
label_0x1ccacc:
    func_001ce240();  // 0x1ce0f0                                // 0x001ccacc: jal 0x1ce0f0
    a0 = 2;                                                     // 0x001ccad0: addiu $a0, $zero, 2
    if (v0 == 0) goto label_0x1ccae4;                           // 0x001ccad4: beqz $v0, 0x1ccae4
    a0 = 4;                                                     // 0x001ccad8: addiu $a0, $zero, 4
    func_001cdf70();  // 0x1cdf30                                // 0x001ccadc: jal 0x1cdf30
    /* nop */                                                   // 0x001ccae0: nop 
label_0x1ccae4:
label_0x1ccae8:
    return;                                                     // 0x001ccae8: jr $ra
    sp = sp + 0x10;                                             // 0x001ccaec: addiu $sp, $sp, 0x10
}