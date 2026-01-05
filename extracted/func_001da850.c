void func_001da850() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x120;                                           // 0x001da850: addiu $sp, $sp, -0x120
    at = 0x31 << 16;                                            // 0x001da854: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001da860: lb $v0, 0x37b7($at)
    s0 = 0x31 << 16;                                            // 0x001da864: lui $s0, 0x31
    if (v0 != 0) goto label_0x1da8b0;                           // 0x001da868: bnez $v0, 0x1da8b0
    s0 = s0 + 0x37a0;                                           // 0x001da86c: addiu $s0, $s0, 0x37a0
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001da870: lhu $a3, 0x1a($s0)
    a1 = 0x24 << 16;                                            // 0x001da874: lui $a1, 0x24
    t0 = g_003137bc;  // Global at 0x003137bc                   // 0x001da878: lhu $t0, 0x1c($s0)
    a2 = 0x24 << 16;                                            // 0x001da87c: lui $a2, 0x24
    t1 = g_003137be;  // Global at 0x003137be                   // 0x001da880: lhu $t1, 0x1e($s0)
    a0 = sp + 0x20;                                             // 0x001da884: addiu $a0, $sp, 0x20
    a1 = &str_00247900;  // "data/rdt"                          // 0x001da888: addiu $a1, $a1, 0x7900
    func_0010a4d8();  // 10a4d8                                // 0x001da88c: jal 0x10a4d8
    a2 = &str_00247918;  // "r%03d%02d%02d.rdt"                 // 0x001da890: addiu $a2, $a2, 0x7918
    a1 = g_00313810;  // Global at 0x00313810                   // 0x001da894: lw $a1, 0x70($s0)
    a0 = sp + 0x20;                                             // 0x001da898: addiu $a0, $sp, 0x20
    a2 = 1;                                                     // 0x001da89c: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001da8a0: jal 0x1d3390
    goto label_0x1da8dc;                                        // 0x001da8a8: b 0x1da8dc
    g_0031380c = v0;  // Global at 0x0031380c                   // 0x001da8ac: sw $v0, 0x6c($s0)
label_0x1da8b0:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001da8b0: lhu $a2, 0x1a($s0)
    a1 = 0x24 << 16;                                            // 0x001da8b4: lui $a1, 0x24
    a3 = g_003137bc;  // Global at 0x003137bc                   // 0x001da8b8: lhu $a3, 0x1c($s0)
    a0 = sp + 0x20;                                             // 0x001da8bc: addiu $a0, $sp, 0x20
    t0 = g_003137be;  // Global at 0x003137be                   // 0x001da8c0: lhu $t0, 0x1e($s0)
    func_0010a4d8();  // 10a4d8                                // 0x001da8c4: jal 0x10a4d8
    a1 = &str_00247930;  // "weapon%02d"                        // 0x001da8c8: addiu $a1, $a1, 0x7930
    a1 = g_00313810;  // Global at 0x00313810                   // 0x001da8cc: lw $a1, 0x70($s0)
    func_001a9b30();  // 1a9b30                                // 0x001da8d0: jal 0x1a9b30
    a0 = sp + 0x20;                                             // 0x001da8d4: addiu $a0, $sp, 0x20
    g_0031380c = v0;  // Global at 0x0031380c                   // 0x001da8d8: sw $v0, 0x6c($s0)
label_0x1da8dc:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001da8e0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001da8e4: jr $ra
    sp = sp + 0x120;                                            // 0x001da8e8: addiu $sp, $sp, 0x120
}