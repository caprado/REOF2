void func_001ae830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ae830: addiu $sp, $sp, -0x10
    a0 = 0x31 << 16;                                            // 0x001ae834: lui $a0, 0x31
    a0 = a0 + 0x1d30;                                           // 0x001ae83c: addiu $a0, $a0, 0x1d30
    func_00107d30();  // 0x107c70                                // 0x001ae844: jal 0x107c70
    a2 = 0x1474;                                                // 0x001ae848: addiu $a2, $zero, 0x1474
    v0 = 0x1f;                                                  // 0x001ae84c: addiu $v0, $zero, 0x1f
    at = 0x31 << 16;                                            // 0x001ae850: lui $at, 0x31
    g_003130bc = v0;  // Global at 0x003130bc                   // 0x001ae854: sw $v0, 0x30bc($at)
    v1 = 0x1e;                                                  // 0x001ae858: addiu $v1, $zero, 0x1e
    at = 0x31 << 16;                                            // 0x001ae85c: lui $at, 0x31
    v0 = 1;                                                     // 0x001ae860: addiu $v0, $zero, 1
    g_00312758 = v1;  // Global at 0x00312758                   // 0x001ae864: sw $v1, 0x2758($at)
    at = 0x31 << 16;                                            // 0x001ae868: lui $at, 0x31
    g_00311d51 = v0;  // Global at 0x00311d51                   // 0x001ae86c: sb $v0, 0x1d51($at)
    at = 0x31 << 16;                                            // 0x001ae870: lui $at, 0x31
    v0 = g_00311d55;  // Global at 0x00311d55                   // 0x001ae874: lbu $v0, 0x1d55($at)
    v0 = v0 | 3;                                                // 0x001ae878: ori $v0, $v0, 3
    at = 0x31 << 16;                                            // 0x001ae87c: lui $at, 0x31
    func_001aff60();  // 0x1aff00                                // 0x001ae880: jal 0x1aff00
    g_00311d55 = v0;  // Global at 0x00311d55                   // 0x001ae884: sb $v0, 0x1d55($at)
    a1 = 0x22 << 16;                                            // 0x001ae888: lui $a1, 0x22
    a1 = a1 + -0x4100;                                          // 0x001ae890: addiu $a1, $a1, -0x4100
    goto label_0x1ae8a0;                                        // 0x001ae894: b 0x1ae8a0
    v1 = 0xff;                                                  // 0x001ae898: addiu $v1, $zero, 0xff
label_0x1ae89c:
    a2 = a2 + 1;                                                // 0x001ae89c: addiu $a2, $a2, 1
label_0x1ae8a0:
    a0 = a1 + a2;                                               // 0x001ae8a0: addu $a0, $a1, $a2
    a0 = g_00311d30;  // Global at 0x00311d30                   // 0x001ae8a4: lbu $a0, 0($a0)
    /* nop */                                                   // 0x001ae8a8: nop 
    /* nop */                                                   // 0x001ae8ac: nop 
    if (a0 != v1) goto label_0x1ae89c;                          // 0x001ae8b0: bne $a0, $v1, 0x1ae89c
    /* nop */                                                   // 0x001ae8b4: nop 
    at = 0x31 << 16;                                            // 0x001ae8b8: lui $at, 0x31
    g_00311d54 = a2;  // Global at 0x00311d54                   // 0x001ae8bc: sb $a2, 0x1d54($at)
    return;                                                     // 0x001ae8c4: jr $ra
    sp = sp + 0x10;                                             // 0x001ae8c8: addiu $sp, $sp, 0x10
}