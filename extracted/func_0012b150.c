void func_0012b150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_4, local_8, local_c;
    
    v0 = 0x20 << 16;                                            // 0x0012b150: lui $v0, 0x20
    sp = sp + -0x40;                                            // 0x0012b154: addiu $sp, $sp, -0x40
    a3 = g_001fe378;  // Global at 0x001fe378                   // 0x0012b158: lw $a3, -0x1c88($v0)
    v0 = 0x25 << 16;                                            // 0x0012b15c: lui $v0, 0x25
    a1 = 0x13 << 16;                                            // 0x0012b160: lui $a1, 0x13
    v1 = 0x20 << 16;                                            // 0x0012b164: lui $v1, 0x20
    s0 = 0x1f << 16;                                            // 0x0012b16c: lui $s0, 0x1f
    v1 = v1 + -0x3c90;                                          // 0x0012b170: addiu $v1, $v1, -0x3c90
    a2 = 0x2000;                                                // 0x0012b178: addiu $a2, $zero, 0x2000
    a1 = a1 + -0x53e0;                                          // 0x0012b17c: addiu $a1, $a1, -0x53e0
    v0 = v0 + 0x10f0;                                           // 0x0012b180: addiu $v0, $v0, 0x10f0
    local_4 = a1;                                               // 0x0012b188: sw $a1, 4($sp)
    s0 = s0 + 0x6af0;                                           // 0x0012b18c: addiu $s0, $s0, 0x6af0
    local_8 = v1;                                               // 0x0012b190: sw $v1, 8($sp)
    local_c = a2;                                               // 0x0012b194: sw $a2, 0xc($sp)
    local_14 = a3;                                              // 0x0012b198: sw $a3, 0x14($sp)
    DeleteThread();  // 0x1140e0                                // 0x0012b19c: jal 0x1140e0
    local_10 = v0;                                              // 0x0012b1a0: sw $v0, 0x10($sp)
    g_001f6af0 = v0;  // Global at 0x001f6af0                   // 0x0012b1a4: sw $v0, 0($s0)
    v0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012b1ac: lw $v0, 0($s0)
    ExitDeleteThread();  // 0x114100                            // 0x0012b1b0: jal 0x114100
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012b1b4: lw $a0, 0($s0)
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012b1b8: lw $a0, 0($s0)
    v0 = 0x1f << 16;                                            // 0x0012b1bc: lui $v0, 0x1f
    iChangeThreadPriority();  // 0x114170                       // 0x0012b1c0: jal 0x114170
    a1 = g_001f6a7c;  // Global at 0x001f6a7c                   // 0x0012b1c4: lw $a1, 0x6a7c($v0)
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012b1c8: lw $a0, 0($s0)
    func_0012ae78();  // 0x12ae18                                // 0x0012b1cc: jal 0x12ae18
    /* nop */                                                   // 0x0012b1d0: nop 
    v1 = 0x1f << 16;                                            // 0x0012b1d4: lui $v1, 0x1f
    v1 = v1 + 0x6aec;                                           // 0x0012b1d8: addiu $v1, $v1, 0x6aec
    v0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b1e0: lw $v0, 0($v1)
    return;                                                     // 0x0012b1e8: jr $ra
    sp = sp + 0x40;                                             // 0x0012b1ec: addiu $sp, $sp, 0x40
}