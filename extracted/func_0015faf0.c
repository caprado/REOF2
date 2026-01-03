void func_0015faf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_28;
    
    sp = sp + -0x50;                                            // 0x0015faf0: addiu $sp, $sp, -0x50
    func_0015fc80();  // 15fc80                                // 0x0015fafc: jal 0x15fc80
    if (v0 != 0) goto label_0x15fb28;                           // 0x0015fb08: bnez $v0, 0x15fb28
    a0 = 0x22 << 16;                                            // 0x0015fb10: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015fb14: jal 0x163410
    a0 = &str_00227d38;  // "E1122625: mwPlySetLimitTime: handle is invalid." // 0x0015fb18: addiu $a0, $a0, 0x7d38
    goto label_0x15fb34;                                        // 0x0015fb1c: b 0x15fb34
    v0 = -1;                                                    // 0x0015fb20: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0015fb24: nop 
label_0x15fb28:
    func_0015fb60();  // 15fb60                                // 0x0015fb28: jal 0x15fb60
    /* nop */                                                   // 0x0015fb2c: nop 
    v0 = local_28;                                              // 0x0015fb30: lw $v0, 0x28($sp)
label_0x15fb34:
    return;                                                     // 0x0015fb3c: jr $ra
    sp = sp + 0x50;                                             // 0x0015fb40: addiu $sp, $sp, 0x50
}