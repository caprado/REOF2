void func_0012b0b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_4, local_8, local_c;
    
    v0 = 0x20 << 16;                                            // 0x0012b0b8: lui $v0, 0x20
    sp = sp + -0x40;                                            // 0x0012b0bc: addiu $sp, $sp, -0x40
    a3 = g_001fe378;  // Global at 0x001fe378                   // 0x0012b0c0: lw $a3, -0x1c88($v0)
    v0 = 0x25 << 16;                                            // 0x0012b0c4: lui $v0, 0x25
    a1 = 0x13 << 16;                                            // 0x0012b0c8: lui $a1, 0x13
    v1 = 0x20 << 16;                                            // 0x0012b0cc: lui $v1, 0x20
    s0 = 0x1f << 16;                                            // 0x0012b0d4: lui $s0, 0x1f
    v1 = v1 + -0x5c90;                                          // 0x0012b0d8: addiu $v1, $v1, -0x5c90
    a2 = 0x2000;                                                // 0x0012b0e0: addiu $a2, $zero, 0x2000
    a1 = a1 + -0x54f0;                                          // 0x0012b0e4: addiu $a1, $a1, -0x54f0
    v0 = v0 + 0x10f0;                                           // 0x0012b0e8: addiu $v0, $v0, 0x10f0
    s0 = s0 + 0x6aec;                                           // 0x0012b0ec: addiu $s0, $s0, 0x6aec
    local_4 = a1;                                               // 0x0012b0f4: sw $a1, 4($sp)
    local_8 = v1;                                               // 0x0012b0f8: sw $v1, 8($sp)
    local_c = a2;                                               // 0x0012b0fc: sw $a2, 0xc($sp)
    local_14 = a3;                                              // 0x0012b100: sw $a3, 0x14($sp)
    DeleteThread();  // 0x1140e0                                // 0x0012b104: jal 0x1140e0
    local_10 = v0;                                              // 0x0012b108: sw $v0, 0x10($sp)
    g_001f6aec = v0;  // Global at 0x001f6aec                   // 0x0012b10c: sw $v0, 0($s0)
    v0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b114: lw $v0, 0($s0)
    ExitDeleteThread();  // 0x114100                            // 0x0012b118: jal 0x114100
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b11c: lw $a0, 0($s0)
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b120: lw $a0, 0($s0)
    v0 = 0x1f << 16;                                            // 0x0012b124: lui $v0, 0x1f
    iChangeThreadPriority();  // 0x114170                       // 0x0012b128: jal 0x114170
    a1 = g_001f6a78;  // Global at 0x001f6a78                   // 0x0012b12c: lw $a1, 0x6a78($v0)
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b130: lw $a0, 0($s0)
    func_0012ae18();  // 12ae18                                // 0x0012b134: jal 0x12ae18
    /* nop */                                                   // 0x0012b138: nop 
    v1 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b13c: lw $v1, 0($s0)
    return;                                                     // 0x0012b148: jr $ra
    sp = sp + 0x40;                                             // 0x0012b14c: addiu $sp, $sp, 0x40
}