void func_0011b9bc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x0011b9bc: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((v1) + 0x3f8);                             // 0x0011b9c0: lw $v0, 0x3f8($v1)
    if (v0 >= 0) goto label_0x11b9dc;                           // 0x0011b9cc: bgez $v0, 0x11b9dc
    goto label_0x11ba24;                                        // 0x0011b9d4: b 0x11ba24
label_0x11b9dc:
    a3 = 0x25 << 16;                                            // 0x0011b9dc: lui $a3, 0x25
    a0 = 0x25 << 16;                                            // 0x0011b9e0: lui $a0, 0x25
    g_0024fa40 = a1;  // Global at 0x0024fa40                   // 0x0011b9e4: sw $a1, -0x5c0($a3)
    s0 = 0x25 << 16;                                            // 0x0011b9e8: lui $s0, 0x25
    a0 = a0 + -0x640;                                           // 0x0011b9ec: addiu $a0, $a0, -0x640
    a3 = a3 + -0x5c0;                                           // 0x0011b9f0: addiu $a3, $a3, -0x5c0
    local_0 = 0;                                                // 0x0011b9f4: sw $zero, 0($sp)
    a1 = 9;                                                     // 0x0011b9f8: addiu $a1, $zero, 9
    t0 = 4;                                                     // 0x0011ba00: addiu $t0, $zero, 4
    t1 = s0 + -0x600;                                           // 0x0011ba04: addiu $t1, $s0, -0x600
    t2 = 4;                                                     // 0x0011ba08: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011ba0c: jal 0x1176a8
    if (v0 >= 0) goto label_0x11ba24;                           // 0x0011ba14: bgezl $v0, 0x11ba24
    v0 = g_0024fa00;  // Global at 0x0024fa00                   // 0x0011ba18: lw $v0, -0x600($s0)
    v0 = 0xffff << 16;                                          // 0x0011ba1c: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x0011ba20: ori $v0, $v0, 0xffff
label_0x11ba24:
    return;                                                     // 0x0011ba2c: jr $ra
    sp = sp + 0x30;                                             // 0x0011ba30: addiu $sp, $sp, 0x30
}