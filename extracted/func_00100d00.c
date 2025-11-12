void func_00100d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00100d00: addiu $sp, $sp, -0x30
    a0 = 2;                                                     // 0x00100d04: addiu $a0, $zero, 2
    func_00100d00();  // 0x100b90                                // 0x00100d0c: jal 0x100b90
    if (v0 != 0) goto label_0x100d24;                           // 0x00100d14: bnez $v0, 0x100d24
    v0 = 0x1f << 16;                                            // 0x00100d18: lui $v0, 0x1f
    goto label_0x100d88;                                        // 0x00100d1c: b 0x100d88
label_0x100d24:
    a0 = 0x1f << 16;                                            // 0x00100d24: lui $a0, 0x1f
    s0 = v0 + -0x2080;                                          // 0x00100d28: addiu $s0, $v0, -0x2080
    a0 = a0 + -0xf30;                                           // 0x00100d2c: addiu $a0, $a0, -0xf30
    local_0 = 0;                                                // 0x00100d30: sw $zero, 0($sp)
    a1 = 0xe;                                                   // 0x00100d34: addiu $a1, $zero, 0xe
    t2 = 4;                                                     // 0x00100d48: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x00100d4c: jal 0x1176a8
    if (v0 >= 0) goto label_0x100d70;                           // 0x00100d54: bgez $v0, 0x100d70
    v1 = 0x1f << 16;                                            // 0x00100d58: lui $v1, 0x1f
    v0 = 0x1f << 16;                                            // 0x00100d5c: lui $v0, 0x1f
    iSignalSema();  // 0x114300                                 // 0x00100d60: jal 0x114300
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00100d64: lw $a0, -0x20d8($v0)
    goto label_0x100d88;                                        // 0x00100d68: b 0x100d88
label_0x100d70:
    v0 = 0x2000 << 16;                                          // 0x00100d70: lui $v0, 0x2000
    v0 = s0 | v0;                                               // 0x00100d74: or $v0, $s0, $v0
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00100d78: lw $a0, -0x20d8($v1)
    iSignalSema();  // 0x114300                                 // 0x00100d7c: jal 0x114300
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00100d80: lw $s0, 0($v0)
label_0x100d88:
    return;                                                     // 0x00100d90: jr $ra
    sp = sp + 0x30;                                             // 0x00100d94: addiu $sp, $sp, 0x30
}