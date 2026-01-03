void func_00117d90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_4, local_8;
    
    sp = sp + -0x20;                                            // 0x00117d90: addiu $sp, $sp, -0x20
    goto label_0x117db0;                                        // 0x00117d9c: b 0x117db0
    /* nop */                                                   // 0x00117da4: nop 
label_0x117da8:
    func_00117bc8();  // 117bc8                                // 0x00117da8: jal 0x117bc8
    /* nop */                                                   // 0x00117dac: nop 
label_0x117db0:
    func_00117b70();  // 117b70                                // 0x00117db0: jal 0x117b70
    if (v0 != 0) goto label_0x117da8;                           // 0x00117db8: bnez $v0, 0x117da8
    WakeupThread();  // 0x114200                                // 0x00117dc0: jal 0x114200
    /* nop */                                                   // 0x00117dc4: nop 
    goto label_0x117db0;                                        // 0x00117dc8: b 0x117db0
    /* nop */                                                   // 0x00117dcc: nop 
    sp = sp + -0x40;                                            // 0x00117dd0: addiu $sp, $sp, -0x40
    v1 = -1;                                                    // 0x00117dd4: addiu $v1, $zero, -1
    s0 = 0x1f << 16;                                            // 0x00117ddc: lui $s0, 0x1f
    v0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00117de4: lw $v0, 0x3e8($s0)
    if (v0 != v1) goto label_0x117e20;                          // 0x00117de8: bne $v0, $v1, 0x117e20
    v0 = 1;                                                     // 0x00117df0: addiu $v0, $zero, 1
    local_14 = 0;                                               // 0x00117df4: sw $zero, 0x14($sp)
    local_4 = v0;                                               // 0x00117df8: sw $v0, 4($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00117e00: jal 0x1142e0
    local_8 = v0;                                               // 0x00117e04: sw $v0, 8($sp)
    g_001f03e8 = v0;  // Global at 0x001f03e8                   // 0x00117e08: sw $v0, 0x3e8($s0)
    DeleteSema();  // 0x1142e0                                  // 0x00117e0c: jal 0x1142e0
    v1 = 0x1f << 16;                                            // 0x00117e14: lui $v1, 0x1f
    g_001f03ec = v0;  // Global at 0x001f03ec                   // 0x00117e18: sw $v0, 0x3ec($v1)
label_0x117e20:
    return;                                                     // 0x00117e24: jr $ra
    sp = sp + 0x40;                                             // 0x00117e28: addiu $sp, $sp, 0x40
}