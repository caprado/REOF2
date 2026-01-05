/** @category graphics/dma @status complete @author caprado */
void func_001b7390() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b7390: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001b7394: lui $at, 0x31
    v1 = g_003137b6;  // Global at 0x003137b6                   // 0x001b73a0: lbu $v1, 0x37b6($at)
    if (v1 != 0) goto label_0x1b73bc;                           // 0x001b73a4: bnez $v1, 0x1b73bc
    /* nop */                                                   // 0x001b73a8: nop 
    at = 0x31 << 16;                                            // 0x001b73ac: lui $at, 0x31
    v1 = g_003137ca;  // Global at 0x003137ca                   // 0x001b73b0: lbu $v1, 0x37ca($at)
    if (v1 == 0) goto label_0x1b7478;                           // 0x001b73b4: beqz $v1, 0x1b7478
    /* nop */                                                   // 0x001b73b8: nop 
label_0x1b73bc:
    at = 0x2b << 16;                                            // 0x001b73bc: lui $at, 0x2b
    s0 = 0x2b << 16;                                            // 0x001b73c0: lui $s0, 0x2b
    v1 = g_002ac5a4;  // Global at 0x002ac5a4                   // 0x001b73c4: lw $v1, -0x3a5c($at)
    if (v1 == 0) goto label_0x1b744c;                           // 0x001b73c8: beqz $v1, 0x1b744c
    s0 = s0 + -0x3ac0;                                          // 0x001b73cc: addiu $s0, $s0, -0x3ac0
    a0 = 0x5f;                                                  // 0x001b73d0: addiu $a0, $zero, 0x5f
    func_00196050();  // 196050                                // 0x001b73d4: jal 0x196050
    a1 = 5;                                                     // 0x001b73d8: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001b73dc: addiu $a0, $zero, 0x60
    func_00196050();  // 196050                                // 0x001b73e0: jal 0x196050
    v0 = g_002ac5e0;  // Global at 0x002ac5e0                   // 0x001b73e8: lw $v0, 0xa0($s0)
    if (v0 == 0) goto label_0x1b7408;                           // 0x001b73ec: beqz $v0, 0x1b7408
    a0 = 0x6c;                                                  // 0x001b73f0: addiu $a0, $zero, 0x6c
    a0 = 0x6c;                                                  // 0x001b73f4: addiu $a0, $zero, 0x6c
    func_00196050();  // 196050                                // 0x001b73f8: jal 0x196050
    a1 = 1;                                                     // 0x001b73fc: addiu $a1, $zero, 1
    goto label_0x1b7414;                                        // 0x001b7400: b 0x1b7414
    v1 = g_002ac58c;  // Global at 0x002ac58c                   // 0x001b7404: lw $v1, 0x4c($s0)
label_0x1b7408:
    func_00196050();  // 196050                                // 0x001b7408: jal 0x196050
    v1 = g_002ac58c;  // Global at 0x002ac58c                   // 0x001b7410: lw $v1, 0x4c($s0)
label_0x1b7414:
    v0 = 0xf000 << 16;                                          // 0x001b7414: lui $v0, 0xf000
    a1 = 0x29 << 16;                                            // 0x001b7418: lui $a1, 0x29
    a1 = a1 + -0x350;                                           // 0x001b741c: addiu $a1, $a1, -0x350
    *(uint32_t*)(v1) = v0;                                      // 0x001b7420: sw $v0, 0($v1)
    *(uint32_t*)((v1) + 4) = 0;                                 // 0x001b7424: sw $zero, 4($v1)
    *(uint32_t*)((v1) + 8) = 0;                                 // 0x001b7428: sw $zero, 8($v1)
    *(uint32_t*)((v1) + 0xc) = 0;                               // 0x001b742c: sw $zero, 0xc($v1)
    v0 = g_002ac588;  // Global at 0x002ac588                   // 0x001b7430: lw $v0, 0x48($s0)
    v0 = v0 << 2;                                               // 0x001b7434: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001b7438: addu $v0, $v0, $s0
    v0 = g_f0000038;  // Global at 0xf0000038                   // 0x001b743c: lw $v0, 0x38($v0)
    func_0018cd80();  // 18cd80                                // 0x001b7444: jal 0x18cd80
label_0x1b744c:
    v1 = g_002ac588;  // Global at 0x002ac588                   // 0x001b744c: lw $v1, 0x48($s0)
    v1 = v1 ^ 1;                                                // 0x001b7450: xori $v1, $v1, 1
    g_002ac588 = v1;  // Global at 0x002ac588                   // 0x001b7454: sw $v1, 0x48($s0)
    v1 = g_002ac588;  // Global at 0x002ac588                   // 0x001b7458: lw $v1, 0x48($s0)
    v1 = v1 << 2;                                               // 0x001b745c: sll $v1, $v1, 2
    v1 = v1 + s0;                                               // 0x001b7460: addu $v1, $v1, $s0
    v1 = *(int32_t*)((v1) + 0x40);                              // 0x001b7464: lw $v1, 0x40($v1)
    g_002ac58c = v1;  // Global at 0x002ac58c                   // 0x001b7468: sw $v1, 0x4c($s0)
    v1 = g_002ac5a4;  // Global at 0x002ac5a4                   // 0x001b746c: lw $v1, 0x64($s0)
    g_002ac5a8 = v1;  // Global at 0x002ac5a8                   // 0x001b7470: sw $v1, 0x68($s0)
    g_002ac5a4 = 0;  // Global at 0x002ac5a4                    // 0x001b7474: sw $zero, 0x64($s0)
label_0x1b7478:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b747c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b7480: jr $ra
    sp = sp + 0x20;                                             // 0x001b7484: addiu $sp, $sp, 0x20
}