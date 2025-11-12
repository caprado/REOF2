void func_0012b2e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18;
    
    sp = sp + -0x10;                                            // 0x0012b2e0: addiu $sp, $sp, -0x10
    return func_00141a70();  // Tail call                       // 0x0012b2ec: j 0x141a70
    sp = sp + 0x10;                                             // 0x0012b2f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012b2f4: nop 
    sp = sp + -0x50;                                            // 0x0012b2f8: addiu $sp, $sp, -0x50
    v0 = 0x1f << 16;                                            // 0x0012b2fc: lui $v0, 0x1f
    s2 = 0x1f << 16;                                            // 0x0012b304: lui $s2, 0x1f
    v1 = 0x1f << 16;                                            // 0x0012b314: lui $v1, 0x1f
    v0 = v0 + 0x6a50;                                           // 0x0012b31c: addiu $v0, $v0, 0x6a50
    a1 = g_001f6a54;  // Global at 0x001f6a54                   // 0x0012b320: lw $a1, 0x6a54($s2)
    v1 = v1 + 0x6a9c;                                           // 0x0012b324: addiu $v1, $v1, 0x6a9c
    a2 = g_001f6a50;  // Global at 0x001f6a50                   // 0x0012b328: lw $a2, 0($v0)
    g_001f6a9c = 0;  // Global at 0x001f6a9c                    // 0x0012b32c: sw $zero, 0($v1)
    /* bnezl $a1, 0x12b448 */                                   // 0x0012b330: bnezl $a1, 0x12b448
    v1 = s2 + 0x6a54;                                           // 0x0012b334: addiu $v1, $s2, 0x6a54
    func_00141df8();  // 0x141db8                                // 0x0012b338: jal 0x141db8
    /* nop */                                                   // 0x0012b33c: nop 
    a0 = 0x13 << 16;                                            // 0x0012b340: lui $a0, 0x13
    func_00141ac8();  // 0x141ab0                                // 0x0012b348: jal 0x141ab0
    a0 = a0 + -0x59d8;                                          // 0x0012b34c: addiu $a0, $a0, -0x59d8
    a0 = 0x13 << 16;                                            // 0x0012b350: lui $a0, 0x13
    a0 = a0 + -0x5950;                                          // 0x0012b354: addiu $a0, $a0, -0x5950
    func_00141ba8();  // 0x141ac8                                // 0x0012b358: jal 0x141ac8
    /* bnezl $s0, 0x12b3a8 */                                   // 0x0012b360: bnezl $s0, 0x12b3a8
    v1 = g_001f6af8;  // Global at 0x001f6af8                   // 0x0012b364: lw $v1, 0x10($s0)
    s1 = 0x1f << 16;                                            // 0x0012b368: lui $s1, 0x1f
    v0 = 0x18;                                                  // 0x0012b36c: addiu $v0, $zero, 0x18
    a0 = s1 + 0x6a60;                                           // 0x0012b370: addiu $a0, $s1, 0x6a60
    v1 = 0x19;                                                  // 0x0012b374: addiu $v1, $zero, 0x19
    g_001f6a74 = v0;  // Global at 0x001f6a74                   // 0x0012b378: sw $v0, 0x14($a0)
    v0 = 1;                                                     // 0x0012b37c: addiu $v0, $zero, 1
    g_001f6a78 = v1;  // Global at 0x001f6a78                   // 0x0012b380: sw $v1, 0x18($a0)
    v1 = 8;                                                     // 0x0012b384: addiu $v1, $zero, 8
    g_001f6a60 = v0;  // Global at 0x001f6a60                   // 0x0012b388: sw $v0, 0($a0)
    v0 = 0x10;                                                  // 0x0012b38c: addiu $v0, $zero, 0x10
    g_001f6a64 = v1;  // Global at 0x001f6a64                   // 0x0012b390: sw $v1, 4($a0)
    v1 = 0x12;                                                  // 0x0012b394: addiu $v1, $zero, 0x12
    g_001f6a6c = v0;  // Global at 0x001f6a6c                   // 0x0012b398: sw $v0, 0xc($a0)
    goto label_0x12b3dc;                                        // 0x0012b39c: b 0x12b3dc
    g_001f6a70 = v1;  // Global at 0x001f6a70                   // 0x0012b3a0: sw $v1, 0x10($a0)
    /* nop */                                                   // 0x0012b3a4: nop 
    s1 = 0x1f << 16;                                            // 0x0012b3a8: lui $s1, 0x1f
    a0 = s1 + 0x6a60;                                           // 0x0012b3ac: addiu $a0, $s1, 0x6a60
    g_001f6a74 = v1;  // Global at 0x001f6a74                   // 0x0012b3b0: sw $v1, 0x14($a0)
    v0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012b3b4: lw $v0, 0($s0)
    g_001f6a60 = v0;  // Global at 0x001f6a60                   // 0x0012b3b8: sw $v0, 0($a0)
    v1 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012b3bc: lw $v1, 4($s0)
    g_001f6a64 = v1;  // Global at 0x001f6a64                   // 0x0012b3c0: sw $v1, 4($a0)
    v0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012b3c4: lw $v0, 8($s0)
    g_001f6a6c = v0;  // Global at 0x001f6a6c                   // 0x0012b3c8: sw $v0, 0xc($a0)
    v1 = g_001f6af4;  // Global at 0x001f6af4                   // 0x0012b3cc: lw $v1, 0xc($s0)
    g_001f6a70 = v1;  // Global at 0x001f6a70                   // 0x0012b3d0: sw $v1, 0x10($a0)
    v0 = g_001f6afc;  // Global at 0x001f6afc                   // 0x0012b3d4: lw $v0, 0x14($s0)
    g_001f6a78 = v0;  // Global at 0x001f6a78                   // 0x0012b3d8: sw $v0, 0x18($a0)
label_0x12b3dc:
    ReferThreadStatus();  // 0x1141d0                           // 0x0012b3dc: jal 0x1141d0
    s0 = 0x1f << 16;                                            // 0x0012b3e0: lui $s0, 0x1f
    s0 = s0 + 0x6ae8;                                           // 0x0012b3e4: addiu $s0, $s0, 0x6ae8
    g_001f6ae8 = v0;  // Global at 0x001f6ae8                   // 0x0012b3ec: sw $v0, 0($s0)
    iReferThreadStatus();  // 0x1141e0                          // 0x0012b3f0: jal 0x1141e0
    a0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012b3f4: lw $a0, 0($s0)
    v1 = 0x20 << 16;                                            // 0x0012b3f8: lui $v1, 0x20
    v0 = local_18;                                              // 0x0012b3fc: lw $v0, 0x18($sp)
    func_0012af20();  // 0x12ae78                                // 0x0012b400: jal 0x12ae78
    g_001fe378 = v0;  // Global at 0x001fe378                   // 0x0012b404: sw $v0, -0x1c88($v1)
    func_0012b030();  // 0x12afa8                                // 0x0012b408: jal 0x12afa8
    /* nop */                                                   // 0x0012b40c: nop 
    func_0012b0b8();  // 0x12b030                                // 0x0012b410: jal 0x12b030
    /* nop */                                                   // 0x0012b414: nop 
    func_0012b150();  // 0x12b0b8                                // 0x0012b418: jal 0x12b0b8
    /* nop */                                                   // 0x0012b41c: nop 
    a0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012b420: lw $a0, 0($s0)
    v0 = s1 + 0x6a60;                                           // 0x0012b424: addiu $v0, $s1, 0x6a60
    iChangeThreadPriority();  // 0x114170                       // 0x0012b428: jal 0x114170
    a1 = g_001f6a74;  // Global at 0x001f6a74                   // 0x0012b42c: lw $a1, 0x14($v0)
    a1 = 0x13 << 16;                                            // 0x0012b430: lui $a1, 0x13
    a1 = a1 + -0x5808;                                          // 0x0012b434: addiu $a1, $a1, -0x5808
    a0 = 6;                                                     // 0x0012b438: addiu $a0, $zero, 6
    func_00141a30();  // 0x1419d8                                // 0x0012b43c: jal 0x1419d8
    v1 = s2 + 0x6a54;                                           // 0x0012b444: addiu $v1, $s2, 0x6a54
    v0 = g_001f6a54;  // Global at 0x001f6a54                   // 0x0012b44c: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0012b458: addiu $v0, $v0, 1
    g_001f6a54 = v0;  // Global at 0x001f6a54                   // 0x0012b460: sw $v0, 0($v1)
    return;                                                     // 0x0012b464: jr $ra
    sp = sp + 0x50;                                             // 0x0012b468: addiu $sp, $sp, 0x50
}