void func_00163648() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163648: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0016364c: addiu $v0, $zero, 1
    v1 = g_00228f0c;  // Global at 0x00228f0c                   // 0x00163654: lw $v1, 0x1ec($a0)
    if (v1 != v0) goto label_0x163668;                          // 0x00163658: bne $v1, $v0, 0x163668
    goto label_0x163670;                                        // 0x00163660: j 0x163670
    sp = sp + 0x10;                                             // 0x00163664: addiu $sp, $sp, 0x10
label_0x163668:
    return func_001637f0();  // Tail call                        // 0x00163668: j 0x163768
    sp = sp + 0x10;                                             // 0x0016366c: addiu $sp, $sp, 0x10
label_0x163670:
    sp = sp + -0x20;                                            // 0x00163670: addiu $sp, $sp, -0x20
    s2 = s1 + 0x1ec;                                            // 0x00163684: addiu $s2, $s1, 0x1ec
    func_00174ff8();  // 0x174fb8                                // 0x0016368c: jal 0x174fb8
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x00163690: lw $a0, 0x40($s1)
    func_00162cc8();  // 0x162c60                                // 0x00163698: jal 0x162c60
    v0 = 3;                                                     // 0x001636a4: addiu $v0, $zero, 3
    if (s0 != v0) goto label_0x163750;                          // 0x001636a8: bnel $s0, $v0, 0x163750
    v0 = 2;                                                     // 0x001636b0: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1636d8;                          // 0x001636b4: beq $v1, $v0, 0x1636d8
    /* nop */                                                   // 0x001636b8: nop 
    a0 = *(int32_t*)((s2) + 0xc);                               // 0x001636bc: lw $a0, 0xc($s2)
    v1 = str_00228d20;  // "E211141 MWSTM_ReqStart: can't start '%s'" // 0x001636c0: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x001636c4: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x001636c8: jalr $v0
    a1 = 1;                                                     // 0x001636cc: addiu $a1, $zero, 1
    if (v0 != 0) goto label_0x163750;                           // 0x001636d0: bnez $v0, 0x163750
label_0x1636d8:
    func_0015eb88();  // 0x15eb48                                // 0x001636d8: jal 0x15eb48
    v1 = *(int8_t*)((s1) + 0x72);                               // 0x001636e0: lb $v1, 0x72($s1)
    /* bnezl $v1, 0x1636fc */                                   // 0x001636e4: bnezl $v1, 0x1636fc
    v1 = *(int8_t*)((s1) + 0x70);                               // 0x001636e8: lb $v1, 0x70($s1)
    func_0015f1d0();  // 0x15f0b0                                // 0x001636f0: jal 0x15f0b0
    v1 = *(int8_t*)((s1) + 0x70);                               // 0x001636f8: lb $v1, 0x70($s1)
    v0 = 1;                                                     // 0x001636fc: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x163728;                          // 0x00163700: bnel $v1, $v0, 0x163728
    v0 = *(int8_t*)((s1) + 0x72);                               // 0x00163704: lb $v0, 0x72($s1)
    func_00167a90();  // 0x167a30                                // 0x00163708: jal 0x167a30
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x0016370c: lw $a0, 0x40($s1)
    /* beqzl $v0, 0x163728 */                                   // 0x00163710: beqzl $v0, 0x163728
    v0 = *(int8_t*)((s1) + 0x72);                               // 0x00163714: lb $v0, 0x72($s1)
    a0 = 0x23 << 16;                                            // 0x00163718: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x0016371c: jal 0x163410
    a0 = &str_00228d20;  // "E211141 MWSTM_ReqStart: can't start '%s'" // 0x00163720: addiu $a0, $a0, -0x72e0
    v0 = *(int8_t*)((s1) + 0x72);                               // 0x00163724: lb $v0, 0x72($s1)
label_0x163728:
    if (v0 != 0) goto label_0x163750;                           // 0x00163728: bnez $v0, 0x163750
    return func_00162d98();  // Tail call                        // 0x00163744: j 0x162d38
    sp = sp + 0x20;                                             // 0x00163748: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016374c: nop 
label_0x163750:
    return;                                                     // 0x0016375c: jr $ra
    sp = sp + 0x20;                                             // 0x00163760: addiu $sp, $sp, 0x20
}