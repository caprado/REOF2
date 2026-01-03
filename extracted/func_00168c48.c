void func_00168c48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00168c48: addiu $sp, $sp, -0x30
    v1 = 2;                                                     // 0x00168c4c: addiu $v1, $zero, 2
    s0 = s0 + -6;                                               // 0x00168c68: addiu $s0, $s0, -6
    s1 = s1 + 6;                                                // 0x00168c74: addiu $s1, $s1, 6
    *(uint32_t*)(s2) = 0;                                       // 0x00168c80: sw $zero, 0($s2)
    if (a1 != v1) goto label_0x168ce4;                          // 0x00168c84: bne $a1, $v1, 0x168ce4
    func_00168d00();  // 168d00                                // 0x00168c8c: jal 0x168d00
    /* nop */                                                   // 0x00168c90: nop 
    /* bnezl $v0, 0x168cb4 */                                   // 0x00168c94: bnezl $v0, 0x168cb4
    s0 = s0 + -0xc;                                             // 0x00168c98: addiu $s0, $s0, -0xc
    s0 = s0 + -2;                                               // 0x00168c9c: addiu $s0, $s0, -2
    s1 = s1 + 2;                                                // 0x00168ca0: addiu $s1, $s1, 2
    func_00168d00();  // 168d00                                // 0x00168ca4: jal 0x168d00
    if (v0 == 0) goto label_0x168ce4;                           // 0x00168cac: beqz $v0, 0x168ce4
    s0 = s0 + -0xc;                                             // 0x00168cb0: addiu $s0, $s0, -0xc
    s1 = s1 + 0xc;                                              // 0x00168cb4: addiu $s1, $s1, 0xc
    func_00168d58();  // 168d58                                // 0x00168cbc: jal 0x168d58
    if (v0 == 0) goto label_0x168ce4;                           // 0x00168ccc: beqz $v0, 0x168ce4
    func_00168db0();  // 168db0                                // 0x00168cd4: jal 0x168db0
    /* nop */                                                   // 0x00168cd8: nop 
    *(uint32_t*)(s2) = v0;                                      // 0x00168cdc: sw $v0, 0($s2)
    v0 = 1;                                                     // 0x00168ce0: addiu $v0, $zero, 1
label_0x168ce4:
    return;                                                     // 0x00168cf8: jr $ra
    sp = sp + 0x30;                                             // 0x00168cfc: addiu $sp, $sp, 0x30
}