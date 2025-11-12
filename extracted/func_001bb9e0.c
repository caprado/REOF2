void func_001bb9e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x30 << 16;                                            // 0x001bb9e0: lui $at, 0x30
    v1 = 0x30 << 16;                                            // 0x001bb9e4: lui $v1, 0x30
    g_00307fe4 = a0;  // Global at 0x00307fe4                   // 0x001bb9e8: sh $a0, 0x7fe4($at)
    a0 = a0 + -1;                                               // 0x001bb9ec: addiu $a0, $a0, -1
    at = 0x30 << 16;                                            // 0x001bb9f0: lui $at, 0x30
    a1 = a0 << 4;                                               // 0x001bb9f4: sll $a1, $a0, 4
    a0 = 0x22 << 16;                                            // 0x001bb9f8: lui $a0, 0x22
    a0 = a0 + -0x3490;                                          // 0x001bb9fc: addiu $a0, $a0, -0x3490
    t0 = a0 + a1;                                               // 0x001bba00: addu $t0, $a0, $a1
    g_00307ff4 = t0;  // Global at 0x00307ff4                   // 0x001bba04: sw $t0, 0x7ff4($at)
    a3 = *(uint8_t*)((t0) + 0xc);                               // 0x001bba08: lbu $a3, 0xc($t0)
    a0 = *(uint8_t*)((t0) + 0xd);                               // 0x001bba0c: lbu $a0, 0xd($t0)
    at = (a0 < a3) ? 1 : 0;                                     // 0x001bba10: slt $at, $a0, $a3
    if (at == 0) goto label_0x1bba30;                           // 0x001bba14: beqz $at, 0x1bba30
    v1 = v1 + 0x7fe0;                                           // 0x001bba18: addiu $v1, $v1, 0x7fe0
    a1 = 1;                                                     // 0x001bba1c: addiu $a1, $zero, 1
    a0 = a3 - a0;                                               // 0x001bba20: subu $a0, $a3, $a0
    g_00307fe6 = a1;  // Global at 0x00307fe6                   // 0x001bba24: sh $a1, 6($v1)
    goto label_0x1bba40;                                        // 0x001bba28: b 0x1bba40
    g_00307ff0 = a0;  // Global at 0x00307ff0                   // 0x001bba2c: sh $a0, 0x10($v1)
label_0x1bba30:
    a1 = 2;                                                     // 0x001bba30: addiu $a1, $zero, 2
    a0 = a0 - a3;                                               // 0x001bba34: subu $a0, $a0, $a3
    g_00307fe6 = a1;  // Global at 0x00307fe6                   // 0x001bba38: sh $a1, 6($v1)
    g_00307ff0 = a0;  // Global at 0x00307ff0                   // 0x001bba3c: sh $a0, 0x10($v1)
label_0x1bba40:
    a1 = *(int16_t*)((t0) + 0xe);                               // 0x001bba40: lh $a1, 0xe($t0)
    a0 = 1;                                                     // 0x001bba44: addiu $a0, $zero, 1
    g_00307ff2 = a1;  // Global at 0x00307ff2                   // 0x001bba48: sh $a1, 0x12($v1)
    a2 = g_00307ff0;  // Global at 0x00307ff0                   // 0x001bba4c: lh $a2, 0x10($v1)
    a1 = g_00307ff2;  // Global at 0x00307ff2                   // 0x001bba50: lh $a1, 0x12($v1)
    /* divide: a2 / a1 -> hi:lo */                              // 0x001bba54: div $zero, $a2, $a1
    /* nop */                                                   // 0x001bba58: nop 
    /* nop */                                                   // 0x001bba5c: nop 
    /* mflo $a1 */                                              // 0x001bba60
    g_00307ff0 = a1;  // Global at 0x00307ff0                   // 0x001bba64: sh $a1, 0x10($v1)
    a1 = g_00307fe6;  // Global at 0x00307fe6                   // 0x001bba68: lh $a1, 6($v1)
    if (a1 != a0) goto label_0x1bba80;                          // 0x001bba6c: bne $a1, $a0, 0x1bba80
    /* nop */                                                   // 0x001bba70: nop 
    a0 = g_00307ff0;  // Global at 0x00307ff0                   // 0x001bba74: lh $a0, 0x10($v1)
    a0 = -a0;                                                   // 0x001bba78: negu $a0, $a0
    g_00307ff0 = a0;  // Global at 0x00307ff0                   // 0x001bba7c: sh $a0, 0x10($v1)
label_0x1bba80:
    a2 = *(uint8_t*)((t0) + 1);                                 // 0x001bba80: lbu $a2, 1($t0)
    a0 = a3 & 0xff;                                             // 0x001bba84: andi $a0, $a3, 0xff
    a1 = gp + -0x7cb0;                                          // 0x001bba88: addiu $a1, $gp, -0x7cb0
    a0 = a0 << 0x18;                                            // 0x001bba8c: sll $a0, $a0, 0x18
    a2 = a2 << 2;                                               // 0x001bba90: sll $a2, $a2, 2
    a1 = a1 + a2;                                               // 0x001bba94: addu $a1, $a1, $a2
    a1 = *(int32_t*)(a1);                                       // 0x001bba98: lw $a1, 0($a1)
    a0 = a0 | a1;                                               // 0x001bbaa4: or $a0, $a0, $a1
    return;                                                     // 0x001bbaa8: jr $ra
    g_00307fec = a0;  // Global at 0x00307fec                   // 0x001bbaac: sw $a0, 0xc($v1)
}