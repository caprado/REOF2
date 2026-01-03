void func_00116508() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x00116508: addiu $sp, $sp, -0xb0
    v0 = 0x11 << 16;                                            // 0x0011650c: lui $v0, 0x11
    v0 = v0 + 0x5bf0;                                           // 0x00116514: addiu $v0, $v0, 0x5bf0
    s0 = 0x1f << 16;                                            // 0x00116518: lui $s0, 0x1f
    s1 = g_001f0344;  // Global at 0x001f0344                   // 0x00116520: lw $s1, 0x344($s0)
    g_001f0344 = v0;  // Global at 0x001f0344                   // 0x00116528: sw $v0, 0x344($s0)
    a1 = sp + 0x78;                                             // 0x0011652c: addiu $a1, $sp, 0x78
    func_00115ed8();  // 115ed8                                // 0x00116548: jal 0x115ed8
    g_001f0344 = s1;  // Global at 0x001f0344                   // 0x00116550: sw $s1, 0x344($s0)
    return;                                                     // 0x00116560: jr $ra
    sp = sp + 0xb0;                                             // 0x00116564: addiu $sp, $sp, 0xb0
}