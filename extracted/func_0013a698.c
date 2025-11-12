void func_0013a698() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013a698: addiu $sp, $sp, -0x10
    a0 = 0x20 << 16;                                            // 0x0013a69c: lui $a0, 0x20
    a0 = a0 + 0x3ed0;                                           // 0x0013a6a8: addiu $a0, $a0, 0x3ed0
    a2 = 0x10;                                                  // 0x0013a6ac: addiu $a2, $zero, 0x10
    return func_00107d30();  // Tail call                        // 0x0013a6b4: j 0x107c70
    sp = sp + 0x10;                                             // 0x0013a6b8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013a6bc: nop 
    sp = sp + -0x20;                                            // 0x0013a6c0: addiu $sp, $sp, -0x20
    a0 = 0x22 << 16;                                            // 0x0013a6cc: lui $a0, 0x22
    a0 = &str_00225580;  // "DVCI: CD/DVD-ROM Image opened%c\n" // 0x0013a6d4: addiu $a0, $a0, 0x5580
    func_0010ac68();  // 0x10ab20                                // 0x0013a6e0: jal 0x10ab20
    v1 = 0x20 << 16;                                            // 0x0013a6e8: lui $v1, 0x20
    v1 = v1 + 0x3ed0;                                           // 0x0013a6ec: addiu $v1, $v1, 0x3ed0
    if (v0 != 0) goto label_0x13a730;                           // 0x0013a6f0: bnez $v0, 0x13a730
    a0 = 2;                                                     // 0x0013a6f4: addiu $a0, $zero, 2
    v0 = -1;                                                    // 0x0013a6f8: addiu $v0, $zero, -1
    *(uint32_t*)(s0) = 0;                                       // 0x0013a6fc: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0013a700: sw $v0, 4($s0)
    v0 = 0x20 << 16;                                            // 0x0013a704: lui $v0, 0x20
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a708: lw $v1, 0x3ee8($v0)
    if (v1 == a0) goto label_0x13a758;                          // 0x0013a70c: beql $v1, $a0, 0x13a758
    v0 = 1;                                                     // 0x0013a710: addiu $v0, $zero, 1
    a0 = 0x22 << 16;                                            // 0x0013a714: lui $a0, 0x22
    a1 = 0x2e;                                                  // 0x0013a718: addiu $a1, $zero, 0x2e
    func_00116598();  // 0x116508                                // 0x0013a71c: jal 0x116508
    a0 = &str_00225588;  // "DVCI: Invalidate filelist buffer pointer.\r\n" // 0x0013a720: addiu $a0, $a0, 0x5588
    goto label_0x13a758;                                        // 0x0013a724: b 0x13a758
    v0 = 1;                                                     // 0x0013a728: addiu $v0, $zero, 1
    /* nop */                                                   // 0x0013a72c: nop 
label_0x13a730:
    *(uint32_t*)(s0) = 0;                                       // 0x0013a730: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0013a734: sw $zero, 4($s0)
    v0 = g_00203ed0;  // Global at 0x00203ed0                   // 0x0013a738: lw $v0, 0($v1)
    if (v0 == 0) goto label_0x13a754;                           // 0x0013a73c: beqz $v0, 0x13a754
    a3 = g_00203ed4;  // Global at 0x00203ed4                   // 0x0013a744: lw $a3, 4($v1)
    func_0013a698();  // 0x13a5d0                                // 0x0013a74c: jal 0x13a5d0
label_0x13a754:
label_0x13a758:
    return;                                                     // 0x0013a764: jr $ra
    sp = sp + 0x20;                                             // 0x0013a768: addiu $sp, $sp, 0x20
}