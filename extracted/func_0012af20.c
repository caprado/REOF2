void func_0012af20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_4, local_8, local_c;
    
    v0 = 0x20 << 16;                                            // 0x0012af20: lui $v0, 0x20
    sp = sp + -0x40;                                            // 0x0012af24: addiu $sp, $sp, -0x40
    a3 = g_001fe378;  // Global at 0x001fe378                   // 0x0012af28: lw $a3, -0x1c88($v0)
    v0 = 0x25 << 16;                                            // 0x0012af2c: lui $v0, 0x25
    a1 = 0x13 << 16;                                            // 0x0012af30: lui $a1, 0x13
    v1 = 0x1f << 16;                                            // 0x0012af34: lui $v1, 0x1f
    s0 = 0x1f << 16;                                            // 0x0012af3c: lui $s0, 0x1f
    v1 = v1 + 0x7370;                                           // 0x0012af40: addiu $v1, $v1, 0x7370
    a2 = 0x1000;                                                // 0x0012af48: addiu $a2, $zero, 0x1000
    a1 = a1 + -0x5748;                                          // 0x0012af4c: addiu $a1, $a1, -0x5748
    v0 = v0 + 0x10f0;                                           // 0x0012af50: addiu $v0, $v0, 0x10f0
    local_4 = a1;                                               // 0x0012af58: sw $a1, 4($sp)
    s0 = s0 + 0x6adc;                                           // 0x0012af5c: addiu $s0, $s0, 0x6adc
    local_8 = v1;                                               // 0x0012af60: sw $v1, 8($sp)
    local_c = a2;                                               // 0x0012af64: sw $a2, 0xc($sp)
    local_14 = a3;                                              // 0x0012af68: sw $a3, 0x14($sp)
    DeleteThread();  // 0x1140e0                                // 0x0012af6c: jal 0x1140e0
    local_10 = v0;                                              // 0x0012af70: sw $v0, 0x10($sp)
    g_001f6adc = v0;  // Global at 0x001f6adc                   // 0x0012af74: sw $v0, 0($s0)
    v0 = g_001f6adc;  // Global at 0x001f6adc                   // 0x0012af7c: lw $v0, 0($s0)
    ExitDeleteThread();  // 0x114100                            // 0x0012af80: jal 0x114100
    a0 = g_001f6adc;  // Global at 0x001f6adc                   // 0x0012af84: lw $a0, 0($s0)
    a0 = g_001f6adc;  // Global at 0x001f6adc                   // 0x0012af88: lw $a0, 0($s0)
    v0 = 0x1f << 16;                                            // 0x0012af8c: lui $v0, 0x1f
    iChangeThreadPriority();  // 0x114170                       // 0x0012af90: jal 0x114170
    a1 = g_001f6a68;  // Global at 0x001f6a68                   // 0x0012af94: lw $a1, 0x6a68($v0)
    return;                                                     // 0x0012afa0: jr $ra
    sp = sp + 0x40;                                             // 0x0012afa4: addiu $sp, $sp, 0x40
}