void func_001a17e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a17e0: addiu $sp, $sp, -0x10
    func_001a5be0();  // 0x1a5b10                                // 0x001a17e8: jal 0x1a5b10
    /* nop */                                                   // 0x001a17ec: nop 
    a0 = 0x2a << 16;                                            // 0x001a17f0: lui $a0, 0x2a
    *(uint8_t*)((gp) + -0x643c) = 0;                            // 0x001a17f4: sb $zero, -0x643c($gp)
    a0 = a0 + 0xf40;                                            // 0x001a17f8: addiu $a0, $a0, 0xf40
    v0 = *(int32_t*)((gp) + -0x6430);                           // 0x001a17fc: lw $v0, -0x6430($gp)
    v1 = g_002a0f40;  // Global at 0x002a0f40                   // 0x001a1800: lbu $v1, 0($a0)
    g_002a0f40 = v1;  // Global at 0x002a0f40                   // 0x001a1804: sb $v1, 0($v0)
    v1 = g_002a0f41;  // Global at 0x002a0f41                   // 0x001a1808: lbu $v1, 1($a0)
    v0 = *(int32_t*)((gp) + -0x6430);                           // 0x001a180c: lw $v0, -0x6430($gp)
    g_002a0f41 = v1;  // Global at 0x002a0f41                   // 0x001a1810: sb $v1, 1($v0)
    v1 = g_002a0f42;  // Global at 0x002a0f42                   // 0x001a1814: lhu $v1, 2($a0)
    v0 = *(int32_t*)((gp) + -0x6430);                           // 0x001a1818: lw $v0, -0x6430($gp)
    g_002a0f42 = v1;  // Global at 0x002a0f42                   // 0x001a181c: sh $v1, 2($v0)
    FPU_F0 = *(float*)((a0) + 4);  // Load float                // 0x001a1820: lwc1 $f0, 4($a0)
    v0 = *(int32_t*)((gp) + -0x6430);                           // 0x001a1824: lw $v0, -0x6430($gp)
    *(float*)((v0) + 4) = FPU_F0;  // Store float               // 0x001a1828: swc1 $f0, 4($v0)
    a0 = *(int32_t*)((gp) + -0x6430);                           // 0x001a182c: lw $a0, -0x6430($gp)
    v1 = g_002a0f42;  // Global at 0x002a0f42                   // 0x001a1830: lhu $v1, 2($a0)
    if (v1 == 0) goto label_0x1a1854;                           // 0x001a1834: beqz $v1, 0x1a1854
    /* nop */                                                   // 0x001a1838: nop 
    v0 = 0 | 0x8000;                                            // 0x001a183c: ori $v0, $zero, 0x8000
    if (v1 == v0) goto label_0x1a1854;                          // 0x001a1840: beq $v1, $v0, 0x1a1854
    /* nop */                                                   // 0x001a1844: nop 
    v0 = *(uint8_t*)((gp) + -0x643c);                           // 0x001a1848: lbu $v0, -0x643c($gp)
    v0 = v0 + 1;                                                // 0x001a184c: addiu $v0, $v0, 1
    *(uint8_t*)((gp) + -0x643c) = v0;                           // 0x001a1850: sb $v0, -0x643c($gp)
label_0x1a1854:
    v0 = 0x2a << 16;                                            // 0x001a1854: lui $v0, 0x2a
    v0 = v0 + 0xf40;                                            // 0x001a1858: addiu $v0, $v0, 0xf40
    FPU_F2 = *(float*)((v0) + 0xc);  // Load float              // 0x001a185c: lwc1 $f2, 0xc($v0)
    FPU_F1 = *(float*)((v0) + 0x10);  // Load float             // 0x001a1860: lwc1 $f1, 0x10($v0)
    FPU_F0 = *(float*)((v0) + 0x14);  // Load float             // 0x001a1864: lwc1 $f0, 0x14($v0)
    *(float*)((a0) + 0x1c) = FPU_F2;  // Store float            // 0x001a1868: swc1 $f2, 0x1c($a0)
    *(float*)((a0) + 0x20) = FPU_F1;  // Store float            // 0x001a186c: swc1 $f1, 0x20($a0)
    *(float*)((a0) + 0x24) = FPU_F0;  // Store float            // 0x001a1870: swc1 $f0, 0x24($a0)
    FPU_F2 = *(float*)((v0) + 0x18);  // Load float             // 0x001a1874: lwc1 $f2, 0x18($v0)
    FPU_F1 = *(float*)((v0) + 0x1c);  // Load float             // 0x001a1878: lwc1 $f1, 0x1c($v0)
    FPU_F0 = *(float*)((v0) + 0x20);  // Load float             // 0x001a187c: lwc1 $f0, 0x20($v0)
    *(float*)((a0) + 0x28) = FPU_F2;  // Store float            // 0x001a1880: swc1 $f2, 0x28($a0)
    *(float*)((a0) + 0x2c) = FPU_F1;  // Store float            // 0x001a1884: swc1 $f1, 0x2c($a0)
    *(float*)((a0) + 0x30) = FPU_F0;  // Store float            // 0x001a1888: swc1 $f0, 0x30($a0)
    func_001a1910();  // 0x1a18c0                                // 0x001a188c: jal 0x1a18c0
    a1 = g_002a0f48;  // Global at 0x002a0f48                   // 0x001a1890: lw $a1, 8($v0)
    func_001a1990();  // 0x1a1910                                // 0x001a1894: jal 0x1a1910
    a0 = *(int32_t*)((gp) + -0x6430);                           // 0x001a1898: lw $a0, -0x6430($gp)
    a0 = *(int32_t*)((gp) + -0x6430);                           // 0x001a189c: lw $a0, -0x6430($gp)
    v1 = g_002a0f50;  // Global at 0x002a0f50                   // 0x001a18a0: lw $v1, 0x10($a0)
    g_002a0f74 = v1;  // Global at 0x002a0f74                   // 0x001a18a4: sw $v1, 0x34($a0)
    return;                                                     // 0x001a18ac: jr $ra
    sp = sp + 0x10;                                             // 0x001a18b0: addiu $sp, $sp, 0x10
}