void func_0013e300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013e300: addiu $sp, $sp, -0x10
    v0 = 0x20 << 16;                                            // 0x0013e304: lui $v0, 0x20
    s0 = v0 + 0x7a68;                                           // 0x0013e30c: addiu $s0, $v0, 0x7a68
    v1 = g_00207a68;  // Global at 0x00207a68                   // 0x0013e310: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x13e338;                           // 0x0013e314: beqz $v1, 0x13e338
    a0 = 0xf;                                                   // 0x0013e31c: addiu $a0, $zero, 0xf
    func_00139120();  // 139120                                // 0x0013e32c: jal 0x139120
    g_00207a68 = 0;  // Global at 0x00207a68                    // 0x0013e334: sw $zero, 0($s0)
label_0x13e338:
    return;                                                     // 0x0013e340: jr $ra
    sp = sp + 0x10;                                             // 0x0013e344: addiu $sp, $sp, 0x10
}