void func_00185eb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_310, local_314, local_318, local_31c;
    
    sp = sp + -0x370;                                           // 0x00185eb0: addiu $sp, $sp, -0x370
    func_00183fa0();  // 183fa0                                // 0x00185ecc: jal 0x183fa0
    if (v1 != 0) goto label_0x1860c4;                           // 0x00185ed8: bnez $v1, 0x1860c4
    local_31c = v0;                                             // 0x00185edc: sw $v0, 0x31c($sp)
    s1 = sp + 0x210;                                            // 0x00185ee0: addiu $s1, $sp, 0x210
    func_00184048();  // 184048                                // 0x00185eec: jal 0x184048
    if (v1 != 0) goto label_0x1860c4;                           // 0x00185ef8: bnez $v1, 0x1860c4
    local_31c = v0;                                             // 0x00185efc: sw $v0, 0x31c($sp)
    a3 = sp + 0x310;                                            // 0x00185f0c: addiu $a3, $sp, 0x310
    func_00184320();  // 184320                                // 0x00185f10: jal 0x184320
    t0 = sp + 0x314;                                            // 0x00185f14: addiu $t0, $sp, 0x314
    v1 = 0x8101 << 16;                                          // 0x00185f18: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x00185f20: ori $v1, $v1, 0x11
    if (a0 != v1) goto label_0x1860c4;                          // 0x00185f24: bne $a0, $v1, 0x1860c4
    local_31c = v0;                                             // 0x00185f28: sw $v0, 0x31c($sp)
    v1 = local_0;                                               // 0x00185f2c: lhu $v1, 0($sp)
    v0 = v1 & 2;                                                // 0x00185f30: andi $v0, $v1, 2
    /* bnezl $v0, 0x185f48 */                                   // 0x00185f34: bnezl $v0, 0x185f48
    v0 = v1 & 0x20;                                             // 0x00185f38: andi $v0, $v1, 0x20
    v0 = 0x8101 << 16;                                          // 0x00185f3c: lui $v0, 0x8101
    goto label_0x1860c4;                                        // 0x00185f40: b 0x1860c4
    v0 = v0 | 0xd;                                              // 0x00185f44: ori $v0, $v0, 0xd
    if (v0 == 0) goto label_0x185fb0;                           // 0x00185f48: beqz $v0, 0x185fb0
    s0 = sp + 0x290;                                            // 0x00185f4c: addiu $s0, $sp, 0x290
    func_0010ac68();  // 10ac68                                // 0x00185f54: jal 0x10ac68
    a1 = 0x23 << 16;                                            // 0x00185f5c: lui $a1, 0x23
    func_0010a860();  // 10a860                                // 0x00185f64: jal 0x10a860
    a1 = a1 + -0x6030;                                          // 0x00185f68: addiu $a1, $a1, -0x6030
    a3 = -1;                                                    // 0x00185f78: addiu $a3, $zero, -1
    func_00186208();  // 186208                                // 0x00185f80: jal 0x186208
    t1 = sp + 0x318;                                            // 0x00185f84: addiu $t1, $sp, 0x318
    if (v1 != 0) goto label_0x1860c4;                           // 0x00185f8c: bnez $v1, 0x1860c4
    local_31c = v0;                                             // 0x00185f90: sw $v0, 0x31c($sp)
    v0 = local_318;                                             // 0x00185f94: lw $v0, 0x318($sp)
    v0 = (v0 < 3) ? 1 : 0;                                      // 0x00185f98: slti $v0, $v0, 3
    if (v0 != 0) goto label_0x185fb0;                           // 0x00185f9c: bnez $v0, 0x185fb0
    v1 = local_0;                                               // 0x00185fa0: lhu $v1, 0($sp)
    v0 = 0x8101 << 16;                                          // 0x00185fa4: lui $v0, 0x8101
    goto label_0x1860c4;                                        // 0x00185fa8: b 0x1860c4
    v0 = v0 | 0x5a;                                             // 0x00185fac: ori $v0, $v0, 0x5a
label_0x185fb0:
    v0 = v1 ^ 0x8000;                                           // 0x00185fb0: xori $v0, $v1, 0x8000
    a2 = local_310;                                             // 0x00185fb4: lw $a2, 0x310($sp)
    a3 = local_314;                                             // 0x00185fb8: lw $a3, 0x314($sp)
    local_0 = v0;                                               // 0x00185fc0: sh $v0, 0($sp)
    func_00184770();  // 184770                                // 0x00185fc4: jal 0x184770
    if (v1 != 0) goto label_0x1860c4;                           // 0x00185fd0: bnez $v1, 0x1860c4
    local_31c = v0;                                             // 0x00185fd4: sw $v0, 0x31c($sp)
    func_00186e48();  // 186e48                                // 0x00185fd8: jal 0x186e48
    if (v0 == 0) goto label_0x186098;                           // 0x00185fe0: beqz $v0, 0x186098
    a2 = local_10;                                              // 0x00185fe4: lw $a2, 0x10($sp)
    v0 = 0xffff << 16;                                          // 0x00185fe8: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00185fec: ori $v0, $v0, 0xffff
    if (a2 != v0) goto label_0x186000;                          // 0x00185ff0: bne $a2, $v0, 0x186000
    goto label_0x1860c4;                                        // 0x00185ff8: b 0x1860c4
label_0x186000:
    goto label_0x18603c;                                        // 0x00186000: b 0x18603c
    s2 = sp + 0x31c;                                            // 0x00186004: addiu $s2, $sp, 0x31c
label_0x186008:
    a2 = s0 ^ v0;                                               // 0x00186008: xor $a2, $s0, $v0
    func_00182c38();  // 182c38                                // 0x00186010: jal 0x182c38
    v0 = local_31c;                                             // 0x00186018: lw $v0, 0x31c($sp)
    if (v0 != 0) goto label_0x1860c8;                           // 0x0018601c: bnez $v0, 0x1860c8
    v0 = 0xffff << 16;                                          // 0x00186024: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00186028: ori $v0, $v0, 0xffff
    if (s0 == v0) goto label_0x186078;                          // 0x0018602c: beq $s0, $v0, 0x186078
    v0 = 0x7fff << 16;                                          // 0x00186030: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x00186034: ori $v0, $v0, 0xffff
    s0 = s0 & v0;                                               // 0x00186038: and $s0, $s0, $v0
label_0x18603c:
    func_00182b88();  // 182b88                                // 0x00186048: jal 0x182b88
    v1 = local_31c;                                             // 0x00186050: lw $v1, 0x31c($sp)
    if (v1 != 0) goto label_0x1860a4;                           // 0x00186054: bnez $v1, 0x1860a4
    v0 = 0xffff << 16;                                          // 0x0018605c: lui $v0, 0xffff
    v0 = v0 | 0xfffd;                                           // 0x00186060: ori $v0, $v0, 0xfffd
    if (s0 == v0) goto label_0x186078;                          // 0x00186064: beq $s0, $v0, 0x186078
    /* nop */                                                   // 0x00186068: nop 
    v0 = 0x8000 << 16;                                          // 0x0018606c: lui $v0, 0x8000
    if (s0 < 0) goto label_0x186008;                            // 0x00186070: bltz $s0, 0x186008
label_0x186078:
    func_001829e0();  // 1829e0                                // 0x00186078: jal 0x1829e0
    if (v0 == 0) goto label_0x186098;                           // 0x00186080: beqz $v0, 0x186098
    /* nop */                                                   // 0x00186084: nop 
    func_00186e48();  // 186e48                                // 0x00186088: jal 0x186e48
    if (v0 != 0) goto label_0x1860ac;                           // 0x00186090: bnez $v0, 0x1860ac
    a0 = 0x898;                                                 // 0x00186094: addiu $a0, $zero, 0x898
label_0x186098:
    v0 = 0x8101 << 16;                                          // 0x00186098: lui $v0, 0x8101
    goto label_0x1860c4;                                        // 0x0018609c: b 0x1860c4
    v0 = v0 | 0x6f;                                             // 0x001860a0: ori $v0, $v0, 0x6f
label_0x1860a4:
    goto label_0x1860c4;                                        // 0x001860a4: b 0x1860c4
label_0x1860ac:
    v1 = 0x27 << 16;                                            // 0x001860ac: lui $v1, 0x27
    v1 = v1 + 0x72c8;                                           // 0x001860b4: addiu $v1, $v1, 0x72c8
    v1 = v1 + a0;                                               // 0x001860bc: addu $v1, $v1, $a0
    g_00277b58 = 0;  // Global at 0x00277b58                    // 0x001860c0: sw $zero, 0x890($v1)
label_0x1860c4:
label_0x1860c8:
    return;                                                     // 0x001860d8: jr $ra
    sp = sp + 0x370;                                            // 0x001860dc: addiu $sp, $sp, 0x370
}