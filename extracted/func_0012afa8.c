void func_0012afa8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_4, local_8, local_c;
    
    v0 = 0x20 << 16;                                            // 0x0012afa8: lui $v0, 0x20
    sp = sp + -0x40;                                            // 0x0012afac: addiu $sp, $sp, -0x40
    a3 = g_001fe378;  // Global at 0x001fe378                   // 0x0012afb0: lw $a3, -0x1c88($v0)
    v0 = 0x25 << 16;                                            // 0x0012afb4: lui $v0, 0x25
    a1 = 0x13 << 16;                                            // 0x0012afb8: lui $a1, 0x13
    v1 = 0x20 << 16;                                            // 0x0012afbc: lui $v1, 0x20
    s0 = 0x1f << 16;                                            // 0x0012afc4: lui $s0, 0x1f
    v1 = v1 + -0x7c90;                                          // 0x0012afc8: addiu $v1, $v1, -0x7c90
    a2 = 0x1000;                                                // 0x0012afd0: addiu $a2, $zero, 0x1000
    a1 = a1 + -0x56b0;                                          // 0x0012afd4: addiu $a1, $a1, -0x56b0
    v0 = v0 + 0x10f0;                                           // 0x0012afd8: addiu $v0, $v0, 0x10f0
    local_4 = a1;                                               // 0x0012afe0: sw $a1, 4($sp)
    s0 = s0 + 0x6ae0;                                           // 0x0012afe4: addiu $s0, $s0, 0x6ae0
    local_8 = v1;                                               // 0x0012afe8: sw $v1, 8($sp)
    local_c = a2;                                               // 0x0012afec: sw $a2, 0xc($sp)
    local_14 = a3;                                              // 0x0012aff0: sw $a3, 0x14($sp)
    DeleteThread();  // 0x1140e0                                // 0x0012aff4: jal 0x1140e0
    local_10 = v0;                                              // 0x0012aff8: sw $v0, 0x10($sp)
    g_001f6ae0 = v0;  // Global at 0x001f6ae0                   // 0x0012affc: sw $v0, 0($s0)
    v0 = g_001f6ae0;  // Global at 0x001f6ae0                   // 0x0012b004: lw $v0, 0($s0)
    ExitDeleteThread();  // 0x114100                            // 0x0012b008: jal 0x114100
    a0 = g_001f6ae0;  // Global at 0x001f6ae0                   // 0x0012b00c: lw $a0, 0($s0)
    a0 = g_001f6ae0;  // Global at 0x001f6ae0                   // 0x0012b010: lw $a0, 0($s0)
    v0 = 0x1f << 16;                                            // 0x0012b014: lui $v0, 0x1f
    iChangeThreadPriority();  // 0x114170                       // 0x0012b018: jal 0x114170
    a1 = g_001f6a6c;  // Global at 0x001f6a6c                   // 0x0012b01c: lw $a1, 0x6a6c($v0)
    return;                                                     // 0x0012b028: jr $ra
    sp = sp + 0x40;                                             // 0x0012b02c: addiu $sp, $sp, 0x40
}