void func_001dd248() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x38;                                                  // 0x001dd248: addiu $v0, $zero, 0x38
    v1 = 0x33 << 16;                                            // 0x001dd24c: lui $v1, 0x33
    a2 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dd254: lw $a2, -0x13c($v1)
    a2 = a2 + a0;                                               // 0x001dd258: addu $a2, $a2, $a0
    a0 = a2 + 0x10;                                             // 0x001dd25c: addiu $a0, $a2, 0x10
    v0 = *(int32_t*)((a0) + 0x24);                              // 0x001dd260: lw $v0, 0x24($a0)
    v0 = (v0 < 4) ? 1 : 0;                                      // 0x001dd264: slti $v0, $v0, 4
    if (v0 != 0) return;  // Branch to 0x1dd278                 // 0x001dd268: bnez $v0, 0x1dd278
    a1 = a1 & 0xffff;                                           // 0x001dd26c: andi $a1, $a1, 0xffff
    return;                                                     // 0x001dd270: jr $ra
    v0 = -1;                                                    // 0x001dd274: addiu $v0, $zero, -1
}