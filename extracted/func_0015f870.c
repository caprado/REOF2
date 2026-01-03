void func_0015f870() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015f870: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015f880: jal 0x15fc80
    if (v0 != 0) goto label_0x15f8a8;                           // 0x0015f888: bnez $v0, 0x15f8a8
    a0 = 0x22 << 16;                                            // 0x0015f890: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015f894: jal 0x163410
    a0 = &str_00227bb8;  // "E1122619: mwPlyGetNumSkipDec: handle is invalid." // 0x0015f898: addiu $a0, $a0, 0x7bb8
    goto label_0x15f8c0;                                        // 0x0015f89c: b 0x15f8c0
    /* nop */                                                   // 0x0015f8a4: nop 
label_0x15f8a8:
    func_0015f8d8();  // 15f8d8                                // 0x0015f8a8: jal 0x15f8d8
    /* nop */                                                   // 0x0015f8ac: nop 
    func_0015e138();  // 15e138                                // 0x0015f8b4: jal 0x15e138
    v0 = s0 + v0;                                               // 0x0015f8bc: addu $v0, $s0, $v0
label_0x15f8c0:
    return;                                                     // 0x0015f8cc: jr $ra
    sp = sp + 0x20;                                             // 0x0015f8d0: addiu $sp, $sp, 0x20
}