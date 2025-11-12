void func_001c5630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c5630: addiu $sp, $sp, -0x20
    v0 = 0x63;                                                  // 0x001c5634: addiu $v0, $zero, 0x63
    v1 = *(int8_t*)((a0) + 2);                                  // 0x001c5640: lb $v1, 2($a0)
    if (v1 == v0) goto label_0x1c57c0;                          // 0x001c5644: beq $v1, $v0, 0x1c57c0
    a2 = 1;                                                     // 0x001c564c: addiu $a2, $zero, 1
    if (v1 == a2) goto label_0x1c5680;                          // 0x001c5650: beq $v1, $a2, 0x1c5680
    /* nop */                                                   // 0x001c5654: nop 
    if (v1 == 0) goto label_0x1c5668;                           // 0x001c5658: beqz $v1, 0x1c5668
    /* nop */                                                   // 0x001c565c: nop 
    goto label_0x1c57e4;                                        // 0x001c5660: b 0x1c57e4
    v0 = 1;                                                     // 0x001c5664: addiu $v0, $zero, 1
label_0x1c5668:
    *(uint8_t*)((s0) + 2) = a2;                                 // 0x001c5668: sb $a2, 2($s0)
    v0 = 0x27;                                                  // 0x001c566c: addiu $v0, $zero, 0x27
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5670: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c5674: lw $a1, 0xec($s0)
    func_001c0090();  // 0x1bffd0                                // 0x001c5678: jal 0x1bffd0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c567c: lw $a0, 0x24($s0)
label_0x1c5680:
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c5680: jal 0x1c0bc0
    /* nop */                                                   // 0x001c5684: nop 
    v1 = -1;                                                    // 0x001c5688: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c57e0;                          // 0x001c568c: beq $v0, $v1, 0x1c57e0
    v1 = -0xfb;                                                 // 0x001c5690: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c574c;                          // 0x001c5694: beq $v0, $v1, 0x1c574c
    /* nop */                                                   // 0x001c5698: nop 
    if (v0 == 0) goto label_0x1c5704;                           // 0x001c569c: beqz $v0, 0x1c5704
    v1 = -0x100;                                                // 0x001c56a4: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c56e8;                          // 0x001c56a8: beq $v0, $v1, 0x1c56e8
    v1 = -0xfe;                                                 // 0x001c56ac: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c56cc;                          // 0x001c56b0: beq $v0, $v1, 0x1c56cc
    /* nop */                                                   // 0x001c56b4: nop 
    v1 = -0xfd;                                                 // 0x001c56b8: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c56cc;                          // 0x001c56bc: beq $v0, $v1, 0x1c56cc
    /* nop */                                                   // 0x001c56c0: nop 
    goto label_0x1c5768;                                        // 0x001c56c4: b 0x1c5768
    v1 = v0 & 0xff;                                             // 0x001c56c8: andi $v1, $v0, 0xff
label_0x1c56cc:
    v0 = 0x28;                                                  // 0x001c56cc: addiu $v0, $zero, 0x28
    v1 = 0x63;                                                  // 0x001c56d0: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c56d4: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c56d8: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c56dc: sb $v1, 2($s0)
    goto label_0x1c57e0;                                        // 0x001c56e0: b 0x1c57e0
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c56e4: sw $v0, 0x34($s0)
label_0x1c56e8:
    v0 = 9;                                                     // 0x001c56e8: addiu $v0, $zero, 9
    v1 = 0x63;                                                  // 0x001c56ec: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c56f0: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c56f4: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c56f8: sb $v1, 2($s0)
    goto label_0x1c57e0;                                        // 0x001c56fc: b 0x1c57e0
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5700: sw $v0, 0x34($s0)
label_0x1c5704:
    func_001c6ef0();  // 0x1c6ea0                                // 0x001c5704: jal 0x1c6ea0
    /* nop */                                                   // 0x001c5708: nop 
    if (v0 != 0) goto label_0x1c5728;                           // 0x001c570c: bnez $v0, 0x1c5728
    v1 = 0x2a;                                                  // 0x001c5710: addiu $v1, $zero, 0x2a
    func_001c6f00();  // 0x1c6ef0                                // 0x001c5714: jal 0x1c6ef0
    v0 = 0x42;                                                  // 0x001c571c: addiu $v0, $zero, 0x42
    goto label_0x1c5738;                                        // 0x001c5720: b 0x1c5738
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5724: sw $v0, 0x2c($s0)
label_0x1c5728:
    v0 = -0x100;                                                // 0x001c5728: addiu $v0, $zero, -0x100
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c572c: sw $v1, 0x2c($s0)
    at = 0x31 << 16;                                            // 0x001c5730: lui $at, 0x31
    g_00315fe4 = v0;  // Global at 0x00315fe4                   // 0x001c5734: sw $v0, 0x5fe4($at)
label_0x1c5738:
    v1 = 0x63;                                                  // 0x001c5738: addiu $v1, $zero, 0x63
    v0 = 1;                                                     // 0x001c573c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5740: sb $v1, 2($s0)
    goto label_0x1c57e0;                                        // 0x001c5744: b 0x1c57e0
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5748: sw $v0, 0x34($s0)
label_0x1c574c:
    v0 = 9;                                                     // 0x001c574c: addiu $v0, $zero, 9
    v1 = 0x63;                                                  // 0x001c5750: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5754: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c5758: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c575c: sb $v1, 2($s0)
    goto label_0x1c57e0;                                        // 0x001c5760: b 0x1c57e0
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5764: sw $v0, 0x34($s0)
label_0x1c5768:
    v0 = 0x63;                                                  // 0x001c5768: addiu $v0, $zero, 0x63
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c576c: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c5770: sw $v1, 0x34($s0)
    v0 = 3;                                                     // 0x001c5774: addiu $v0, $zero, 3
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c5778: lw $v1, 0x34($s0)
    if (v1 == v0) goto label_0x1c57b8;                          // 0x001c577c: beq $v1, $v0, 0x1c57b8
    v0 = 0x28;                                                  // 0x001c5780: addiu $v0, $zero, 0x28
    v0 = 4;                                                     // 0x001c5784: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1c57b4;                          // 0x001c5788: beq $v1, $v0, 0x1c57b4
    v0 = 2;                                                     // 0x001c578c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c57b4;                          // 0x001c5790: beq $v1, $v0, 0x1c57b4
    /* nop */                                                   // 0x001c5794: nop 
    v0 = 1;                                                     // 0x001c5798: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c57ac;                          // 0x001c579c: beq $v1, $v0, 0x1c57ac
    v0 = 0x29;                                                  // 0x001c57a0: addiu $v0, $zero, 0x29
    goto label_0x1c57e0;                                        // 0x001c57a4: b 0x1c57e0
    /* nop */                                                   // 0x001c57a8: nop 
label_0x1c57ac:
    goto label_0x1c57e0;                                        // 0x001c57ac: b 0x1c57e0
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c57b0: sw $v0, 0x2c($s0)
label_0x1c57b4:
    v0 = 0x28;                                                  // 0x001c57b4: addiu $v0, $zero, 0x28
label_0x1c57b8:
    goto label_0x1c57e0;                                        // 0x001c57b8: b 0x1c57e0
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c57bc: sw $v0, 0x2c($s0)
label_0x1c57c0:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c57c0: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c57c4: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c57e0;                           // 0x001c57c8: beqz $v0, 0x1c57e0
    at = 0x31 << 16;                                            // 0x001c57cc: lui $at, 0x31
    func_001c7470();  // 0x1c7460                                // 0x001c57d0: jal 0x1c7460
    g_00313866 = 0;  // Global at 0x00313866                    // 0x001c57d4: sb $zero, 0x3866($at)
    goto label_0x1c57e4;                                        // 0x001c57d8: b 0x1c57e4
label_0x1c57e0:
    v0 = 1;                                                     // 0x001c57e0: addiu $v0, $zero, 1
label_0x1c57e4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c57e8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c57ec: jr $ra
    sp = sp + 0x20;                                             // 0x001c57f0: addiu $sp, $sp, 0x20
}