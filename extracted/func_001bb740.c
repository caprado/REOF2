void func_001bb740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bb740: addiu $sp, $sp, -0x20
    s0 = 0x30 << 16;                                            // 0x001bb74c: lui $s0, 0x30
    func_001bbba0();  // 1bbba0                                // 0x001bb750: jal 0x1bbba0
    s0 = s0 + 0x7fe0;                                           // 0x001bb754: addiu $s0, $s0, 0x7fe0
    at = 0x30 << 16;                                            // 0x001bb758: lui $at, 0x30
    v1 = 1;                                                     // 0x001bb75c: addiu $v1, $zero, 1
    a0 = g_00307fe0;  // Global at 0x00307fe0                   // 0x001bb760: lbu $a0, 0x7fe0($at)
    if (a0 == v1) goto label_0x1bb794;                          // 0x001bb764: beq $a0, $v1, 0x1bb794
    /* nop */                                                   // 0x001bb768: nop 
    if (a0 == 0) goto label_0x1bb77c;                           // 0x001bb76c: beqz $a0, 0x1bb77c
    /* nop */                                                   // 0x001bb770: nop 
    goto label_0x1bb87c;                                        // 0x001bb774: b 0x1bb87c
label_0x1bb77c:
    v1 = g_00307fe4;  // Global at 0x00307fe4                   // 0x001bb77c: lh $v1, 4($s0)
    if (v1 == 0) goto label_0x1bb878;                           // 0x001bb780: beqz $v1, 0x1bb878
    /* nop */                                                   // 0x001bb784: nop 
    v1 = g_00307fe0;  // Global at 0x00307fe0                   // 0x001bb788: lbu $v1, 0($s0)
    v1 = v1 + 1;                                                // 0x001bb78c: addiu $v1, $v1, 1
    g_00307fe0 = v1;  // Global at 0x00307fe0                   // 0x001bb790: sb $v1, 0($s0)
label_0x1bb794:
    v1 = g_00307fe4;  // Global at 0x00307fe4                   // 0x001bb794: lh $v1, 4($s0)
    if (v1 != 0) goto label_0x1bb7ac;                           // 0x001bb798: bnez $v1, 0x1bb7ac
    /* nop */                                                   // 0x001bb79c: nop 
    g_00307fe0 = 0;  // Global at 0x00307fe0                    // 0x001bb7a0: sb $zero, 0($s0)
    goto label_0x1bb878;                                        // 0x001bb7a4: b 0x1bb878
    g_00307ff4 = 0;  // Global at 0x00307ff4                    // 0x001bb7a8: sw $zero, 0x14($s0)
label_0x1bb7ac:
    a0 = g_00307fe6;  // Global at 0x00307fe6                   // 0x001bb7ac: lh $a0, 6($s0)
    v1 = 2;                                                     // 0x001bb7b0: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1bb830;                          // 0x001bb7b4: beq $a0, $v1, 0x1bb830
    v1 = 1;                                                     // 0x001bb7b8: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1bb7dc;                          // 0x001bb7bc: beq $a0, $v1, 0x1bb7dc
    /* nop */                                                   // 0x001bb7c0: nop 
    if (a0 == 0) goto label_0x1bb7d4;                           // 0x001bb7c4: beqz $a0, 0x1bb7d4
    /* nop */                                                   // 0x001bb7c8: nop 
    goto label_0x1bb878;                                        // 0x001bb7cc: b 0x1bb878
    /* nop */                                                   // 0x001bb7d0: nop 
label_0x1bb7d4:
    goto label_0x1bb878;                                        // 0x001bb7d4: b 0x1bb878
    g_00307fe4 = 0;  // Global at 0x00307fe4                    // 0x001bb7d8: sh $zero, 4($s0)
label_0x1bb7dc:
    a1 = g_00307fec;  // Global at 0x00307fec                   // 0x001bb7dc: lw $a1, 0xc($s0)
    a0 = 0xff00 << 16;                                          // 0x001bb7e0: lui $a0, 0xff00
    v1 = g_00307ff4;  // Global at 0x00307ff4                   // 0x001bb7e4: lw $v1, 0x14($s0)
    a0 = a1 & a0;                                               // 0x001bb7e8: and $a0, $a1, $a0
    a2 = (unsigned)a0 >> 0x18;                                  // 0x001bb7ec: srl $a2, $a0, 0x18
    a0 = *(uint8_t*)((v1) + 0xd);                               // 0x001bb7f0: lbu $a0, 0xd($v1)
    if (a2 == a0) goto label_0x1bb828;                          // 0x001bb7f4: beq $a2, $a0, 0x1bb828
    /* nop */                                                   // 0x001bb7f8: nop 
    v1 = g_00307ff0;  // Global at 0x00307ff0                   // 0x001bb7fc: lh $v1, 0x10($s0)
    a2 = a2 + v1;                                               // 0x001bb800: addu $a2, $a2, $v1
    at = (a2 < a0) ? 1 : 0;                                     // 0x001bb804: slt $at, $a2, $a0
    if (at == 0) goto label_0x1bb814;                           // 0x001bb808: beqz $at, 0x1bb814
label_0x1bb814:
    a0 = a2 << 0x18;                                            // 0x001bb814: sll $a0, $a2, 0x18
    v1 = a0 | v1;                                               // 0x001bb81c: or $v1, $a0, $v1
    goto label_0x1bb878;                                        // 0x001bb820: b 0x1bb878
    g_00307fec = v1;  // Global at 0x00307fec                   // 0x001bb824: sw $v1, 0xc($s0)
label_0x1bb828:
    goto label_0x1bb878;                                        // 0x001bb828: b 0x1bb878
    g_00307fe4 = 0;  // Global at 0x00307fe4                    // 0x001bb82c: sh $zero, 4($s0)
label_0x1bb830:
    a2 = g_00307fec;  // Global at 0x00307fec                   // 0x001bb830: lw $a2, 0xc($s0)
    a0 = 0xff00 << 16;                                          // 0x001bb834: lui $a0, 0xff00
    v1 = g_00307ff4;  // Global at 0x00307ff4                   // 0x001bb838: lw $v1, 0x14($s0)
    a0 = a2 & a0;                                               // 0x001bb83c: and $a0, $a2, $a0
    a1 = (unsigned)a0 >> 0x18;                                  // 0x001bb840: srl $a1, $a0, 0x18
    a0 = *(uint8_t*)((v1) + 0xd);                               // 0x001bb844: lbu $a0, 0xd($v1)
    if (a1 == a0) goto label_0x1bb878;                          // 0x001bb848: beq $a1, $a0, 0x1bb878
    /* nop */                                                   // 0x001bb84c: nop 
    v1 = g_00307ff0;  // Global at 0x00307ff0                   // 0x001bb850: lh $v1, 0x10($s0)
    a1 = a1 + v1;                                               // 0x001bb854: addu $a1, $a1, $v1
    at = (a0 < a1) ? 1 : 0;                                     // 0x001bb858: slt $at, $a0, $a1
    if (at == 0) goto label_0x1bb868;                           // 0x001bb85c: beqz $at, 0x1bb868
label_0x1bb868:
    a0 = a1 << 0x18;                                            // 0x001bb868: sll $a0, $a1, 0x18
    v1 = a0 | v1;                                               // 0x001bb870: or $v1, $a0, $v1
    g_00307fec = v1;  // Global at 0x00307fec                   // 0x001bb874: sw $v1, 0xc($s0)
label_0x1bb878:
label_0x1bb87c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bb87c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bb880: jr $ra
    sp = sp + 0x20;                                             // 0x001bb884: addiu $sp, $sp, 0x20
}