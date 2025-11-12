void func_0011cbc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011cbc8: addiu $sp, $sp, -0x40
    v0 = 0x1f << 16;                                            // 0x0011cbcc: lui $v0, 0x1f
    s2 = 3;                                                     // 0x0011cbd8: addiu $s2, $zero, 3
    s0 = v0 + 0x788;                                            // 0x0011cbe4: addiu $s0, $v0, 0x788
    a0 = g_001f0788;  // Global at 0x001f0788                   // 0x0011cbe8: lw $a0, 0x788($v0)
    s1 = s0 + 0x18;                                             // 0x0011cbec: addiu $s1, $s0, 0x18
    func_0011cbc8();  // 0x11cbb8                                // 0x0011cbf0: jal 0x11cbb8
    a1 = g_001f078c;  // Global at 0x001f078c                   // 0x0011cbf4: lw $a1, 4($s0)
    a1 = 0x1f << 16;                                            // 0x0011cbf8: lui $a1, 0x1f
    a0 = 0x8007 << 16;                                          // 0x0011cbfc: lui $a0, 0x8007
    a2 = 0x330;                                                 // 0x0011cc00: addiu $a2, $zero, 0x330
    a1 = a1 + 0x408;                                            // 0x0011cc04: addiu $a1, $a1, 0x408
    RFU091();  // 0x11cb60                                      // 0x0011cc08: jal 0x11cb60
    a0 = a0 | 0x5000;                                           // 0x0011cc0c: ori $a0, $a0, 0x5000
    iFlushCache();  // 0x114560                                 // 0x0011cc10: jal 0x114560
    iFlushCache();  // 0x114560                                 // 0x0011cc18: jal 0x114560
    a0 = 2;                                                     // 0x0011cc1c: addiu $a0, $zero, 2
    a0 = g_001f0790;  // Global at 0x001f0790                   // 0x0011cc20: lw $a0, 8($s0)
    func_0011cbc8();  // 0x11cbb8                                // 0x0011cc24: jal 0x11cbb8
    a1 = g_001f0794;  // Global at 0x001f0794                   // 0x0011cc28: lw $a1, 0xc($s0)
    a0 = g_001f0798;  // Global at 0x001f0798                   // 0x0011cc2c: lw $a0, 0x10($s0)
    func_0011cbc8();  // 0x11cbb8                                // 0x0011cc30: jal 0x11cbb8
    a1 = g_001f079c;  // Global at 0x001f079c                   // 0x0011cc34: lw $a1, 0x14($s0)
    a0 = g_001f07a0;  // Global at 0x001f07a0                   // 0x0011cc38: lw $a0, 0($s1)
    /* nop */                                                   // 0x0011cc3c: nop 
    SetSyscall();  // 0x11cba8                                  // 0x0011cc40: jal 0x11cba8
    s2 = s2 + 1;                                                // 0x0011cc44: addiu $s2, $s2, 1
    a0 = g_001f07a0;  // Global at 0x001f07a0                   // 0x0011cc48: lw $a0, 0($s1)
    func_0011cbc8();  // 0x11cbb8                                // 0x0011cc50: jal 0x11cbb8
    s1 = s1 + 8;                                                // 0x0011cc54: addiu $s1, $s1, 8
    v0 = ((unsigned)s2 < (unsigned)8) ? 1 : 0;                  // 0x0011cc58: sltiu $v0, $s2, 8
    /* bnezl $v0, 0x11cc40 */                                   // 0x0011cc5c: bnezl $v0, 0x11cc40
    a0 = g_001f07a8;  // Global at 0x001f07a8                   // 0x0011cc60: lw $a0, 0($s1)
    SetSyscall();  // 0x11cba8                                  // 0x0011cc64: jal 0x11cba8
    a0 = 3;                                                     // 0x0011cc68: addiu $a0, $zero, 3
    v1 = 0x1f << 16;                                            // 0x0011cc6c: lui $v1, 0x1f
    g_001f0780 = v0;  // Global at 0x001f0780                   // 0x0011cc80: sw $v0, 0x780($v1)
    return;                                                     // 0x0011cc84: jr $ra
    sp = sp + 0x40;                                             // 0x0011cc88: addiu $sp, $sp, 0x40
}