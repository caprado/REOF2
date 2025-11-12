void func_0012b030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_4, local_8, local_c;
    
    v0 = 0x20 << 16;                                            // 0x0012b030: lui $v0, 0x20
    sp = sp + -0x40;                                            // 0x0012b034: addiu $sp, $sp, -0x40
    a3 = g_001fe378;  // Global at 0x001fe378                   // 0x0012b038: lw $a3, -0x1c88($v0)
    v0 = 0x25 << 16;                                            // 0x0012b03c: lui $v0, 0x25
    a1 = 0x13 << 16;                                            // 0x0012b040: lui $a1, 0x13
    v1 = 0x20 << 16;                                            // 0x0012b044: lui $v1, 0x20
    s0 = 0x1f << 16;                                            // 0x0012b04c: lui $s0, 0x1f
    v1 = v1 + -0x6c90;                                          // 0x0012b050: addiu $v1, $v1, -0x6c90
    a2 = 0x1000;                                                // 0x0012b058: addiu $a2, $zero, 0x1000
    a1 = a1 + -0x55d0;                                          // 0x0012b05c: addiu $a1, $a1, -0x55d0
    v0 = v0 + 0x10f0;                                           // 0x0012b060: addiu $v0, $v0, 0x10f0
    local_4 = a1;                                               // 0x0012b068: sw $a1, 4($sp)
    s0 = s0 + 0x6ae4;                                           // 0x0012b06c: addiu $s0, $s0, 0x6ae4
    local_8 = v1;                                               // 0x0012b070: sw $v1, 8($sp)
    local_c = a2;                                               // 0x0012b074: sw $a2, 0xc($sp)
    local_14 = a3;                                              // 0x0012b078: sw $a3, 0x14($sp)
    DeleteThread();  // 0x1140e0                                // 0x0012b07c: jal 0x1140e0
    local_10 = v0;                                              // 0x0012b080: sw $v0, 0x10($sp)
    g_001f6ae4 = v0;  // Global at 0x001f6ae4                   // 0x0012b084: sw $v0, 0($s0)
    v0 = g_001f6ae4;  // Global at 0x001f6ae4                   // 0x0012b08c: lw $v0, 0($s0)
    ExitDeleteThread();  // 0x114100                            // 0x0012b090: jal 0x114100
    a0 = g_001f6ae4;  // Global at 0x001f6ae4                   // 0x0012b094: lw $a0, 0($s0)
    a0 = g_001f6ae4;  // Global at 0x001f6ae4                   // 0x0012b098: lw $a0, 0($s0)
    v0 = 0x1f << 16;                                            // 0x0012b09c: lui $v0, 0x1f
    iChangeThreadPriority();  // 0x114170                       // 0x0012b0a0: jal 0x114170
    a1 = g_001f6a70;  // Global at 0x001f6a70                   // 0x0012b0a4: lw $a1, 0x6a70($v0)
    return;                                                     // 0x0012b0b0: jr $ra
    sp = sp + 0x40;                                             // 0x0012b0b4: addiu $sp, $sp, 0x40
}