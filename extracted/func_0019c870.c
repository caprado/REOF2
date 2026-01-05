void func_0019c870() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a2 & 0xffff;                                           // 0x0019c870: andi $v0, $a2, 0xffff
    sp = sp + -0x30;                                            // 0x0019c874: addiu $sp, $sp, -0x30
    a2 = v0 + -1;                                               // 0x0019c878: addiu $a2, $v0, -1
    v0 = a2 << 3;                                               // 0x0019c880: sll $v0, $a2, 3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019c884: addu.qb $zero, $sp, $s1
    v0 = v0 - a2;                                               // 0x0019c888: subu $v0, $v0, $a2
    v1 = 0x29 << 16;                                            // 0x0019c88c: lui $v1, 0x29
    t0 = v0 << 3;                                               // 0x0019c890: sll $t0, $v0, 3
    v1 = v1 + -0x7380;                                          // 0x0019c898: addiu $v1, $v1, -0x7380
    a2 = 1;                                                     // 0x0019c89c: addiu $a2, $zero, 1
    s0 = v1 + t0;                                               // 0x0019c8a0: addu $s0, $v1, $t0
    v0 = 4;                                                     // 0x0019c8a4: addiu $v0, $zero, 4
    *(uint8_t*)((s0) + 0x34) = a2;                              // 0x0019c8a8: sb $a2, 0x34($s0)
    *(uint32_t*)(s0) = a3;                                      // 0x0019c8ac: sw $a3, 0($s0)
    v1 = str_0022a500;  // "Supported only 1 palette. Unallocatable. @flCreatePaletteHandle" // 0x0019c8b0: lw $v1, 0($a0)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x0019c8b4: sw $v1, 4($s0)
    v1 = g_0022a504;  // Global at 0x0022a504                   // 0x0019c8b8: lw $v1, 4($a0)
    *(uint16_t*)((s0) + 0x1a) = v1;                             // 0x0019c8bc: sh $v1, 0x1a($s0)
    v1 = g_0022a508;  // Global at 0x0022a508                   // 0x0019c8c0: lw $v1, 8($a0)
    *(uint16_t*)((s0) + 0x1c) = v1;                             // 0x0019c8c4: sh $v1, 0x1c($s0)
    *(uint8_t*)((s0) + 0x36) = 0;                               // 0x0019c8c8: sb $zero, 0x36($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x0019c8cc: sw $zero, 0x24($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0019c8d0: sw $zero, 0x2c($s0)
    *(uint8_t*)((s0) + 0x37) = 0;                               // 0x0019c8d4: sb $zero, 0x37($s0)
    *(uint32_t*)((s0) + 0x30) = a1;                             // 0x0019c8d8: sw $a1, 0x30($s0)
    v1 = g_0022a514;  // Global at 0x0022a514                   // 0x0019c8dc: lw $v1, 0x14($a0)
    if (v1 == v0) goto label_0x19c950;                          // 0x0019c8e0: beq $v1, $v0, 0x19c950
    v0 = 3;                                                     // 0x0019c8e8: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x19c944;                          // 0x0019c8ec: beq $v1, $v0, 0x19c944
    /* nop */                                                   // 0x0019c8f0: nop 
    v0 = 2;                                                     // 0x0019c8f4: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x19c938;                          // 0x0019c8f8: beq $v1, $v0, 0x19c938
    /* nop */                                                   // 0x0019c8fc: nop 
    if (v1 == a2) goto label_0x19c92c;                          // 0x0019c900: beq $v1, $a2, 0x19c92c
    v0 = 0x13;                                                  // 0x0019c904: addiu $v0, $zero, 0x13
    if (v1 == 0) goto label_0x19c91c;                           // 0x0019c908: beqz $v1, 0x19c91c
    v0 = 0x14;                                                  // 0x0019c90c: addiu $v0, $zero, 0x14
    goto label_0x19c95c;                                        // 0x0019c910: b 0x19c95c
    a1 = *(int32_t*)((s1) + 4);                                 // 0x0019c914: lw $a1, 4($s1)
    v0 = 0x14;                                                  // 0x0019c918: addiu $v0, $zero, 0x14
label_0x19c91c:
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x0019c91c: sw $v0, 0x20($s0)
    goto label_0x19c958;                                        // 0x0019c920: b 0x19c958
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x0019c924: sw $zero, 0xc($s0)
    v0 = 0x13;                                                  // 0x0019c928: addiu $v0, $zero, 0x13
label_0x19c92c:
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x0019c92c: sw $v0, 0x20($s0)
    goto label_0x19c958;                                        // 0x0019c930: b 0x19c958
    *(uint32_t*)((s0) + 0xc) = a2;                              // 0x0019c934: sw $a2, 0xc($s0)
label_0x19c938:
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x0019c938: sw $v0, 0x20($s0)
    goto label_0x19c958;                                        // 0x0019c93c: b 0x19c958
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0019c940: sw $v0, 0xc($s0)
label_0x19c944:
    *(uint32_t*)((s0) + 0x20) = a2;                             // 0x0019c944: sw $a2, 0x20($s0)
    goto label_0x19c958;                                        // 0x0019c948: b 0x19c958
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0019c94c: sw $v0, 0xc($s0)
label_0x19c950:
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x0019c950: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0019c954: sw $v0, 0xc($s0)
label_0x19c958:
    a1 = *(int32_t*)((s1) + 4);                                 // 0x0019c958: lw $a1, 4($s1)
label_0x19c95c:
    v0 = 0x20;                                                  // 0x0019c95c: addiu $v0, $zero, 0x20
    if (a1 == v0) goto label_0x19c9b8;                          // 0x0019c960: beq $a1, $v0, 0x19c9b8
    /* nop */                                                   // 0x0019c964: nop 
    v0 = 0x40;                                                  // 0x0019c968: addiu $v0, $zero, 0x40
    if (a1 == v0) goto label_0x19c9b8;                          // 0x0019c96c: beq $a1, $v0, 0x19c9b8
    /* nop */                                                   // 0x0019c970: nop 
    v0 = 0x80;                                                  // 0x0019c974: addiu $v0, $zero, 0x80
    if (a1 == v0) goto label_0x19c9b8;                          // 0x0019c978: beq $a1, $v0, 0x19c9b8
    /* nop */                                                   // 0x0019c97c: nop 
    v0 = 0x100;                                                 // 0x0019c980: addiu $v0, $zero, 0x100
    if (a1 == v0) goto label_0x19c9b8;                          // 0x0019c984: beq $a1, $v0, 0x19c9b8
    /* nop */                                                   // 0x0019c988: nop 
    v0 = 0x200;                                                 // 0x0019c98c: addiu $v0, $zero, 0x200
    if (a1 == v0) goto label_0x19c9b8;                          // 0x0019c990: beq $a1, $v0, 0x19c9b8
    /* nop */                                                   // 0x0019c994: nop 
    v0 = 0x400;                                                 // 0x0019c998: addiu $v0, $zero, 0x400
    if (a1 == v0) goto label_0x19c9b8;                          // 0x0019c99c: beq $a1, $v0, 0x19c9b8
    /* nop */                                                   // 0x0019c9a0: nop 
    a0 = 0x23 << 16;                                            // 0x0019c9a4: lui $a0, 0x23
    func_001a0760();  // 1a0760                                // 0x0019c9a8: jal 0x1a0760
    a0 = &str_0022a4c0;  // "Not supported height...%d @flPS2GetTextureInfoFromContext" // 0x0019c9ac: addiu $a0, $a0, -0x5b40
    goto label_0x19ca60;                                        // 0x0019c9b0: b 0x19ca60
label_0x19c9b8:
    func_0019d7e0();  // 19d7e0                                // 0x0019c9b8: jal 0x19d7e0
    a0 = *(int16_t*)((s0) + 0x1a);                              // 0x0019c9bc: lh $a0, 0x1a($s0)
    *(uint16_t*)((s0) + 0x16) = v0;                             // 0x0019c9c0: sh $v0, 0x16($s0)
    a1 = *(int32_t*)((s1) + 8);                                 // 0x0019c9c4: lw $a1, 8($s1)
    v0 = 0x20;                                                  // 0x0019c9c8: addiu $v0, $zero, 0x20
    if (a1 == v0) goto label_0x19ca24;                          // 0x0019c9cc: beq $a1, $v0, 0x19ca24
    /* nop */                                                   // 0x0019c9d0: nop 
    v0 = 0x40;                                                  // 0x0019c9d4: addiu $v0, $zero, 0x40
    if (a1 == v0) goto label_0x19ca24;                          // 0x0019c9d8: beq $a1, $v0, 0x19ca24
    /* nop */                                                   // 0x0019c9dc: nop 
    v0 = 0x80;                                                  // 0x0019c9e0: addiu $v0, $zero, 0x80
    if (a1 == v0) goto label_0x19ca24;                          // 0x0019c9e4: beq $a1, $v0, 0x19ca24
    /* nop */                                                   // 0x0019c9e8: nop 
    v0 = 0x100;                                                 // 0x0019c9ec: addiu $v0, $zero, 0x100
    if (a1 == v0) goto label_0x19ca24;                          // 0x0019c9f0: beq $a1, $v0, 0x19ca24
    /* nop */                                                   // 0x0019c9f4: nop 
    v0 = 0x200;                                                 // 0x0019c9f8: addiu $v0, $zero, 0x200
    if (a1 == v0) goto label_0x19ca24;                          // 0x0019c9fc: beq $a1, $v0, 0x19ca24
    /* nop */                                                   // 0x0019ca00: nop 
    v0 = 0x400;                                                 // 0x0019ca04: addiu $v0, $zero, 0x400
    if (a1 == v0) goto label_0x19ca24;                          // 0x0019ca08: beq $a1, $v0, 0x19ca24
    /* nop */                                                   // 0x0019ca0c: nop 
    a0 = 0x23 << 16;                                            // 0x0019ca10: lui $a0, 0x23
    func_001a0760();  // 1a0760                                // 0x0019ca14: jal 0x1a0760
    a0 = &str_0022a500;  // "Supported only 1 palette. Unallocatable. @flCreatePaletteHandle" // 0x0019ca18: addiu $a0, $a0, -0x5b00
    goto label_0x19ca60;                                        // 0x0019ca1c: b 0x19ca60
label_0x19ca24:
    func_0019d7e0();  // 19d7e0                                // 0x0019ca24: jal 0x19d7e0
    a0 = *(int16_t*)((s0) + 0x1c);                              // 0x0019ca28: lh $a0, 0x1c($s0)
    *(uint16_t*)((s0) + 0x18) = v0;                             // 0x0019ca2c: sh $v0, 0x18($s0)
    func_0019d8d0();  // 19d8d0                                // 0x0019ca30: jal 0x19d8d0
    *(uint16_t*)((s0) + 0x10) = v0;                             // 0x0019ca38: sh $v0, 0x10($s0)
    v0 = 0x20;                                                  // 0x0019ca3c: addiu $v0, $zero, 0x20
    *(uint16_t*)((s0) + 0x12) = v0;                             // 0x0019ca40: sh $v0, 0x12($s0)
    a2 = *(int16_t*)((s0) + 0x1c);                              // 0x0019ca44: lh $a2, 0x1c($s0)
    a3 = *(int32_t*)((s0) + 0x30);                              // 0x0019ca48: lw $a3, 0x30($s0)
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x0019ca4c: lw $a0, 0x20($s0)
    func_0019d830();  // 19d830                                // 0x0019ca50: jal 0x19d830
    a1 = *(int16_t*)((s0) + 0x1a);                              // 0x0019ca54: lh $a1, 0x1a($s0)
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0019ca58: sw $v0, 8($s0)
    v0 = 1;                                                     // 0x0019ca5c: addiu $v0, $zero, 1
label_0x19ca60:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019ca64: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019ca68: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019ca6c: jr $ra
    sp = sp + 0x30;                                             // 0x0019ca70: addiu $sp, $sp, 0x30
}