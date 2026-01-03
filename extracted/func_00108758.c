void func_00108758() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00108758: addiu $sp, $sp, -0x30
    func_001086f0();  // 1086f0                                // 0x00108780: jal 0x1086f0
    if (s0 != 0) goto label_0x1087b0;                           // 0x0010878c: bnez $s0, 0x1087b0
    func_00107e00();  // 107e00                                // 0x00108794: jal 0x107e00
    v1 = 1;                                                     // 0x0010879c: addiu $v1, $zero, 1
    *(uint32_t*)((t3) + 0x10) = v1;                             // 0x001087a4: sw $v1, 0x10($t3)
    goto label_0x1088cc;                                        // 0x001087a8: b 0x1088cc
    *(uint32_t*)((t3) + 0x14) = 0;                              // 0x001087ac: sw $zero, 0x14($t3)
label_0x1087b0:
    if (s0 >= 0) goto label_0x1087c8;                           // 0x001087b0: bgezl $s0, 0x1087c8
    s0 = 1;                                                     // 0x001087c0: addiu $s0, $zero, 1
label_0x1087c8:
    a1 = *(int32_t*)((s1) + 4);                                 // 0x001087c8: lw $a1, 4($s1)
    func_00107e00();  // 107e00                                // 0x001087cc: jal 0x107e00
    t0 = s1 + 0x14;                                             // 0x001087d4: addiu $t0, $s1, 0x14
    t1 = s2 + 0x14;                                             // 0x001087dc: addiu $t1, $s2, 0x14
    *(uint32_t*)((t3) + 0xc) = s0;                              // 0x001087e0: sw $s0, 0xc($t3)
    a3 = t3 + 0x14;                                             // 0x001087e4: addiu $a3, $t3, 0x14
    t4 = *(int32_t*)((s1) + 0x10);                              // 0x001087ec: lw $t4, 0x10($s1)
    v0 = *(int32_t*)((s2) + 0x10);                              // 0x001087f0: lw $v0, 0x10($s2)
    v1 = t4 << 2;                                               // 0x001087f4: sll $v1, $t4, 2
    v0 = v0 << 2;                                               // 0x001087f8: sll $v0, $v0, 2
    t5 = t0 + v1;                                               // 0x001087fc: addu $t5, $t0, $v1
    a2 = t1 + v0;                                               // 0x00108800: addu $a2, $t1, $v0
    /* nop */                                                   // 0x00108804: nop 
label_0x108808:
    a1 = *(int32_t*)(t0);                                       // 0x00108808: lw $a1, 0($t0)
    t0 = t0 + 4;                                                // 0x0010880c: addiu $t0, $t0, 4
    v0 = *(int32_t*)(t1);                                       // 0x00108810: lw $v0, 0($t1)
    t1 = t1 + 4;                                                // 0x00108814: addiu $t1, $t1, 4
    v1 = a1 & 0xffff;                                           // 0x00108818: andi $v1, $a1, 0xffff
    a1 = (unsigned)a1 >> 0x10;                                  // 0x0010881c: srl $a1, $a1, 0x10
    a0 = v0 & 0xffff;                                           // 0x00108820: andi $a0, $v0, 0xffff
    v0 = (unsigned)v0 >> 0x10;                                  // 0x00108824: srl $v0, $v0, 0x10
    v1 = v1 - a0;                                               // 0x00108828: subu $v1, $v1, $a0
    a1 = a1 - v0;                                               // 0x0010882c: subu $a1, $a1, $v0
    v1 = v1 + t2;                                               // 0x00108830: addu $v1, $v1, $t2
    v0 = ((unsigned)t1 < (unsigned)a2) ? 1 : 0;                 // 0x00108834: sltu $v0, $t1, $a2
    t2 = v1 >> 0x10;                                            // 0x00108838: sra $t2, $v1, 0x10
    *(uint16_t*)(a3) = v1;                                      // 0x0010883c: sh $v1, 0($a3)
    a1 = a1 + t2;                                               // 0x00108840: addu $a1, $a1, $t2
    *(uint16_t*)((a3) + 2) = a1;                                // 0x00108844: sh $a1, 2($a3)
    a3 = a3 + 4;                                                // 0x00108848: addiu $a3, $a3, 4
    if (v0 != 0) goto label_0x108808;                           // 0x0010884c: bnez $v0, 0x108808
    t2 = a1 >> 0x10;                                            // 0x00108850: sra $t2, $a1, 0x10
    v0 = ((unsigned)t0 < (unsigned)t5) ? 1 : 0;                 // 0x00108854: sltu $v0, $t0, $t5
    /* beqzl $v0, 0x108898 */                                   // 0x00108858: beqzl $v0, 0x108898
    a3 = a3 + -4;                                               // 0x0010885c: addiu $a3, $a3, -4
label_0x108860:
    v0 = *(int32_t*)(t0);                                       // 0x00108860: lw $v0, 0($t0)
    t0 = t0 + 4;                                                // 0x00108864: addiu $t0, $t0, 4
    a0 = ((unsigned)t0 < (unsigned)t5) ? 1 : 0;                 // 0x00108868: sltu $a0, $t0, $t5
    v1 = v0 & 0xffff;                                           // 0x0010886c: andi $v1, $v0, 0xffff
    v0 = (unsigned)v0 >> 0x10;                                  // 0x00108870: srl $v0, $v0, 0x10
    v1 = v1 + t2;                                               // 0x00108874: addu $v1, $v1, $t2
    t2 = v1 >> 0x10;                                            // 0x00108878: sra $t2, $v1, 0x10
    *(uint16_t*)(a3) = v1;                                      // 0x0010887c: sh $v1, 0($a3)
    a1 = v0 + t2;                                               // 0x00108880: addu $a1, $v0, $t2
    *(uint16_t*)((a3) + 2) = a1;                                // 0x00108884: sh $a1, 2($a3)
    a3 = a3 + 4;                                                // 0x00108888: addiu $a3, $a3, 4
    if (a0 != 0) goto label_0x108860;                           // 0x0010888c: bnez $a0, 0x108860
    t2 = a1 >> 0x10;                                            // 0x00108890: sra $t2, $a1, 0x10
    a3 = a3 + -4;                                               // 0x00108894: addiu $a3, $a3, -4
    v0 = *(int32_t*)(a3);                                       // 0x00108898: lw $v0, 0($a3)
    /* bnezl $v0, 0x1088c8 */                                   // 0x0010889c: bnezl $v0, 0x1088c8
    *(uint32_t*)((t3) + 0x10) = t4;                             // 0x001088a0: sw $t4, 0x10($t3)
    /* nop */                                                   // 0x001088a4: nop 
label_0x1088a8:
    a3 = a3 + -4;                                               // 0x001088a8: addiu $a3, $a3, -4
    v0 = *(int32_t*)(a3);                                       // 0x001088ac: lw $v0, 0($a3)
    /* nop */                                                   // 0x001088b0: nop 
    /* nop */                                                   // 0x001088b4: nop 
    /* nop */                                                   // 0x001088b8: nop 
    if (v0 == 0) goto label_0x1088a8;                           // 0x001088bc: beqz $v0, 0x1088a8
    t4 = t4 + -1;                                               // 0x001088c0: addiu $t4, $t4, -1
    *(uint32_t*)((t3) + 0x10) = t4;                             // 0x001088c4: sw $t4, 0x10($t3)
label_0x1088cc:
    return;                                                     // 0x001088e0: jr $ra
    sp = sp + 0x30;                                             // 0x001088e4: addiu $sp, $sp, 0x30
}