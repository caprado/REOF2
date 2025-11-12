void func_001684e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001684e0: addiu $sp, $sp, -0x20
    v0 = (s1 < 4) ? 1 : 0;                                      // 0x001684ec: slti $v0, $s1, 4
    if (v0 != 0) goto label_0x16852c;                           // 0x00168500: bnez $v0, 0x16852c
label_0x168508:
    func_00157a00();  // 0x1579e8                                // 0x00168508: jal 0x1579e8
    if (v0 != s2) goto label_0x168520;                          // 0x00168510: bne $v0, $s2, 0x168520
    s1 = s1 + -1;                                               // 0x00168514: addiu $s1, $s1, -1
    goto label_0x168530;                                        // 0x00168518: b 0x168530
label_0x168520:
    v0 = (s1 < 4) ? 1 : 0;                                      // 0x00168520: slti $v0, $s1, 4
    if (v0 == 0) goto label_0x168508;                           // 0x00168524: beqz $v0, 0x168508
    s0 = s0 + 1;                                                // 0x00168528: addiu $s0, $s0, 1
label_0x16852c:
label_0x168530:
    return;                                                     // 0x00168540: jr $ra
    sp = sp + 0x20;                                             // 0x00168544: addiu $sp, $sp, 0x20
}