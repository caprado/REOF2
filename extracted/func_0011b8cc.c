void func_0011b8cc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x0011b8cc: addiu $sp, $sp, -0x30
    v1 = g_ffff03f8;  // Global at 0xffff03f8                   // 0x0011b8d0: lw $v1, 0x3f8($v0)
    if (v1 >= 0) goto label_0x11b8e8;                           // 0x0011b8d8: bgez $v1, 0x11b8e8
    goto label_0x11b928;                                        // 0x0011b8e0: b 0x11b928
label_0x11b8e8:
    a0 = 0x25 << 16;                                            // 0x0011b8e8: lui $a0, 0x25
    s0 = 0x25 << 16;                                            // 0x0011b8ec: lui $s0, 0x25
    a0 = a0 + -0x640;                                           // 0x0011b8f0: addiu $a0, $a0, -0x640
    local_0 = 0;                                                // 0x0011b8f4: sw $zero, 0($sp)
    a1 = 7;                                                     // 0x0011b8f8: addiu $a1, $zero, 7
    t1 = s0 + -0x600;                                           // 0x0011b908: addiu $t1, $s0, -0x600
    t2 = 4;                                                     // 0x0011b90c: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011b910: jal 0x1176a8
    if (v0 >= 0) goto label_0x11b928;                           // 0x0011b918: bgezl $v0, 0x11b928
    v0 = g_0024fa00;  // Global at 0x0024fa00                   // 0x0011b91c: lw $v0, -0x600($s0)
    v0 = 0xffff << 16;                                          // 0x0011b920: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x0011b924: ori $v0, $v0, 0xffff
label_0x11b928:
    return;                                                     // 0x0011b930: jr $ra
    sp = sp + 0x30;                                             // 0x0011b934: addiu $sp, $sp, 0x30
}