void func_00128298() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00128298: addiu $sp, $sp, -0x10
    a0 = ((unsigned)a0 < (unsigned)0x100) ? 1 : 0;              // 0x0012829c: sltiu $a0, $a0, 0x100
    if (a0 != 0) goto label_0x1282b8;                           // 0x001282a0: bnez $a0, 0x1282b8
    a0 = 0x22 << 16;                                            // 0x001282a8: lui $a0, 0x22
    goto label_0x1282c8;                                        // 0x001282ac: b 0x1282c8
    a0 = &str_002224e8;  // "E9040802:'ptinfo' is NULL.(adxf_ChkPrmPt)" // 0x001282b0: addiu $a0, $a0, 0x24e8
    /* nop */                                                   // 0x001282b4: nop 
label_0x1282b8:
    if (a1 != 0) goto label_0x1282d4;                           // 0x001282b8: bnez $a1, 0x1282d4
    a0 = 0x22 << 16;                                            // 0x001282c0: lui $a0, 0x22
    a0 = &str_00222520;  // "E1110701:'tmpbuf' is null.(load partition)" // 0x001282c4: addiu $a0, $a0, 0x2520
label_0x1282c8:
    func_00127d90();  // 127d90                                // 0x001282c8: jal 0x127d90
    /* nop */                                                   // 0x001282cc: nop 
    v0 = -3;                                                    // 0x001282d0: addiu $v0, $zero, -3
label_0x1282d4:
    return;                                                     // 0x001282d8: jr $ra
    sp = sp + 0x10;                                             // 0x001282dc: addiu $sp, $sp, 0x10
}