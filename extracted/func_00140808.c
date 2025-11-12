void func_00140808() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00140808: addiu $sp, $sp, -0x10
    v0 = 0x25 << 16;                                            // 0x0014080c: lui $v0, 0x25
    s0 = 0x25 << 16;                                            // 0x00140814: lui $s0, 0x25
    v0 = v0 + 0x5d80;                                           // 0x00140818: addiu $v0, $v0, 0x5d80
    s0 = s0 + 0x5e80;                                           // 0x00140820: addiu $s0, $s0, 0x5e80
    g_00255d80 = a0;  // Global at 0x00255d80                   // 0x00140824: sw $a0, 0($v0)
    g_00255d84 = a1;  // Global at 0x00255d84                   // 0x00140828: sw $a1, 4($v0)
    a0 = 0x21;                                                  // 0x00140834: addiu $a0, $zero, 0x21
    a2 = 2;                                                     // 0x00140838: addiu $a2, $zero, 2
    func_00139228();  // 0x139120                                // 0x0014083c: jal 0x139120
    t0 = 1;                                                     // 0x00140840: addiu $t0, $zero, 1
    v0 = g_00255e80;  // Global at 0x00255e80                   // 0x00140844: lw $v0, 0($s0)
    return;                                                     // 0x00140850: jr $ra
    sp = sp + 0x10;                                             // 0x00140854: addiu $sp, $sp, 0x10
}