void func_001243d4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001243d4: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((v0) + 0x1f3c);                            // 0x001243d8: lw $v1, 0x1f3c($v0)
    if (v1 != 0) goto label_0x124404;                           // 0x001243f4: bnez $v1, 0x124404
    func_001241d8();  // 1241d8                                // 0x001243fc: jal 0x1241d8
    /* nop */                                                   // 0x00124400: nop 
label_0x124404:
    a0 = 0x22 << 16;                                            // 0x00124404: lui $a0, 0x22
    a0 = &str_002223e0;  // "E1060101 ADXB_DecodeHeaderAdx: "   // 0x00124414: addiu $a0, $a0, 0x23e0
    func_00124218();  // 124218                                // 0x00124418: jal 0x124218
    a1 = 6;                                                     // 0x0012441c: addiu $a1, $zero, 6
    return;                                                     // 0x00124434: jr $ra
    sp = sp + 0x20;                                             // 0x00124438: addiu $sp, $sp, 0x20
}