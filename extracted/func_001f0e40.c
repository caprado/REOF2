void func_001f0e40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001f0e40: addiu $sp, $sp, -0x10
    v0 = 0x1000 << 16;                                          // 0x001f0e44: lui $v0, 0x1000
    v1 = 4;                                                     // 0x001f0e4c: addiu $v1, $zero, 4
    v0 = v0 | 0xf000;                                           // 0x001f0e50: ori $v0, $v0, 0xf000
    a0 = 0x1000 << 16;                                          // 0x001f0e54: lui $a0, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x001f0e58: sw $v1, 0($v0)
    a0 = a0 | 0xf000;                                           // 0x001f0e5c: ori $a0, $a0, 0xf000
label_0x1f0e60:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001f0e60: lw $v0, 0($a0)
    v0 = v0 & 4;                                                // 0x001f0e64: andi $v0, $v0, 4
    /* nop */                                                   // 0x001f0e68: nop 
    /* nop */                                                   // 0x001f0e6c: nop 
    /* nop */                                                   // 0x001f0e70: nop 
    if (v0 == 0) goto label_0x1f0e60;                           // 0x001f0e74: beqz $v0, 0x1f0e60
    /* nop */                                                   // 0x001f0e78: nop 
    v0 = 0x1000 << 16;                                          // 0x001f0e7c: lui $v0, 0x1000
    a0 = 4;                                                     // 0x001f0e80: addiu $a0, $zero, 4
    v0 = v0 | 0xf000;                                           // 0x001f0e84: ori $v0, $v0, 0xf000
    v1 = 0x8007 << 16;                                          // 0x001f0e88: lui $v1, 0x8007
    g_10000000 = a0;  // Global at 0x10000000                   // 0x001f0e8c: sw $a0, 0($v0)
    v0 = g_80074760;  // Global at 0x80074760                   // 0x001f0e90: lw $v0, 0x4760($v1)
    /* call function at address in v0 */                        // 0x001f0e94: jalr $v0
    /* nop */                                                   // 0x001f0e98: nop 
    v0 = 0x8007 << 16;                                          // 0x001f0e9c: lui $v0, 0x8007
    a1 = 2;                                                     // 0x001f0ea0: addiu $a1, $zero, 2
    v1 = g_80074764;  // Global at 0x80074764                   // 0x001f0ea4: lw $v1, 0x4764($v0)
    a2 = 1;                                                     // 0x001f0ea8: addiu $a2, $zero, 1
    /* call function at address in v1 */                        // 0x001f0eac: jalr $v1
    a0 = 1;                                                     // 0x001f0eb0: addiu $a0, $zero, 1
    v0 = 0x8007 << 16;                                          // 0x001f0eb4: lui $v0, 0x8007
    v1 = g_8007474c;  // Global at 0x8007474c                   // 0x001f0eb8: lw $v1, 0x474c($v0)
    /* call function at address in v1 */                        // 0x001f0ebc: jalr $v1
    a0 = 0 | 0xdffd;                                            // 0x001f0ec0: ori $a0, $zero, 0xdffd
    v0 = 0x8007 << 16;                                          // 0x001f0ec4: lui $v0, 0x8007
    v1 = g_80074750;  // Global at 0x80074750                   // 0x001f0ec8: lw $v1, 0x4750($v0)
    /* call function at address in v1 */                        // 0x001f0ecc: jalr $v1
    /* nop */                                                   // 0x001f0ed0: nop 
    v0 = 0x8007 << 16;                                          // 0x001f0ed4: lui $v0, 0x8007
    v1 = g_8007475c;  // Global at 0x8007475c                   // 0x001f0ed8: lw $v1, 0x475c($v0)
    /* call function at address in v1 */                        // 0x001f0edc: jalr $v1
    a0 = 0x7f;                                                  // 0x001f0ee0: addiu $a0, $zero, 0x7f
    v0 = 0x8007 << 16;                                          // 0x001f0ee4: lui $v0, 0x8007
    v1 = g_80074754;  // Global at 0x80074754                   // 0x001f0ee8: lw $v1, 0x4754($v0)
    /* call function at address in v1 */                        // 0x001f0eec: jalr $v1
    /* nop */                                                   // 0x001f0ef0: nop 
    v0 = 0x8007 << 16;                                          // 0x001f0ef4: lui $v0, 0x8007
    v1 = g_80074758;  // Global at 0x80074758                   // 0x001f0ef8: lw $v1, 0x4758($v0)
    /* call function at address in v1 */                        // 0x001f0efc: jalr $v1
    /* nop */                                                   // 0x001f0f00: nop 
    return;                                                     // 0x001f0f08: jr $ra
    sp = sp + 0x10;                                             // 0x001f0f0c: addiu $sp, $sp, 0x10
}