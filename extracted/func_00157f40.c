void func_00157f40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00157f40: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x157f78;                           // 0x00157f5c: bnez $s0, 0x157f78
    v0 = 0x21 << 16;                                            // 0x00157f64: lui $v0, 0x21
    func_00157fd8();  // 157fd8                                // 0x00157f68: jal 0x157fd8
    a0 = g_00213e70;  // Global at 0x00213e70                   // 0x00157f6c: lw $a0, 0x3e70($v0)
    goto label_0x157fbc;                                        // 0x00157f70: b 0x157fbc
label_0x157f78:
    func_00158088();  // 158088                                // 0x00157f78: jal 0x158088
    /* nop */                                                   // 0x00157f7c: nop 
    a1 = 0xff02 << 16;                                          // 0x00157f80: lui $a1, 0xff02
    if (v0 == 0) goto label_0x157fa8;                           // 0x00157f84: beqz $v0, 0x157fa8
    a1 = a1 | 0x101;                                            // 0x00157f90: ori $a1, $a1, 0x101
    return func_00157f08();  // Tail call                        // 0x00157fa0: j 0x157eb8
    sp = sp + 0x20;                                             // 0x00157fa4: addiu $sp, $sp, 0x20
label_0x157fa8:
    a0 = s0 + 4;                                                // 0x00157fa8: addiu $a0, $s0, 4
    func_00157fd8();  // 157fd8                                // 0x00157fb0: jal 0x157fd8
label_0x157fbc:
    return;                                                     // 0x00157fcc: jr $ra
    sp = sp + 0x20;                                             // 0x00157fd0: addiu $sp, $sp, 0x20
}