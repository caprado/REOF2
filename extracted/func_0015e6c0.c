void func_0015e6c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015e6c0: addiu $sp, $sp, -0x20
    func_0015e338();  // 15e338                                // 0x0015e6d4: jal 0x15e338
    /* nop */                                                   // 0x0015e6d8: nop 
    v1 = 0x21 << 16;                                            // 0x0015e6dc: lui $v1, 0x21
    v1 = v1 + 0x4450;                                           // 0x0015e6e4: addiu $v1, $v1, 0x4450
    v0 = g_00214450;  // Global at 0x00214450                   // 0x0015e6e8: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0015e6ec: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x15e798;                           // 0x0015e6f0: bnez $v0, 0x15e798
    g_00214450 = v0;  // Global at 0x00214450                   // 0x0015e6f4: sw $v0, 0($v1)
    s0 = a0 + 0x68;                                             // 0x0015e6f8: addiu $s0, $a0, 0x68
    s2 = 1;                                                     // 0x0015e6fc: addiu $s2, $zero, 1
    s1 = 7;                                                     // 0x0015e700: addiu $s1, $zero, 7
    /* nop */                                                   // 0x0015e704: nop 
label_0x15e708:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0015e708: lw $v0, 4($s0)
    if (v0 != s2) goto label_0x15e720;                          // 0x0015e70c: bnel $v0, $s2, 0x15e720
    s1 = s1 + -1;                                               // 0x0015e710: addiu $s1, $s1, -1
    func_0015ce90();  // 15ce90                                // 0x0015e714: jal 0x15ce90
    s1 = s1 + -1;                                               // 0x0015e71c: addiu $s1, $s1, -1
label_0x15e720:
    if (s1 >= 0) goto label_0x15e708;                           // 0x0015e720: bgez $s1, 0x15e708
    s0 = s0 + 0x210;                                            // 0x0015e724: addiu $s0, $s0, 0x210
    func_00163258();  // 163258                                // 0x0015e728: jal 0x163258
    /* nop */                                                   // 0x0015e72c: nop 
    func_001632f8();  // 1632f8                                // 0x0015e730: jal 0x1632f8
    /* nop */                                                   // 0x0015e734: nop 
    func_001632a8();  // 1632a8                                // 0x0015e738: jal 0x1632a8
    /* nop */                                                   // 0x0015e73c: nop 
    func_00160800();  // 160800                                // 0x0015e740: jal 0x160800
    /* nop */                                                   // 0x0015e744: nop 
    func_0013d2d8();  // 13d2d8                                // 0x0015e748: jal 0x13d2d8
    /* nop */                                                   // 0x0015e74c: nop 
    func_0015e8a8();  // 15e8a8                                // 0x0015e750: jal 0x15e8a8
    /* nop */                                                   // 0x0015e754: nop 
    func_0012a048();  // 12a048                                // 0x0015e758: jal 0x12a048
    /* nop */                                                   // 0x0015e75c: nop 
    func_001640d8();  // 1640d8                                // 0x0015e760: jal 0x1640d8
    /* nop */                                                   // 0x0015e764: nop 
    func_0013fd30();  // 13fd30                                // 0x0015e768: jal 0x13fd30
    /* nop */                                                   // 0x0015e76c: nop 
    func_0013efd0();  // 13efd0                                // 0x0015e770: jal 0x13efd0
    /* nop */                                                   // 0x0015e774: nop 
    func_0013f518();  // 13f518                                // 0x0015e778: jal 0x13f518
    /* nop */                                                   // 0x0015e77c: nop 
    return func_001631c8();  // Tail call                        // 0x0015e790: j 0x163180
    sp = sp + 0x20;                                             // 0x0015e794: addiu $sp, $sp, 0x20
label_0x15e798:
    return;                                                     // 0x0015e7a8: jr $ra
    sp = sp + 0x20;                                             // 0x0015e7ac: addiu $sp, $sp, 0x20
}