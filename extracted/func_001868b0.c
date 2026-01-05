void func_001868b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_300, local_304;
    
    sp = sp + -0x380;                                           // 0x001868b0: addiu $sp, $sp, -0x380
    func_00183fa0();  // 183fa0                                // 0x001868d8: jal 0x183fa0
    if (v0 != 0) goto label_0x186a0c;                           // 0x001868e0: bnez $v0, 0x186a0c
    s5 = sp + 0x200;                                            // 0x001868e8: addiu $s5, $sp, 0x200
    func_00184048();  // 184048                                // 0x001868f4: jal 0x184048
    if (v0 != 0) goto label_0x186a0c;                           // 0x001868fc: bnez $v0, 0x186a0c
    func_0010a990();  // 10a990                                // 0x00186908: jal 0x10a990
    a1 = 0x2f;                                                  // 0x0018690c: addiu $a1, $zero, 0x2f
    if (v0 != 0) goto label_0x18694c;                           // 0x00186910: bnez $v0, 0x18694c
    s0 = sp + 0x280;                                            // 0x00186914: addiu $s0, $sp, 0x280
    func_0010ac68();  // 10ac68                                // 0x0018691c: jal 0x10ac68
    func_0010b460();  // 10b460                                // 0x00186928: jal 0x10b460
    a1 = 0x2f;                                                  // 0x0018692c: addiu $a1, $zero, 0x2f
    a0 = v0 + 1;                                                // 0x00186930: addiu $a0, $v0, 1
    func_0010ac68();  // 10ac68                                // 0x00186934: jal 0x10ac68
    func_00182278();  // 182278                                // 0x0018693c: jal 0x182278
    if (v0 != 0) goto label_0x186958;                           // 0x00186944: bnez $v0, 0x186958
    /* nop */                                                   // 0x00186948: nop 
label_0x18694c:
    v0 = 0x8101 << 16;                                          // 0x0018694c: lui $v0, 0x8101
    goto label_0x186a08;                                        // 0x00186950: b 0x186a08
    v0 = v0 | 0x16;                                             // 0x00186954: ori $v0, $v0, 0x16
label_0x186958:
    func_00182208();  // 182208                                // 0x00186958: jal 0x182208
    if (v0 != 0) goto label_0x186974;                           // 0x00186960: bnez $v0, 0x186974
    s2 = sp + 0x300;                                            // 0x00186964: addiu $s2, $sp, 0x300
    v0 = 0x8101 << 16;                                          // 0x00186968: lui $v0, 0x8101
    goto label_0x186a08;                                        // 0x0018696c: b 0x186a08
    v0 = v0 | 0x5b;                                             // 0x00186970: ori $v0, $v0, 0x5b
label_0x186974:
    s3 = sp + 0x304;                                            // 0x00186974: addiu $s3, $sp, 0x304
    func_00184320();  // 184320                                // 0x00186988: jal 0x184320
    v1 = 0x8101 << 16;                                          // 0x00186990: lui $v1, 0x8101
    v1 = v1 | 2;                                                // 0x00186994: ori $v1, $v1, 2
    if (v0 != v1) goto label_0x186a0c;                          // 0x00186998: bne $v0, $v1, 0x186a0c
    func_00184320();  // 184320                                // 0x001869b0: jal 0x184320
    v1 = 0x8101 << 16;                                          // 0x001869b8: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x001869bc: ori $v1, $v1, 0x11
    if (v0 != v1) goto label_0x186a0c;                          // 0x001869c0: bne $v0, $v1, 0x186a0c
    func_0010ac68();  // 10ac68                                // 0x001869cc: jal 0x10ac68
    a0 = sp + 0x40;                                             // 0x001869d0: addiu $a0, $sp, 0x40
    a2 = local_300;                                             // 0x001869d4: lw $a2, 0x300($sp)
    a3 = local_304;                                             // 0x001869dc: lw $a3, 0x304($sp)
    func_00184770();  // 184770                                // 0x001869e0: jal 0x184770
    if (v0 != 0) goto label_0x186a0c;                           // 0x001869e8: bnez $v0, 0x186a0c
    func_00186e48();  // 186e48                                // 0x001869f0: jal 0x186e48
    v1 = 0x8101 << 16;                                          // 0x001869f8: lui $v1, 0x8101
    v1 = v1 | 0x6f;                                             // 0x001869fc: ori $v1, $v1, 0x6f
    if (v0 != 0) v1 = 0;                                        // 0x00186a00: movn $v1, $zero, $v0
label_0x186a08:
label_0x186a0c:
    return;                                                     // 0x00186a24: jr $ra
    sp = sp + 0x380;                                            // 0x00186a28: addiu $sp, $sp, 0x380
}