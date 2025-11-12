void func_00183ea0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_8;
    
    sp = sp + -0x50;                                            // 0x00183ea0: addiu $sp, $sp, -0x50
    func_00188568();  // 0x188530                                // 0x00183eb4: jal 0x188530
    if (v0 != 0) goto label_0x183ed0;                           // 0x00183ebc: bnez $v0, 0x183ed0
    v0 = 0x8101 << 16;                                          // 0x00183ec4: lui $v0, 0x8101
    goto label_0x183f88;                                        // 0x00183ec8: b 0x183f88
    v0 = v0 | 0x13;                                             // 0x00183ecc: ori $v0, $v0, 0x13
label_0x183ed0:
    func_00186b50();  // 0x186b30                                // 0x00183ed0: jal 0x186b30
    if (v0 != 0) goto label_0x183eec;                           // 0x00183ed8: bnez $v0, 0x183eec
    a3 = local_4;                                               // 0x00183edc: lw $a3, 4($sp)
label_0x183ee0:
    v0 = 0x8101 << 16;                                          // 0x00183ee0: lui $v0, 0x8101
    goto label_0x183f88;                                        // 0x00183ee4: b 0x183f88
    v0 = v0 | 0x6f;                                             // 0x00183ee8: ori $v0, $v0, 0x6f
label_0x183eec:
    v1 = 0x898;                                                 // 0x00183eec: addiu $v1, $zero, 0x898
    a0 = local_8;                                               // 0x00183ef0: lw $a0, 8($sp)
    /* multiply: s2 * v1 -> hi:lo */                            // 0x00183ef4: mult $ac3, $s2, $v1
    v0 = 0x27 << 16;                                            // 0x00183ef8: lui $v0, 0x27
    t0 = -1;                                                    // 0x00183efc: addiu $t0, $zero, -1
    /* divide: a0 / a3 -> hi:lo */                              // 0x00183f00: div $zero, $a0, $a3
    v0 = v0 + 0x72c8;                                           // 0x00183f04: addiu $v0, $v0, 0x72c8
    t1 = v0 + 0x808;                                            // 0x00183f08: addiu $t1, $v0, 0x808
    t2 = 0x23 << 16;                                            // 0x00183f0c: lui $t2, 0x23
    a0 = v0 + v1;                                               // 0x00183f10: addu $a0, $v0, $v1
    *(uint32_t*)((a0) + 0x894) = 0;                             // 0x00183f14: sw $zero, 0x894($a0)
    *(uint32_t*)((a1) + 0x800) = t0;                            // 0x00183f1c: sw $t0, 0x800($a1)
    g_0022a77c = t0;  // Global at 0x0022a77c                   // 0x00183f24: sw $t0, 0x804($a2)
    *(uint32_t*)((a0) + 0x890) = 0;                             // 0x00183f2c: sw $zero, 0x890($a0)
    v1 = v1 + t1;                                               // 0x00183f30: addu $v1, $v1, $t1
    g_00277b54 = 0;  // Global at 0x00277b54                    // 0x00183f34: sw $zero, 0x88c($v0)
    a2 = t2 + -0x6088;                                          // 0x00183f38: addiu $a2, $t2, -0x6088
    v0 = g_00229f78;  // Global at 0x00229f78                   // 0x00183f3c: lb $v0, 0($a2)
    a0 = g_00229f79;  // Global at 0x00229f79                   // 0x00183f40: lb $a0, 1($a2)
    *(uint8_t*)(v1) = v0;                                       // 0x00183f44: sb $v0, 0($v1)
    *(uint8_t*)((v1) + 1) = a0;                                 // 0x00183f48: sb $a0, 1($v1)
    /* beqzl $a3, 0x183f54 */                                   // 0x00183f4c: beqzl $a3, 0x183f54
    /* break (trap) */                                          // 0x00183f50: break 0, 7
    /* mflo $s1 */                                              // 0x00183f54
    if (s1 <= 0) goto label_0x183f84;                           // 0x00183f58: blez $s1, 0x183f84
    /* nop */                                                   // 0x00183f64: nop 
label_0x183f68:
    func_00188530();  // 0x188400                                // 0x00183f68: jal 0x188400
    if (v0 == 0) goto label_0x183ee0;                           // 0x00183f70: beqz $v0, 0x183ee0
    s0 = s0 + 1;                                                // 0x00183f74: addiu $s0, $s0, 1
    v0 = (s0 < s1) ? 1 : 0;                                     // 0x00183f78: slt $v0, $s0, $s1
    if (v0 != 0) goto label_0x183f68;                           // 0x00183f7c: bnez $v0, 0x183f68
label_0x183f84:
label_0x183f88:
    return;                                                     // 0x00183f98: jr $ra
    sp = sp + 0x50;                                             // 0x00183f9c: addiu $sp, $sp, 0x50
}