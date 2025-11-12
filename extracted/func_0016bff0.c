void func_0016bff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016bff0: addiu $sp, $sp, -0x10
    goto label_0x16c008;                                        // 0x0016bffc: j 0x16c008
    sp = sp + 0x10;                                             // 0x0016c000: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016c004: nop 
label_0x16c008:
    sp = sp + -0x20;                                            // 0x0016c008: addiu $sp, $sp, -0x20
    a1 = 5;                                                     // 0x0016c00c: addiu $a1, $zero, 5
    func_001752f8();  // 0x1752e8                                // 0x0016c01c: jal 0x1752e8
    if (v0 == 0) goto label_0x16c070;                           // 0x0016c024: beqz $v0, 0x16c070
    func_0016c110();  // 0x16c0f8                                // 0x0016c02c: jal 0x16c0f8
    /* nop */                                                   // 0x0016c030: nop 
    v1 = 1;                                                     // 0x0016c034: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x16c048;                          // 0x0016c038: bne $v0, $v1, 0x16c048
    goto label_0x16c070;                                        // 0x0016c040: b 0x16c070
label_0x16c048:
    func_0016c0f8();  // 0x16c088                                // 0x0016c048: jal 0x16c088
    /* nop */                                                   // 0x0016c04c: nop 
    func_0016c4b0();  // 0x16c440                                // 0x0016c050: jal 0x16c440
    func_0016c1c0();  // 0x16c110                                // 0x0016c05c: jal 0x16c110
    func_0016c420();  // 0x16c378                                // 0x0016c064: jal 0x16c378
label_0x16c070:
    return;                                                     // 0x0016c07c: jr $ra
    sp = sp + 0x20;                                             // 0x0016c080: addiu $sp, $sp, 0x20
}