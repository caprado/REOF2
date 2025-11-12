void func_00186728() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_281, local_282, local_283, local_285, local_286, local_287, local_290, local_294;
    uint32_t local_80, local_99, local_9a, local_9b, local_9c, local_9d, local_9e;
    
    sp = sp + -0x2e0;                                           // 0x00186728: addiu $sp, $sp, -0x2e0
    s2 = a2 & 0xffff;                                           // 0x0018673c: andi $s2, $a2, 0xffff
    func_00184048();  // 0x183fa0                                // 0x00186744: jal 0x183fa0
    if (v0 != 0) goto label_0x18689c;                           // 0x0018674c: bnez $v0, 0x18689c
    func_001840a8();  // 0x184048                                // 0x0018675c: jal 0x184048
    if (v0 != 0) goto label_0x18689c;                           // 0x00186764: bnez $v0, 0x18689c
    s0 = sp + 0x80;                                             // 0x0018676c: addiu $s0, $sp, 0x80
    a3 = sp + 0x290;                                            // 0x0018677c: addiu $a3, $sp, 0x290
    func_00184770();  // 0x184320                                // 0x00186780: jal 0x184320
    t0 = sp + 0x294;                                            // 0x00186784: addiu $t0, $sp, 0x294
    v1 = 0x8101 << 16;                                          // 0x00186788: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x0018678c: ori $v1, $v1, 0x11
    if (v0 != v1) goto label_0x18689c;                          // 0x00186790: bne $v0, $v1, 0x18689c
    v1 = local_80;                                              // 0x00186798: lhu $v1, 0x80($sp)
    v0 = v1 & 0x20;                                             // 0x0018679c: andi $v0, $v1, 0x20
    /* bnezl $v0, 0x1867b4 */                                   // 0x001867a0: bnezl $v0, 0x1867b4
    v0 = v1 & 0xe7f0;                                           // 0x001867a4: andi $v0, $v1, 0xe7f0
    v0 = 0x8101 << 16;                                          // 0x001867a8: lui $v0, 0x8101
    goto label_0x18689c;                                        // 0x001867ac: b 0x18689c
    v0 = v0 | 0x14;                                             // 0x001867b0: ori $v0, $v0, 0x14
    v1 = s2 & 0x180f;                                           // 0x001867b8: andi $v1, $s2, 0x180f
    a1 = sp + 0x280;                                            // 0x001867bc: addiu $a1, $sp, 0x280
    v0 = v0 | v1;                                               // 0x001867c0: or $v0, $v0, $v1
    func_00187f80();  // 0x187e78                                // 0x001867c4: jal 0x187e78
    local_80 = v0;                                              // 0x001867c8: sh $v0, 0x80($sp)
    a0 = local_287;                                             // 0x001867cc: lbu $a0, 0x287($sp)
    v1 = 0xa;                                                   // 0x001867d0: addiu $v1, $zero, 0xa
    a3 = local_282;                                             // 0x001867d4: lbu $a3, 0x282($sp)
    a2 = local_281;                                             // 0x001867dc: lbu $a2, 0x281($sp)
    v0 = (unsigned)a0 >> 4;                                     // 0x001867e0: srl $v0, $a0, 4
    t7 = local_286;                                             // 0x001867e4: lbu $t7, 0x286($sp)
    t3 = (unsigned)a3 >> 4;                                     // 0x001867e8: srl $t3, $a3, 4
    t6 = local_285;                                             // 0x001867ec: lbu $t6, 0x285($sp)
    t0 = (unsigned)a2 >> 4;                                     // 0x001867f0: srl $t0, $a2, 4
    t4 = local_283;                                             // 0x001867f4: lbu $t4, 0x283($sp)
    t5 = (unsigned)t7 >> 4;                                     // 0x001867f8: srl $t5, $t7, 4
    t1 = (unsigned)t6 >> 4;                                     // 0x001867fc: srl $t1, $t6, 4
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00186800: mult $ac2, $v0, $v1
    t2 = (unsigned)t4 >> 4;                                     // 0x00186804: srl $t2, $t4, 4
    a0 = a0 & 0xf;                                              // 0x00186810: andi $a0, $a0, 0xf
    a3 = a3 & 0xf;                                              // 0x00186818: andi $a3, $a3, 0xf
    a2 = a2 & 0xf;                                              // 0x00186820: andi $a2, $a2, 0xf
    v0 = v0 + a0;                                               // 0x00186828: addu $v0, $v0, $a0
    t3 = t3 + a3;                                               // 0x0018682c: addu $t3, $t3, $a3
    t0 = t0 + a2;                                               // 0x00186830: addu $t0, $t0, $a2
    t7 = t7 & 0xf;                                              // 0x00186834: andi $t7, $t7, 0xf
    t6 = t6 & 0xf;                                              // 0x00186838: andi $t6, $t6, 0xf
    t4 = t4 & 0xf;                                              // 0x0018683c: andi $t4, $t4, 0xf
    t5 = t5 + t7;                                               // 0x00186840: addu $t5, $t5, $t7
    t1 = t1 + t6;                                               // 0x00186844: addu $t1, $t1, $t6
    t2 = t2 + t4;                                               // 0x00186848: addu $t2, $t2, $t4
    v0 = v0 + 0x7d0;                                            // 0x0018684c: addiu $v0, $v0, 0x7d0
    a2 = local_290;                                             // 0x00186850: lw $a2, 0x290($sp)
    a3 = local_294;                                             // 0x00186854: lw $a3, 0x294($sp)
    local_9e = v0;                                              // 0x0018685c: sh $v0, 0x9e($sp)
    local_9d = t5;                                              // 0x00186860: sb $t5, 0x9d($sp)
    local_9c = t1;                                              // 0x00186864: sb $t1, 0x9c($sp)
    local_9b = t2;                                              // 0x00186868: sb $t2, 0x9b($sp)
    local_9a = t3;                                              // 0x0018686c: sb $t3, 0x9a($sp)
    func_00184918();  // 0x184770                                // 0x00186870: jal 0x184770
    local_99 = t0;                                              // 0x00186874: sb $t0, 0x99($sp)
    if (v0 != 0) goto label_0x18689c;                           // 0x00186878: bnez $v0, 0x18689c
    func_00186eb8();  // 0x186e48                                // 0x00186880: jal 0x186e48
    v1 = 0x8101 << 16;                                          // 0x00186888: lui $v1, 0x8101
    v1 = v1 | 0x6f;                                             // 0x0018688c: ori $v1, $v1, 0x6f
    if (v0 != 0) v1 = 0;                                        // 0x00186890: movn $v1, $zero, $v0
label_0x18689c:
    return;                                                     // 0x001868a8: jr $ra
    sp = sp + 0x2e0;                                            // 0x001868ac: addiu $sp, $sp, 0x2e0
}