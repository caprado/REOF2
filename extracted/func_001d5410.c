void func_001d5410() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = a0 & 0xff;                                             // 0x001d5410: andi $a2, $a0, 0xff
    v0 = 0x33 << 16;                                            // 0x001d5414: lui $v0, 0x33
    a0 = a1 & 0xffff;                                           // 0x001d5418: andi $a0, $a1, 0xffff
    v0 = v0 + -0x1470;                                          // 0x001d541c: addiu $v0, $v0, -0x1470
    goto label_0x1d545c;                                        // 0x001d5420: b 0x1d545c
label_0x1d5428:
    v1 = g_0032eba0;  // Global at 0x0032eba0                   // 0x001d5428: lbu $v1, 0x10($v0)
    if (v1 != a2) goto label_0x1d5454;                          // 0x001d542c: bne $v1, $a2, 0x1d5454
    /* nop */                                                   // 0x001d5430: nop 
    v1 = g_0032eb90;  // Global at 0x0032eb90                   // 0x001d5434: lbu $v1, 0($v0)
    if (v1 == 0) goto label_0x1d5454;                           // 0x001d5438: beqz $v1, 0x1d5454
    /* nop */                                                   // 0x001d543c: nop 
    v1 = g_0032eba2;  // Global at 0x0032eba2                   // 0x001d5440: lhu $v1, 0x12($v0)
    if (v1 != a0) goto label_0x1d5454;                          // 0x001d5444: bne $v1, $a0, 0x1d5454
    /* nop */                                                   // 0x001d5448: nop 
    goto label_0x1d546c;                                        // 0x001d544c: b 0x1d546c
    /* nop */                                                   // 0x001d5450: nop 
label_0x1d5454:
    a1 = a1 + 1;                                                // 0x001d5454: addiu $a1, $a1, 1
    v0 = v0 + 0x14;                                             // 0x001d5458: addiu $v0, $v0, 0x14
label_0x1d545c:
    v1 = (a1 < 0x10) ? 1 : 0;                                   // 0x001d545c: slti $v1, $a1, 0x10
    if (v1 != 0) goto label_0x1d5428;                           // 0x001d5460: bnez $v1, 0x1d5428
    /* nop */                                                   // 0x001d5464: nop 
label_0x1d546c:
    return;                                                     // 0x001d546c: jr $ra
    /* nop */                                                   // 0x001d5470: nop 
}