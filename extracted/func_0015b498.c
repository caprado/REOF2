void func_0015b498() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015b498: addiu $sp, $sp, -0x10
    func_00155670();  // 0x1554c0                                // 0x0015b4a0: jal 0x1554c0
    /* nop */                                                   // 0x0015b4a4: nop 
    a1 = 0x25 << 16;                                            // 0x0015b4ac: lui $a1, 0x25
    a1 = a1 + 0x6450;                                           // 0x0015b4b0: addiu $a1, $a1, 0x6450
    a0 = 8;                                                     // 0x0015b4b4: addiu $a0, $zero, 8
    a2 = 0x3840;                                                // 0x0015b4b8: addiu $a2, $zero, 0x3840
    return func_0014ff58();  // Tail call                        // 0x0015b4bc: j 0x14ff30
    sp = sp + 0x10;                                             // 0x0015b4c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015b4c4: nop 
    sp = sp + -0x10;                                            // 0x0015b4c8: addiu $sp, $sp, -0x10
    return func_0014ff80();  // Tail call                        // 0x0015b4d4: j 0x14ff58
    sp = sp + 0x10;                                             // 0x0015b4d8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015b4dc: nop 
    sp = sp + -0x10;                                            // 0x0015b4e0: addiu $sp, $sp, -0x10
    return func_0014ffb0();  // Tail call                        // 0x0015b4ec: j 0x14ff80
    sp = sp + 0x10;                                             // 0x0015b4f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015b4f4: nop 
    sp = sp + -0x10;                                            // 0x0015b4f8: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x380);                             // 0x0015b500: lw $a0, 0x380($a0)
    return func_0014ffd8();  // Tail call                        // 0x0015b508: j 0x14ffb0
    sp = sp + 0x10;                                             // 0x0015b50c: addiu $sp, $sp, 0x10
    sp = sp + -0x30;                                            // 0x0015b510: addiu $sp, $sp, -0x30
    func_0014ff00();  // 0x14fef0                                // 0x0015b52c: jal 0x14fef0
    if (v0 == 0) goto label_0x15b5b0;                           // 0x0015b534: beqz $v0, 0x15b5b0
    s0 = s1 + 0x388;                                            // 0x0015b53c: addiu $s0, $s1, 0x388
    a2 = *(int32_t*)(s0);                                       // 0x0015b540: lw $a2, 0($s0)
    /* nop */                                                   // 0x0015b544: nop 
    a3 = *(int32_t*)((s0) + 4);                                 // 0x0015b54c: lw $a3, 4($s0)
    s2 = s2 + 1;                                                // 0x0015b550: addiu $s2, $s2, 1
    t0 = *(int32_t*)((s0) + 8);                                 // 0x0015b554: lw $t0, 8($s0)
    s0 = s0 + 0xc;                                              // 0x0015b558: addiu $s0, $s0, 0xc
    func_001500f0();  // 0x1500c8                                // 0x0015b55c: jal 0x1500c8
    a0 = *(int32_t*)((s1) + 0x380);                             // 0x0015b560: lw $a0, 0x380($s1)
    v0 = (s2 < 4) ? 1 : 0;                                      // 0x0015b564: slti $v0, $s2, 4
    /* bnezl $v0, 0x15b548 */                                   // 0x0015b568: bnezl $v0, 0x15b548
    a2 = *(int32_t*)(s0);                                       // 0x0015b56c: lw $a2, 0($s0)
    a2 = *(int32_t*)((s1) + 0x3bc);                             // 0x0015b570: lw $a2, 0x3bc($s1)
    a0 = *(int32_t*)((s1) + 0x380);                             // 0x0015b574: lw $a0, 0x380($s1)
    func_00150118();  // 0x1500f0                                // 0x0015b578: jal 0x1500f0
    a1 = *(int32_t*)((s1) + 0x3b8);                             // 0x0015b57c: lw $a1, 0x3b8($s1)
    a0 = *(int32_t*)((s1) + 0x380);                             // 0x0015b580: lw $a0, 0x380($s1)
    func_00150168();  // 0x150140                                // 0x0015b584: jal 0x150140
    a0 = *(int32_t*)((s1) + 0x380);                             // 0x0015b58c: lw $a0, 0x380($s1)
    func_00150140();  // 0x150118                                // 0x0015b594: jal 0x150118
    a2 = s1 + 0x3c0;                                            // 0x0015b598: addiu $a2, $s1, 0x3c0
    func_0015b728();  // 0x15b5d0                                // 0x0015b59c: jal 0x15b5d0
    goto label_0x15b5b4;                                        // 0x0015b5a4: b 0x15b5b4
    /* nop */                                                   // 0x0015b5ac: nop 
label_0x15b5b0:
    v0 = -1;                                                    // 0x0015b5b0: addiu $v0, $zero, -1
label_0x15b5b4:
    return;                                                     // 0x0015b5c8: jr $ra
    sp = sp + 0x30;                                             // 0x0015b5cc: addiu $sp, $sp, 0x30
}