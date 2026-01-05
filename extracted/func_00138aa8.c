void func_00138aa8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00138aa8: addiu $sp, $sp, -0x20
    v0 = 0x25 << 16;                                            // 0x00138aac: lui $v0, 0x25
    s0 = 0x25 << 16;                                            // 0x00138ab4: lui $s0, 0x25
    v0 = v0 + 0x3b40;                                           // 0x00138ab8: addiu $v0, $v0, 0x3b40
    s0 = s0 + 0x3c40;                                           // 0x00138ac0: addiu $s0, $s0, 0x3c40
    v1 = 0x20 << 16;                                            // 0x00138ac4: lui $v1, 0x20
    g_00253b40 = a0;  // Global at 0x00253b40                   // 0x00138ac8: sw $a0, 0($v0)
    a0 = v1 + 0x2e70;                                           // 0x00138acc: addiu $a0, $v1, 0x2e70
    g_00253b44 = a1;  // Global at 0x00253b44                   // 0x00138ad0: sw $a1, 4($v0)
    a1 = 2;                                                     // 0x00138ad4: addiu $a1, $zero, 2
    g_00253b48 = a2;  // Global at 0x00253b48                   // 0x00138ad8: sw $a2, 8($v0)
    g_00253b4c = a3;  // Global at 0x00253b4c                   // 0x00138ae0: sw $a3, 0xc($v0)
    t0 = 0x10;                                                  // 0x00138aec: addiu $t0, $zero, 0x10
    t2 = 4;                                                     // 0x00138af0: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x00138af8: jal 0x1176a8
    local_0 = 0;                                                // 0x00138afc: sw $zero, 0($sp)
    v0 = g_00253c40;  // Global at 0x00253c40                   // 0x00138b04: lw $v0, 0($s0)
    return;                                                     // 0x00138b0c: jr $ra
    sp = sp + 0x20;                                             // 0x00138b10: addiu $sp, $sp, 0x20
}