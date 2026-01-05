void func_00128720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00128720: addiu $sp, $sp, -0x10
    s0 = 0x1f << 16;                                            // 0x00128728: lui $s0, 0x1f
    s0 = s0 + 0x3830;                                           // 0x00128730: addiu $s0, $s0, 0x3830
    func_00129010();  // 129010                                // 0x00128734: jal 0x129010
    a0 = g_001f3830;  // Global at 0x001f3830                   // 0x00128738: lw $a0, 0($s0)
    g_001f3830 = 0;  // Global at 0x001f3830                    // 0x0012873c: sw $zero, 0($s0)
    a1 = 0x1f << 16;                                            // 0x00128744: lui $a1, 0x1f
    v0 = -1;                                                    // 0x0012874c: addiu $v0, $zero, -1
    v1 = 0x1f << 16;                                            // 0x00128750: lui $v1, 0x1f
    a0 = 0x1f << 16;                                            // 0x00128754: lui $a0, 0x1f
    g_001f3834 = v0;  // Global at 0x001f3834                   // 0x00128758: sw $v0, 0x3834($a1)
    g_001f382c = 0;  // Global at 0x001f382c                    // 0x0012875c: sw $zero, 0x382c($v1)
    g_001f383c = 0;  // Global at 0x001f383c                    // 0x00128760: sw $zero, 0x383c($a0)
    return;                                                     // 0x00128764: jr $ra
    sp = sp + 0x10;                                             // 0x00128768: addiu $sp, $sp, 0x10
}