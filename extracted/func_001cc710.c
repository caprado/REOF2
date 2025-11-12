void func_001cc710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cc710: addiu $sp, $sp, -0x20
    at = 0x32 << 16;                                            // 0x001cc714: lui $at, 0x32
    v1 = 3;                                                     // 0x001cc71c: addiu $v1, $zero, 3
    a0 = g_003257d7;  // Global at 0x003257d7                   // 0x001cc724: lbu $a0, 0x57d7($at)
    if (a0 == v1) goto label_0x1cc8a0;                          // 0x001cc728: beq $a0, $v1, 0x1cc8a0
    /* nop */                                                   // 0x001cc72c: nop 
    v1 = 2;                                                     // 0x001cc730: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1cc7e4;                          // 0x001cc734: beq $a0, $v1, 0x1cc7e4
    /* nop */                                                   // 0x001cc738: nop 
    v1 = 1;                                                     // 0x001cc73c: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1cc7c4;                          // 0x001cc740: beq $a0, $v1, 0x1cc7c4
    /* nop */                                                   // 0x001cc744: nop 
    if (a0 == 0) goto label_0x1cc75c;                           // 0x001cc748: beqz $a0, 0x1cc75c
    goto label_0x1cca70;                                        // 0x001cc750: b 0x1cca70
label_0x1cc75c:
    goto label_0x1cc794;                                        // 0x001cc75c: b 0x1cc794
    /* nop */                                                   // 0x001cc760: nop 
    v1 = s0 << 4;                                               // 0x001cc764: sll $v1, $s0, 4
label_0x1cc768:
    v0 = 0x32 << 16;                                            // 0x001cc768: lui $v0, 0x32
    v1 = v1 - s0;                                               // 0x001cc76c: subu $v1, $v1, $s0
    v0 = v0 + 0x57d0;                                           // 0x001cc770: addiu $v0, $v0, 0x57d0
    v1 = v1 << 2;                                               // 0x001cc774: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001cc77c: addu $v0, $v0, $v1
    a2 = 0x10;                                                  // 0x001cc780: addiu $a2, $zero, 0x10
    g_0032582c = 0;  // Global at 0x0032582c                    // 0x001cc784: sb $zero, 0x5c($v0)
    func_00107d30();  // 0x107c70                                // 0x001cc788: jal 0x107c70
    a0 = v0 + 0x5e;                                             // 0x001cc78c: addiu $a0, $v0, 0x5e
    s0 = s0 + 1;                                                // 0x001cc790: addiu $s0, $s0, 1
label_0x1cc794:
    at = 0x32 << 16;                                            // 0x001cc794: lui $at, 0x32
    v0 = g_003257d5;  // Global at 0x003257d5                   // 0x001cc798: lbu $v0, 0x57d5($at)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001cc79c: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1cc768;                           // 0x001cc7a0: bnez $v0, 0x1cc768
    v1 = s0 << 4;                                               // 0x001cc7a4: sll $v1, $s0, 4
    at = 0x32 << 16;                                            // 0x001cc7a8: lui $at, 0x32
    g_003257fd = 0;  // Global at 0x003257fd                    // 0x001cc7ac: sb $zero, 0x57fd($at)
    at = 0x32 << 16;                                            // 0x001cc7b0: lui $at, 0x32
    v0 = g_003257d7;  // Global at 0x003257d7                   // 0x001cc7b4: lbu $v0, 0x57d7($at)
    v0 = v0 + 1;                                                // 0x001cc7b8: addiu $v0, $v0, 1
    at = 0x32 << 16;                                            // 0x001cc7bc: lui $at, 0x32
    g_003257d7 = v0;  // Global at 0x003257d7                   // 0x001cc7c0: sb $v0, 0x57d7($at)
label_0x1cc7c4:
    at = 0x32 << 16;                                            // 0x001cc7c4: lui $at, 0x32
    func_001ce3b0();  // 0x1ce310                                // 0x001cc7c8: jal 0x1ce310
    a0 = g_003257fd;  // Global at 0x003257fd                   // 0x001cc7cc: lbu $a0, 0x57fd($at)
    at = 0x32 << 16;                                            // 0x001cc7d0: lui $at, 0x32
    v1 = g_003257d7;  // Global at 0x003257d7                   // 0x001cc7d4: lbu $v1, 0x57d7($at)
    v1 = v1 + 1;                                                // 0x001cc7d8: addiu $v1, $v1, 1
    at = 0x32 << 16;                                            // 0x001cc7dc: lui $at, 0x32
    g_003257d7 = v1;  // Global at 0x003257d7                   // 0x001cc7e0: sb $v1, 0x57d7($at)
label_0x1cc7e4:
    at = 0x32 << 16;                                            // 0x001cc7e4: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001cc7e8: lui $a0, 0x32
    t0 = g_003257fd;  // Global at 0x003257fd                   // 0x001cc7ec: lbu $t0, 0x57fd($at)
    t1 = 1;                                                     // 0x001cc7f0: addiu $t1, $zero, 1
    at = 0x32 << 16;                                            // 0x001cc7f8: lui $at, 0x32
    a3 = g_003257d5;  // Global at 0x003257d5                   // 0x001cc7fc: lbu $a3, 0x57d5($at)
    goto label_0x1cc83c;                                        // 0x001cc800: b 0x1cc83c
    a0 = a0 + 0x57d0;                                           // 0x001cc804: addiu $a0, $a0, 0x57d0
    v1 = a1 << 4;                                               // 0x001cc808: sll $v1, $a1, 4
label_0x1cc80c:
    v1 = v1 - a1;                                               // 0x001cc80c: subu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001cc810: sll $v1, $v1, 2
    a2 = a0 + v1;                                               // 0x001cc814: addu $a2, $a0, $v1
    v1 = g_0032588a;  // Global at 0x0032588a                   // 0x001cc818: lbu $v1, 0x4c($a2)
    if (v1 == 0) goto label_0x1cc838;                           // 0x001cc81c: beqz $v1, 0x1cc838
    /* nop */                                                   // 0x001cc820: nop 
    v1 = g_0032589a;  // Global at 0x0032589a                   // 0x001cc824: lbu $v1, 0x5c($a2)
    if (v1 == t0) goto label_0x1cc838;                          // 0x001cc828: beq $v1, $t0, 0x1cc838
    /* nop */                                                   // 0x001cc82c: nop 
    goto label_0x1cc848;                                        // 0x001cc830: b 0x1cc848
label_0x1cc838:
    a1 = a1 + 1;                                                // 0x001cc838: addiu $a1, $a1, 1
label_0x1cc83c:
    v1 = (a1 < a3) ? 1 : 0;                                     // 0x001cc83c: slt $v1, $a1, $a3
    if (v1 != 0) goto label_0x1cc80c;                           // 0x001cc840: bnez $v1, 0x1cc80c
    v1 = a1 << 4;                                               // 0x001cc844: sll $v1, $a1, 4
label_0x1cc848:
    if (t1 == 0) goto label_0x1cca6c;                           // 0x001cc848: beqz $t1, 0x1cca6c
    /* nop */                                                   // 0x001cc84c: nop 
    at = 0x32 << 16;                                            // 0x001cc850: lui $at, 0x32
    v1 = g_003257fd;  // Global at 0x003257fd                   // 0x001cc854: lbu $v1, 0x57fd($at)
    v1 = v1 + 1;                                                // 0x001cc858: addiu $v1, $v1, 1
    at = 0x32 << 16;                                            // 0x001cc85c: lui $at, 0x32
    g_003257fd = v1;  // Global at 0x003257fd                   // 0x001cc860: sb $v1, 0x57fd($at)
    at = 0x32 << 16;                                            // 0x001cc864: lui $at, 0x32
    v1 = g_003257fd;  // Global at 0x003257fd                   // 0x001cc868: lbu $v1, 0x57fd($at)
    v1 = (v1 < 8) ? 1 : 0;                                      // 0x001cc86c: slti $v1, $v1, 8
    if (v1 != 0) goto label_0x1cc894;                           // 0x001cc870: bnez $v1, 0x1cc894
    v1 = 1;                                                     // 0x001cc874: addiu $v1, $zero, 1
    at = 0x32 << 16;                                            // 0x001cc878: lui $at, 0x32
    v1 = g_003257d7;  // Global at 0x003257d7                   // 0x001cc87c: lbu $v1, 0x57d7($at)
    v1 = v1 + 1;                                                // 0x001cc880: addiu $v1, $v1, 1
    at = 0x32 << 16;                                            // 0x001cc884: lui $at, 0x32
    goto label_0x1cca6c;                                        // 0x001cc888: b 0x1cca6c
    g_003257d7 = v1;  // Global at 0x003257d7                   // 0x001cc88c: sb $v1, 0x57d7($at)
    v1 = 1;                                                     // 0x001cc890: addiu $v1, $zero, 1
label_0x1cc894:
    at = 0x32 << 16;                                            // 0x001cc894: lui $at, 0x32
    goto label_0x1cca6c;                                        // 0x001cc898: b 0x1cca6c
    g_003257d7 = v1;  // Global at 0x003257d7                   // 0x001cc89c: sb $v1, 0x57d7($at)
label_0x1cc8a0:
    v1 = 0x32 << 16;                                            // 0x001cc8a0: lui $v1, 0x32
    goto label_0x1cc93c;                                        // 0x001cc8a8: b 0x1cc93c
    v1 = v1 + 0x57d0;                                           // 0x001cc8ac: addiu $v1, $v1, 0x57d0
label_0x1cc8b0:
    at = 0x32 << 16;                                            // 0x001cc8b0: lui $at, 0x32
    v0 = g_003257d4;  // Global at 0x003257d4                   // 0x001cc8b4: lbu $v0, 0x57d4($at)
    if (a0 == v0) goto label_0x1cc938;                          // 0x001cc8b8: beq $a0, $v0, 0x1cc938
    /* nop */                                                   // 0x001cc8bc: nop 
    v0 = a0 << 4;                                               // 0x001cc8c0: sll $v0, $a0, 4
    v0 = v0 - a0;                                               // 0x001cc8c4: subu $v0, $v0, $a0
    v0 = v0 << 2;                                               // 0x001cc8c8: sll $v0, $v0, 2
    a1 = v1 + v0;                                               // 0x001cc8cc: addu $a1, $v1, $v0
    v0 = g_0032588c;  // Global at 0x0032588c                   // 0x001cc8d0: lbu $v0, 0x4c($a1)
    if (v0 == 0) goto label_0x1cc938;                           // 0x001cc8d4: beqz $v0, 0x1cc938
    /* nop */                                                   // 0x001cc8d8: nop 
    t1 = 0 | 0xffff;                                            // 0x001cc8dc: ori $t1, $zero, 0xffff
label_0x1cc8ec:
    v0 = t2 << 1;                                               // 0x001cc8ec: sll $v0, $t2, 1
    v0 = a1 + v0;                                               // 0x001cc8f0: addu $v0, $a1, $v0
    v0 = g_0032582f;  // Global at 0x0032582f                   // 0x001cc8f4: lhu $v0, 0x5e($v0)
    at = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x001cc8f8: sltu $at, $v0, $t1
    if (at == 0) goto label_0x1cc908;                           // 0x001cc8fc: beqz $at, 0x1cc908
label_0x1cc908:
    at = ((unsigned)t0 < (unsigned)a2) ? 1 : 0;                 // 0x001cc908: sltu $at, $t0, $a2
    if (at == 0) a2 = t0;                                       // 0x001cc90c: movz $a2, $t0, $at
    v0 = v0 & 0xffff;                                           // 0x001cc910: andi $v0, $v0, 0xffff
    t2 = t2 + 1;                                                // 0x001cc914: addiu $t2, $t2, 1
    a3 = a3 + v0;                                               // 0x001cc918: addu $a3, $a3, $v0
    v0 = (t2 < 8) ? 1 : 0;                                      // 0x001cc91c: slti $v0, $t2, 8
    if (v0 != 0) goto label_0x1cc8ec;                           // 0x001cc920: bnez $v0, 0x1cc8ec
    g_003258ae = t1;  // Global at 0x003258ae                   // 0x001cc928: sh $t1, 0x6e($a1)
    v0 = (unsigned)a3 >> 3;                                     // 0x001cc92c: srl $v0, $a3, 3
    g_003258b0 = a2;  // Global at 0x003258b0                   // 0x001cc930: sh $a2, 0x70($a1)
    g_003258b2 = v0;  // Global at 0x003258b2                   // 0x001cc934: sh $v0, 0x72($a1)
label_0x1cc938:
    a0 = a0 + 1;                                                // 0x001cc938: addiu $a0, $a0, 1
label_0x1cc93c:
    at = 0x32 << 16;                                            // 0x001cc93c: lui $at, 0x32
    t0 = g_003257d5;  // Global at 0x003257d5                   // 0x001cc940: lbu $t0, 0x57d5($at)
    v0 = (a0 < t0) ? 1 : 0;                                     // 0x001cc944: slt $v0, $a0, $t0
    if (v0 != 0) goto label_0x1cc8b0;                           // 0x001cc948: bnez $v0, 0x1cc8b0
    /* nop */                                                   // 0x001cc94c: nop 
    at = 0x32 << 16;                                            // 0x001cc950: lui $at, 0x32
    v0 = g_003257df;  // Global at 0x003257df                   // 0x001cc954: lbu $v0, 0x57df($at)
    at = (v0 < 2) ? 1 : 0;                                      // 0x001cc958: slti $at, $v0, 2
    if (at != 0) goto label_0x1cca64;                           // 0x001cc95c: bnez $at, 0x1cca64
    a0 = 3;                                                     // 0x001cc960: addiu $a0, $zero, 3
    at = 0x32 << 16;                                            // 0x001cc964: lui $at, 0x32
    a1 = 0x32 << 16;                                            // 0x001cc968: lui $a1, 0x32
    t1 = g_003257d4;  // Global at 0x003257d4                   // 0x001cc96c: lbu $t1, 0x57d4($at)
    t2 = 0 | 0xffff;                                            // 0x001cc970: ori $t2, $zero, 0xffff
    goto label_0x1cc9d8;                                        // 0x001cc980: b 0x1cc9d8
    a1 = a1 + 0x57d0;                                           // 0x001cc984: addiu $a1, $a1, 0x57d0
label_0x1cc988:
    if (a2 == t1) goto label_0x1cc9d4;                          // 0x001cc988: beq $a2, $t1, 0x1cc9d4
    /* nop */                                                   // 0x001cc98c: nop 
    a0 = a2 << 4;                                               // 0x001cc990: sll $a0, $a2, 4
    a0 = a0 - a2;                                               // 0x001cc994: subu $a0, $a0, $a2
    a0 = a0 << 2;                                               // 0x001cc998: sll $a0, $a0, 2
    a3 = a1 + a0;                                               // 0x001cc99c: addu $a3, $a1, $a0
    a0 = *(uint8_t*)((a3) + 0x4c);                              // 0x001cc9a0: lbu $a0, 0x4c($a3)
    if (a0 == 0) goto label_0x1cc9d4;                           // 0x001cc9a4: beqz $a0, 0x1cc9d4
    /* nop */                                                   // 0x001cc9a8: nop 
    a0 = *(uint16_t*)((a3) + 0x6e);                             // 0x001cc9ac: lhu $a0, 0x6e($a3)
    at = ((unsigned)a0 < (unsigned)t2) ? 1 : 0;                 // 0x001cc9b0: sltu $at, $a0, $t2
    if (at == 0) a0 = t2;                                       // 0x001cc9b4: movz $a0, $t2, $at
    a0 = *(uint16_t*)((a3) + 0x70);                             // 0x001cc9bc: lhu $a0, 0x70($a3)
    at = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x001cc9c0: sltu $at, $v1, $a0
    if (at == 0) a0 = v1;                                       // 0x001cc9c4: movz $a0, $v1, $at
    a0 = *(uint16_t*)((a3) + 0x72);                             // 0x001cc9cc: lhu $a0, 0x72($a3)
    v0 = v0 + a0;                                               // 0x001cc9d0: addu $v0, $v0, $a0
label_0x1cc9d4:
    a2 = a2 + 1;                                                // 0x001cc9d4: addiu $a2, $a2, 1
label_0x1cc9d8:
    a0 = (a2 < t0) ? 1 : 0;                                     // 0x001cc9d8: slt $a0, $a2, $t0
    if (a0 != 0) goto label_0x1cc988;                           // 0x001cc9dc: bnez $a0, 0x1cc988
    /* nop */                                                   // 0x001cc9e0: nop 
    a3 = t1 & 0xff;                                             // 0x001cc9e4: andi $a3, $t1, 0xff
    a2 = 0x32 << 16;                                            // 0x001cc9e8: lui $a2, 0x32
    a0 = a3 << 4;                                               // 0x001cc9ec: sll $a0, $a3, 4
    a1 = 0x32 << 16;                                            // 0x001cc9f0: lui $a1, 0x32
    a3 = a0 - a3;                                               // 0x001cc9f4: subu $a3, $a0, $a3
    a2 = a2 + 0x583e;                                           // 0x001cc9f8: addiu $a2, $a2, 0x583e
    a3 = a3 << 2;                                               // 0x001cc9fc: sll $a3, $a3, 2
    a0 = 0x32 << 16;                                            // 0x001cca00: lui $a0, 0x32
    a2 = a2 + a3;                                               // 0x001cca04: addu $a2, $a2, $a3
    at = 0x32 << 16;                                            // 0x001cca08: lui $at, 0x32
    g_0032583e = t2;  // Global at 0x0032583e                   // 0x001cca0c: sh $t2, 0($a2)
    a1 = a1 + 0x5840;                                           // 0x001cca10: addiu $a1, $a1, 0x5840
    a3 = g_003257d4;  // Global at 0x003257d4                   // 0x001cca14: lbu $a3, 0x57d4($at)
    a0 = a0 + 0x5842;                                           // 0x001cca18: addiu $a0, $a0, 0x5842
    a2 = a3 << 4;                                               // 0x001cca1c: sll $a2, $a3, 4
    at = 0x32 << 16;                                            // 0x001cca20: lui $at, 0x32
    a2 = a2 - a3;                                               // 0x001cca24: subu $a2, $a2, $a3
    a2 = a2 << 2;                                               // 0x001cca28: sll $a2, $a2, 2
    a1 = a1 + a2;                                               // 0x001cca2c: addu $a1, $a1, $a2
    g_00325840 = v1;  // Global at 0x00325840                   // 0x001cca30: sh $v1, 0($a1)
    a1 = g_003257df;  // Global at 0x003257df                   // 0x001cca34: lbu $a1, 0x57df($at)
    a1 = a1 + -1;                                               // 0x001cca38: addiu $a1, $a1, -1
    at = 0x32 << 16;                                            // 0x001cca3c: lui $at, 0x32
    /* divide: v0 / a1 -> hi:lo */                              // 0x001cca40: divu $zero, $v0, $a1
    v1 = g_003257d4;  // Global at 0x003257d4                   // 0x001cca44: lbu $v1, 0x57d4($at)
    v0 = v1 << 4;                                               // 0x001cca48: sll $v0, $v1, 4
    v0 = v0 - v1;                                               // 0x001cca4c: subu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001cca50: sll $v0, $v0, 2
    /* mflo $a1 */                                              // 0x001cca54
    v0 = a0 + v0;                                               // 0x001cca58: addu $v0, $a0, $v0
    g_003257d1 = a1;  // Global at 0x003257d1                   // 0x001cca5c: sh $a1, 0($v0)
    a0 = 3;                                                     // 0x001cca60: addiu $a0, $zero, 3
label_0x1cca64:
    func_001cdf70();  // 0x1cdf30                                // 0x001cca64: jal 0x1cdf30
    /* nop */                                                   // 0x001cca68: nop 
label_0x1cca6c:
label_0x1cca70:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cca70: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cca74: jr $ra
    sp = sp + 0x20;                                             // 0x001cca78: addiu $sp, $sp, 0x20
}