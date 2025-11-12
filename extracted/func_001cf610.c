void func_001cf610() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cf610: addiu $sp, $sp, -0x10
    func_001d07c0();  // 0x1d06b0                                // 0x001cf618: jal 0x1d06b0
    /* nop */                                                   // 0x001cf61c: nop 
    func_001cef30();  // 0x1ceef0                                // 0x001cf620: jal 0x1ceef0
    /* nop */                                                   // 0x001cf624: nop 
    a0 = *(int32_t*)((gp) + -0x6574);                           // 0x001cf628: lw $a0, -0x6574($gp)
    a2 = 0x24 << 16;                                            // 0x001cf62c: lui $a2, 0x24
    a1 = 1;                                                     // 0x001cf630: addiu $a1, $zero, 1
    a2 = a2 + 0x3aa8;                                           // 0x001cf634: addiu $a2, $a2, 0x3aa8
    *(uint32_t*)((gp) + -0x62cc) = 0;                           // 0x001cf640: sw $zero, -0x62cc($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf644: jal 0x1cebd0
    *(uint32_t*)((gp) + -0x62c8) = 0;                           // 0x001cf648: sw $zero, -0x62c8($gp)
    a0 = 0x24 << 16;                                            // 0x001cf64c: lui $a0, 0x24
    func_0011c140();  // 0x11c0a0                                // 0x001cf650: jal 0x11c0a0
    a0 = a0 + 0x3ab0;                                           // 0x001cf654: addiu $a0, $a0, 0x3ab0
    at = (v0 < 0) ? 1 : 0;                                      // 0x001cf658: slt $at, $v0, $zero
    if (at != 0) goto label_0x1cf6cc;                           // 0x001cf65c: bnez $at, 0x1cf6cc
    at = 0x22 << 16;                                            // 0x001cf660: lui $at, 0x22
    v0 = 0x21;                                                  // 0x001cf664: addiu $v0, $zero, 0x21
    a3 = g_0021f3d0;  // Global at 0x0021f3d0                   // 0x001cf668: lw $a3, -0xc30($at)
    at = 0x33 << 16;                                            // 0x001cf66c: lui $at, 0x33
    g_0032d878 = v0;  // Global at 0x0032d878                   // 0x001cf670: sw $v0, -0x2788($at)
    at = 0x22 << 16;                                            // 0x001cf674: lui $at, 0x22
    a2 = g_0021f3d4;  // Global at 0x0021f3d4                   // 0x001cf678: lw $a2, -0xc2c($at)
    at = 0x22 << 16;                                            // 0x001cf67c: lui $at, 0x22
    a1 = g_0021f3d8;  // Global at 0x0021f3d8                   // 0x001cf680: lw $a1, -0xc28($at)
    at = 0x22 << 16;                                            // 0x001cf684: lui $at, 0x22
    a0 = g_0021f3dc;  // Global at 0x0021f3dc                   // 0x001cf688: lw $a0, -0xc24($at)
    at = 0x22 << 16;                                            // 0x001cf68c: lui $at, 0x22
    v1 = g_0021f3e4;  // Global at 0x0021f3e4                   // 0x001cf690: lw $v1, -0xc1c($at)
    at = 0x33 << 16;                                            // 0x001cf694: lui $at, 0x33
    g_0032d868 = a3;  // Global at 0x0032d868                   // 0x001cf698: sw $a3, -0x2798($at)
    at = 0x22 << 16;                                            // 0x001cf69c: lui $at, 0x22
    v0 = g_0021f3e8;  // Global at 0x0021f3e8                   // 0x001cf6a0: lw $v0, -0xc18($at)
    at = 0x33 << 16;                                            // 0x001cf6a4: lui $at, 0x33
    g_0032d86c = a2;  // Global at 0x0032d86c                   // 0x001cf6a8: sw $a2, -0x2794($at)
    at = 0x33 << 16;                                            // 0x001cf6ac: lui $at, 0x33
    g_0032d870 = a1;  // Global at 0x0032d870                   // 0x001cf6b0: sw $a1, -0x2790($at)
    at = 0x33 << 16;                                            // 0x001cf6b4: lui $at, 0x33
    g_0032d874 = a0;  // Global at 0x0032d874                   // 0x001cf6b8: sw $a0, -0x278c($at)
    at = 0x33 << 16;                                            // 0x001cf6bc: lui $at, 0x33
    g_0032d87c = v1;  // Global at 0x0032d87c                   // 0x001cf6c0: sw $v1, -0x2784($at)
    at = 0x33 << 16;                                            // 0x001cf6c4: lui $at, 0x33
    g_0032d880 = v0;  // Global at 0x0032d880                   // 0x001cf6c8: sw $v0, -0x2780($at)
label_0x1cf6cc:
    a0 = *(int32_t*)((gp) + -0x6568);                           // 0x001cf6cc: lw $a0, -0x6568($gp)
    func_001cebd0();  // 0x1cea30                                // 0x001cf6dc: jal 0x1cea30
    a0 = 0x32 << 16;                                            // 0x001cf6e4: lui $a0, 0x32
    v0 = 0x127 << 16;                                           // 0x001cf6e8: lui $v0, 0x127
    a0 = a0 + 0x59c0;                                           // 0x001cf6ec: addiu $a0, $a0, 0x59c0
    func_001cf5f0();  // 0x1cf580                                // 0x001cf6f0: jal 0x1cf580
    a1 = v0 | 0x10;                                             // 0x001cf6f4: ori $a1, $v0, 0x10
    func_001cf580();  // 0x1cf420                                // 0x001cf6f8: jal 0x1cf420
    /* nop */                                                   // 0x001cf6fc: nop 
    return;                                                     // 0x001cf708: jr $ra
    sp = sp + 0x10;                                             // 0x001cf70c: addiu $sp, $sp, 0x10
}