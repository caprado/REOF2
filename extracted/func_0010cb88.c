void func_0010cb88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0010cb88: addiu $sp, $sp, -0x20
    v1 = -1;                                                    // 0x0010cb8c: addiu $v1, $zero, -1
    if (s1 == v1) goto label_0x10ccfc;                          // 0x0010cba4: beq $s1, $v1, 0x10ccfc
    v0 = -1;                                                    // 0x0010cba8: addiu $v0, $zero, -1
    v1 = *(int32_t*)((s0) + 0x54);                              // 0x0010cbac: lw $v1, 0x54($s0)
    /* bnezl $v1, 0x10cbc8 */                                   // 0x0010cbb0: bnezl $v1, 0x10cbc8
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x0010cbb4: lw $v0, 0x38($v1)
    v0 = 0x1f << 16;                                            // 0x0010cbb8: lui $v0, 0x1f
    v1 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010cbbc: lw $v1, -0x210($v0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x0010cbc0: sw $v1, 0x54($s0)
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x0010cbc4: lw $v0, 0x38($v1)
    /* bnezl $v0, 0x10cbdc */                                   // 0x0010cbc8: bnezl $v0, 0x10cbdc
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010cbcc: lhu $v0, 0xc($s0)
    func_00105518();  // 105518                                // 0x0010cbd0: jal 0x105518
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010cbd8: lhu $v0, 0xc($s0)
    a0 = v0 & 0xffdf;                                           // 0x0010cbdc: andi $a0, $v0, 0xffdf
    v1 = a0 & 4;                                                // 0x0010cbe0: andi $v1, $a0, 4
    if (v1 != 0) goto label_0x10cc34;                           // 0x0010cbe4: bnez $v1, 0x10cc34
    *(uint16_t*)((s0) + 0xc) = a0;                              // 0x0010cbe8: sh $a0, 0xc($s0)
    v1 = a0 & 0x10;                                             // 0x0010cbec: andi $v1, $a0, 0x10
    if (v1 == 0) goto label_0x10ccfc;                           // 0x0010cbf0: beqz $v1, 0x10ccfc
    v0 = -1;                                                    // 0x0010cbf4: addiu $v0, $zero, -1
    v0 = a0 & 8;                                                // 0x0010cbf8: andi $v0, $a0, 8
    /* beqzl $v0, 0x10cc2c */                                   // 0x0010cbfc: beqzl $v0, 0x10cc2c
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010cc00: lhu $v0, 0xc($s0)
    func_001050b8();  // 1050b8                                // 0x0010cc04: jal 0x1050b8
    if (v0 != 0) goto label_0x10ccfc;                           // 0x0010cc0c: bnez $v0, 0x10ccfc
    v0 = -1;                                                    // 0x0010cc10: addiu $v0, $zero, -1
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010cc14: lhu $v0, 0xc($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0010cc18: sw $zero, 8($s0)
    v0 = v0 & 0xfff7;                                           // 0x0010cc1c: andi $v0, $v0, 0xfff7
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x0010cc20: sw $zero, 0x18($s0)
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010cc24: sh $v0, 0xc($s0)
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010cc28: lhu $v0, 0xc($s0)
    v0 = v0 | 4;                                                // 0x0010cc2c: ori $v0, $v0, 4
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010cc30: sh $v0, 0xc($s0)
label_0x10cc34:
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x0010cc34: lw $v0, 0x30($s0)
    if (v0 == 0) goto label_0x10cc88;                           // 0x0010cc38: beqz $v0, 0x10cc88
    s1 = s1 & 0xff;                                             // 0x0010cc3c: andi $s1, $s1, 0xff
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0010cc40: lw $v0, 4($s0)
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x0010cc44: lw $v1, 0x34($s0)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0010cc48: slt $v0, $v0, $v1
    /* bnezl $v0, 0x10cc70 */                                   // 0x0010cc4c: bnezl $v0, 0x10cc70
    a0 = *(int32_t*)(s0);                                       // 0x0010cc50: lw $a0, 0($s0)
    func_0010caa0();  // 10caa0                                // 0x0010cc54: jal 0x10caa0
    /* beqzl $v0, 0x10cc70 */                                   // 0x0010cc5c: beqzl $v0, 0x10cc70
    a0 = *(int32_t*)(s0);                                       // 0x0010cc60: lw $a0, 0($s0)
    goto label_0x10ccfc;                                        // 0x0010cc64: b 0x10ccfc
    v0 = -1;                                                    // 0x0010cc68: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0010cc6c: nop 
    a0 = a0 + -1;                                               // 0x0010cc74: addiu $a0, $a0, -1
    *(uint32_t*)(s0) = a0;                                      // 0x0010cc78: sw $a0, 0($s0)
    *(uint8_t*)(a0) = s1;                                       // 0x0010cc7c: sb $s1, 0($a0)
    goto label_0x10ccb8;                                        // 0x0010cc80: b 0x10ccb8
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0010cc84: lw $v1, 4($s0)
label_0x10cc88:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x0010cc88: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x10ccc8;                           // 0x0010cc8c: beqz $v0, 0x10ccc8
    a3 = *(int32_t*)(s0);                                       // 0x0010cc90: lw $a3, 0($s0)
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x0010cc94: sltu $v0, $v0, $a3
    if (v0 == 0) goto label_0x10cccc;                           // 0x0010cc98: beqz $v0, 0x10cccc
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0010cc9c: lw $v1, 4($s0)
    v0 = *(uint8_t*)((a3) + -1);                                // 0x0010cca0: lbu $v0, -1($a3)
    if (v0 != s1) goto label_0x10cccc;                          // 0x0010cca4: bne $v0, $s1, 0x10cccc
    /* nop */                                                   // 0x0010cca8: nop 
    v0 = a3 + -1;                                               // 0x0010ccac: addiu $v0, $a3, -1
    *(uint32_t*)(s0) = v0;                                      // 0x0010ccb0: sw $v0, 0($s0)
label_0x10ccb8:
    v1 = v1 + 1;                                                // 0x0010ccb8: addiu $v1, $v1, 1
    goto label_0x10ccfc;                                        // 0x0010ccbc: b 0x10ccfc
    *(uint32_t*)((s0) + 4) = v1;                                // 0x0010ccc0: sw $v1, 4($s0)
    /* nop */                                                   // 0x0010ccc4: nop 
label_0x10ccc8:
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0010ccc8: lw $v1, 4($s0)
label_0x10cccc:
    a0 = s0 + 0x40;                                             // 0x0010cccc: addiu $a0, $s0, 0x40
    a1 = 3;                                                     // 0x0010ccd0: addiu $a1, $zero, 3
    a2 = s0 + 0x42;                                             // 0x0010ccd4: addiu $a2, $s0, 0x42
    v0 = 1;                                                     // 0x0010ccd8: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x0010ccdc: sw $v1, 0x3c($s0)
    *(uint32_t*)((s0) + 0x38) = a3;                             // 0x0010cce0: sw $a3, 0x38($s0)
    *(uint32_t*)((s0) + 0x30) = a0;                             // 0x0010cce4: sw $a0, 0x30($s0)
    *(uint32_t*)((s0) + 0x34) = a1;                             // 0x0010cce8: sw $a1, 0x34($s0)
    *(uint32_t*)(s0) = a2;                                      // 0x0010ccec: sw $a2, 0($s0)
    *(uint8_t*)((s0) + 0x42) = s1;                              // 0x0010ccf0: sb $s1, 0x42($s0)
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0010ccf4: sw $v0, 4($s0)
label_0x10ccfc:
    return;                                                     // 0x0010cd08: jr $ra
    sp = sp + 0x20;                                             // 0x0010cd0c: addiu $sp, $sp, 0x20
}