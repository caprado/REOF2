void func_0012c698() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0012c698: addiu $sp, $sp, -0x40
    a3 = 0x20 << 16;                                            // 0x0012c69c: lui $a3, 0x20
    v1 = a3 + -0x1c78;                                          // 0x0012c6bc: addiu $v1, $a3, -0x1c78
    v0 = g_001fe388;  // Global at 0x001fe388                   // 0x0012c6d0: lb $v0, 0($v1)
    if (v0 == 0) goto label_0x12c704;                           // 0x0012c6d4: beqz $v0, 0x12c704
    s0 = *(int32_t*)(s4);                                       // 0x0012c6d8: lw $s0, 0($s4)
    a1 = a1 + 1;                                                // 0x0012c6dc: addiu $a1, $a1, 1
    v0 = (a1 < 0x10) ? 1 : 0;                                   // 0x0012c6e0: slti $v0, $a1, 0x10
    if (v0 == 0) goto label_0x12c704;                           // 0x0012c6e4: beqz $v0, 0x12c704
    v1 = v1 + 0x9c;                                             // 0x0012c6e8: addiu $v1, $v1, 0x9c
    v0 = g_001fe424;  // Global at 0x001fe424                   // 0x0012c6ec: lb $v0, 0($v1)
    /* nop */                                                   // 0x0012c6f0: nop 
    /* nop */                                                   // 0x0012c6f4: nop 
    /* nop */                                                   // 0x0012c6f8: nop 
    /* bnezl $v0, 0x12c6e0 */                                   // 0x0012c6fc: bnezl $v0, 0x12c6e0
    a1 = a1 + 1;                                                // 0x0012c700: addiu $a1, $a1, 1
label_0x12c704:
    v1 = 0x10;                                                  // 0x0012c704: addiu $v1, $zero, 0x10
    if (a1 == v1) goto label_0x12c7f0;                          // 0x0012c708: beq $a1, $v1, 0x12c7f0
    v0 = a1 << 2;                                               // 0x0012c710: sll $v0, $a1, 2
    v1 = a3 + -0x1c78;                                          // 0x0012c714: addiu $v1, $a3, -0x1c78
    v0 = v0 + a1;                                               // 0x0012c718: addu $v0, $v0, $a1
    v0 = v0 << 3;                                               // 0x0012c720: sll $v0, $v0, 3
    v0 = v0 - a1;                                               // 0x0012c724: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x0012c728: sll $v0, $v0, 2
    func_0013fc80();  // 0x13fc78                                // 0x0012c72c: jal 0x13fc78
    s2 = v0 + v1;                                               // 0x0012c730: addu $s2, $v0, $v1
    func_0013fc88();  // 0x13fc80                                // 0x0012c738: jal 0x13fc80
    s0 = (unsigned)v0 >> 0x1f;                                  // 0x0012c744: srl $s0, $v0, 0x1f
    func_0013fca8();  // 0x13fc88                                // 0x0012c748: jal 0x13fc88
    s0 = s0 + v0;                                               // 0x0012c74c: addu $s0, $s0, $v0
    a3 = (unsigned)v0 >> 0x1f;                                  // 0x0012c750: srl $a3, $v0, 0x1f
    s0 = s0 >> 1;                                               // 0x0012c754: sra $s0, $s0, 1
    a3 = a3 + v0;                                               // 0x0012c758: addu $a3, $a3, $v0
    a3 = a3 >> 1;                                               // 0x0012c760: sra $a3, $a3, 1
    func_00124660();  // 0x124520                                // 0x0012c76c: jal 0x124520
    a3 = a2 + a3;                                               // 0x0012c770: addu $a3, $a2, $a3
    if (a0 == 0) goto label_0x12c7f0;                           // 0x0012c778: beqz $a0, 0x12c7f0
    *(uint32_t*)((s2) + 4) = a0;                                // 0x0012c77c: sw $a0, 4($s2)
    a1 = 0x13 << 16;                                            // 0x0012c780: lui $a1, 0x13
    func_00124b28();  // 0x124b00                                // 0x0012c788: jal 0x124b00
    a1 = a1 + -0x3488;                                          // 0x0012c78c: addiu $a1, $a1, -0x3488
    *(uint32_t*)((s2) + 8) = s5;                                // 0x0012c790: sw $s5, 8($s2)
    *(uint8_t*)((s2) + 2) = s3;                                 // 0x0012c794: sb $s3, 2($s2)
    if (s3 <= 0) goto label_0x12c7c8;                           // 0x0012c798: blez $s3, 0x12c7c8
    a3 = s2 + 0xc;                                              // 0x0012c7a0: addiu $a3, $s2, 0xc
    /* nop */                                                   // 0x0012c7a4: nop 
label_0x12c7a8:
    v0 = a2 << 2;                                               // 0x0012c7a8: sll $v0, $a2, 2
    a2 = a2 + 1;                                                // 0x0012c7ac: addiu $a2, $a2, 1
    v1 = v0 + s4;                                               // 0x0012c7b0: addu $v1, $v0, $s4
    v0 = a3 + v0;                                               // 0x0012c7b4: addu $v0, $a3, $v0
    a0 = g_001fe388;  // Global at 0x001fe388                   // 0x0012c7b8: lw $a0, 0($v1)
    a1 = (a2 < s3) ? 1 : 0;                                     // 0x0012c7bc: slt $a1, $a2, $s3
    if (a1 != 0) goto label_0x12c7a8;                           // 0x0012c7c0: bnez $a1, 0x12c7a8
    *(uint32_t*)(v0) = a0;                                      // 0x0012c7c4: sw $a0, 0($v0)
label_0x12c7c8:
    *(uint8_t*)((s2) + 1) = 0;                                  // 0x0012c7c8: sb $zero, 1($s2)
    func_0012c698();  // 0x12c660                                // 0x0012c7cc: jal 0x12c660
    *(uint32_t*)((s2) + 0x48) = 0;                              // 0x0012c7d4: sw $zero, 0x48($s2)
    v0 = 1;                                                     // 0x0012c7d8: addiu $v0, $zero, 1
    *(uint32_t*)((s2) + 0x4c) = 0;                              // 0x0012c7dc: sw $zero, 0x4c($s2)
    *(uint32_t*)((s2) + 0x50) = 0;                              // 0x0012c7e0: sw $zero, 0x50($s2)
    *(uint32_t*)((s2) + 0x54) = 0;                              // 0x0012c7e4: sw $zero, 0x54($s2)
    *(uint8_t*)(s2) = v0;                                       // 0x0012c7e8: sb $v0, 0($s2)
label_0x12c7f0:
    return;                                                     // 0x0012c80c: jr $ra
    sp = sp + 0x40;                                             // 0x0012c810: addiu $sp, $sp, 0x40
}