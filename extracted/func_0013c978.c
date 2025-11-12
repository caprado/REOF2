void func_0013c978() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013c978: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x13c9b8;                           // 0x0013c984: beqz $s0, 0x13c9b8
    func_0013ccc0();  // 0x13cc38                                // 0x0013c98c: jal 0x13cc38
    /* nop */                                                   // 0x0013c990: nop 
    *(uint8_t*)(s0) = 0;                                        // 0x0013c998: sb $zero, 0($s0)
    a2 = 0x238;                                                 // 0x0013c9a4: addiu $a2, $zero, 0x238
    return func_00107d30();  // Tail call                        // 0x0013c9ac: j 0x107c70
    sp = sp + 0x10;                                             // 0x0013c9b0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013c9b4: nop 
label_0x13c9b8:
    return;                                                     // 0x0013c9c0: jr $ra
    sp = sp + 0x10;                                             // 0x0013c9c4: addiu $sp, $sp, 0x10
}