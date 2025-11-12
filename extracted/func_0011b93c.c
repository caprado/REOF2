void func_0011b93c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x0011b93c: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((v1) + 0x3f8);                             // 0x0011b940: lw $v0, 0x3f8($v1)
    if (v0 >= 0) goto label_0x11b95c;                           // 0x0011b94c: bgez $v0, 0x11b95c
    goto label_0x11b9a4;                                        // 0x0011b954: b 0x11b9a4
label_0x11b95c:
    a3 = 0x25 << 16;                                            // 0x0011b95c: lui $a3, 0x25
    a0 = 0x25 << 16;                                            // 0x0011b960: lui $a0, 0x25
    g_0024fa40 = a1;  // Global at 0x0024fa40                   // 0x0011b964: sw $a1, -0x5c0($a3)
    s0 = 0x25 << 16;                                            // 0x0011b968: lui $s0, 0x25
    a0 = a0 + -0x640;                                           // 0x0011b96c: addiu $a0, $a0, -0x640
    a3 = a3 + -0x5c0;                                           // 0x0011b970: addiu $a3, $a3, -0x5c0
    local_0 = 0;                                                // 0x0011b974: sw $zero, 0($sp)
    a1 = 8;                                                     // 0x0011b978: addiu $a1, $zero, 8
    t0 = 4;                                                     // 0x0011b980: addiu $t0, $zero, 4
    t1 = s0 + -0x600;                                           // 0x0011b984: addiu $t1, $s0, -0x600
    t2 = 4;                                                     // 0x0011b988: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011b98c: jal 0x1176a8
    if (v0 >= 0) goto label_0x11b9a4;                           // 0x0011b994: bgezl $v0, 0x11b9a4
    v0 = g_0024fa00;  // Global at 0x0024fa00                   // 0x0011b998: lw $v0, -0x600($s0)
    v0 = 0xffff << 16;                                          // 0x0011b99c: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x0011b9a0: ori $v0, $v0, 0xffff
label_0x11b9a4:
    return;                                                     // 0x0011b9ac: jr $ra
    sp = sp + 0x30;                                             // 0x0011b9b0: addiu $sp, $sp, 0x30
}