void func_00108288() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00108288: addiu $sp, $sp, -0x30
    s3 = *(int32_t*)((s0) + 0x10);                              // 0x001082ac: lw $s3, 0x10($s0)
    s1 = *(int32_t*)((s2) + 0x10);                              // 0x001082b0: lw $s1, 0x10($s2)
    v0 = (s3 < s1) ? 1 : 0;                                     // 0x001082b4: slt $v0, $s3, $s1
    /* beqzl $v0, 0x1082d8 */                                   // 0x001082b8: beqzl $v0, 0x1082d8
    a1 = *(int32_t*)((s0) + 8);                                 // 0x001082bc: lw $a1, 8($s0)
    s1 = *(int32_t*)((s2) + 0x10);                              // 0x001082d0: lw $s1, 0x10($s2)
    a1 = *(int32_t*)((s0) + 8);                                 // 0x001082d4: lw $a1, 8($s0)
    s4 = s3 + s1;                                               // 0x001082d8: addu $s4, $s3, $s1
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001082dc: lw $v0, 4($s0)
    a1 = (a1 < s4) ? 1 : 0;                                     // 0x001082e0: slt $a1, $a1, $s4
    func_00107ea8();  // 0x107e00                                // 0x001082e4: jal 0x107e00
    a1 = v0 + a1;                                               // 0x001082e8: addu $a1, $v0, $a1
    t9 = s4 << 2;                                               // 0x001082ec: sll $t9, $s4, 2
    t7 = t8 + 0x14;                                             // 0x001082f4: addiu $t7, $t8, 0x14
    t5 = t7 + t9;                                               // 0x001082f8: addu $t5, $t7, $t9
    v0 = ((unsigned)t7 < (unsigned)t5) ? 1 : 0;                 // 0x001082fc: sltu $v0, $t7, $t5
    if (v0 == 0) goto label_0x10832c;                           // 0x00108300: beqz $v0, 0x10832c
    *(uint32_t*)(t0) = 0;                                       // 0x00108308: sw $zero, 0($t0)
    /* nop */                                                   // 0x0010830c: nop 
    t0 = t0 + 4;                                                // 0x00108310: addiu $t0, $t0, 4
    v0 = ((unsigned)t0 < (unsigned)t5) ? 1 : 0;                 // 0x00108314: sltu $v0, $t0, $t5
    /* nop */                                                   // 0x00108318: nop 
    /* nop */                                                   // 0x0010831c: nop 
    /* nop */                                                   // 0x00108320: nop 
    /* bnezl $v0, 0x108310 */                                   // 0x00108324: bnezl $v0, 0x108310
    *(uint32_t*)(t0) = 0;                                       // 0x00108328: sw $zero, 0($t0)
label_0x10832c:
    t3 = s2 + 0x14;                                             // 0x0010832c: addiu $t3, $s2, 0x14
    v0 = s1 << 2;                                               // 0x00108330: sll $v0, $s1, 2
    s1 = t3 + v0;                                               // 0x00108334: addu $s1, $t3, $v0
    v0 = s3 << 2;                                               // 0x00108338: sll $v0, $s3, 2
    t5 = s0 + 0x14;                                             // 0x0010833c: addiu $t5, $s0, 0x14
    v1 = ((unsigned)t3 < (unsigned)s1) ? 1 : 0;                 // 0x00108340: sltu $v1, $t3, $s1
    t6 = t5 + v0;                                               // 0x00108344: addu $t6, $t5, $v0
    if (v1 == 0) goto label_0x108444;                           // 0x00108348: beqz $v1, 0x108444
label_0x108350:
    v0 = *(int32_t*)(t3);                                       // 0x00108350: lw $v0, 0($t3)
    t1 = v0 & 0xffff;                                           // 0x00108354: andi $t1, $v0, 0xffff
    if (t1 == 0) goto label_0x1083c0;                           // 0x00108358: beqz $t1, 0x1083c0
label_0x108368:
    v1 = *(int32_t*)(t0);                                       // 0x00108368: lw $v1, 0($t0)
    t0 = t0 + 4;                                                // 0x0010836c: addiu $t0, $t0, 4
    a1 = *(int32_t*)(a3);                                       // 0x00108370: lw $a1, 0($a3)
    a2 = ((unsigned)t0 < (unsigned)t6) ? 1 : 0;                 // 0x00108374: sltu $a2, $t0, $t6
    v0 = v1 & 0xffff;                                           // 0x00108378: andi $v0, $v1, 0xffff
    v1 = (unsigned)v1 >> 0x10;                                  // 0x0010837c: srl $v1, $v1, 0x10
    /* multiply: v0 * t1 -> hi:lo */                            // 0x00108380: mult $ac2, $v0, $t1
    a0 = a1 & 0xffff;                                           // 0x00108388: andi $a0, $a1, 0xffff
    a1 = (unsigned)a1 >> 0x10;                                  // 0x0010838c: srl $a1, $a1, 0x10
    v0 = v0 + a0;                                               // 0x00108390: addu $v0, $v0, $a0
    v1 = v1 + a1;                                               // 0x00108394: addu $v1, $v1, $a1
    v0 = v0 + t2;                                               // 0x00108398: addu $v0, $v0, $t2
    t2 = (unsigned)v0 >> 0x10;                                  // 0x0010839c: srl $t2, $v0, 0x10
    *(uint16_t*)(a3) = v0;                                      // 0x001083a0: sh $v0, 0($a3)
    v0 = v1 + t2;                                               // 0x001083a4: addu $v0, $v1, $t2
    *(uint16_t*)((a3) + 2) = v0;                                // 0x001083a8: sh $v0, 2($a3)
    a3 = a3 + 4;                                                // 0x001083ac: addiu $a3, $a3, 4
    if (a2 != 0) goto label_0x108368;                           // 0x001083b0: bnez $a2, 0x108368
    t2 = (unsigned)v0 >> 0x10;                                  // 0x001083b4: srl $t2, $v0, 0x10
    *(uint32_t*)(a3) = t2;                                      // 0x001083b8: sw $t2, 0($a3)
    v0 = *(int32_t*)(t3);                                       // 0x001083bc: lw $v0, 0($t3)
label_0x1083c0:
    t1 = (unsigned)v0 >> 0x10;                                  // 0x001083c0: srl $t1, $v0, 0x10
    if (t1 == 0) goto label_0x108434;                           // 0x001083c4: beqz $t1, 0x108434
    v0 = *(int32_t*)(a3);                                       // 0x001083d0: lw $v0, 0($a3)
    /* nop */                                                   // 0x001083dc: nop 
label_0x1083e0:
    v1 = *(int32_t*)(t0);                                       // 0x001083e0: lw $v1, 0($t0)
    t0 = t0 + 4;                                                // 0x001083e4: addiu $t0, $t0, 4
    *(uint16_t*)(a3) = v0;                                      // 0x001083e8: sh $v0, 0($a3)
    a0 = (unsigned)a0 >> 0x10;                                  // 0x001083ec: srl $a0, $a0, 0x10
    v0 = v1 & 0xffff;                                           // 0x001083f0: andi $v0, $v1, 0xffff
    v1 = (unsigned)v1 >> 0x10;                                  // 0x001083f4: srl $v1, $v1, 0x10
    /* multiply: v0 * t1 -> hi:lo */                            // 0x001083f8: mult $ac2, $v0, $t1
    a1 = ((unsigned)t0 < (unsigned)t6) ? 1 : 0;                 // 0x00108400: sltu $a1, $t0, $t6
    v0 = v0 + a0;                                               // 0x00108404: addu $v0, $v0, $a0
    v0 = v0 + t2;                                               // 0x00108408: addu $v0, $v0, $t2
    *(uint16_t*)((a3) + 2) = v0;                                // 0x0010840c: sh $v0, 2($a3)
    a3 = a3 + 4;                                                // 0x00108410: addiu $a3, $a3, 4
    a0 = *(int32_t*)(a3);                                       // 0x00108414: lw $a0, 0($a3)
    t2 = (unsigned)v0 >> 0x10;                                  // 0x00108418: srl $t2, $v0, 0x10
    v0 = a0 & 0xffff;                                           // 0x0010841c: andi $v0, $a0, 0xffff
    v1 = v1 + v0;                                               // 0x00108420: addu $v1, $v1, $v0
    v0 = v1 + t2;                                               // 0x00108424: addu $v0, $v1, $t2
    if (a1 != 0) goto label_0x1083e0;                           // 0x00108428: bnez $a1, 0x1083e0
    t2 = (unsigned)v0 >> 0x10;                                  // 0x0010842c: srl $t2, $v0, 0x10
    *(uint32_t*)(a3) = v0;                                      // 0x00108430: sw $v0, 0($a3)
label_0x108434:
    t3 = t3 + 4;                                                // 0x00108434: addiu $t3, $t3, 4
    v0 = ((unsigned)t3 < (unsigned)s1) ? 1 : 0;                 // 0x00108438: sltu $v0, $t3, $s1
    if (v0 != 0) goto label_0x108350;                           // 0x0010843c: bnez $v0, 0x108350
    t4 = t4 + 4;                                                // 0x00108440: addiu $t4, $t4, 4
label_0x108444:
    a3 = t7 + t9;                                               // 0x00108444: addu $a3, $t7, $t9
    if (s4 <= 0) goto label_0x108470;                           // 0x00108448: blezl $s4, 0x108470
    *(uint32_t*)((t8) + 0x10) = s4;                             // 0x0010844c: sw $s4, 0x10($t8)
    a3 = a3 + -4;                                               // 0x00108450: addiu $a3, $a3, -4
    v0 = *(int32_t*)(a3);                                       // 0x00108454: lw $v0, 0($a3)
    /* nop */                                                   // 0x00108458: nop 
    /* nop */                                                   // 0x0010845c: nop 
    /* nop */                                                   // 0x00108460: nop 
    /* beqzl $v0, 0x108448 */                                   // 0x00108464: beqzl $v0, 0x108448
    s4 = s4 + -1;                                               // 0x00108468: addiu $s4, $s4, -1
    *(uint32_t*)((t8) + 0x10) = s4;                             // 0x0010846c: sw $s4, 0x10($t8)
label_0x108470:
    return;                                                     // 0x0010848c: jr $ra
    sp = sp + 0x30;                                             // 0x00108490: addiu $sp, $sp, 0x30
}