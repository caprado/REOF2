void func_0015f780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015f780: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015f794: jal 0x15fc80
    a0 = 0x22 << 16;                                            // 0x0015f79c: lui $a0, 0x22
    a0 = &str_00227b28;  // "E1122640: mwPlyGetSfdHn: handle is invalid." // 0x0015f7a4: addiu $a0, $a0, 0x7b28
    if (v0 != 0) goto label_0x15f7c8;                           // 0x0015f7a8: bnez $v0, 0x15f7c8
    a1 = 6;                                                     // 0x0015f7ac: addiu $a1, $zero, 6
    return func_001634a8();  // Tail call                        // 0x0015f7bc: j 0x163410
    sp = sp + 0x20;                                             // 0x0015f7c0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015f7c4: nop 
label_0x15f7c8:
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x0015f7c8: lw $a0, 0x40($s1)
    return func_001750b0();  // Tail call                        // 0x0015f7d8: j 0x174ff8
    sp = sp + 0x20;                                             // 0x0015f7dc: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0015f7e0: addiu $sp, $sp, -0x10
    func_0015fc80();  // 15fc80                                // 0x0015f7ec: jal 0x15fc80
    /* bnezl $v0, 0x15f80c */                                   // 0x0015f7f4: bnezl $v0, 0x15f80c
    v0 = *(int32_t*)((s0) + 0x40);                              // 0x0015f7f8: lw $v0, 0x40($s0)
    a0 = 0x22 << 16;                                            // 0x0015f7fc: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015f800: jal 0x163410
    a0 = &str_00227b58;  // "E1122639: mwPlyGetAdxtHn: handle is invalid." // 0x0015f804: addiu $a0, $a0, 0x7b58
    return;                                                     // 0x0015f814: jr $ra
    sp = sp + 0x10;                                             // 0x0015f818: addiu $sp, $sp, 0x10
}