void func_001b9ca0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = a1 & 0xff;                                             // 0x001b9ca0: andi $a2, $a1, 0xff
    sp = sp + -0x10;                                            // 0x001b9ca4: addiu $sp, $sp, -0x10
    a1 = a2 & 0x40;                                             // 0x001b9ca8: andi $a1, $a2, 0x40
    v1 = 0x40;                                                  // 0x001b9cac: addiu $v1, $zero, 0x40
    if (a1 == v1) goto label_0x1b9ce0;                          // 0x001b9cb0: beq $a1, $v1, 0x1b9ce0
    if (a1 == 0) goto label_0x1b9cc8;                           // 0x001b9cb8: beqz $a1, 0x1b9cc8
    /* nop */                                                   // 0x001b9cbc: nop 
    goto label_0x1b9cec;                                        // 0x001b9cc0: b 0x1b9cec
label_0x1b9cc8:
    a1 = a2 & 0x3f;                                             // 0x001b9cc8: andi $a1, $a2, 0x3f
    v0 = a2 & 0x80;                                             // 0x001b9ccc: andi $v0, $a2, 0x80
    func_001b8a80();  // 0x1b8950                                // 0x001b9cd0: jal 0x1b8950
    a2 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001b9cd4: sltu $a2, $zero, $v0
    goto label_0x1b9ce8;                                        // 0x001b9cd8: b 0x1b9ce8
    /* nop */                                                   // 0x001b9cdc: nop 
label_0x1b9ce0:
    func_001b8430();  // 0x1b83f0                                // 0x001b9ce0: jal 0x1b83f0
    a1 = a2 & 0x3f;                                             // 0x001b9ce4: andi $a1, $a2, 0x3f
label_0x1b9ce8:
label_0x1b9cec:
    return;                                                     // 0x001b9cec: jr $ra
    sp = sp + 0x10;                                             // 0x001b9cf0: addiu $sp, $sp, 0x10
}