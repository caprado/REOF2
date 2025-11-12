void func_001ce7b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001cfdf0();  // Tail call                        // 0x001ce7b0: j 0x1cfd80
    /* nop */                                                   // 0x001ce7b4: nop 
    /* nop */                                                   // 0x001ce7b8: nop 
    /* nop */                                                   // 0x001ce7bc: nop 
    return func_001cfe70();  // Tail call                        // 0x001ce7c0: j 0x1cfdf0
    /* nop */                                                   // 0x001ce7c4: nop 
    /* nop */                                                   // 0x001ce7c8: nop 
    /* nop */                                                   // 0x001ce7cc: nop 
    return func_001cff40();  // Tail call                        // 0x001ce7d0: j 0x1cff10
    /* nop */                                                   // 0x001ce7d4: nop 
    /* nop */                                                   // 0x001ce7d8: nop 
    /* nop */                                                   // 0x001ce7dc: nop 
    return func_001cfeb0();  // Tail call                        // 0x001ce7e0: j 0x1cfe80
    /* nop */                                                   // 0x001ce7e4: nop 
    /* nop */                                                   // 0x001ce7e8: nop 
    /* nop */                                                   // 0x001ce7ec: nop 
    return func_001cffa0();  // Tail call                        // 0x001ce7f0: j 0x1cff70
    /* nop */                                                   // 0x001ce7f4: nop 
    /* nop */                                                   // 0x001ce7f8: nop 
    /* nop */                                                   // 0x001ce7fc: nop 
    return func_001cff70();  // Tail call                        // 0x001ce800: j 0x1cff40
    /* nop */                                                   // 0x001ce804: nop 
    /* nop */                                                   // 0x001ce808: nop 
    /* nop */                                                   // 0x001ce80c: nop 
    return func_001cfee0();  // Tail call                        // 0x001ce810: j 0x1cfeb0
    /* nop */                                                   // 0x001ce814: nop 
    /* nop */                                                   // 0x001ce818: nop 
    /* nop */                                                   // 0x001ce81c: nop 
    return func_001cffd0();  // Tail call                        // 0x001ce820: j 0x1cffa0
    /* nop */                                                   // 0x001ce824: nop 
    /* nop */                                                   // 0x001ce828: nop 
    /* nop */                                                   // 0x001ce82c: nop 
    sp = sp + -0x30;                                            // 0x001ce830: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ce838: addu.qb $zero, $sp, $s1
    if (a1 > 0) goto label_0x1ce84c;                            // 0x001ce840: bgtz $a1, 0x1ce84c
    a1 = *(int32_t*)((s1) + 4);                                 // 0x001ce848: lw $a1, 4($s1)
label_0x1ce84c:
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x001ce84c: lw $v0, 0xc($s1)
    s0 = v0 - a1;                                               // 0x001ce850: subu $s0, $v0, $a1
    if (s0 > 0) goto label_0x1ce86c;                            // 0x001ce854: bgtz $s0, 0x1ce86c
    thunk_func_001cfd80();  // 0x1ce780                          // 0x001ce85c: jal 0x1ce780
    /* nop */                                                   // 0x001ce860: nop 
    goto label_0x1ce888;                                        // 0x001ce864: b 0x1ce888
label_0x1ce86c:
    a0 = *(int32_t*)((s1) + 8);                                 // 0x001ce86c: lw $a0, 8($s1)
    func_00107c70();  // 0x107b68                                // 0x001ce874: jal 0x107b68
    a1 = a0 + a1;                                               // 0x001ce878: addu $a1, $a0, $a1
    *(uint32_t*)((s1) + 0xc) = s0;                              // 0x001ce87c: sw $s0, 0xc($s1)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001ce880: sw $zero, 4($s1)
label_0x1ce888:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ce888: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce88c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce890: jr $ra
    sp = sp + 0x30;                                             // 0x001ce894: addiu $sp, $sp, 0x30
}