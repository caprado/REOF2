void func_0017e2a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017e2a8: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x17e2bc;                           // 0x0017e2ac: beqz $a0, 0x17e2bc
    if (a1 >= 0) goto label_0x17e2c8;                           // 0x0017e2b4: bgez $a1, 0x17e2c8
    a1 = 0x23 << 16;                                            // 0x0017e2b8: lui $a1, 0x23
label_0x17e2bc:
    goto label_0x17e2dc;                                        // 0x0017e2bc: b 0x17e2dc
    /* nop */                                                   // 0x0017e2c4: nop 
label_0x17e2c8:
    a0 = a0 + 0x13;                                             // 0x0017e2c8: addiu $a0, $a0, 0x13
    a1 = a1 + -0x6238;                                          // 0x0017e2cc: addiu $a1, $a1, -0x6238
    func_0010b2a0();  // 0x10b0e8                                // 0x0017e2d0: jal 0x10b0e8
    a2 = 1;                                                     // 0x0017e2d4: addiu $a2, $zero, 1
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0017e2d8: sltiu $v0, $v0, 1
label_0x17e2dc:
    return;                                                     // 0x0017e2e0: jr $ra
    sp = sp + 0x10;                                             // 0x0017e2e4: addiu $sp, $sp, 0x10
}