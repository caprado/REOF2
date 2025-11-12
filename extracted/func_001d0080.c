void func_001d0080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 1;                                                     // 0x001d0080: addiu $v0, $zero, 1
    at = 0x33 << 16;                                            // 0x001d0084: lui $at, 0x33
    g_0032b9f2 = v0;  // Global at 0x0032b9f2                   // 0x001d0088: sb $v0, -0x460e($at)
    a0 = 2;                                                     // 0x001d008c: addiu $a0, $zero, 2
    at = 0x33 << 16;                                            // 0x001d0090: lui $at, 0x33
    g_0032b9f1 = v0;  // Global at 0x0032b9f1                   // 0x001d0094: sb $v0, -0x460f($at)
    v0 = -1;                                                    // 0x001d0098: addiu $v0, $zero, -1
    at = 0x33 << 16;                                            // 0x001d009c: lui $at, 0x33
    g_0032b9f8 = v0;  // Global at 0x0032b9f8                   // 0x001d00a0: sw $v0, -0x4608($at)
    at = 0x33 << 16;                                            // 0x001d00a4: lui $at, 0x33
    return func_001d0570();  // Tail call                       // 0x001d00a8: j 0x1d0570
    g_0032b9f0 = a0;  // Global at 0x0032b9f0                   // 0x001d00ac: sb $a0, -0x4610($at)
    sp = sp + -0x10;                                            // 0x001d00b0: addiu $sp, $sp, -0x10
    at = 0x33 << 16;                                            // 0x001d00b4: lui $at, 0x33
    v1 = g_0032b9f1;  // Global at 0x0032b9f1                   // 0x001d00bc: lbu $v1, -0x460f($at)
    if (v1 == 0) goto label_0x1d00dc;                           // 0x001d00c0: beqz $v1, 0x1d00dc
    at = 0x33 << 16;                                            // 0x001d00c4: lui $at, 0x33
    a0 = 5;                                                     // 0x001d00c8: addiu $a0, $zero, 5
    g_0032b9f1 = 0;  // Global at 0x0032b9f1                    // 0x001d00cc: sb $zero, -0x460f($at)
    at = 0x33 << 16;                                            // 0x001d00d0: lui $at, 0x33
    func_001d0570();  // 0x1d0570                               // 0x001d00d4: jal 0x1d0570
    g_0032b9f0 = a0;  // Global at 0x0032b9f0                   // 0x001d00d8: sb $a0, -0x4610($at)
label_0x1d00dc:
    return;                                                     // 0x001d00e0: jr $ra
    sp = sp + 0x10;                                             // 0x001d00e4: addiu $sp, $sp, 0x10
}