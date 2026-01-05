void func_0015f450() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015f450: addiu $sp, $sp, -0x10
    a0 = g_0025de00;  // Global at 0x0025de00                   // 0x0015f458: lw $a0, 0x40($a0)
    return func_00165fa0();  // Tail call                        // 0x0015f460: j 0x165f20
    sp = sp + 0x10;                                             // 0x0015f464: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015f468: addiu $sp, $sp, -0x10
    a0 = g_0025de00;  // Global at 0x0025de00                   // 0x0015f470: lw $a0, 0x40($a0)
    return func_00166010();  // Tail call                        // 0x0015f478: j 0x165fa0
    sp = sp + 0x10;                                             // 0x0015f47c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015f480: addiu $sp, $sp, -0x10
    a0 = g_0025de00;  // Global at 0x0025de00                   // 0x0015f488: lw $a0, 0x40($a0)
    return func_00165ea8();  // Tail call                        // 0x0015f490: j 0x165e18
    sp = sp + 0x10;                                             // 0x0015f494: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015f498: addiu $sp, $sp, -0x10
    a0 = g_0025de00;  // Global at 0x0025de00                   // 0x0015f4a0: lw $a0, 0x40($a0)
    return func_00165f20();  // Tail call                        // 0x0015f4a8: j 0x165ea8
    sp = sp + 0x10;                                             // 0x0015f4ac: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0015f4b0: addiu $sp, $sp, -0x20
    v1 = 0x21 << 16;                                            // 0x0015f4b4: lui $v1, 0x21
    s0 = v1 + 0x5548;                                           // 0x0015f4bc: addiu $s0, $v1, 0x5548
    v0 = g_00215548;  // Global at 0x00215548                   // 0x0015f4c0: lw $v0, 0($s0)
    s1 = 1;                                                     // 0x0015f4c8: addiu $s1, $zero, 1
    if (v0 == s1) goto label_0x15f518;                          // 0x0015f4cc: beq $v0, $s1, 0x15f518
    func_0015f5a0();  // 15f5a0                                // 0x0015f4d4: jal 0x15f5a0
    /* nop */                                                   // 0x0015f4d8: nop 
    a2 = 0x26 << 16;                                            // 0x0015f4dc: lui $a2, 0x26
    a2 = a2 + -0x6240;                                          // 0x0015f4e0: addiu $a2, $a2, -0x6240
    a1 = 0x4000;                                                // 0x0015f4e4: addiu $a1, $zero, 0x4000
    func_0015f5c0();  // 15f5c0                                // 0x0015f4e8: jal 0x15f5c0
    func_0015f690();  // 15f690                                // 0x0015f4f0: jal 0x15f690
    a0 = 8;                                                     // 0x0015f4f4: addiu $a0, $zero, 8
    a0 = 0x26 << 16;                                            // 0x0015f4f8: lui $a0, 0x26
    a0 = a0 + -0x2240;                                          // 0x0015f4fc: addiu $a0, $a0, -0x2240
    a1 = 0x4000;                                                // 0x0015f500: addiu $a1, $zero, 0x4000
    func_0015f628();  // 15f628                                // 0x0015f504: jal 0x15f628
    func_0015f690();  // 15f690                                // 0x0015f50c: jal 0x15f690
    a0 = 9;                                                     // 0x0015f510: addiu $a0, $zero, 9
    g_00215548 = s1;  // Global at 0x00215548                   // 0x0015f514: sw $s1, 0($s0)
label_0x15f518:
    return;                                                     // 0x0015f524: jr $ra
    sp = sp + 0x20;                                             // 0x0015f528: addiu $sp, $sp, 0x20
}