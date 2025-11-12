void func_001225b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001225b0: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x1225f0;                           // 0x001225bc: beqz $s0, 0x1225f0
    func_001261b8();  // 0x1261a0                                // 0x001225c4: jal 0x1261a0
    /* nop */                                                   // 0x001225c8: nop 
    func_00107d30();  // 0x107c70                                // 0x001225d4: jal 0x107c70
    a2 = 0x30;                                                  // 0x001225d8: addiu $a2, $zero, 0x30
    return func_001261d0();  // Tail call                        // 0x001225e4: j 0x1261b8
    sp = sp + 0x10;                                             // 0x001225e8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001225ec: nop 
label_0x1225f0:
    return;                                                     // 0x001225f8: jr $ra
    sp = sp + 0x10;                                             // 0x001225fc: addiu $sp, $sp, 0x10
}