void func_001246a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_30, local_40, local_42, local_43, local_44, local_46, local_48;
    uint32_t local_4c, local_8;
    
    sp = sp + -0xa0;                                            // 0x001246a8: addiu $sp, $sp, -0xa0
    v0 = 1;                                                     // 0x001246ac: addiu $v0, $zero, 1
    s3 = s0 + 0xc;                                              // 0x001246cc: addiu $s3, $s0, 0xc
    s4 = s0 + 0x18;                                             // 0x001246d4: addiu $s4, $s0, 0x18
    s5 = s0 + 0xd;                                              // 0x001246dc: addiu $s5, $s0, 0xd
    s6 = s0 + 0xe;                                              // 0x001246e4: addiu $s6, $s0, 0xe
    s7 = s0 + 0x10;                                             // 0x001246ec: addiu $s7, $s0, 0x10
    fp = s0 + 0xf;                                              // 0x001246f4: addiu $fp, $s0, 0xf
    a2 = sp + 0x40;                                             // 0x001246fc: addiu $a2, $sp, 0x40
    *(uint16_t*)((s0) + 2) = v0;                                // 0x00124700: sh $v0, 2($s0)
    v0 = s0 + 0x14;                                             // 0x00124704: addiu $v0, $s0, 0x14
    local_4c = v0;                                              // 0x00124724: sw $v0, 0x4c($sp)
    local_0 = s4;                                               // 0x00124728: sw $s4, 0($sp)
    func_00126558();  // 0x126458                                // 0x0012472c: jal 0x126458
    local_8 = s7;                                               // 0x00124730: sw $s7, 8($sp)
    if (v0 < 0) goto label_0x124964;                            // 0x00124734: bltz $v0, 0x124964
    v0 = *(int8_t*)(s3);                                        // 0x0012473c: lb $v0, 0($s3)
    v0 = (v0 < 5) ? 1 : 0;                                      // 0x00124740: slti $v0, $v0, 5
    if (v0 != 0) goto label_0x124830;                           // 0x00124744: bnez $v0, 0x124830
    v0 = *(int32_t*)((s0) + 0xb0);                              // 0x0012474c: lw $v0, 0xb0($s0)
    /* bnezl $v0, 0x124778 */                                   // 0x00124750: bnezl $v0, 0x124778
    v0 = 8;                                                     // 0x00124754: addiu $v0, $zero, 8
    a0 = 0x22 << 16;                                            // 0x00124758: lui $a0, 0x22
    a1 = 0x22 << 16;                                            // 0x0012475c: lui $a1, 0x22
    a0 = &str_002223e8;  // "can't play AHX data by this handle" // 0x00124760: addiu $a0, $a0, 0x23e8
    func_00127e58();  // 0x127de8                                // 0x00124764: jal 0x127de8
    a1 = &str_00222408;  // "\nADXF/PS2EE Ver.7.10 Build:Jul 28 2003 17:49:52\n" // 0x00124768: addiu $a1, $a1, 0x2408
label_0x12476c:
    goto label_0x124964;                                        // 0x0012476c: b 0x124964
    v0 = -1;                                                    // 0x00124770: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00124774: nop 
    t1 = 0x60;                                                  // 0x00124778: addiu $t1, $zero, 0x60
    *(uint8_t*)(s5) = v0;                                       // 0x0012477c: sb $v0, 0($s5)
    t0 = 0xa;                                                   // 0x00124780: addiu $t0, $zero, 0xa
    v1 = *(int8_t*)(s6);                                        // 0x0012478c: lb $v1, 0($s6)
    a2 = sp + 0x42;                                             // 0x00124790: addiu $a2, $sp, 0x42
    a3 = sp + 0x43;                                             // 0x00124794: addiu $a3, $sp, 0x43
    v0 = v1 << 1;                                               // 0x00124798: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0012479c: addu $v0, $v0, $v1
    v0 = v0 << 6;                                               // 0x001247a0: sll $v0, $v0, 6
    *(uint8_t*)(fp) = v0;                                       // 0x001247a4: sb $v0, 0($fp)
    *(uint32_t*)(s7) = t1;                                      // 0x001247a8: sw $t1, 0($s7)
    *(uint16_t*)((s0) + 0x98) = t0;                             // 0x001247ac: sh $t0, 0x98($s0)
    *(uint16_t*)((s0) + 0x1c) = 0;                              // 0x001247b0: sh $zero, 0x1c($s0)
    *(uint16_t*)((s0) + 0x24) = 0;                              // 0x001247b4: sh $zero, 0x24($s0)
    *(uint16_t*)((s0) + 0x26) = 0;                              // 0x001247b8: sh $zero, 0x26($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x001247bc: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x001247c0: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001247c4: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001247c8: sw $zero, 0x30($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001247cc: sw $zero, 0x34($s0)
    func_00126650();  // 0x1265d8                                // 0x001247d0: jal 0x1265d8
    *(uint32_t*)((s0) + 0x88) = 0;                              // 0x001247d4: sw $zero, 0x88($s0)
    if (v0 < 0) goto label_0x1248b4;                            // 0x001247d8: bltz $v0, 0x1248b4
    a3 = *(int32_t*)(s4);                                       // 0x001247e0: lw $a3, 0($s4)
    a1 = local_42;                                              // 0x001247e4: lbu $a1, 0x42($sp)
    t0 = sp + 0x32;                                             // 0x001247e8: addiu $t0, $sp, 0x32
    a2 = local_43;                                              // 0x001247ec: lbu $a2, 0x43($sp)
    t1 = sp + 0x34;                                             // 0x001247f0: addiu $t1, $sp, 0x34
    t2 = sp + 0x36;                                             // 0x001247f4: addiu $t2, $sp, 0x36
    func_00124e60();  // 0x124d60                                // 0x001247f8: jal 0x124d60
    local_30 = 0;                                               // 0x001247fc: sh $zero, 0x30($sp)
    if (v0 < 0) goto label_0x124964;                            // 0x00124800: bltz $v0, 0x124964
    v0 = -1;                                                    // 0x00124804: addiu $v0, $zero, -1
    v0 = 0x1f << 16;                                            // 0x00124808: lui $v0, 0x1f
    v0 = g_001f1f48;  // Global at 0x001f1f48                   // 0x0012480c: lw $v0, 0x1f48($v0)
    /* beqzl $v0, 0x124930 */                                   // 0x00124810: beqzl $v0, 0x124930
    v0 = *(int8_t*)((s0) + 0xe);                                // 0x00124814: lb $v0, 0xe($s0)
    a0 = *(int32_t*)((s0) + 0xb0);                              // 0x00124818: lw $a0, 0xb0($s0)
    /* call function at address in v0 */                        // 0x0012481c: jalr $v0
    a1 = sp + 0x30;                                             // 0x00124820: addiu $a1, $sp, 0x30
    goto label_0x124930;                                        // 0x00124824: b 0x124930
    v0 = *(int8_t*)((s0) + 0xe);                                // 0x00124828: lb $v0, 0xe($s0)
    /* nop */                                                   // 0x0012482c: nop 
label_0x124830:
    a2 = sp + 0x42;                                             // 0x00124834: addiu $a2, $sp, 0x42
    func_00126650();  // 0x1265d8                                // 0x00124838: jal 0x1265d8
    a3 = sp + 0x43;                                             // 0x0012483c: addiu $a3, $sp, 0x43
    if (v0 < 0) goto label_0x1248b4;                            // 0x00124840: bltz $v0, 0x1248b4
    a3 = *(int32_t*)(s4);                                       // 0x00124848: lw $a3, 0($s4)
    a1 = local_42;                                              // 0x0012484c: lbu $a1, 0x42($sp)
    t0 = sp + 0x44;                                             // 0x00124850: addiu $t0, $sp, 0x44
    a2 = local_43;                                              // 0x00124854: lbu $a2, 0x43($sp)
    t1 = sp + 0x46;                                             // 0x00124858: addiu $t1, $sp, 0x46
    func_00124e60();  // 0x124d60                                // 0x0012485c: jal 0x124d60
    t2 = sp + 0x48;                                             // 0x00124860: addiu $t2, $sp, 0x48
    if (v0 < 0) goto label_0x12476c;                            // 0x00124864: bltz $v0, 0x12476c
    s3 = s0 + 0x1c;                                             // 0x00124868: addiu $s3, $s0, 0x1c
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0012486c: lw $a0, 8($s0)
    a1 = local_44;                                              // 0x00124870: lh $a1, 0x44($sp)
    a2 = local_46;                                              // 0x00124874: lh $a2, 0x46($sp)
    func_00134c18();  // 0x134be8                                // 0x00124878: jal 0x134be8
    a3 = local_48;                                              // 0x0012487c: lh $a3, 0x48($sp)
    func_001265d8();  // 0x126558                                // 0x00124888: jal 0x126558
    if (v0 < 0) goto label_0x1248b4;                            // 0x00124890: bltz $v0, 0x1248b4
    s4 = sp + 0x20;                                             // 0x00124894: addiu $s4, $sp, 0x20
    a2 = sp + 0x10;                                             // 0x001248a0: addiu $a2, $sp, 0x10
    func_00126788();  // 0x126650                                // 0x001248a4: jal 0x126650
    if (v0 >= 0) goto label_0x1248c0;                           // 0x001248ac: bgezl $v0, 0x1248c0
    v0 = local_4c;                                              // 0x001248b0: lw $v0, 0x4c($sp)
label_0x1248b4:
    goto label_0x124964;                                        // 0x001248b4: b 0x124964
    /* nop */                                                   // 0x001248bc: nop 
label_0x1248c0:
    a2 = *(int16_t*)(s3);                                       // 0x001248c0: lh $a2, 0($s3)
    a1 = g_001f0000;  // Global at 0x001f0000                   // 0x001248c4: lw $a1, 0($v0)
    func_00134b98();  // 0x134b70                                // 0x001248c8: jal 0x134b70
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001248cc: lw $a0, 8($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001248d0: lw $a0, 8($s0)
    a1 = sp + 0x10;                                             // 0x001248d4: addiu $a1, $sp, 0x10
    func_00134bc0();  // 0x134b98                                // 0x001248d8: jal 0x134b98
    v0 = s0 + 0x34;                                             // 0x001248e0: addiu $v0, $s0, 0x34
    a2 = s0 + 0x20;                                             // 0x001248e4: addiu $a2, $s0, 0x20
    a3 = s0 + 0x24;                                             // 0x001248e8: addiu $a3, $s0, 0x24
    t0 = s0 + 0x26;                                             // 0x001248ec: addiu $t0, $s0, 0x26
    t1 = s0 + 0x28;                                             // 0x001248f0: addiu $t1, $s0, 0x28
    t2 = s0 + 0x2c;                                             // 0x001248f4: addiu $t2, $s0, 0x2c
    t3 = s0 + 0x30;                                             // 0x001248f8: addiu $t3, $s0, 0x30
    func_001269e8();  // 0x126788                                // 0x00124904: jal 0x126788
    local_0 = v0;                                               // 0x00124908: sw $v0, 0($sp)
    a2 = s0 + 0xc8;                                             // 0x00124914: addiu $a2, $s0, 0xc8
    a3 = s0 + 0xcc;                                             // 0x00124918: addiu $a3, $s0, 0xcc
    t0 = s0 + 0xdc;                                             // 0x0012491c: addiu $t0, $s0, 0xdc
    func_00126be0();  // 0x1269e8                                // 0x00124920: jal 0x1269e8
    t1 = s0 + 0xde;                                             // 0x00124924: addiu $t1, $s0, 0xde
    *(uint16_t*)((s0) + 0x98) = 0;                              // 0x00124928: sh $zero, 0x98($s0)
    v0 = *(int8_t*)((s0) + 0xe);                                // 0x0012492c: lb $v0, 0xe($s0)
label_0x124930:
    v1 = *(int8_t*)((s0) + 0xf);                                // 0x00124930: lb $v1, 0xf($s0)
    a0 = *(int32_t*)((s0) + 0x10);                              // 0x00124934: lw $a0, 0x10($s0)
    a1 = *(int32_t*)((s0) + 0x3c);                              // 0x00124938: lw $a1, 0x3c($s0)
    a2 = *(int32_t*)((s0) + 0x40);                              // 0x0012493c: lw $a2, 0x40($s0)
    a3 = *(int32_t*)((s0) + 0x44);                              // 0x00124940: lw $a3, 0x44($s0)
    *(uint32_t*)((s0) + 0x50) = v0;                             // 0x00124944: sw $v0, 0x50($s0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x00124948: sw $v1, 0x54($s0)
    *(uint32_t*)((s0) + 0x58) = a0;                             // 0x0012494c: sw $a0, 0x58($s0)
    *(uint32_t*)((s0) + 0x5c) = a1;                             // 0x00124950: sw $a1, 0x5c($s0)
    *(uint32_t*)((s0) + 0x60) = a2;                             // 0x00124954: sw $a2, 0x60($s0)
    *(uint32_t*)((s0) + 0x64) = a3;                             // 0x00124958: sw $a3, 0x64($s0)
    *(uint32_t*)((s0) + 0x8c) = 0;                              // 0x0012495c: sw $zero, 0x8c($s0)
    v0 = local_40;                                              // 0x00124960: lh $v0, 0x40($sp)
label_0x124964:
    return;                                                     // 0x0012498c: jr $ra
    sp = sp + 0xa0;                                             // 0x00124990: addiu $sp, $sp, 0xa0
}