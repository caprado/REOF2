void func_0013b598() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013b598: addiu $sp, $sp, -0x10
    if (v0 != 0) goto label_0x13b5c0;                           // 0x0013b5a0: bnez $v0, 0x13b5c0
    a1 = 0x22 << 16;                                            // 0x0013b5a8: lui $a1, 0x22
    func_0013acb8();  // 0x13ac88                                // 0x0013b5ac: jal 0x13ac88
    a1 = &str_00225930;  // "E0092713:nsct < 0.(htCiReqRd)"     // 0x0013b5b0: addiu $a1, $a1, 0x5930
    goto label_0x13b5c4;                                        // 0x0013b5b4: b 0x13b5c4
    /* nop */                                                   // 0x0013b5bc: nop 
label_0x13b5c0:
    v0 = *(int32_t*)((v0) + 0x1c);                              // 0x0013b5c0: lw $v0, 0x1c($v0)
label_0x13b5c4:
    return;                                                     // 0x0013b5c8: jr $ra
    sp = sp + 0x10;                                             // 0x0013b5cc: addiu $sp, $sp, 0x10
}