void func_001c27a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c27a0: addiu $sp, $sp, -0x30
    v1 = -1;                                                    // 0x001c27a4: addiu $v1, $zero, -1
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c27ac: addu.qb $zero, $sp, $s1
    a1 = *(int32_t*)((a0) + 0xc);                               // 0x001c27b8: lw $a1, 0xc($a0)
    a1 = *(int32_t*)(a1);                                       // 0x001c27bc: lw $a1, 0($a1)
    *(uint32_t*)((a0) + 0x10) = a1;                             // 0x001c27c0: sw $a1, 0x10($a0)
    a1 = *(int32_t*)((a0) + 0xc);                               // 0x001c27c4: lw $a1, 0xc($a0)
    a1 = *(int32_t*)((a1) + 4);                                 // 0x001c27c8: lw $a1, 4($a1)
    *(uint32_t*)((a0) + 0x14) = a1;                             // 0x001c27cc: sw $a1, 0x14($a0)
    *(uint8_t*)((a0) + 0x18) = 0;                               // 0x001c27d0: sb $zero, 0x18($a0)
    *(uint8_t*)((a0) + 0x118) = 0;                              // 0x001c27d4: sb $zero, 0x118($a0)
    a0 = *(int32_t*)((a0) + 0xc);                               // 0x001c27d8: lw $a0, 0xc($a0)
    a0 = *(int32_t*)((a0) + 8);                                 // 0x001c27dc: lw $a0, 8($a0)
    if (a0 == v1) goto label_0x1c2804;                          // 0x001c27e0: beq $a0, $v1, 0x1c2804
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001c27e8: lw $v0, 8($s1)
    v1 = a0 << 2;                                               // 0x001c27ec: sll $v1, $a0, 2
    v0 = v0 + v1;                                               // 0x001c27f0: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001c27f4: lw $a0, 0($v0)
    func_001c1640();  // 0x1c15a0                                // 0x001c27f8: jal 0x1c15a0
    a1 = s1 + 0x18;                                             // 0x001c27fc: addiu $a1, $s1, 0x18
    s0 = s0 + 1;                                                // 0x001c2800: addiu $s0, $s0, 1
label_0x1c2804:
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x001c2804: lw $a0, 0xc($s1)
    v1 = -1;                                                    // 0x001c2808: addiu $v1, $zero, -1
    a0 = *(int32_t*)((a0) + 0xc);                               // 0x001c280c: lw $a0, 0xc($a0)
    if (a0 == v1) goto label_0x1c2834;                          // 0x001c2810: beq $a0, $v1, 0x1c2834
    /* nop */                                                   // 0x001c2814: nop 
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001c2818: lw $v0, 8($s1)
    v1 = a0 << 2;                                               // 0x001c281c: sll $v1, $a0, 2
    v0 = v0 + v1;                                               // 0x001c2820: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001c2824: lw $a0, 0($v0)
    func_001c1640();  // 0x1c15a0                                // 0x001c2828: jal 0x1c15a0
    a1 = s1 + 0x118;                                            // 0x001c282c: addiu $a1, $s1, 0x118
    s0 = s0 + 1;                                                // 0x001c2830: addiu $s0, $s0, 1
label_0x1c2834:
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x001c2834: lw $a0, 0xc($s1)
    v1 = 2;                                                     // 0x001c2838: addiu $v1, $zero, 2
    a0 = a0 + 0x10;                                             // 0x001c283c: addiu $a0, $a0, 0x10
    if (s0 == v1) goto label_0x1c287c;                          // 0x001c2840: beq $s0, $v1, 0x1c287c
    *(uint32_t*)((s1) + 0xc) = a0;                              // 0x001c2844: sw $a0, 0xc($s1)
    v1 = 1;                                                     // 0x001c2848: addiu $v1, $zero, 1
    if (s0 == v1) goto label_0x1c2870;                          // 0x001c284c: beq $s0, $v1, 0x1c2870
    v1 = 0x176;                                                 // 0x001c2850: addiu $v1, $zero, 0x176
    if (s0 == 0) goto label_0x1c2864;                           // 0x001c2854: beqz $s0, 0x1c2864
    /* nop */                                                   // 0x001c2858: nop 
    goto label_0x1c2894;                                        // 0x001c285c: b 0x1c2894
label_0x1c2864:
    *(uint32_t*)((s1) + 0x21c) = 0;                             // 0x001c2864: sw $zero, 0x21c($s1)
    goto label_0x1c2890;                                        // 0x001c2868: b 0x1c2890
    *(uint32_t*)((s1) + 0x218) = 0;                             // 0x001c286c: sw $zero, 0x218($s1)
label_0x1c2870:
    *(uint32_t*)((s1) + 0x218) = v1;                            // 0x001c2870: sw $v1, 0x218($s1)
    goto label_0x1c2890;                                        // 0x001c2874: b 0x1c2890
    *(uint32_t*)((s1) + 0x21c) = 0;                             // 0x001c2878: sw $zero, 0x21c($s1)
label_0x1c287c:
    v1 = 0x176;                                                 // 0x001c287c: addiu $v1, $zero, 0x176
    *(uint32_t*)((s1) + 0x218) = v1;                            // 0x001c2880: sw $v1, 0x218($s1)
    v1 = *(int32_t*)((s1) + 0x218);                             // 0x001c2884: lw $v1, 0x218($s1)
    v1 = v1 + 0x18;                                             // 0x001c2888: addiu $v1, $v1, 0x18
    *(uint32_t*)((s1) + 0x21c) = v1;                            // 0x001c288c: sw $v1, 0x21c($s1)
label_0x1c2890:
label_0x1c2894:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c2894: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2898: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c289c: jr $ra
    sp = sp + 0x30;                                             // 0x001c28a0: addiu $sp, $sp, 0x30
}