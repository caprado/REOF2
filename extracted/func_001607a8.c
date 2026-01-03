void func_001607a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001607a8: addiu $sp, $sp, -0x10
    a0 = g_00160828;  // Global at 0x00160828                   // 0x001607b0: lw $a0, 0x40($a0)
    return func_00169d60();  // Tail call                        // 0x001607b8: j 0x169cb0
    sp = sp + 0x10;                                             // 0x001607bc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001607c0: addiu $sp, $sp, -0x10
    func_0017cae0();  // 17cae0                                // 0x001607c8: jal 0x17cae0
    /* nop */                                                   // 0x001607cc: nop 
    a0 = 0x16 << 16;                                            // 0x001607d4: lui $a0, 0x16
    a0 = a0 + 0x7e8;                                            // 0x001607d8: addiu $a0, $a0, 0x7e8
    return func_0017cc08();  // Tail call                       // 0x001607e0: j 0x17cc08
    sp = sp + 0x10;                                             // 0x001607e4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001607e8: addiu $sp, $sp, -0x10
    return func_001634a8();  // Tail call                        // 0x001607f8: j 0x163410
    sp = sp + 0x10;                                             // 0x001607fc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00160800: addiu $sp, $sp, -0x10
    return func_0017cbb0();  // Tail call                       // 0x0016080c: j 0x17cbb0
    sp = sp + 0x10;                                             // 0x00160810: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00160814: nop 
    return;                                                     // 0x00160818: jr $ra
    v0 = 0x181f;                                                // 0x0016081c: addiu $v0, $zero, 0x181f
}