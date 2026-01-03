void func_001cf420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001cf420: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cf42c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cf434: addu.qb $zero, $sp, $s1
    v0 = *(int32_t*)((gp) + -0x6260);                           // 0x001cf43c: lw $v0, -0x6260($gp)
    if (v0 == 0) goto label_0x1cf450;                           // 0x001cf440: beqz $v0, 0x1cf450
    goto label_0x1cf560;                                        // 0x001cf448: b 0x1cf560
label_0x1cf450:
    func_001ced80();  // 1ced80                                // 0x001cf450: jal 0x1ced80
    /* nop */                                                   // 0x001cf454: nop 
    at = 0x32 << 16;                                            // 0x001cf458: lui $at, 0x32
    v0 = *(int32_t*)((gp) + -0x6264);                           // 0x001cf45c: lw $v0, -0x6264($gp)
    s4 = g_00325980;  // Global at 0x00325980                   // 0x001cf460: lw $s4, 0x5980($at)
    if (s4 == v0) goto label_0x1cf560;                          // 0x001cf464: beq $s4, $v0, 0x1cf560
    s2 = 0x32 << 16;                                            // 0x001cf46c: lui $s2, 0x32
    s1 = 0x32 << 16;                                            // 0x001cf470: lui $s1, 0x32
    s0 = 0x32 << 16;                                            // 0x001cf474: lui $s0, 0x32
    s2 = s2 + 0x598c;                                           // 0x001cf47c: addiu $s2, $s2, 0x598c
    s1 = s1 + 0x5988;                                           // 0x001cf480: addiu $s1, $s1, 0x5988
    s0 = s0 + 0x5984;                                           // 0x001cf484: addiu $s0, $s0, 0x5984
label_0x1cf488:
    at = 0x32 << 16;                                            // 0x001cf488: lui $at, 0x32
    a0 = 1;                                                     // 0x001cf48c: addiu $a0, $zero, 1
    func_001ced80();  // 1ced80                                // 0x001cf490: jal 0x1ced80
    g_00325980 = s3;  // Global at 0x00325980                   // 0x001cf494: sw $s3, 0x5980($at)
    at = 0x32 << 16;                                            // 0x001cf498: lui $at, 0x32
    v0 = -1;                                                    // 0x001cf49c: addiu $v0, $zero, -1
    a1 = g_00325980;  // Global at 0x00325980                   // 0x001cf4a0: lw $a1, 0x5980($at)
    if (a1 != v0) goto label_0x1cf4d4;                          // 0x001cf4a4: bne $a1, $v0, 0x1cf4d4
    v1 = s3 << 3;                                               // 0x001cf4a8: sll $v1, $s3, 3
    v0 = 0x33 << 16;                                            // 0x001cf4ac: lui $v0, 0x33
    v1 = v1 - s3;                                               // 0x001cf4b0: subu $v1, $v1, $s3
    v0 = v0 + -0x2b50;                                          // 0x001cf4b4: addiu $v0, $v0, -0x2b50
    v1 = v1 << 2;                                               // 0x001cf4b8: sll $v1, $v1, 2
    a1 = 0xff;                                                  // 0x001cf4bc: addiu $a1, $zero, 0xff
    a2 = 0x1c;                                                  // 0x001cf4c0: addiu $a2, $zero, 0x1c
    func_00107c70();  // 107c70                                // 0x001cf4c4: jal 0x107c70
    a0 = v0 + v1;                                               // 0x001cf4c8: addu $a0, $v0, $v1
    goto label_0x1cf500;                                        // 0x001cf4cc: b 0x1cf500
    s3 = s3 + 1;                                                // 0x001cf4d0: addiu $s3, $s3, 1
label_0x1cf4d4:
    a2 = g_00325984;  // Global at 0x00325984                   // 0x001cf4d4: lw $a2, 0($s0)
    v1 = s3 << 3;                                               // 0x001cf4d8: sll $v1, $s3, 3
    a3 = g_00325988;  // Global at 0x00325988                   // 0x001cf4dc: lw $a3, 0($s1)
    v0 = 0x33 << 16;                                            // 0x001cf4e0: lui $v0, 0x33
    t0 = g_0032598c;  // Global at 0x0032598c                   // 0x001cf4e4: lw $t0, 0($s2)
    v1 = v1 - s3;                                               // 0x001cf4e8: subu $v1, $v1, $s3
    v0 = v0 + -0x2b50;                                          // 0x001cf4ec: addiu $v0, $v0, -0x2b50
    v1 = v1 << 2;                                               // 0x001cf4f0: sll $v1, $v1, 2
    func_001cedd0();  // 1cedd0                                // 0x001cf4f4: jal 0x1cedd0
    a0 = v0 + v1;                                               // 0x001cf4f8: addu $a0, $v0, $v1
    s3 = s3 + 1;                                                // 0x001cf4fc: addiu $s3, $s3, 1
label_0x1cf500:
    v0 = (s3 < 0x20) ? 1 : 0;                                   // 0x001cf500: slti $v0, $s3, 0x20
    if (v0 != 0) goto label_0x1cf488;                           // 0x001cf504: bnez $v0, 0x1cf488
    /* nop */                                                   // 0x001cf508: nop 
    *(uint32_t*)((gp) + -0x6264) = s4;                          // 0x001cf50c: sw $s4, -0x6264($gp)
    a1 = 0x20;                                                  // 0x001cf510: addiu $a1, $zero, 0x20
    *(uint32_t*)((gp) + -0x6268) = s4;                          // 0x001cf514: sw $s4, -0x6268($gp)
    a0 = 0x33 << 16;                                            // 0x001cf518: lui $a0, 0x33
    v1 = -1;                                                    // 0x001cf51c: addiu $v1, $zero, -1
    a0 = a0 + -0x2b50;                                          // 0x001cf520: addiu $a0, $a0, -0x2b50
    v0 = a1 << 3;                                               // 0x001cf524: sll $v0, $a1, 3
label_0x1cf528:
    v0 = v0 - a1;                                               // 0x001cf528: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001cf52c: sll $v0, $v0, 2
    v0 = a0 + v0;                                               // 0x001cf530: addu $v0, $a0, $v0
    v0 = g_0032d4b0;  // Global at 0x0032d4b0                   // 0x001cf534: lw $v0, 0($v0)
    if (v0 == v1) goto label_0x1cf54c;                          // 0x001cf538: beq $v0, $v1, 0x1cf54c
    /* nop */                                                   // 0x001cf53c: nop 
    v0 = *(int32_t*)((gp) + -0x6268);                           // 0x001cf540: lw $v0, -0x6268($gp)
    v0 = v0 + 1;                                                // 0x001cf544: addiu $v0, $v0, 1
    *(uint32_t*)((gp) + -0x6268) = v0;                          // 0x001cf548: sw $v0, -0x6268($gp)
label_0x1cf54c:
    a1 = a1 + 1;                                                // 0x001cf54c: addiu $a1, $a1, 1
    v0 = (a1 < 0x23) ? 1 : 0;                                   // 0x001cf550: slti $v0, $a1, 0x23
    if (v0 != 0) goto label_0x1cf528;                           // 0x001cf554: bnez $v0, 0x1cf528
    v0 = a1 << 3;                                               // 0x001cf558: sll $v0, $a1, 3
    v0 = 1;                                                     // 0x001cf55c: addiu $v0, $zero, 1
label_0x1cf560:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001cf564: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cf56c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cf570: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cf574: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cf578: jr $ra
    sp = sp + 0x60;                                             // 0x001cf57c: addiu $sp, $sp, 0x60
}