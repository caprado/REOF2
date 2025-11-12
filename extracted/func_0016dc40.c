void func_0016dc40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = *(int32_t*)((a0) + 0x18);                              // 0x0016dc40: lw $t0, 0x18($a0)
    a1 = a1 << 2;                                               // 0x0016dc44: sll $a1, $a1, 2
    v0 = *(int32_t*)((a0) + 0x14);                              // 0x0016dc48: lw $v0, 0x14($a0)
    t1 = 0x3c;                                                  // 0x0016dc4c: addiu $t1, $zero, 0x3c
    v1 = 0x23 << 16;                                            // 0x0016dc50: lui $v1, 0x23
    v1 = v1 + a1;                                               // 0x0016dc54: addu $v1, $v1, $a1
    v1 = g_00229118;  // Global at 0x00229118                   // 0x0016dc58: lw $v1, -0x6ee8($v1)
    t5 = 0x3c;                                                  // 0x0016dc5c: addiu $t5, $zero, 0x3c
    v0 = v0 + t0;                                               // 0x0016dc60: addu $v0, $v0, $t0
    t0 = *(int32_t*)((a0) + 0xc);                               // 0x0016dc64: lw $t0, 0xc($a0)
    t3 = v0 + 1;                                                // 0x0016dc68: addiu $t3, $v0, 1
    v0 = 0x3c;                                                  // 0x0016dc6c: addiu $v0, $zero, 0x3c
    /* divide: t3 / v1 -> hi:lo */                              // 0x0016dc70: div $zero, $t3, $v1
    a1 = *(int32_t*)((a0) + 0x10);                              // 0x0016dc74: lw $a1, 0x10($a0)
    t6 = *(int32_t*)((a0) + 8);                                 // 0x0016dc78: lw $t6, 8($a0)
    t4 = 0x3c;                                                  // 0x0016dc7c: addiu $t4, $zero, 0x3c
    /* beqzl $v1, 0x16dc88 */                                   // 0x0016dc80: beqzl $v1, 0x16dc88
    /* break (trap) */                                          // 0x0016dc84: break 0, 7
    /* mflo $t2 */                                              // 0x0016dc88
    /* mfhi $t3 */                                              // 0x0016dc8c
    a1 = a1 + t2;                                               // 0x0016dc90: addu $a1, $a1, $t2
    /* divide: a1 / t1 -> hi:lo */                              // 0x0016dc94: div $zero, $a1, $t1
    /* mflo $a1 */                                              // 0x0016dc98
    /* mfhi $t2 */                                              // 0x0016dc9c
    t0 = t0 + a1;                                               // 0x0016dca0: addu $t0, $t0, $a1
    /* divide: t0 / t1 -> hi:lo */                              // 0x0016dca4: div $zero, $t0, $t1
    /* mflo $t0 */                                              // 0x0016dca8
    /* mfhi $a0 */                                              // 0x0016dcac
    if (a2 == 0) goto label_0x16dce4;                           // 0x0016dcb0: beqz $a2, 0x16dce4
    t6 = t6 + t0;                                               // 0x0016dcb4: addu $t6, $t6, $t0
    /* bnezl $t2, 0x16dce8 */                                   // 0x0016dcb8: bnezl $t2, 0x16dce8
    *(uint32_t*)((a3) + 0x14) = t3;                             // 0x0016dcbc: sw $t3, 0x14($a3)
    v0 = 0xa;                                                   // 0x0016dcc0: addiu $v0, $zero, 0xa
    /* divide: a0 / v0 -> hi:lo */                              // 0x0016dcc4: div $zero, $a0, $v0
    /* beqzl $v0, 0x16dcd0 */                                   // 0x0016dcc8: beqzl $v0, 0x16dcd0
    /* break (trap) */                                          // 0x0016dccc: break 0, 7
    /* mfhi $v1 */                                              // 0x0016dcd0
    if (v1 == 0) goto label_0x16dce4;                           // 0x0016dcd4: beqz $v1, 0x16dce4
    v1 = ((unsigned)t3 < (unsigned)2) ? 1 : 0;                  // 0x0016dcd8: sltiu $v1, $t3, 2
    v0 = 2;                                                     // 0x0016dcdc: addiu $v0, $zero, 2
    if (v1 != 0) t3 = v0;                                       // 0x0016dce0: movn $t3, $v0, $v1
label_0x16dce4:
    *(uint32_t*)((a3) + 0x14) = t3;                             // 0x0016dce4: sw $t3, 0x14($a3)
    *(uint32_t*)((a3) + 8) = t6;                                // 0x0016dce8: sw $t6, 8($a3)
    *(uint32_t*)((a3) + 0xc) = a0;                              // 0x0016dcec: sw $a0, 0xc($a3)
    return;                                                     // 0x0016dcf0: jr $ra
    *(uint32_t*)((a3) + 0x10) = t2;                             // 0x0016dcf4: sw $t2, 0x10($a3)
}