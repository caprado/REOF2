void func_0011e100() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t1 = 0x1f << 16;                                            // 0x0011e104: lui $t1, 0x1f
    a1 = t1 + 0x19e8;                                           // 0x0011e10c: addiu $a1, $t1, 0x19e8
    a1 = g_001f1a00;  // Global at 0x001f1a00                   // 0x0011e120: lw $a1, 0x18($a1)
    goto label_0x11e134;                                        // 0x0011e124: b 0x11e134
    /* nop */                                                   // 0x0011e12c: nop 
    a1 = *(int32_t*)(t0);                                       // 0x0011e130: lw $a1, 0($t0)
label_0x11e134:
    /* beqzl $a1, 0x11e160 */                                   // 0x0011e134: beqzl $a1, 0x11e160
    *(uint32_t*)((a2) + 4) = t0;                                // 0x0011e138: sw $t0, 4($a2)
    v0 = ((unsigned)a3 < (unsigned)v0) ? 1 : 0;                 // 0x0011e150: sltu $v0, $a3, $v0
    /* beqzl $v0, 0x11e130 */                                   // 0x0011e154: beqzl $v0, 0x11e130
    *(uint32_t*)((a2) + 4) = t0;                                // 0x0011e15c: sw $t0, 4($a2)
    if (a1 == 0) goto label_0x11e16c;                           // 0x0011e160: beqz $a1, 0x11e16c
    *(uint32_t*)(a2) = a1;                                      // 0x0011e164: sw $a1, 0($a2)
    g_001f19ec = a2;  // Global at 0x001f19ec                   // 0x0011e168: sw $a2, 4($a1)
label_0x11e16c:
    if (t0 == 0) return;  // Branch to 0x11e17c                 // 0x0011e16c: beqz $t0, 0x11e17c
    v0 = t1 + 0x19e8;                                           // 0x0011e170: addiu $v0, $t1, 0x19e8
    return;                                                     // 0x0011e174: jr $ra
    *(uint32_t*)(t0) = a2;                                      // 0x0011e178: sw $a2, 0($t0)
}