void func_001149e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001149e0: addiu $sp, $sp, -0x40
    s1 = COP0_REG12;  // Read system control register           // 0x001149f4: mfc0 $s1, $12, 0
    v0 = 1 << 16;                                               // 0x001149f8: lui $v0, 1
    s1 = s1 & v0;                                               // 0x001149fc: and $s1, $s1, $v0
    if (s1 == 0) goto label_0x114a2c;                           // 0x00114a00: beqz $s1, 0x114a2c
    s2 = 0x1f << 16;                                            // 0x00114a04: lui $s2, 0x1f
label_0x114a08:
    /* memory sync */                                           // 0x00114a0c: sync 0x10
    v0 = COP0_REG12;  // Read system control register           // 0x00114a10: mfc0 $v0, $12, 0
    v1 = 1 << 16;                                               // 0x00114a14: lui $v1, 1
    v0 = v0 & v1;                                               // 0x00114a18: and $v0, $v0, $v1
    if (v0 != 0) goto label_0x114a08;                           // 0x00114a1c: bnez $v0, 0x114a08
    /* nop */                                                   // 0x00114a20: nop 
    goto label_0x114a30;                                        // 0x00114a24: b 0x114a30
    v0 = g_001f0334;  // Global at 0x001f0334                   // 0x00114a28: lw $v0, 0x334($s2)
label_0x114a2c:
    v0 = g_001f0334;  // Global at 0x001f0334                   // 0x00114a2c: lw $v0, 0x334($s2)
label_0x114a30:
    CreateSema();  // 0x1142c0                                  // 0x00114a30: jal 0x1142c0
    s0 = v0 + a0;                                               // 0x00114a34: addu $s0, $v0, $a0
    v0 = ((unsigned)v0 < (unsigned)s0) ? 1 : 0;                 // 0x00114a38: sltu $v0, $v0, $s0
    if (v0 == 0) goto label_0x114a68;                           // 0x00114a3c: beqz $v0, 0x114a68
    v0 = g_001f0334;  // Global at 0x001f0334                   // 0x00114a40: lw $v0, 0x334($s2)
    func_001050b8();  // 0x104ef8                                // 0x00114a44: jal 0x104ef8
    /* nop */                                                   // 0x00114a48: nop 
    v1 = 0xc;                                                   // 0x00114a4c: addiu $v1, $zero, 0xc
    if (s1 == 0) goto label_0x114a5c;                           // 0x00114a50: beqz $s1, 0x114a5c
    g_00010000 = v1;  // Global at 0x00010000                   // 0x00114a54: sw $v1, 0($v0)
label_0x114a5c:
    v0 = 0xffff << 16;                                          // 0x00114a5c: lui $v0, 0xffff
    goto label_0x114a74;                                        // 0x00114a60: b 0x114a74
    v0 = v0 | 0xffff;                                           // 0x00114a64: ori $v0, $v0, 0xffff
label_0x114a68:
    if (s1 == 0) goto label_0x114a74;                           // 0x00114a68: beqz $s1, 0x114a74
    g_001f0334 = s0;  // Global at 0x001f0334                   // 0x00114a6c: sw $s0, 0x334($s2)
label_0x114a74:
    return;                                                     // 0x00114a84: jr $ra
    sp = sp + 0x40;                                             // 0x00114a88: addiu $sp, $sp, 0x40
}