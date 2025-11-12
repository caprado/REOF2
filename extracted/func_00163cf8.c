void func_00163cf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x00163cf8: lui $v0, 0x21
    sp = sp + -0x20;                                            // 0x00163cfc: addiu $sp, $sp, -0x20
    v1 = g_00214454;  // Global at 0x00214454                   // 0x00163d00: lw $v1, 0x4454($v0)
    a0 = 1;                                                     // 0x00163d08: addiu $a0, $zero, 1
    if (v1 != a0) goto label_0x163d84;                          // 0x00163d14: bne $v1, $a0, 0x163d84
    func_0015e348();  // 0x15e338                                // 0x00163d1c: jal 0x15e338
    /* nop */                                                   // 0x00163d20: nop 
    func_00163410();  // 0x1633f8                                // 0x00163d28: jal 0x1633f8
    a0 = s0 + 0x54;                                             // 0x00163d2c: addiu $a0, $s0, 0x54
    /* beqzl $v0, 0x163d88 */                                   // 0x00163d30: beqzl $v0, 0x163d88
    func_00163cc8();  // 0x163c98                                // 0x00163d38: jal 0x163c98
    s0 = s0 + 0x68;                                             // 0x00163d3c: addiu $s0, $s0, 0x68
    s1 = 7;                                                     // 0x00163d40: addiu $s1, $zero, 7
    /* nop */                                                   // 0x00163d44: nop 
label_0x163d48:
    /* beqzl $s0, 0x163d5c */                                   // 0x00163d48: beqzl $s0, 0x163d5c
    s1 = s1 + -1;                                               // 0x00163d4c: addiu $s1, $s1, -1
    func_00163e38();  // 0x163d98                                // 0x00163d50: jal 0x163d98
    s1 = s1 + -1;                                               // 0x00163d58: addiu $s1, $s1, -1
    if (s1 >= 0) goto label_0x163d48;                           // 0x00163d5c: bgez $s1, 0x163d48
    s0 = s0 + 0x210;                                            // 0x00163d60: addiu $s0, $s0, 0x210
    func_00163f58();  // 0x163f30                                // 0x00163d64: jal 0x163f30
    func_001721f0();  // 0x172188                                // 0x00163d6c: jal 0x172188
    /* nop */                                                   // 0x00163d70: nop 
    func_00163cf8();  // 0x163cc8                                // 0x00163d74: jal 0x163cc8
    s0 = v0 ^ 1;                                                // 0x00163d78: xori $s0, $v0, 1
    s0 = ((unsigned)0 < (unsigned)s0) ? 1 : 0;                  // 0x00163d7c: sltu $s0, $zero, $s0
label_0x163d84:
    return;                                                     // 0x00163d90: jr $ra
    sp = sp + 0x20;                                             // 0x00163d94: addiu $sp, $sp, 0x20
}