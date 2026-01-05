void func_0012be60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18;
    
    sp = sp + -0x10;                                            // 0x0012be60: addiu $sp, $sp, -0x10
    return func_001413a8();  // Tail call                        // 0x0012be6c: j 0x141390
    sp = sp + 0x10;                                             // 0x0012be70: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012be74: nop 
    sp = sp + -0x10;                                            // 0x0012be78: addiu $sp, $sp, -0x10
    return func_001413c0();  // Tail call                        // 0x0012be84: j 0x1413a8
    sp = sp + 0x10;                                             // 0x0012be88: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012be8c: nop 
    sp = sp + -0x50;                                            // 0x0012be90: addiu $sp, $sp, -0x50
    v0 = 0x1f << 16;                                            // 0x0012be94: lui $v0, 0x1f
    s2 = 0x1f << 16;                                            // 0x0012be9c: lui $s2, 0x1f
    v0 = v0 + 0x6a50;                                           // 0x0012beac: addiu $v0, $v0, 0x6a50
    v1 = g_001f6a54;  // Global at 0x001f6a54                   // 0x0012beb4: lw $v1, 0x6a54($s2)
    a1 = g_001f6a50;  // Global at 0x001f6a50                   // 0x0012beb8: lw $a1, 0($v0)
    /* bnezl $v1, 0x12c020 */                                   // 0x0012bebc: bnezl $v1, 0x12c020
    v1 = s2 + 0x6a54;                                           // 0x0012bec0: addiu $v1, $s2, 0x6a54
    func_00141db8();  // 141db8                                // 0x0012bec4: jal 0x141db8
    /* nop */                                                   // 0x0012bec8: nop 
    a0 = 0x13 << 16;                                            // 0x0012becc: lui $a0, 0x13
    func_00141ab0();  // 141ab0                                // 0x0012bed4: jal 0x141ab0
    a0 = a0 + -0x59d8;                                          // 0x0012bed8: addiu $a0, $a0, -0x59d8
    a0 = 0x13 << 16;                                            // 0x0012bedc: lui $a0, 0x13
    a0 = a0 + -0x5950;                                          // 0x0012bee0: addiu $a0, $a0, -0x5950
    func_00141ac8();  // 141ac8                                // 0x0012bee4: jal 0x141ac8
    /* bnezl $s0, 0x12bf40 */                                   // 0x0012beec: bnezl $s0, 0x12bf40
    v1 = g_001f6afc;  // Global at 0x001f6afc                   // 0x0012bef0: lw $v1, 0x14($s0)
    s1 = 0x1f << 16;                                            // 0x0012bef4: lui $s1, 0x1f
    v0 = 0x18;                                                  // 0x0012bef8: addiu $v0, $zero, 0x18
    a0 = s1 + 0x6a60;                                           // 0x0012befc: addiu $a0, $s1, 0x6a60
    v1 = 0x1a;                                                  // 0x0012bf00: addiu $v1, $zero, 0x1a
    g_001f6a74 = v0;  // Global at 0x001f6a74                   // 0x0012bf04: sw $v0, 0x14($a0)
    v0 = 1;                                                     // 0x0012bf08: addiu $v0, $zero, 1
    g_001f6a7c = v1;  // Global at 0x001f6a7c                   // 0x0012bf0c: sw $v1, 0x1c($a0)
    v1 = 8;                                                     // 0x0012bf10: addiu $v1, $zero, 8
    g_001f6a60 = v0;  // Global at 0x001f6a60                   // 0x0012bf14: sw $v0, 0($a0)
    v0 = 0xf;                                                   // 0x0012bf18: addiu $v0, $zero, 0xf
    g_001f6a64 = v1;  // Global at 0x001f6a64                   // 0x0012bf1c: sw $v1, 4($a0)
    v1 = 0x10;                                                  // 0x0012bf20: addiu $v1, $zero, 0x10
    g_001f6a68 = v0;  // Global at 0x001f6a68                   // 0x0012bf24: sw $v0, 8($a0)
    v0 = 0x12;                                                  // 0x0012bf28: addiu $v0, $zero, 0x12
    g_001f6a6c = v1;  // Global at 0x001f6a6c                   // 0x0012bf2c: sw $v1, 0xc($a0)
    v1 = 0x19;                                                  // 0x0012bf30: addiu $v1, $zero, 0x19
    g_001f6a70 = v0;  // Global at 0x001f6a70                   // 0x0012bf34: sw $v0, 0x10($a0)
    goto label_0x12bf84;                                        // 0x0012bf38: b 0x12bf84
    g_001f6a78 = v1;  // Global at 0x001f6a78                   // 0x0012bf3c: sw $v1, 0x18($a0)
    s1 = 0x1f << 16;                                            // 0x0012bf40: lui $s1, 0x1f
    a0 = s1 + 0x6a60;                                           // 0x0012bf44: addiu $a0, $s1, 0x6a60
    g_001f6a74 = v1;  // Global at 0x001f6a74                   // 0x0012bf48: sw $v1, 0x14($a0)
    v0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012bf4c: lw $v0, 0($s0)
    g_001f6a60 = v0;  // Global at 0x001f6a60                   // 0x0012bf50: sw $v0, 0($a0)
    v1 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012bf54: lw $v1, 4($s0)
    g_001f6a64 = v1;  // Global at 0x001f6a64                   // 0x0012bf58: sw $v1, 4($a0)
    v0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012bf5c: lw $v0, 8($s0)
    g_001f6a68 = v0;  // Global at 0x001f6a68                   // 0x0012bf60: sw $v0, 8($a0)
    v1 = g_001f6af4;  // Global at 0x001f6af4                   // 0x0012bf64: lw $v1, 0xc($s0)
    g_001f6a6c = v1;  // Global at 0x001f6a6c                   // 0x0012bf68: sw $v1, 0xc($a0)
    v0 = g_001f6af8;  // Global at 0x001f6af8                   // 0x0012bf6c: lw $v0, 0x10($s0)
    g_001f6a70 = v0;  // Global at 0x001f6a70                   // 0x0012bf70: sw $v0, 0x10($a0)
    v1 = g_001f6b00;  // Global at 0x001f6b00                   // 0x0012bf74: lw $v1, 0x18($s0)
    g_001f6a78 = v1;  // Global at 0x001f6a78                   // 0x0012bf78: sw $v1, 0x18($a0)
    v0 = g_001f6b04;  // Global at 0x001f6b04                   // 0x0012bf7c: lw $v0, 0x1c($s0)
    g_001f6a7c = v0;  // Global at 0x001f6a7c                   // 0x0012bf80: sw $v0, 0x1c($a0)
label_0x12bf84:
    ReferThreadStatus();  // 0x1141d0                           // 0x0012bf84: jal 0x1141d0
    s0 = 0x1f << 16;                                            // 0x0012bf88: lui $s0, 0x1f
    s0 = s0 + 0x6ae8;                                           // 0x0012bf8c: addiu $s0, $s0, 0x6ae8
    g_001f6ae8 = v0;  // Global at 0x001f6ae8                   // 0x0012bf94: sw $v0, 0($s0)
    iReferThreadStatus();  // 0x1141e0                          // 0x0012bf98: jal 0x1141e0
    a0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012bf9c: lw $a0, 0($s0)
    v1 = 0x20 << 16;                                            // 0x0012bfa0: lui $v1, 0x20
    v0 = local_18;                                              // 0x0012bfa4: lw $v0, 0x18($sp)
    func_0012ae78();  // 12ae78                                // 0x0012bfa8: jal 0x12ae78
    g_001fe378 = v0;  // Global at 0x001fe378                   // 0x0012bfac: sw $v0, -0x1c88($v1)
    func_0012af20();  // 12af20                                // 0x0012bfb0: jal 0x12af20
    /* nop */                                                   // 0x0012bfb4: nop 
    func_0012afa8();  // 12afa8                                // 0x0012bfb8: jal 0x12afa8
    /* nop */                                                   // 0x0012bfbc: nop 
    func_0012b030();  // 12b030                                // 0x0012bfc0: jal 0x12b030
    /* nop */                                                   // 0x0012bfc4: nop 
    func_0012b0b8();  // 12b0b8                                // 0x0012bfc8: jal 0x12b0b8
    /* nop */                                                   // 0x0012bfcc: nop 
    func_0012b150();  // 12b150                                // 0x0012bfd0: jal 0x12b150
    /* nop */                                                   // 0x0012bfd4: nop 
    a0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012bfd8: lw $a0, 0($s0)
    v0 = s1 + 0x6a60;                                           // 0x0012bfdc: addiu $v0, $s1, 0x6a60
    iChangeThreadPriority();  // 0x114170                       // 0x0012bfe0: jal 0x114170
    a1 = g_001f6a74;  // Global at 0x001f6a74                   // 0x0012bfe4: lw $a1, 0x14($v0)
    a1 = 0x13 << 16;                                            // 0x0012bfe8: lui $a1, 0x13
    a1 = a1 + -0x5808;                                          // 0x0012bfec: addiu $a1, $a1, -0x5808
    a0 = 6;                                                     // 0x0012bff0: addiu $a0, $zero, 6
    func_001419d8();  // 1419d8                                // 0x0012bff4: jal 0x1419d8
    a1 = 0x13 << 16;                                            // 0x0012bffc: lui $a1, 0x13
    a1 = a1 + -0x57e0;                                          // 0x0012c000: addiu $a1, $a1, -0x57e0
    a0 = 7;                                                     // 0x0012c004: addiu $a0, $zero, 7
    func_001419d8();  // 1419d8                                // 0x0012c008: jal 0x1419d8
    v1 = 0x1f << 16;                                            // 0x0012c010: lui $v1, 0x1f
    v0 = 1;                                                     // 0x0012c014: addiu $v0, $zero, 1
    g_001f6a58 = v0;  // Global at 0x001f6a58                   // 0x0012c018: sw $v0, 0x6a58($v1)
    v1 = s2 + 0x6a54;                                           // 0x0012c01c: addiu $v1, $s2, 0x6a54
    v0 = g_001f6a54;  // Global at 0x001f6a54                   // 0x0012c024: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0012c030: addiu $v0, $v0, 1
    g_001f6a54 = v0;  // Global at 0x001f6a54                   // 0x0012c038: sw $v0, 0($v1)
    return;                                                     // 0x0012c03c: jr $ra
    sp = sp + 0x50;                                             // 0x0012c040: addiu $sp, $sp, 0x50
}