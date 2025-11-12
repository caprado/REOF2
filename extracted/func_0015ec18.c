void func_0015ec18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015ec18: addiu $sp, $sp, -0x10
    func_00171d88();  // 0x171d38                                // 0x0015ec20: jal 0x171d38
    a0 = g_002278f0;  // Global at 0x002278f0                   // 0x0015ec24: lw $a0, 0x40($a0)
    a0 = 1;                                                     // 0x0015ec28: addiu $a0, $zero, 1
    if (v0 == 0) goto label_0x15ec50;                           // 0x0015ec2c: beqz $v0, 0x15ec50
    if (v0 == a0) goto label_0x15ec50;                          // 0x0015ec34: beq $v0, $a0, 0x15ec50
    v1 = 1;                                                     // 0x0015ec38: addiu $v1, $zero, 1
    a0 = 0x22 << 16;                                            // 0x0015ec3c: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015ec44: jal 0x163410
    a0 = &str_002278b0;  // "E0203263: mw_sfd_start_ex: RESET failed." // 0x0015ec48: addiu $a0, $a0, 0x78b0
label_0x15ec50:
    return;                                                     // 0x0015ec58: jr $ra
    sp = sp + 0x10;                                             // 0x0015ec5c: addiu $sp, $sp, 0x10
}