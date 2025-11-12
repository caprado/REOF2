void func_001554c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001554c0: addiu $sp, $sp, -0x50
    v0 = 0x15 << 16;                                            // 0x001554c4: lui $v0, 0x15
    s6 = 0x21 << 16;                                            // 0x001554cc: lui $s6, 0x21
    v0 = v0 + 0x5660;                                           // 0x001554d0: addiu $v0, $v0, 0x5660
    g_00213e0c = v0;  // Global at 0x00213e0c                   // 0x001554d8: sw $v0, 0x3e0c($s6)
    v0 = 0x15 << 16;                                            // 0x001554dc: lui $v0, 0x15
    s7 = 0x21 << 16;                                            // 0x001554e0: lui $s7, 0x21
    v0 = v0 + 0x5670;                                           // 0x001554e4: addiu $v0, $v0, 0x5670
    g_00213e10 = v0;  // Global at 0x00213e10                   // 0x001554e8: sw $v0, 0x3e10($s7)
    v0 = 0x15 << 16;                                            // 0x001554ec: lui $v0, 0x15
    t8 = 0x21 << 16;                                            // 0x001554f0: lui $t8, 0x21
    v0 = v0 + 0x5848;                                           // 0x001554f4: addiu $v0, $v0, 0x5848
    g_00213e14 = v0;  // Global at 0x00213e14                   // 0x001554f8: sw $v0, 0x3e14($t8)
    v0 = 0x15 << 16;                                            // 0x001554fc: lui $v0, 0x15
    t9 = 0x21 << 16;                                            // 0x00155500: lui $t9, 0x21
    v0 = v0 + 0x5850;                                           // 0x00155504: addiu $v0, $v0, 0x5850
    g_00213e18 = v0;  // Global at 0x00213e18                   // 0x00155508: sw $v0, 0x3e18($t9)
    v0 = 0x15 << 16;                                            // 0x0015550c: lui $v0, 0x15
    fp = 0x21 << 16;                                            // 0x00155514: lui $fp, 0x21
    v0 = v0 + 0x5998;                                           // 0x00155518: addiu $v0, $v0, 0x5998
    s1 = 0x21 << 16;                                            // 0x00155524: lui $s1, 0x21
    s2 = 0x21 << 16;                                            // 0x0015552c: lui $s2, 0x21
    s3 = 0x21 << 16;                                            // 0x00155534: lui $s3, 0x21
    s4 = 0x21 << 16;                                            // 0x0015553c: lui $s4, 0x21
    s5 = 1;                                                     // 0x00155544: addiu $s5, $zero, 1
    g_00213e1c = v0;  // Global at 0x00213e1c                   // 0x00155548: sw $v0, 0x3e1c($fp)
    v0 = 0x15 << 16;                                            // 0x0015554c: lui $v0, 0x15
    v0 = v0 + 0x59f0;                                           // 0x00155550: addiu $v0, $v0, 0x59f0
    a1 = 0x15 << 16;                                            // 0x00155554: lui $a1, 0x15
    g_00213e20 = v0;  // Global at 0x00213e20                   // 0x00155558: sw $v0, 0x3e20($s4)
    v0 = 0x15 << 16;                                            // 0x0015555c: lui $v0, 0x15
    v0 = v0 + 0x59e8;                                           // 0x00155560: addiu $v0, $v0, 0x59e8
    s0 = 0x21 << 16;                                            // 0x00155564: lui $s0, 0x21
    g_00213e24 = v0;  // Global at 0x00213e24                   // 0x00155568: sw $v0, 0x3e24($s3)
    v0 = 0x15 << 16;                                            // 0x0015556c: lui $v0, 0x15
    v0 = v0 + 0x240;                                            // 0x00155570: addiu $v0, $v0, 0x240
    a0 = 0x15 << 16;                                            // 0x00155574: lui $a0, 0x15
    g_00213e28 = v0;  // Global at 0x00213e28                   // 0x00155578: sw $v0, 0x3e28($s2)
    v0 = 0x15 << 16;                                            // 0x0015557c: lui $v0, 0x15
    v0 = v0 + 0x2b0;                                            // 0x00155580: addiu $v0, $v0, 0x2b0
    t7 = 0x21 << 16;                                            // 0x00155584: lui $t7, 0x21
    g_00213e2c = v0;  // Global at 0x00213e2c                   // 0x00155588: sw $v0, 0x3e2c($s1)
    v0 = 0x15 << 16;                                            // 0x0015558c: lui $v0, 0x15
    v0 = v0 + 0x470;                                            // 0x00155590: addiu $v0, $v0, 0x470
    v1 = 0x15 << 16;                                            // 0x00155594: lui $v1, 0x15
    g_00213e30 = v0;  // Global at 0x00213e30                   // 0x00155598: sw $v0, 0x3e30($s0)
    v0 = v0 + 0x3b8;                                            // 0x001555a0: addiu $v0, $v0, 0x3b8
    t6 = 0x21 << 16;                                            // 0x001555a4: lui $t6, 0x21
    g_00213e34 = v0;  // Global at 0x00213e34                   // 0x001555a8: sw $v0, 0x3e34($t7)
    v0 = v0 + 0x788;                                            // 0x001555b0: addiu $v0, $v0, 0x788
    t5 = 0x21 << 16;                                            // 0x001555b4: lui $t5, 0x21
    g_00213e38 = v0;  // Global at 0x00213e38                   // 0x001555b8: sw $v0, 0x3e38($t6)
    v0 = v0 + 0x7b0;                                            // 0x001555c0: addiu $v0, $v0, 0x7b0
    t4 = 0x21 << 16;                                            // 0x001555c4: lui $t4, 0x21
    g_00213e3c = v0;  // Global at 0x00213e3c                   // 0x001555c8: sw $v0, 0x3e3c($t5)
    v0 = 0x15 << 16;                                            // 0x001555cc: lui $v0, 0x15
    v0 = v0 + 0x7c8;                                            // 0x001555d0: addiu $v0, $v0, 0x7c8
    t3 = 0x21 << 16;                                            // 0x001555d4: lui $t3, 0x21
    g_00213e40 = v0;  // Global at 0x00213e40                   // 0x001555d8: sw $v0, 0x3e40($t4)
    v0 = 0x15 << 16;                                            // 0x001555dc: lui $v0, 0x15
    v0 = v0 + 0x7f0;                                            // 0x001555e0: addiu $v0, $v0, 0x7f0
    t2 = 0x21 << 16;                                            // 0x001555e4: lui $t2, 0x21
    g_00213e44 = v0;  // Global at 0x00213e44                   // 0x001555e8: sw $v0, 0x3e44($t3)
    v0 = 0x15 << 16;                                            // 0x001555ec: lui $v0, 0x15
    v0 = v0 + 0x478;                                            // 0x001555f0: addiu $v0, $v0, 0x478
    t1 = 0x21 << 16;                                            // 0x001555f4: lui $t1, 0x21
    g_00213e48 = v0;  // Global at 0x00213e48                   // 0x001555f8: sw $v0, 0x3e48($t2)
    v0 = 0x15 << 16;                                            // 0x001555fc: lui $v0, 0x15
    v0 = v0 + 0x5a0;                                            // 0x00155600: addiu $v0, $v0, 0x5a0
    t0 = 0x21 << 16;                                            // 0x00155604: lui $t0, 0x21
    g_00213e4c = v0;  // Global at 0x00213e4c                   // 0x00155608: sw $v0, 0x3e4c($t1)
    v0 = 0x15 << 16;                                            // 0x0015560c: lui $v0, 0x15
    a2 = 0x21 << 16;                                            // 0x00155610: lui $a2, 0x21
    v0 = v0 + 0x600;                                            // 0x00155614: addiu $v0, $v0, 0x600
    g_00213e50 = v0;  // Global at 0x00213e50                   // 0x00155618: sw $v0, 0x3e50($t0)
    v0 = 0x15 << 16;                                            // 0x0015561c: lui $v0, 0x15
    g_00213e08 = s5;  // Global at 0x00213e08                   // 0x00155620: sw $s5, 0x3e08($a2)
    a3 = 0x21 << 16;                                            // 0x00155624: lui $a3, 0x21
    v0 = v0 + 0x690;                                            // 0x0015562c: addiu $v0, $v0, 0x690
    g_00213e54 = v0;  // Global at 0x00213e54                   // 0x00155650: sw $v0, 0x3e54($a3)
    return;                                                     // 0x00155654: jr $ra
    sp = sp + 0x50;                                             // 0x00155658: addiu $sp, $sp, 0x50
}