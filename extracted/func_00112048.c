void func_00112048() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x40;                                            // 0x00112048: addiu $sp, $sp, -0x40
    a0 = sp + 0x20;                                             // 0x00112050: addiu $a0, $sp, 0x20
    func_00111738();  // 0x111678                                // 0x00112058: jal 0x111678
    a0 = local_0;                                               // 0x00112064: lw $a0, 0($sp)
    v1 = a0 ^ 2;                                                // 0x00112068: xori $v1, $a0, 2
    if (v1 == 0) goto label_0x1120d8;                           // 0x0011206c: beqz $v1, 0x1120d8
    a1 = ((unsigned)a0 < (unsigned)2) ? 1 : 0;                  // 0x00112070: sltiu $a1, $a0, 2
    if (a1 != 0) goto label_0x1120dc;                           // 0x00112074: bnez $a1, 0x1120dc
    v0 = a0 ^ 4;                                                // 0x0011207c: xori $v0, $a0, 4
    if (v0 == 0) goto label_0x1120a4;                           // 0x00112080: beqz $v0, 0x1120a4
    v1 = local_4;                                               // 0x00112084: lw $v1, 4($sp)
    a1 = local_8;                                               // 0x00112088: lw $a1, 8($sp)
    if (a1 < 0) goto label_0x1120dc;                            // 0x00112090: bltz $a1, 0x1120dc
    v1 = (a1 < 0x1f) ? 1 : 0;                                   // 0x00112094: slti $v1, $a1, 0x1f
    if (v1 != 0) goto label_0x1120b8;                           // 0x00112098: bnez $v1, 0x1120b8
    v1 = 0x3c;                                                  // 0x0011209c: addiu $v1, $zero, 0x3c
    v1 = local_4;                                               // 0x001120a0: lw $v1, 4($sp)
label_0x1120a4:
    v0 = 0x7fff << 16;                                          // 0x001120a4: lui $v0, 0x7fff
    a0 = 0x8000 << 16;                                          // 0x001120a8: lui $a0, 0x8000
    v0 = v0 | 0xffff;                                           // 0x001120ac: ori $v0, $v0, 0xffff
    goto label_0x1120d8;                                        // 0x001120b0: b 0x1120d8
    if (v1 != 0) v0 = a0;                                       // 0x001120b4: movn $v0, $a0, $v1
label_0x1120b8:
    v1 = v1 - a1;                                               // 0x001120bc: subu $v1, $v1, $a1
    a0 = local_4;                                               // 0x001120c0: lw $a0, 4($sp)
    v1 = -v0;                                                   // 0x001120d0: negu $v1, $v0
    if (a0 != 0) v0 = v1;                                       // 0x001120d4: movn $v0, $v1, $a0
label_0x1120d8:
label_0x1120dc:
    return;                                                     // 0x001120dc: jr $ra
    sp = sp + 0x40;                                             // 0x001120e0: addiu $sp, $sp, 0x40
}