void func_0015bc08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015bc08: addiu $sp, $sp, -0x20
    if (s1 != 0) goto label_0x15bc38;                           // 0x0015bc18: bnez $s1, 0x15bc38
    a0 = 0x22 << 16;                                            // 0x0015bc20: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015bc24: jal 0x163410
    a0 = &str_00226fc0;  // "E20010703B MWSFCRE_SetSupplySj: "  // 0x0015bc28: addiu $a0, $a0, 0x6fc0
    goto label_0x15bc50;                                        // 0x0015bc2c: b 0x15bc50
    /* nop */                                                   // 0x0015bc34: nop 
label_0x15bc38:
    func_0015bbb0();  // 0x15baf8                                // 0x0015bc38: jal 0x15baf8
    /* nop */                                                   // 0x0015bc3c: nop 
    func_0015bc08();  // 0x15bbb0                                // 0x0015bc44: jal 0x15bbb0
    v0 = s0 + v0;                                               // 0x0015bc4c: addu $v0, $s0, $v0
label_0x15bc50:
    return;                                                     // 0x0015bc5c: jr $ra
    sp = sp + 0x20;                                             // 0x0015bc60: addiu $sp, $sp, 0x20
}