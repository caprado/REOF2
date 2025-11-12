void func_001bd3d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bd3d0: addiu $sp, $sp, -0x20
    func_001bd070();  // 0x1bce10                                // 0x001bd3dc: jal 0x1bce10
    if (v0 == 0) goto label_0x1bd3fc;                           // 0x001bd3e4: beqz $v0, 0x1bd3fc
    func_001bd3d0();  // 0x1bd340                                // 0x001bd3ec: jal 0x1bd340
    goto label_0x1bd484;                                        // 0x001bd3f4: b 0x1bd484
label_0x1bd3fc:
    t0 = 0x22 << 16;                                            // 0x001bd3fc: lui $t0, 0x22
    *(uint32_t*)((gp) + -0x6314) = 0;                           // 0x001bd400: sw $zero, -0x6314($gp)
    t0 = t0 + -0x3360;                                          // 0x001bd404: addiu $t0, $t0, -0x3360
    a0 = 0x31 << 16;                                            // 0x001bd408: lui $a0, 0x31
    a0 = a0 + 0x38c0;                                           // 0x001bd40c: addiu $a0, $a0, 0x38c0
label_0x1bd410:
    a3 = g_0021cca0;  // Global at 0x0021cca0                   // 0x001bd410: lw $a3, 0($t0)
    if (a3 != 0) goto label_0x1bd428;                           // 0x001bd414: bnez $a3, 0x1bd428
    t0 = t0 + 4;                                                // 0x001bd418: addiu $t0, $t0, 4
    v1 = -3;                                                    // 0x001bd41c: addiu $v1, $zero, -3
    goto label_0x1bd480;                                        // 0x001bd420: b 0x1bd480
    *(uint32_t*)((s0) + 8) = v1;                                // 0x001bd424: sw $v1, 8($s0)
label_0x1bd428:
label_0x1bd42c:
    a1 = *(int8_t*)(a3);                                        // 0x001bd42c: lb $a1, 0($a3)
    if (a1 < 0) goto label_0x1bd458;                            // 0x001bd430: bltz $a1, 0x1bd458
    a3 = a3 + 1;                                                // 0x001bd434: addiu $a3, $a3, 1
    v1 = a2 << 5;                                               // 0x001bd438: sll $v1, $a2, 5
    v1 = a0 + v1;                                               // 0x001bd43c: addu $v1, $a0, $v1
    v1 = *(int32_t*)((v1) + 8);                                 // 0x001bd440: lw $v1, 8($v1)
    at = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x001bd444: sltu $at, $v1, $a1
    if (at != 0) goto label_0x1bd45c;                           // 0x001bd448: bnez $at, 0x1bd45c
    v1 = a2 + -1;                                               // 0x001bd44c: addiu $v1, $a2, -1
    goto label_0x1bd42c;                                        // 0x001bd450: b 0x1bd42c
    a2 = a2 + 1;                                                // 0x001bd454: addiu $a2, $a2, 1
label_0x1bd458:
    v1 = a2 + -1;                                               // 0x001bd458: addiu $v1, $a2, -1
label_0x1bd45c:
    if (a1 < 0) goto label_0x1bd474;                            // 0x001bd45c: bltz $a1, 0x1bd474
    *(uint32_t*)((gp) + -0x6318) = v1;                          // 0x001bd460: sw $v1, -0x6318($gp)
    v1 = *(int32_t*)((gp) + -0x6314);                           // 0x001bd464: lw $v1, -0x6314($gp)
    v1 = v1 + 1;                                                // 0x001bd468: addiu $v1, $v1, 1
    goto label_0x1bd410;                                        // 0x001bd46c: b 0x1bd410
    *(uint32_t*)((gp) + -0x6314) = v1;                          // 0x001bd470: sw $v1, -0x6314($gp)
label_0x1bd474:
    v1 = *(int32_t*)(s0);                                       // 0x001bd474: lw $v1, 0($s0)
    v1 = v1 + 1;                                                // 0x001bd478: addiu $v1, $v1, 1
    *(uint32_t*)(s0) = v1;                                      // 0x001bd47c: sw $v1, 0($s0)
label_0x1bd480:
label_0x1bd484:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd484: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd488: jr $ra
    sp = sp + 0x20;                                             // 0x001bd48c: addiu $sp, $sp, 0x20
}