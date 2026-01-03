void func_00101a58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x00101a58: addiu $sp, $sp, -0x40
    func_00100d00();  // 100d00                                // 0x00101a64: jal 0x100d00
    v1 = 6;                                                     // 0x00101a6c: addiu $v1, $zero, 6
    if (v0 == v1) goto label_0x101af0;                          // 0x00101a70: beq $v0, $v1, 0x101af0
    func_00100b90();  // 100b90                                // 0x00101a78: jal 0x100b90
    a0 = 0xa;                                                   // 0x00101a7c: addiu $a0, $zero, 0xa
    if (v0 == 0) goto label_0x101aec;                           // 0x00101a80: beqz $v0, 0x101aec
    s0 = 0x1f << 16;                                            // 0x00101a84: lui $s0, 0x1f
    v0 = 5;                                                     // 0x00101a88: addiu $v0, $zero, 5
    g_001edf58 = v0;  // Global at 0x001edf58                   // 0x00101a8c: sw $v0, -0x20a8($s0)
    v1 = s0 + -0x20a8;                                          // 0x00101a90: addiu $v1, $s0, -0x20a8
    s1 = 0x1f << 16;                                            // 0x00101a94: lui $s1, 0x1f
    v0 = 1;                                                     // 0x00101a98: addiu $v0, $zero, 1
    a0 = 0x1f << 16;                                            // 0x00101a9c: lui $a0, 0x1f
    t3 = 0x10 << 16;                                            // 0x00101aa0: lui $t3, 0x10
    g_001edf34 = v0;  // Global at 0x001edf34                   // 0x00101aa4: sw $v0, -0x20cc($s1)
    a0 = a0 + -0xf30;                                           // 0x00101aa8: addiu $a0, $a0, -0xf30
    local_0 = v1;                                               // 0x00101aac: sw $v1, 0($sp)
    t3 = t3 + 0x2b8;                                            // 0x00101ab0: addiu $t3, $t3, 0x2b8
    a1 = 6;                                                     // 0x00101ab4: addiu $a1, $zero, 6
    a2 = 1;                                                     // 0x00101ab8: addiu $a2, $zero, 1
    func_001176a8();  // 1176a8                                // 0x00101ac8: jal 0x1176a8
    if (v0 >= 0) goto label_0x101af0;                           // 0x00101ad0: bgezl $v0, 0x101af0
    v0 = 1;                                                     // 0x00101ad4: addiu $v0, $zero, 1
    g_001edf58 = 0;  // Global at 0x001edf58                    // 0x00101ad8: sw $zero, -0x20a8($s0)
    v0 = 0x1f << 16;                                            // 0x00101adc: lui $v0, 0x1f
    g_001edf34 = 0;  // Global at 0x001edf34                    // 0x00101ae0: sw $zero, -0x20cc($s1)
    iSignalSema();  // 0x114300                                 // 0x00101ae4: jal 0x114300
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00101ae8: lw $a0, -0x20d8($v0)
label_0x101aec:
label_0x101af0:
    return;                                                     // 0x00101afc: jr $ra
    sp = sp + 0x40;                                             // 0x00101b00: addiu $sp, $sp, 0x40
}