void func_00122ce0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00122ce0: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s1) + 0xb0);                              // 0x00122cf8: lw $v0, 0xb0($s1)
    if (v0 == 0) goto label_0x122d14;                           // 0x00122cfc: beqz $v0, 0x122d14
    v0 = 0x1f << 16;                                            // 0x00122d04: lui $v0, 0x1f
    v1 = g_001f1d2c;  // Global at 0x001f1d2c                   // 0x00122d08: lw $v1, 0x1d2c($v0)
    /* call function at address in v1 */                        // 0x00122d0c: jalr $v1
    /* nop */                                                   // 0x00122d10: nop 
label_0x122d14:
    v0 = 0x60;                                                  // 0x00122d14: addiu $v0, $zero, 0x60
    *(uint32_t*)((s1) + 0xb4) = s0;                             // 0x00122d18: sw $s0, 0xb4($s1)
    /* divide: s0 / v0 -> hi:lo */                              // 0x00122d1c: div $zero, $s0, $v0
    /* beqzl $v0, 0x122d28 */                                   // 0x00122d20: beqzl $v0, 0x122d28
    /* break (trap) */                                          // 0x00122d24: break 0, 7
    /* mflo $v1 */                                              // 0x00122d30
    *(uint32_t*)((s1) + 0xb8) = v1;                             // 0x00122d34: sw $v1, 0xb8($s1)
    return;                                                     // 0x00122d3c: jr $ra
    sp = sp + 0x20;                                             // 0x00122d40: addiu $sp, $sp, 0x20
}