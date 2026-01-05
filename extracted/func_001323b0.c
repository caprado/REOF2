void func_001323b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001323b0: addiu $sp, $sp, -0x10
    v1 = a1 << 1;                                               // 0x001323b4: sll $v1, $a1, 1
    if (a0 != 0) goto label_0x1323d8;                           // 0x001323b8: bnez $a0, 0x1323d8
    a0 = 0x22 << 16;                                            // 0x001323c0: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x001323c4: jal 0x127d90
    a0 = &str_00223968;  // "E02080870 ADXT_SetOutBalance: parameter error" // 0x001323c8: addiu $a0, $a0, 0x3968
    goto label_0x1323e0;                                        // 0x001323cc: b 0x1323e0
    /* nop */                                                   // 0x001323d4: nop 
label_0x1323d8:
    v1 = v1 + a0;                                               // 0x001323d8: addu $v1, $v1, $a0
    v0 = *(int16_t*)((v1) + 0x42);                              // 0x001323dc: lh $v0, 0x42($v1)
label_0x1323e0:
    return;                                                     // 0x001323e4: jr $ra
    sp = sp + 0x10;                                             // 0x001323e8: addiu $sp, $sp, 0x10
}