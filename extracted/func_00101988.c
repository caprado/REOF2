void func_00101988() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x00101988: addiu $sp, $sp, -0x50
    func_00100d98();  // 0x100d00                                // 0x001019a0: jal 0x100d00
    s1 = 0x1f << 16;                                            // 0x001019a4: lui $s1, 0x1f
    v1 = 6;                                                     // 0x001019a8: addiu $v1, $zero, 6
    if (v0 == v1) goto label_0x101a38;                          // 0x001019ac: beq $v0, $v1, 0x101a38
    s2 = s1 + -0x2000;                                          // 0x001019b0: addiu $s2, $s1, -0x2000
    func_00100d00();  // 0x100b90                                // 0x001019b4: jal 0x100b90
    a0 = 9;                                                     // 0x001019b8: addiu $a0, $zero, 9
    if (v0 == 0) goto label_0x101a38;                           // 0x001019bc: beqz $v0, 0x101a38
    g_001ee000 = s0;  // Global at 0x001ee000                   // 0x001019c4: sw $s0, -0x2000($s1)
    a1 = 4;                                                     // 0x001019c8: addiu $a1, $zero, 4
    func_00116d40();  // 0x116c90                                // 0x001019cc: jal 0x116c90
    s0 = 0x1f << 16;                                            // 0x001019d0: lui $s0, 0x1f
    s1 = 0x1f << 16;                                            // 0x001019d4: lui $s1, 0x1f
    a1 = s0 + -0x20a8;                                          // 0x001019d8: addiu $a1, $s0, -0x20a8
    v0 = 4;                                                     // 0x001019dc: addiu $v0, $zero, 4
    g_001edf58 = v0;  // Global at 0x001edf58                   // 0x001019e0: sw $v0, -0x20a8($s0)
    v1 = 1;                                                     // 0x001019e4: addiu $v1, $zero, 1
    a0 = 0x1f << 16;                                            // 0x001019e8: lui $a0, 0x1f
    t3 = 0x10 << 16;                                            // 0x001019ec: lui $t3, 0x10
    local_0 = a1;                                               // 0x001019f0: sw $a1, 0($sp)
    a0 = a0 + -0xf30;                                           // 0x001019f4: addiu $a0, $a0, -0xf30
    g_001edf34 = v1;  // Global at 0x001edf34                   // 0x001019f8: sw $v1, -0x20cc($s1)
    t3 = t3 + 0x2b8;                                            // 0x00101a00: addiu $t3, $t3, 0x2b8
    a1 = 5;                                                     // 0x00101a04: addiu $a1, $zero, 5
    a2 = 1;                                                     // 0x00101a08: addiu $a2, $zero, 1
    t0 = 4;                                                     // 0x00101a0c: addiu $t0, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x00101a14: jal 0x1176a8
    if (v0 >= 0) goto label_0x101a3c;                           // 0x00101a1c: bgezl $v0, 0x101a3c
    v0 = 1;                                                     // 0x00101a20: addiu $v0, $zero, 1
    g_001edf58 = 0;  // Global at 0x001edf58                    // 0x00101a24: sw $zero, -0x20a8($s0)
    v0 = 0x1f << 16;                                            // 0x00101a28: lui $v0, 0x1f
    g_001edf34 = 0;  // Global at 0x001edf34                    // 0x00101a2c: sw $zero, -0x20cc($s1)
    iSignalSema();  // 0x114300                                 // 0x00101a30: jal 0x114300
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00101a34: lw $a0, -0x20d8($v0)
label_0x101a38:
label_0x101a3c:
    return;                                                     // 0x00101a4c: jr $ra
    sp = sp + 0x50;                                             // 0x00101a50: addiu $sp, $sp, 0x50
}