void func_0015fa70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015fa70: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015fa84: jal 0x15fc80
    a0 = 0x22 << 16;                                            // 0x0015fa8c: lui $a0, 0x22
    if (v0 != 0) goto label_0x15fab0;                           // 0x0015fa94: bnez $v0, 0x15fab0
    a0 = &str_00227cd8;  // "E2080602 mwPlySetVideoCh: Invalid ch no." // 0x0015fa98: addiu $a0, $a0, 0x7cd8
    return func_001634a8();  // Tail call                        // 0x0015faa8: j 0x163410
    sp = sp + 0x20;                                             // 0x0015faac: addiu $sp, $sp, 0x20
label_0x15fab0:
    func_00172070();  // 172070                                // 0x0015fab0: jal 0x172070
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x0015fab4: lw $a0, 0x40($s1)
    a0 = 0x22 << 16;                                            // 0x0015fab8: lui $a0, 0x22
    if (v0 == 0) goto label_0x15fad8;                           // 0x0015fabc: beqz $v0, 0x15fad8
    a0 = &str_00227d08;  // "E2080802 mwPlyGetNumVideoCh: handle is invalid." // 0x0015fac0: addiu $a0, $a0, 0x7d08
    return func_001634a8();  // Tail call                        // 0x0015fad0: j 0x163410
    sp = sp + 0x20;                                             // 0x0015fad4: addiu $sp, $sp, 0x20
label_0x15fad8:
    return;                                                     // 0x0015fae4: jr $ra
    sp = sp + 0x20;                                             // 0x0015fae8: addiu $sp, $sp, 0x20
}