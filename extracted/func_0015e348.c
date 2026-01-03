void func_0015e348() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015e348: addiu $sp, $sp, -0x10
    return func_001634a8();  // Tail call                        // 0x0015e358: j 0x163410
    sp = sp + 0x10;                                             // 0x0015e35c: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0015e360: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x15e398;                           // 0x0015e370: bnez $s0, 0x15e398
    a0 = 0x22 << 16;                                            // 0x0015e378: lui $a0, 0x22
    a0 = &str_002276e8;  // "E2005 mwPlyInitSfdFx: can't init GSC" // 0x0015e384: addiu $a0, $a0, 0x76e8
    return func_001634a8();  // Tail call                        // 0x0015e38c: j 0x163410
    sp = sp + 0x20;                                             // 0x0015e390: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015e394: nop 
label_0x15e398:
    v1 = 0x26 << 16;                                            // 0x0015e398: lui $v1, 0x26
    v0 = 0x22 << 16;                                            // 0x0015e39c: lui $v0, 0x22
    v1 = v1 + -0x6348;                                          // 0x0015e3a0: addiu $v1, $v1, -0x6348
    v0 = &str_00227648;  // "Append: GCC2096 SCE2800\n"         // 0x0015e3a4: addiu $v0, $v0, 0x7648
    g_00259cb8 = v0;  // Global at 0x00259cb8                   // 0x0015e3a8: sw $v0, 0($v1)
    func_00163140();  // 163140                                // 0x0015e3ac: jal 0x163140
    s1 = 0x21 << 16;                                            // 0x0015e3b0: lui $s1, 0x21
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0015e3b4: lw $v0, 8($s0)
    v0 = v0 + -2;                                               // 0x0015e3b8: addiu $v0, $v0, -2
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x0015e3bc: slti $v1, $v0, 0
    if (v1 != 0) v0 = 0;                                        // 0x0015e3c0: movn $v0, $zero, $v1
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0015e3c4: sw $v0, 8($s0)
    v1 = g_00214450;  // Global at 0x00214450                   // 0x0015e3c8: lw $v1, 0x4450($s1)
    /* bnezl $v1, 0x15e4b4 */                                   // 0x0015e3cc: bnezl $v1, 0x15e4b4
    v1 = s1 + 0x4450;                                           // 0x0015e3d0: addiu $v1, $s1, 0x4450
    func_00129ea8();  // 129ea8                                // 0x0015e3d4: jal 0x129ea8
    /* nop */                                                   // 0x0015e3d8: nop 
    func_0013f4b8();  // 13f4b8                                // 0x0015e3dc: jal 0x13f4b8
    /* nop */                                                   // 0x0015e3e0: nop 
    func_0013ef80();  // 13ef80                                // 0x0015e3e4: jal 0x13ef80
    /* nop */                                                   // 0x0015e3e8: nop 
    func_0013fce0();  // 13fce0                                // 0x0015e3ec: jal 0x13fce0
    /* nop */                                                   // 0x0015e3f0: nop 
    func_001640c8();  // 1640c8                                // 0x0015e3f4: jal 0x1640c8
    /* nop */                                                   // 0x0015e3f8: nop 
    if (v0 == 0) goto label_0x15e418;                           // 0x0015e3fc: beqz $v0, 0x15e418
    a0 = -0x65;                                                 // 0x0015e400: addiu $a0, $zero, -0x65
    func_0015e7b0();  // 15e7b0                                // 0x0015e404: jal 0x15e7b0
    /* nop */                                                   // 0x0015e408: nop 
    a0 = 0x22 << 16;                                            // 0x0015e40c: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015e410: jal 0x163410
    a0 = &str_00227710;  // "ERR20010421A : mwPlyInitSfdFx"     // 0x0015e414: addiu $a0, $a0, 0x7710
label_0x15e418:
    func_0015e520();  // 15e520                                // 0x0015e418: jal 0x15e520
    v0 = 0x21 << 16;                                            // 0x0015e420: lui $v0, 0x21
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x0015e424: lwc1 $f0, 0($s0)
    v0 = v0 + 0x555c;                                           // 0x0015e428: addiu $v0, $v0, 0x555c
    at = 0x447a << 16;                                          // 0x0015e42c: lui $at, 0x447a
    /* move to FPU: $at, $f12 */                                // 0x0015e430: mtc1 $at, $f12
    g_0021555c = 0;  // Global at 0x0021555c                    // 0x0015e434: sw $zero, 0($v0)
    func_00111560();  // 111560                                // 0x0015e438: jal 0x111560
    /* FPU: mul.s $f12, $f0, $f12 */                            // 0x0015e43c: mul.s $f12, $f0, $f12
    a1 = 0 | 0xff80;                                            // 0x0015e440: ori $a1, $zero, 0xff80
    func_00111998();  // 111998                                // 0x0015e448: jal 0x111998
    func_00112048();  // 112048                                // 0x0015e450: jal 0x112048
    func_0015e800();  // 15e800                                // 0x0015e458: jal 0x15e800
    a0 = 0x22 << 16;                                            // 0x0015e460: lui $a0, 0x22
    if (v0 == 0) goto label_0x15e474;                           // 0x0015e464: beqz $v0, 0x15e474
    a0 = &str_00227738;  // "1.862"                             // 0x0015e468: addiu $a0, $a0, 0x7738
    func_00163410();  // 163410                                // 0x0015e46c: jal 0x163410
    /* nop */                                                   // 0x0015e470: nop 
label_0x15e474:
    v0 = 0x21 << 16;                                            // 0x0015e474: lui $v0, 0x21
    v1 = 1;                                                     // 0x0015e478: addiu $v1, $zero, 1
    func_0015e658();  // 15e658                                // 0x0015e480: jal 0x15e658
    g_00214454 = v1;  // Global at 0x00214454                   // 0x0015e484: sw $v1, 0x4454($v0)
    func_0013d258();  // 13d258                                // 0x0015e488: jal 0x13d258
    /* nop */                                                   // 0x0015e48c: nop 
    a0 = 0x16 << 16;                                            // 0x0015e490: lui $a0, 0x16
    func_0013d190();  // 13d190                                // 0x0015e498: jal 0x13d190
    a0 = a0 + -0x1cb8;                                          // 0x0015e49c: addiu $a0, $a0, -0x1cb8
    func_001607c0();  // 1607c0                                // 0x0015e4a0: jal 0x1607c0
    /* nop */                                                   // 0x0015e4a4: nop 
    func_0015e4d8();  // 15e4d8                                // 0x0015e4a8: jal 0x15e4d8
    v1 = s1 + 0x4450;                                           // 0x0015e4b0: addiu $v1, $s1, 0x4450
    v0 = g_00214450;  // Global at 0x00214450                   // 0x0015e4b8: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0015e4c4: addiu $v0, $v0, 1
    g_00214450 = v0;  // Global at 0x00214450                   // 0x0015e4c8: sw $v0, 0($v1)
    return;                                                     // 0x0015e4cc: jr $ra
    sp = sp + 0x20;                                             // 0x0015e4d0: addiu $sp, $sp, 0x20
}