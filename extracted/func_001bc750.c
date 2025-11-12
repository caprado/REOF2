void func_001bc750() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001bc750: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001bc754: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bc75c: addu.qb $zero, $sp, $s1
    s1 = g_003136e0;  // Global at 0x003136e0                   // 0x001bc764: lhu $s1, 0x36e0($at)
    func_001b5020();  // 0x1b5010                                // 0x001bc76c: jal 0x1b5010
    a0 = -2;                                                    // 0x001bc770: addiu $a0, $zero, -2
    func_001b4ff0();  // 0x1b4fd0                                // 0x001bc774: jal 0x1b4fd0
    a0 = 0x14;                                                  // 0x001bc778: addiu $a0, $zero, 0x14
    func_001b5050();  // 0x1b5040                                // 0x001bc77c: jal 0x1b5040
    v1 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc784: lbu $v1, 0xa($s0)
    v0 = 0x5b;                                                  // 0x001bc788: addiu $v0, $zero, 0x5b
    if (v1 == v0) goto label_0x1bc8e4;                          // 0x001bc78c: beq $v1, $v0, 0x1bc8e4
    v0 = 0x5a;                                                  // 0x001bc790: addiu $v0, $zero, 0x5a
    if (v1 == v0) goto label_0x1bc87c;                          // 0x001bc794: beq $v1, $v0, 0x1bc87c
    a0 = 1;                                                     // 0x001bc798: addiu $a0, $zero, 1
    if (v1 == a0) goto label_0x1bc860;                          // 0x001bc79c: beq $v1, $a0, 0x1bc860
    /* nop */                                                   // 0x001bc7a0: nop 
    if (v1 == 0) goto label_0x1bc7b4;                           // 0x001bc7a4: beqz $v1, 0x1bc7b4
    /* nop */                                                   // 0x001bc7a8: nop 
    goto label_0x1bc948;                                        // 0x001bc7ac: b 0x1bc948
    v0 = 1;                                                     // 0x001bc7b0: addiu $v0, $zero, 1
label_0x1bc7b4:
    func_001bd0e0();  // 0x1bd070                                // 0x001bc7b4: jal 0x1bd070
    /* nop */                                                   // 0x001bc7b8: nop 
    v1 = -6;                                                    // 0x001bc7bc: addiu $v1, $zero, -6
    if (v0 == v1) goto label_0x1bc840;                          // 0x001bc7c0: beq $v0, $v1, 0x1bc840
    v1 = -2;                                                    // 0x001bc7c4: addiu $v1, $zero, -2
    if (v0 == v1) goto label_0x1bc828;                          // 0x001bc7c8: beq $v0, $v1, 0x1bc828
    at = 0x31 << 16;                                            // 0x001bc7cc: lui $at, 0x31
    v1 = -4;                                                    // 0x001bc7d0: addiu $v1, $zero, -4
    if (v0 == v1) goto label_0x1bc818;                          // 0x001bc7d4: beq $v0, $v1, 0x1bc818
    v1 = 1;                                                     // 0x001bc7d8: addiu $v1, $zero, 1
    v1 = -1;                                                    // 0x001bc7dc: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1bc80c;                          // 0x001bc7e0: beq $v0, $v1, 0x1bc80c
    at = 0x31 << 16;                                            // 0x001bc7e4: lui $at, 0x31
    if (v0 == 0) goto label_0x1bc7f8;                           // 0x001bc7e8: beqz $v0, 0x1bc7f8
    /* nop */                                                   // 0x001bc7ec: nop 
    goto label_0x1bc944;                                        // 0x001bc7f0: b 0x1bc944
    /* nop */                                                   // 0x001bc7f4: nop 
label_0x1bc7f8:
    v0 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc7f8: lbu $v0, 0xa($s0)
    v0 = v0 + 1;                                                // 0x001bc7fc: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 0xa) = v0;                               // 0x001bc800: sb $v0, 0xa($s0)
    goto label_0x1bc944;                                        // 0x001bc804: b 0x1bc944
    *(uint8_t*)((s0) + 0xb) = 0;                                // 0x001bc808: sb $zero, 0xb($s0)
label_0x1bc80c:
    goto label_0x1bc948;                                        // 0x001bc810: b 0x1bc948
    g_003137b1 = 0;  // Global at 0x003137b1                    // 0x001bc814: sb $zero, 0x37b1($at)
label_0x1bc818:
    at = 0x31 << 16;                                            // 0x001bc818: lui $at, 0x31
    goto label_0x1bc948;                                        // 0x001bc820: b 0x1bc948
    g_003137b1 = v1;  // Global at 0x003137b1                   // 0x001bc824: sb $v1, 0x37b1($at)
label_0x1bc828:
    v0 = 0x5a;                                                  // 0x001bc828: addiu $v0, $zero, 0x5a
    g_003137b1 = 0;  // Global at 0x003137b1                    // 0x001bc82c: sb $zero, 0x37b1($at)
    *(uint8_t*)((s0) + 0xa) = v0;                               // 0x001bc830: sb $v0, 0xa($s0)
    v0 = 0x20;                                                  // 0x001bc834: addiu $v0, $zero, 0x20
    goto label_0x1bc944;                                        // 0x001bc838: b 0x1bc944
    *(uint8_t*)((s0) + 0xb) = v0;                               // 0x001bc83c: sb $v0, 0xb($s0)
label_0x1bc840:
    v0 = 1;                                                     // 0x001bc840: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001bc844: lui $at, 0x31
    g_003137b1 = v0;  // Global at 0x003137b1                   // 0x001bc848: sb $v0, 0x37b1($at)
    v1 = 0x5b;                                                  // 0x001bc84c: addiu $v1, $zero, 0x5b
    v0 = 0x20;                                                  // 0x001bc850: addiu $v0, $zero, 0x20
    *(uint8_t*)((s0) + 0xa) = v1;                               // 0x001bc854: sb $v1, 0xa($s0)
    goto label_0x1bc944;                                        // 0x001bc858: b 0x1bc944
    *(uint8_t*)((s0) + 0xb) = v0;                               // 0x001bc85c: sb $v0, 0xb($s0)
label_0x1bc860:
    func_001bdd00();  // 0x1bdc10                                // 0x001bc860: jal 0x1bdc10
    /* nop */                                                   // 0x001bc864: nop 
    v1 = 2;                                                     // 0x001bc868: addiu $v1, $zero, 2
    at = 0x31 << 16;                                            // 0x001bc86c: lui $at, 0x31
    goto label_0x1bc948;                                        // 0x001bc874: b 0x1bc948
    g_003137b1 = v1;  // Global at 0x003137b1                   // 0x001bc878: sb $v1, 0x37b1($at)
label_0x1bc87c:
    v0 = *(uint8_t*)((s0) + 0xb);                               // 0x001bc87c: lbu $v0, 0xb($s0)
    if (v0 == 0) goto label_0x1bc894;                           // 0x001bc880: beqz $v0, 0x1bc894
    /* nop */                                                   // 0x001bc884: nop 
    v0 = v0 + -1;                                               // 0x001bc888: addiu $v0, $v0, -1
    goto label_0x1bc8c4;                                        // 0x001bc88c: b 0x1bc8c4
    *(uint8_t*)((s0) + 0xb) = v0;                               // 0x001bc890: sb $v0, 0xb($s0)
label_0x1bc894:
    v0 = s1 & 0xffff;                                           // 0x001bc894: andi $v0, $s1, 0xffff
    v0 = v0 & 0xfff0;                                           // 0x001bc898: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1bc8ac;                           // 0x001bc89c: beqz $v0, 0x1bc8ac
    a0 = 2;                                                     // 0x001bc8a0: addiu $a0, $zero, 2
    goto label_0x1bc948;                                        // 0x001bc8a4: b 0x1bc948
label_0x1bc8ac:
    func_001c1ad0();  // 0x1c19e0                                // 0x001bc8ac: jal 0x1c19e0
    /* nop */                                                   // 0x001bc8b0: nop 
    a1 = 0x30;                                                  // 0x001bc8b8: addiu $a1, $zero, 0x30
    func_001c27a0();  // 0x1c2620                                // 0x001bc8bc: jal 0x1c2620
    a2 = 0x188;                                                 // 0x001bc8c0: addiu $a2, $zero, 0x188
label_0x1bc8c4:
    func_001c1ad0();  // 0x1c19e0                                // 0x001bc8c4: jal 0x1c19e0
    a0 = 7;                                                     // 0x001bc8c8: addiu $a0, $zero, 7
    a1 = 0x30;                                                  // 0x001bc8d0: addiu $a1, $zero, 0x30
    func_001c27a0();  // 0x1c2620                                // 0x001bc8d4: jal 0x1c2620
    a2 = 0x138;                                                 // 0x001bc8d8: addiu $a2, $zero, 0x138
    goto label_0x1bc944;                                        // 0x001bc8dc: b 0x1bc944
    /* nop */                                                   // 0x001bc8e0: nop 
label_0x1bc8e4:
    v0 = *(uint8_t*)((s0) + 0xb);                               // 0x001bc8e4: lbu $v0, 0xb($s0)
    if (v0 == 0) goto label_0x1bc8fc;                           // 0x001bc8e8: beqz $v0, 0x1bc8fc
    /* nop */                                                   // 0x001bc8ec: nop 
    v0 = v0 + -1;                                               // 0x001bc8f0: addiu $v0, $v0, -1
    goto label_0x1bc92c;                                        // 0x001bc8f4: b 0x1bc92c
    *(uint8_t*)((s0) + 0xb) = v0;                               // 0x001bc8f8: sb $v0, 0xb($s0)
label_0x1bc8fc:
    v0 = s1 & 0xffff;                                           // 0x001bc8fc: andi $v0, $s1, 0xffff
    v0 = v0 & 0xfff0;                                           // 0x001bc900: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1bc914;                           // 0x001bc904: beqz $v0, 0x1bc914
    a0 = 2;                                                     // 0x001bc908: addiu $a0, $zero, 2
    goto label_0x1bc948;                                        // 0x001bc90c: b 0x1bc948
label_0x1bc914:
    func_001c1ad0();  // 0x1c19e0                                // 0x001bc914: jal 0x1c19e0
    /* nop */                                                   // 0x001bc918: nop 
    a1 = 0x30;                                                  // 0x001bc920: addiu $a1, $zero, 0x30
    func_001c27a0();  // 0x1c2620                                // 0x001bc924: jal 0x1c2620
    a2 = 0x188;                                                 // 0x001bc928: addiu $a2, $zero, 0x188
label_0x1bc92c:
    func_001c1ad0();  // 0x1c19e0                                // 0x001bc92c: jal 0x1c19e0
    a0 = 6;                                                     // 0x001bc930: addiu $a0, $zero, 6
    a1 = 0x30;                                                  // 0x001bc938: addiu $a1, $zero, 0x30
    func_001c27a0();  // 0x1c2620                                // 0x001bc93c: jal 0x1c2620
    a2 = 0x138;                                                 // 0x001bc940: addiu $a2, $zero, 0x138
label_0x1bc944:
    v0 = 1;                                                     // 0x001bc944: addiu $v0, $zero, 1
label_0x1bc948:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bc94c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bc950: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bc954: jr $ra
    sp = sp + 0x30;                                             // 0x001bc958: addiu $sp, $sp, 0x30
}