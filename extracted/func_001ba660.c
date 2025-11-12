void func_001ba660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba660: addiu $sp, $sp, -0x10
    func_001a8aa0();  // 0x1a8a90                                // 0x001ba668: jal 0x1a8a90
    func_001b07e0();  // 0x1b07d0                                // 0x001ba670: jal 0x1b07d0
    *(uint16_t*)((gp) + -0x633c) = 0;                           // 0x001ba674: sh $zero, -0x633c($gp)
    func_001ae570();  // 0x1ae540                                // 0x001ba678: jal 0x1ae540
    /* nop */                                                   // 0x001ba67c: nop 
    func_001af190();  // 0x1af180                                // 0x001ba680: jal 0x1af180
    *(uint16_t*)((gp) + -0x634c) = 0;                           // 0x001ba684: sh $zero, -0x634c($gp)
    thunk_func_00198aa0();  // 0x1aefe0                          // 0x001ba688: jal 0x1aefe0
    a0 = 1;                                                     // 0x001ba68c: addiu $a0, $zero, 1
    func_001af0d0();  // 0x1af020                                // 0x001ba690: jal 0x1af020
    a0 = gp + -0x6380;                                          // 0x001ba694: addiu $a0, $gp, -0x6380
    func_001aefc0();  // 0x1aef60                                // 0x001ba698: jal 0x1aef60
    a0 = 0x5c << 16;                                            // 0x001ba69c: lui $a0, 0x5c
    at = 0x31 << 16;                                            // 0x001ba6a0: lui $at, 0x31
    g_00313800 = v0;  // Global at 0x00313800                   // 0x001ba6a8: sw $v0, 0x3800($at)
    at = 0x31 << 16;                                            // 0x001ba6ac: lui $at, 0x31
    a0 = g_00313800;  // Global at 0x00313800                   // 0x001ba6b0: lw $a0, 0x3800($at)
    func_00107d30();  // 0x107c70                                // 0x001ba6b4: jal 0x107c70
    a2 = 0x5c << 16;                                            // 0x001ba6b8: lui $a2, 0x5c
    at = 0x31 << 16;                                            // 0x001ba6bc: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001ba6c0: lui $a1, 0x24
    v0 = g_00313800;  // Global at 0x00313800                   // 0x001ba6c4: lw $v0, 0x3800($at)
    at = 0x31 << 16;                                            // 0x001ba6c8: lui $at, 0x31
    g_003137f8 = v0;  // Global at 0x003137f8                   // 0x001ba6cc: sw $v0, 0x37f8($at)
    v0 = v0 + a1;                                               // 0x001ba6d0: addu $v0, $v0, $a1
    at = 0x31 << 16;                                            // 0x001ba6d4: lui $at, 0x31
    g_003137fc = v0;  // Global at 0x003137fc                   // 0x001ba6d8: sw $v0, 0x37fc($at)
    at = 0x31 << 16;                                            // 0x001ba6dc: lui $at, 0x31
    func_001af1f0();  // 0x1af190                                // 0x001ba6e0: jal 0x1af190
    a0 = g_003137f8;  // Global at 0x003137f8                   // 0x001ba6e4: lw $a0, 0x37f8($at)
    v0 = 3 << 16;                                               // 0x001ba6e8: lui $v0, 3
    func_001af240();  // 0x1af1f0                                // 0x001ba6ec: jal 0x1af1f0
    a0 = v0 | 0xc000;                                           // 0x001ba6f0: ori $a0, $v0, 0xc000
    at = 0x31 << 16;                                            // 0x001ba6f4: lui $at, 0x31
    g_00313844 = v0;  // Global at 0x00313844                   // 0x001ba6f8: sw $v0, 0x3844($at)
    at = 0x31 << 16;                                            // 0x001ba6fc: lui $at, 0x31
    func_001a09a0();  // 0x1a0990                                // 0x001ba700: jal 0x1a0990
    a0 = g_00313844;  // Global at 0x00313844                   // 0x001ba704: lw $a0, 0x3844($at)
    func_001af240();  // 0x1af1f0                                // 0x001ba708: jal 0x1af1f0
    a0 = 0 | 0xc000;                                            // 0x001ba70c: ori $a0, $zero, 0xc000
    at = 0x31 << 16;                                            // 0x001ba710: lui $at, 0x31
    a0 = 0 | 0xc000;                                            // 0x001ba714: ori $a0, $zero, 0xc000
    func_001af240();  // 0x1af1f0                                // 0x001ba718: jal 0x1af1f0
    g_00313834 = v0;  // Global at 0x00313834                   // 0x001ba71c: sw $v0, 0x3834($at)
    at = 0x31 << 16;                                            // 0x001ba720: lui $at, 0x31
    g_00313838 = v0;  // Global at 0x00313838                   // 0x001ba724: sw $v0, 0x3838($at)
    v0 = 1 << 16;                                               // 0x001ba728: lui $v0, 1
    func_001af240();  // 0x1af1f0                                // 0x001ba72c: jal 0x1af1f0
    a0 = v0 | 0x8000;                                           // 0x001ba730: ori $a0, $v0, 0x8000
    at = 0x31 << 16;                                            // 0x001ba734: lui $at, 0x31
    a0 = 2 << 16;                                               // 0x001ba738: lui $a0, 2
    func_001af240();  // 0x1af1f0                                // 0x001ba73c: jal 0x1af1f0
    g_00313814 = v0;  // Global at 0x00313814                   // 0x001ba740: sw $v0, 0x3814($at)
    at = 0x31 << 16;                                            // 0x001ba744: lui $at, 0x31
    g_0031381c = v0;  // Global at 0x0031381c                   // 0x001ba748: sw $v0, 0x381c($at)
    v0 = 1 << 16;                                               // 0x001ba74c: lui $v0, 1
    func_001af240();  // 0x1af1f0                                // 0x001ba750: jal 0x1af1f0
    a0 = v0 | 0x8000;                                           // 0x001ba754: ori $a0, $v0, 0x8000
    at = 0x31 << 16;                                            // 0x001ba758: lui $at, 0x31
    a0 = 1 << 16;                                               // 0x001ba75c: lui $a0, 1
    func_001af240();  // 0x1af1f0                                // 0x001ba760: jal 0x1af1f0
    g_0031384c = v0;  // Global at 0x0031384c                   // 0x001ba764: sw $v0, 0x384c($at)
    at = 0x31 << 16;                                            // 0x001ba768: lui $at, 0x31
    a0 = 1 << 16;                                               // 0x001ba76c: lui $a0, 1
    func_001af240();  // 0x1af1f0                                // 0x001ba770: jal 0x1af1f0
    g_0031385c = v0;  // Global at 0x0031385c                   // 0x001ba774: sw $v0, 0x385c($at)
    at = 0x31 << 16;                                            // 0x001ba778: lui $at, 0x31
    a0 = 8 << 16;                                               // 0x001ba77c: lui $a0, 8
    func_001af240();  // 0x1af1f0                                // 0x001ba780: jal 0x1af1f0
    g_0031382c = v0;  // Global at 0x0031382c                   // 0x001ba784: sw $v0, 0x382c($at)
    at = 0x31 << 16;                                            // 0x001ba788: lui $at, 0x31
    a0 = 1 << 16;                                               // 0x001ba78c: lui $a0, 1
    func_001af240();  // 0x1af1f0                                // 0x001ba790: jal 0x1af1f0
    g_00313818 = v0;  // Global at 0x00313818                   // 0x001ba794: sw $v0, 0x3818($at)
    at = 0x31 << 16;                                            // 0x001ba798: lui $at, 0x31
    g_00313830 = v0;  // Global at 0x00313830                   // 0x001ba79c: sw $v0, 0x3830($at)
    v0 = 1 << 16;                                               // 0x001ba7a0: lui $v0, 1
    func_001af240();  // 0x1af1f0                                // 0x001ba7a4: jal 0x1af1f0
    a0 = v0 | 0x8000;                                           // 0x001ba7a8: ori $a0, $v0, 0x8000
    at = 0x31 << 16;                                            // 0x001ba7ac: lui $at, 0x31
    a0 = 9 << 16;                                               // 0x001ba7b0: lui $a0, 9
    func_001af240();  // 0x1af1f0                                // 0x001ba7b4: jal 0x1af1f0
    g_00313860 = v0;  // Global at 0x00313860                   // 0x001ba7b8: sw $v0, 0x3860($at)
    at = 0x31 << 16;                                            // 0x001ba7bc: lui $at, 0x31
    a0 = 0x4000;                                                // 0x001ba7c0: addiu $a0, $zero, 0x4000
    func_001af240();  // 0x1af1f0                                // 0x001ba7c4: jal 0x1af1f0
    g_00313828 = v0;  // Global at 0x00313828                   // 0x001ba7c8: sw $v0, 0x3828($at)
    at = 0x31 << 16;                                            // 0x001ba7cc: lui $at, 0x31
    a0 = 0 | 0xc000;                                            // 0x001ba7d0: ori $a0, $zero, 0xc000
    func_001af240();  // 0x1af1f0                                // 0x001ba7d4: jal 0x1af1f0
    g_00313848 = v0;  // Global at 0x00313848                   // 0x001ba7d8: sw $v0, 0x3848($at)
    at = 0x31 << 16;                                            // 0x001ba7dc: lui $at, 0x31
    a0 = 0x5400;                                                // 0x001ba7e0: addiu $a0, $zero, 0x5400
    func_001af240();  // 0x1af1f0                                // 0x001ba7e4: jal 0x1af1f0
    g_00313854 = v0;  // Global at 0x00313854                   // 0x001ba7e8: sw $v0, 0x3854($at)
    at = 0x31 << 16;                                            // 0x001ba7ec: lui $at, 0x31
    g_00313858 = v0;  // Global at 0x00313858                   // 0x001ba7f0: sw $v0, 0x3858($at)
    v0 = 2 << 16;                                               // 0x001ba7f4: lui $v0, 2
    at = 0x31 << 16;                                            // 0x001ba7f8: lui $at, 0x31
    g_00313840 = v0;  // Global at 0x00313840                   // 0x001ba7fc: sw $v0, 0x3840($at)
    at = 0x31 << 16;                                            // 0x001ba800: lui $at, 0x31
    func_001af240();  // 0x1af1f0                                // 0x001ba804: jal 0x1af1f0
    a0 = g_00313840;  // Global at 0x00313840                   // 0x001ba808: lw $a0, 0x3840($at)
    at = 0x31 << 16;                                            // 0x001ba80c: lui $at, 0x31
    v1 = 0x18 << 16;                                            // 0x001ba810: lui $v1, 0x18
    g_0031383c = v0;  // Global at 0x0031383c                   // 0x001ba814: sw $v0, 0x383c($at)
    at = 0x31 << 16;                                            // 0x001ba818: lui $at, 0x31
    v0 = 0x11 << 16;                                            // 0x001ba81c: lui $v0, 0x11
    a2 = g_0031383c;  // Global at 0x0031383c                   // 0x001ba820: lw $a2, 0x383c($at)
    a0 = v0 | 0x3f;                                             // 0x001ba824: ori $a0, $v0, 0x3f
    at = 0x31 << 16;                                            // 0x001ba828: lui $at, 0x31
    a1 = g_00313814;  // Global at 0x00313814                   // 0x001ba82c: lw $a1, 0x3814($at)
    at = 0x31 << 16;                                            // 0x001ba830: lui $at, 0x31
    a1 = a1 + 0x7fff;                                           // 0x001ba834: addiu $a1, $a1, 0x7fff
    v0 = g_003137fc;  // Global at 0x003137fc                   // 0x001ba838: lw $v0, 0x37fc($at)
    at = 0x31 << 16;                                            // 0x001ba83c: lui $at, 0x31
    g_0031388c = a2;  // Global at 0x0031388c                   // 0x001ba840: sw $a2, 0x388c($at)
    at = 0x31 << 16;                                            // 0x001ba844: lui $at, 0x31
    g_00313810 = v0;  // Global at 0x00313810                   // 0x001ba848: sw $v0, 0x3810($at)
    v0 = a1 + 1;                                                // 0x001ba84c: addiu $v0, $a1, 1
    at = 0x31 << 16;                                            // 0x001ba850: lui $at, 0x31
    g_00313824 = v0;  // Global at 0x00313824                   // 0x001ba854: sw $v0, 0x3824($at)
    at = 0x31 << 16;                                            // 0x001ba858: lui $at, 0x31
    v0 = g_00313810;  // Global at 0x00313810                   // 0x001ba85c: lw $v0, 0x3810($at)
    v0 = v0 + v1;                                               // 0x001ba860: addu $v0, $v0, $v1
    at = 0x31 << 16;                                            // 0x001ba864: lui $at, 0x31
    func_00106f40();  // 0x106ee8                                // 0x001ba868: jal 0x106ee8
    g_00313820 = v0;  // Global at 0x00313820                   // 0x001ba86c: sw $v0, 0x3820($at)
    v1 = v0 + 0x3f;                                             // 0x001ba870: addiu $v1, $v0, 0x3f
    at = 0x31 << 16;                                            // 0x001ba874: lui $at, 0x31
    v0 = -0x40;                                                 // 0x001ba878: addiu $v0, $zero, -0x40
    v0 = v1 & v0;                                               // 0x001ba87c: and $v0, $v1, $v0
    func_001ae8d0();  // 0x1ae830                                // 0x001ba880: jal 0x1ae830
    g_00313850 = v0;  // Global at 0x00313850                   // 0x001ba884: sw $v0, 0x3850($at)
    func_001babf0();  // 0x1baa30                                // 0x001ba888: jal 0x1baa30
    /* nop */                                                   // 0x001ba88c: nop 
    func_001dd810();  // 0x1dd790                                // 0x001ba890: jal 0x1dd790
    /* nop */                                                   // 0x001ba894: nop 
    func_001ac0e0();  // 0x1ac0c0                                // 0x001ba898: jal 0x1ac0c0
    /* nop */                                                   // 0x001ba89c: nop 
    return;                                                     // 0x001ba8a4: jr $ra
    sp = sp + 0x10;                                             // 0x001ba8a8: addiu $sp, $sp, 0x10
}