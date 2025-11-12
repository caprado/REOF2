void func_001db780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0;
    
    sp = sp + -0x1b0;                                           // 0x001db780: addiu $sp, $sp, -0x1b0
    at = 0x31 << 16;                                            // 0x001db784: lui $at, 0x31
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001db790: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001db798: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001db7a0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001db7a8: addu.qb $zero, $sp, $s1
    s4 = g_003137fc;  // Global at 0x003137fc                   // 0x001db7b0: lw $s4, 0x37fc($at)
    at = 0x31 << 16;                                            // 0x001db7b4: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db7b8: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db808;                           // 0x001db7bc: bnez $v0, 0x1db808
    at = 0x31 << 16;                                            // 0x001db7c0: lui $at, 0x31
    at = 0x31 << 16;                                            // 0x001db7c4: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001db7c8: lui $a1, 0x24
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001db7cc: lhu $a3, 0x37ba($at)
    a2 = 0x24 << 16;                                            // 0x001db7d0: lui $a2, 0x24
    a0 = sp + 0xb0;                                             // 0x001db7d4: addiu $a0, $sp, 0xb0
    a1 = &str_00247c80;  // "data/rom/scene/npc_set"            // 0x001db7d8: addiu $a1, $a1, 0x7c80
    func_0010a570();  // 0x10a4d8                                // 0x001db7dc: jal 0x10a4d8
    a2 = &str_00247c90;  // "r%03d.npc"                         // 0x001db7e0: addiu $a2, $a2, 0x7c90
    a0 = sp + 0xb0;                                             // 0x001db7e4: addiu $a0, $sp, 0xb0
    a2 = 1;                                                     // 0x001db7ec: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001db7f0: jal 0x1d3390
    if (v0 > 0) goto label_0x1db830;                            // 0x001db7f8: bgtz $v0, 0x1db830
    /* nop */                                                   // 0x001db7fc: nop 
    goto label_0x1db9fc;                                        // 0x001db800: b 0x1db9fc
label_0x1db808:
    a1 = 0x24 << 16;                                            // 0x001db808: lui $a1, 0x24
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db80c: lhu $a2, 0x37ba($at)
    a0 = sp + 0xb0;                                             // 0x001db810: addiu $a0, $sp, 0xb0
    func_0010a570();  // 0x10a4d8                                // 0x001db814: jal 0x10a4d8
    a1 = &str_00247ca8;  // "%s/r%03d/r%03d%02d%02d.lig"        // 0x001db818: addiu $a1, $a1, 0x7ca8
    a0 = sp + 0xb0;                                             // 0x001db81c: addiu $a0, $sp, 0xb0
    func_001a9b80();  // 0x1a9b30                                // 0x001db820: jal 0x1a9b30
    if (v0 == 0) goto label_0x1db9f8;                           // 0x001db828: beqz $v0, 0x1db9f8
    /* nop */                                                   // 0x001db82c: nop 
label_0x1db830:
    v1 = *(int32_t*)(s4);                                       // 0x001db830: lw $v1, 0($s4)
    v1 = (unsigned)v1 >> 1;                                     // 0x001db83c: srl $v1, $v1, 1
    goto label_0x1db9ec;                                        // 0x001db840: b 0x1db9ec
    fp = (unsigned)v1 >> 2;                                     // 0x001db844: srl $fp, $v1, 2
label_0x1db848:
    v1 = s4 + v1;                                               // 0x001db84c: addu $v1, $s4, $v1
    v1 = g_00362c70;  // Global at 0x00362c70                   // 0x001db850: lw $v1, 0($v1)
    s6 = s4 + v1;                                               // 0x001db854: addu $s6, $s4, $v1
    v1 = *(int32_t*)(s6);                                       // 0x001db858: lw $v1, 0($s6)
    goto label_0x1db9d8;                                        // 0x001db85c: b 0x1db9d8
    local_a0 = v1;                                              // 0x001db860: sw $v1, 0xa0($sp)
label_0x1db864:
    if (at == 0) goto label_0x1db9e8;                           // 0x001db864: beqz $at, 0x1db9e8
    a0 = s2 << 2;                                               // 0x001db868: sll $a0, $s2, 2
    v1 = s1 << 4;                                               // 0x001db86c: sll $v1, $s1, 4
    a0 = s6 + a0;                                               // 0x001db870: addu $a0, $s6, $a0
    v1 = v1 - s1;                                               // 0x001db874: subu $v1, $v1, $s1
    a3 = *(int32_t*)((a0) + 4);                                 // 0x001db878: lw $a3, 4($a0)
    a2 = -1;                                                    // 0x001db87c: addiu $a2, $zero, -1
    a1 = 0x37;                                                  // 0x001db880: addiu $a1, $zero, 0x37
    s5 = s6 + a3;                                               // 0x001db884: addu $s5, $s6, $a3
    a0 = v1 << 3;                                               // 0x001db888: sll $a0, $v1, 3
    a3 = *(int32_t*)(s5);                                       // 0x001db88c: lw $a3, 0($s5)
    v1 = 0x36 << 16;                                            // 0x001db890: lui $v1, 0x36
    v1 = v1 + 0x2c70;                                           // 0x001db894: addiu $v1, $v1, 0x2c70
    s0 = v1 + a0;                                               // 0x001db898: addu $s0, $v1, $a0
    a0 = s0 + 6;                                                // 0x001db89c: addiu $a0, $s0, 6
    *(uint8_t*)(s0) = a3;                                       // 0x001db8a0: sb $a3, 0($s0)
    a3 = *(int32_t*)((s5) + 4);                                 // 0x001db8a4: lw $a3, 4($s5)
    *(uint8_t*)((s0) + 1) = a3;                                 // 0x001db8a8: sb $a3, 1($s0)
    a3 = *(int32_t*)((s5) + 8);                                 // 0x001db8ac: lw $a3, 8($s5)
    *(uint8_t*)((s0) + 2) = a3;                                 // 0x001db8b0: sb $a3, 2($s0)
    a3 = *(int32_t*)((s5) + 0x20);                              // 0x001db8b4: lw $a3, 0x20($s5)
    *(uint8_t*)((s0) + 3) = a3;                                 // 0x001db8b8: sb $a3, 3($s0)
    a3 = *(int32_t*)((s5) + 0xc);                               // 0x001db8bc: lw $a3, 0xc($s5)
    *(uint16_t*)((s0) + 4) = a3;                                // 0x001db8c0: sh $a3, 4($s0)
    a3 = *(int32_t*)((s5) + 0x24);                              // 0x001db8c4: lw $a3, 0x24($s5)
    *(uint8_t*)((s0) + 6) = a3;                                 // 0x001db8c8: sb $a3, 6($s0)
    FPU_F2 = *(float*)((s5) + 0x10);  // Load float             // 0x001db8cc: lwc1 $f2, 0x10($s5)
    FPU_F1 = *(float*)((s5) + 0x14);  // Load float             // 0x001db8d0: lwc1 $f1, 0x14($s5)
    FPU_F0 = *(float*)((s5) + 0x18);  // Load float             // 0x001db8d4: lwc1 $f0, 0x18($s5)
    *(float*)((s0) + 8) = FPU_F2;  // Store float               // 0x001db8d8: swc1 $f2, 8($s0)
    *(float*)((s0) + 0xc) = FPU_F1;  // Store float             // 0x001db8dc: swc1 $f1, 0xc($s0)
    *(float*)((s0) + 0x10) = FPU_F0;  // Store float            // 0x001db8e0: swc1 $f0, 0x10($s0)
    a3 = *(int32_t*)((s5) + 0x1c);                              // 0x001db8e4: lw $a3, 0x1c($s5)
    *(uint16_t*)((s0) + 0x14) = a3;                             // 0x001db8e8: sh $a3, 0x14($s0)
    a3 = *(int32_t*)((s5) + 0x48);                              // 0x001db8ec: lw $a3, 0x48($s5)
    *(uint16_t*)((s0) + 0x16) = a3;                             // 0x001db8f0: sh $a3, 0x16($s0)
    a3 = *(int32_t*)((s5) + 0x4c);                              // 0x001db8f4: lw $a3, 0x4c($s5)
    *(uint16_t*)((s0) + 0x22) = a3;                             // 0x001db8f8: sh $a3, 0x22($s0)
    *(uint8_t*)((s0) + 0x1e) = 0;                               // 0x001db8fc: sb $zero, 0x1e($s0)
    a3 = *(int32_t*)((s5) + 0x50);                              // 0x001db900: lw $a3, 0x50($s5)
    *(uint8_t*)((s0) + 0x34) = a3;                              // 0x001db904: sb $a3, 0x34($s0)
    *(uint32_t*)((s0) + 0x28) = a2;                             // 0x001db908: sw $a2, 0x28($s0)
    *(uint32_t*)((s0) + 0x30) = a2;                             // 0x001db90c: sw $a2, 0x30($s0)
    a2 = *(uint16_t*)((s0) + 4);                                // 0x001db910: lhu $a2, 4($s0)
    if (a2 == a1) goto label_0x1db930;                          // 0x001db914: beq $a2, $a1, 0x1db930
    v1 = s0 + 0x22;                                             // 0x001db918: addiu $v1, $s0, 0x22
    a1 = 0x2f;                                                  // 0x001db91c: addiu $a1, $zero, 0x2f
    if (a2 == a1) goto label_0x1db930;                          // 0x001db920: beq $a2, $a1, 0x1db930
    /* nop */                                                   // 0x001db924: nop 
    *(uint32_t*)((s5) + 0x24) = 0;                              // 0x001db928: sw $zero, 0x24($s5)
    *(uint8_t*)(a0) = 0;                                        // 0x001db92c: sb $zero, 0($a0)
label_0x1db930:
    v1 = g_00362c70;  // Global at 0x00362c70                   // 0x001db930: lhu $v1, 0($v1)
    v1 = v1 & 0x10;                                             // 0x001db934: andi $v1, $v1, 0x10
    if (v1 == 0) goto label_0x1db94c;                           // 0x001db938: beqz $v1, 0x1db94c
    /* nop */                                                   // 0x001db93c: nop 
    v1 = *(uint8_t*)((s0) + 7);                                 // 0x001db940: lbu $v1, 7($s0)
    v1 = v1 | 0x10;                                             // 0x001db944: ori $v1, $v1, 0x10
    *(uint8_t*)((s0) + 7) = v1;                                 // 0x001db948: sb $v1, 7($s0)
label_0x1db94c:
    a0 = *(int32_t*)((s5) + 0x24);                              // 0x001db94c: lw $a0, 0x24($s5)
    v1 = 2;                                                     // 0x001db950: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1db9a8;                          // 0x001db954: beq $a0, $v1, 0x1db9a8
    s7 = s0 + 0x5c;                                             // 0x001db958: addiu $s7, $s0, 0x5c
    v1 = 1;                                                     // 0x001db95c: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1db99c;                          // 0x001db960: beq $a0, $v1, 0x1db99c
    /* nop */                                                   // 0x001db964: nop 
    if (a0 == 0) goto label_0x1db978;                           // 0x001db968: beqz $a0, 0x1db978
    /* nop */                                                   // 0x001db96c: nop 
    goto label_0x1db9d4;                                        // 0x001db970: b 0x1db9d4
    s2 = s2 + 1;                                                // 0x001db974: addiu $s2, $s2, 1
label_0x1db978:
    v1 = *(int32_t*)((s5) + 0x2c);                              // 0x001db978: lw $v1, 0x2c($s5)
    *(uint16_t*)((s0) + 0x54) = v1;                             // 0x001db97c: sh $v1, 0x54($s0)
    v1 = *(int32_t*)((s5) + 0x30);                              // 0x001db980: lw $v1, 0x30($s5)
    *(uint16_t*)((s0) + 0x56) = v1;                             // 0x001db984: sh $v1, 0x56($s0)
    v1 = *(int32_t*)((s5) + 0x28);                              // 0x001db988: lw $v1, 0x28($s5)
    *(uint8_t*)((s0) + 0x58) = v1;                              // 0x001db98c: sb $v1, 0x58($s0)
    v1 = *(int32_t*)((s5) + 0x34);                              // 0x001db990: lw $v1, 0x34($s5)
    goto label_0x1db9d0;                                        // 0x001db994: b 0x1db9d0
    *(uint8_t*)((s0) + 0x1f) = v1;                              // 0x001db998: sb $v1, 0x1f($s0)
label_0x1db99c:
    v1 = *(int32_t*)((s5) + 0x28);                              // 0x001db99c: lw $v1, 0x28($s5)
    goto label_0x1db9d0;                                        // 0x001db9a0: b 0x1db9d0
    *(uint8_t*)((s0) + 0x58) = v1;                              // 0x001db9a4: sb $v1, 0x58($s0)
label_0x1db9a8:
    a1 = s5 + 0x34;                                             // 0x001db9a8: addiu $a1, $s5, 0x34
    func_0018da60();  // 0x18da10                                // 0x001db9b0: jal 0x18da10
    a2 = 4;                                                     // 0x001db9b4: addiu $a2, $zero, 4
    v1 = *(int32_t*)((s5) + 0x44);                              // 0x001db9b8: lw $v1, 0x44($s5)
    *(uint32_t*)((s0) + 0x6c) = v1;                             // 0x001db9bc: sw $v1, 0x6c($s0)
    v1 = *(int32_t*)((s5) + 0x28);                              // 0x001db9c0: lw $v1, 0x28($s5)
    *(uint8_t*)((s0) + 0x58) = v1;                              // 0x001db9c4: sb $v1, 0x58($s0)
    v1 = *(int32_t*)(s7);                                       // 0x001db9c8: lw $v1, 0($s7)
    *(uint16_t*)((s0) + 0x1a) = v1;                             // 0x001db9cc: sh $v1, 0x1a($s0)
label_0x1db9d0:
    s2 = s2 + 1;                                                // 0x001db9d0: addiu $s2, $s2, 1
label_0x1db9d4:
    s1 = s1 + 1;                                                // 0x001db9d4: addiu $s1, $s1, 1
label_0x1db9d8:
    v1 = local_a0;                                              // 0x001db9d8: lw $v1, 0xa0($sp)
    v1 = ((unsigned)s2 < (unsigned)v1) ? 1 : 0;                 // 0x001db9dc: sltu $v1, $s2, $v1
    if (v1 != 0) goto label_0x1db864;                           // 0x001db9e0: bnez $v1, 0x1db864
    at = ((unsigned)s1 < (unsigned)0x40) ? 1 : 0;               // 0x001db9e4: sltiu $at, $s1, 0x40
label_0x1db9e8:
    s3 = s3 + 1;                                                // 0x001db9e8: addiu $s3, $s3, 1
label_0x1db9ec:
    v1 = ((unsigned)s3 < (unsigned)fp) ? 1 : 0;                 // 0x001db9ec: sltu $v1, $s3, $fp
    if (v1 != 0) goto label_0x1db848;                           // 0x001db9f0: bnez $v1, 0x1db848
    v1 = s3 << 3;                                               // 0x001db9f4: sll $v1, $s3, 3
label_0x1db9f8:
label_0x1db9fc:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001db9fc: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001dba04: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001dba08: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001dba0c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001dba14: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001dba18: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dba1c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dba20: jr $ra
    sp = sp + 0x1b0;                                            // 0x001dba24: addiu $sp, $sp, 0x1b0
}