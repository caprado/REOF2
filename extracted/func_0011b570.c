void func_0011b570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v1 = 0x1f << 16;                                            // 0x0011b570: lui $v1, 0x1f
    sp = sp + -0x30;                                            // 0x0011b574: addiu $sp, $sp, -0x30
    v0 = g_001f03f8;  // Global at 0x001f03f8                   // 0x0011b578: lw $v0, 0x3f8($v1)
    if (v0 < 0) goto label_0x11b5cc;                            // 0x0011b584: bltz $v0, 0x11b5cc
    a3 = 0x25 << 16;                                            // 0x0011b58c: lui $a3, 0x25
    a0 = 0x25 << 16;                                            // 0x0011b590: lui $a0, 0x25
    g_0024fa40 = a1;  // Global at 0x0024fa40                   // 0x0011b594: sw $a1, -0x5c0($a3)
    s0 = 0x25 << 16;                                            // 0x0011b598: lui $s0, 0x25
    a0 = a0 + -0x640;                                           // 0x0011b59c: addiu $a0, $a0, -0x640
    a3 = a3 + -0x5c0;                                           // 0x0011b5a0: addiu $a3, $a3, -0x5c0
    local_0 = 0;                                                // 0x0011b5a4: sw $zero, 0($sp)
    a1 = 1;                                                     // 0x0011b5a8: addiu $a1, $zero, 1
    t0 = 4;                                                     // 0x0011b5b0: addiu $t0, $zero, 4
    t1 = s0 + -0x600;                                           // 0x0011b5b4: addiu $t1, $s0, -0x600
    t2 = 4;                                                     // 0x0011b5b8: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011b5bc: jal 0x1176a8
    if (v0 >= 0) goto label_0x11b5d0;                           // 0x0011b5c4: bgez $v0, 0x11b5d0
    v0 = g_0024fa00;  // Global at 0x0024fa00                   // 0x0011b5c8: lw $v0, -0x600($s0)
label_0x11b5cc:
label_0x11b5d0:
    return;                                                     // 0x0011b5d8: jr $ra
    sp = sp + 0x30;                                             // 0x0011b5dc: addiu $sp, $sp, 0x30
}