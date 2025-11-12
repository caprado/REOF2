void func_001d6c90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t1 = 0x33 << 16;                                            // 0x001d6c90: lui $t1, 0x33
    t0 = 0x33 << 16;                                            // 0x001d6c94: lui $t0, 0x33
    t1 = t1 + -0x1530;                                          // 0x001d6c98: addiu $t1, $t1, -0x1530
    t0 = t0 + -0x1470;                                          // 0x001d6c9c: addiu $t0, $t0, -0x1470
    a2 = 2;                                                     // 0x001d6ca4: addiu $a2, $zero, 2
label_0x1d6ca8:
    v1 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d6ca8: lbu $v1, 0($t1)
    if (v1 == 0) goto label_0x1d6ccc;                           // 0x001d6cac: beqz $v1, 0x1d6ccc
    /* nop */                                                   // 0x001d6cb0: nop 
    v1 = g_0032ead8;  // Global at 0x0032ead8                   // 0x001d6cb4: lbu $v1, 8($t1)
    if (v1 != a2) goto label_0x1d6ccc;                          // 0x001d6cb8: bne $v1, $a2, 0x1d6ccc
    /* nop */                                                   // 0x001d6cbc: nop 
    v1 = g_0032eada;  // Global at 0x0032eada                   // 0x001d6cc0: lhu $v1, 0xa($t1)
    *(uint16_t*)(a0) = v1;                                      // 0x001d6cc4: sh $v1, 0($a0)
    a0 = a0 + 2;                                                // 0x001d6cc8: addiu $a0, $a0, 2
label_0x1d6ccc:
    v1 = g_0032eb90;  // Global at 0x0032eb90                   // 0x001d6ccc: lbu $v1, 0($t0)
    if (v1 == 0) goto label_0x1d6cf0;                           // 0x001d6cd0: beqz $v1, 0x1d6cf0
    /* nop */                                                   // 0x001d6cd4: nop 
    v1 = g_0032eba0;  // Global at 0x0032eba0                   // 0x001d6cd8: lbu $v1, 0x10($t0)
    if (v1 != a2) goto label_0x1d6cf0;                          // 0x001d6cdc: bne $v1, $a2, 0x1d6cf0
    /* nop */                                                   // 0x001d6ce0: nop 
    v1 = g_0032eba2;  // Global at 0x0032eba2                   // 0x001d6ce4: lhu $v1, 0x12($t0)
    *(uint16_t*)(a1) = v1;                                      // 0x001d6ce8: sh $v1, 0($a1)
    a1 = a1 + 2;                                                // 0x001d6cec: addiu $a1, $a1, 2
label_0x1d6cf0:
    a3 = a3 + 1;                                                // 0x001d6cf0: addiu $a3, $a3, 1
    t1 = t1 + 0xc;                                              // 0x001d6cf4: addiu $t1, $t1, 0xc
    v1 = (a3 < 0x10) ? 1 : 0;                                   // 0x001d6cf8: slti $v1, $a3, 0x10
    if (v1 != 0) goto label_0x1d6ca8;                           // 0x001d6cfc: bnez $v1, 0x1d6ca8
    t0 = t0 + 0x14;                                             // 0x001d6d00: addiu $t0, $t0, 0x14
    return;                                                     // 0x001d6d04: jr $ra
    /* nop */                                                   // 0x001d6d08: nop 
}