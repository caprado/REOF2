void func_001723b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001723b8: addiu $sp, $sp, -0x10
    func_001723f8();  // 0x1723e0                                // 0x001723c4: jal 0x1723e0
    return func_00174580();  // Tail call                        // 0x001723d8: j 0x174538
    sp = sp + 0x10;                                             // 0x001723dc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001723e0: addiu $sp, $sp, -0x10
    a1 = 2;                                                     // 0x001723e4: addiu $a1, $zero, 2
    return func_001778a0();  // Tail call                        // 0x001723f0: j 0x177808
    sp = sp + 0x10;                                             // 0x001723f4: addiu $sp, $sp, 0x10
    v1 = *(int32_t*)((a0) + 0x4c);                              // 0x001723f8: lw $v1, 0x4c($a0)
    a1 = *(int32_t*)((a0) + 0x48);                              // 0x001723fc: lw $a1, 0x48($a0)
    v0 = (v1 < 2) ? 1 : 0;                                      // 0x00172400: slti $v0, $v1, 2
    if (v0 != 0) goto label_0x172420;                           // 0x00172404: bnez $v0, 0x172420
    a0 = (v1 < 5) ? 1 : 0;                                      // 0x00172408: slti $a0, $v1, 5
    /* bnezl $a0, 0x172420 */                                   // 0x0017240c: bnezl $a0, 0x172420
    a1 = 2;                                                     // 0x00172410: addiu $a1, $zero, 2
    v0 = 6;                                                     // 0x00172414: addiu $v0, $zero, 6
    if (v1 == v0) goto label_0x172420;                          // 0x00172418: beql $v1, $v0, 0x172420
    a1 = 2;                                                     // 0x0017241c: addiu $a1, $zero, 2
label_0x172420:
    return;                                                     // 0x00172420: jr $ra
}