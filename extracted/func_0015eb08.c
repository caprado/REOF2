void func_0015eb08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015eb08: addiu $sp, $sp, -0x10
    func_00171f38();  // 171f38                                // 0x0015eb10: jal 0x171f38
    a0 = str_002278b0;  // "E0203263: mw_sfd_start_ex: RESET failed." // 0x0015eb14: lw $a0, 0x40($a0)
    if (v0 == 0) goto label_0x15eb38;                           // 0x0015eb18: beqz $v0, 0x15eb38
    a0 = -0x137;                                                // 0x0015eb1c: addiu $a0, $zero, -0x137
    func_0015e7b0();  // 15e7b0                                // 0x0015eb20: jal 0x15e7b0
    /* nop */                                                   // 0x0015eb24: nop 
    a0 = 0x22 << 16;                                            // 0x0015eb28: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015eb2c: jal 0x163410
    a0 = &str_00227870;  // "E20010703G mwPlySfdStart: "        // 0x0015eb30: addiu $a0, $a0, 0x7870
    v0 = -0x137;                                                // 0x0015eb34: addiu $v0, $zero, -0x137
label_0x15eb38:
    return;                                                     // 0x0015eb3c: jr $ra
    sp = sp + 0x10;                                             // 0x0015eb40: addiu $sp, $sp, 0x10
}