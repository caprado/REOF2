void func_0012ae78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_4, local_8, local_c;
    
    v0 = 0x20 << 16;                                            // 0x0012ae78: lui $v0, 0x20
    sp = sp + -0x40;                                            // 0x0012ae7c: addiu $sp, $sp, -0x40
    a3 = g_001fe378;  // Global at 0x001fe378                   // 0x0012ae80: lw $a3, -0x1c88($v0)
    v0 = 0x25 << 16;                                            // 0x0012ae84: lui $v0, 0x25
    a1 = 0x13 << 16;                                            // 0x0012ae88: lui $a1, 0x13
    v1 = 0x1f << 16;                                            // 0x0012ae8c: lui $v1, 0x1f
    a1 = a1 + -0x57a0;                                          // 0x0012ae90: addiu $a1, $a1, -0x57a0
    v1 = v1 + 0x6b70;                                           // 0x0012ae94: addiu $v1, $v1, 0x6b70
    a2 = 0x800;                                                 // 0x0012ae9c: addiu $a2, $zero, 0x800
    v0 = v0 + 0x10f0;                                           // 0x0012aea0: addiu $v0, $v0, 0x10f0
    local_4 = a1;                                               // 0x0012aea8: sw $a1, 4($sp)
    local_8 = v1;                                               // 0x0012aeac: sw $v1, 8($sp)
    local_c = a2;                                               // 0x0012aeb4: sw $a2, 0xc($sp)
    local_14 = a3;                                              // 0x0012aeb8: sw $a3, 0x14($sp)
    DeleteThread();  // 0x1140e0                                // 0x0012aebc: jal 0x1140e0
    local_10 = v0;                                              // 0x0012aec0: sw $v0, 0x10($sp)
    v1 = 0x1f << 16;                                            // 0x0012aec4: lui $v1, 0x1f
    s0 = v1 + 0x6ad8;                                           // 0x0012aecc: addiu $s0, $v1, 0x6ad8
    g_001f6ad8 = v0;  // Global at 0x001f6ad8                   // 0x0012aed0: sw $v0, 0($s0)
    v0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012aed4: lw $v0, 0($s0)
    ExitDeleteThread();  // 0x114100                            // 0x0012aed8: jal 0x114100
    a0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012aedc: lw $a0, 0($s0)
    v1 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012aee0: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x12af00;                           // 0x0012aee4: beqz $v1, 0x12af00
    v0 = 0x1f << 16;                                            // 0x0012aee8: lui $v0, 0x1f
    a0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012aeec: lw $a0, 0($s0)
    func_0012ae78();  // 0x12ae18                                // 0x0012aef0: jal 0x12ae18
    /* nop */                                                   // 0x0012aef4: nop 
    v1 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012aef8: lw $v1, 0($s0)
    v0 = 0x1f << 16;                                            // 0x0012aefc: lui $v0, 0x1f
label_0x12af00:
    a0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012af00: lw $a0, 0($s0)
    iChangeThreadPriority();  // 0x114170                       // 0x0012af04: jal 0x114170
    a1 = g_001f6a64;  // Global at 0x001f6a64                   // 0x0012af08: lw $a1, 0x6a64($v0)
    return;                                                     // 0x0012af14: jr $ra
    sp = sp + 0x40;                                             // 0x0012af18: addiu $sp, $sp, 0x40
}