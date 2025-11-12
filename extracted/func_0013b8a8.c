void func_0013b8a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013b8a8: addiu $sp, $sp, -0x10
    if (a1 != 0) goto label_0x13b8d0;                           // 0x0013b8b0: bnez $a1, 0x13b8d0
    a1 = 0x22 << 16;                                            // 0x0013b8b8: lui $a1, 0x22
    func_0013acb8();  // 0x13ac88                                // 0x0013b8bc: jal 0x13ac88
    a1 = &str_00225930;  // "E0092713:nsct < 0.(htCiReqRd)"     // 0x0013b8c0: addiu $a1, $a1, 0x5930
    goto label_0x13b8e8;                                        // 0x0013b8c4: b 0x13b8e8
    /* nop */                                                   // 0x0013b8cc: nop 
label_0x13b8d0:
    v1 = g_00225932;  // Global at 0x00225932                   // 0x0013b8d0: lb $v1, 2($a1)
    v0 = 1;                                                     // 0x0013b8d4: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x13b8e8;                          // 0x0013b8d8: bnel $v1, $v0, 0x13b8e8
    v0 = g_00225958;  // Global at 0x00225958                   // 0x0013b8e0: lw $v0, 0x28($a1)
    v0 = v0 << 0xb;                                             // 0x0013b8e4: sll $v0, $v0, 0xb
label_0x13b8e8:
    return;                                                     // 0x0013b8ec: jr $ra
    sp = sp + 0x10;                                             // 0x0013b8f0: addiu $sp, $sp, 0x10
}