void func_0019d630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 & 0xffff;                                           // 0x0019d630: andi $v0, $a1, 0xffff
    v1 = 0x29 << 16;                                            // 0x0019d634: lui $v1, 0x29
    a2 = v0 + -1;                                               // 0x0019d638: addiu $a2, $v0, -1
    v1 = v1 + -0x7380;                                          // 0x0019d63c: addiu $v1, $v1, -0x7380
    a1 = a2 << 3;                                               // 0x0019d640: sll $a1, $a2, 3
    v0 = 0x14;                                                  // 0x0019d644: addiu $v0, $zero, 0x14
    a1 = a1 - a2;                                               // 0x0019d648: subu $a1, $a1, $a2
    a1 = a1 << 3;                                               // 0x0019d64c: sll $a1, $a1, 3
    a2 = v1 + a1;                                               // 0x0019d650: addu $a2, $v1, $a1
    v1 = *(int16_t*)((a2) + 0x1a);                              // 0x0019d654: lh $v1, 0x1a($a2)
    *(uint32_t*)((a0) + 4) = v1;                                // 0x0019d658: sw $v1, 4($a0)
    v1 = *(int16_t*)((a2) + 0x1c);                              // 0x0019d65c: lh $v1, 0x1c($a2)
    *(uint32_t*)((a0) + 8) = v1;                                // 0x0019d660: sw $v1, 8($a0)
    v1 = *(int32_t*)((a2) + 0xc);                               // 0x0019d664: lw $v1, 0xc($a2)
    *(uint32_t*)((a0) + 0x14) = v1;                             // 0x0019d668: sw $v1, 0x14($a0)
    a1 = *(int32_t*)((a0) + 4);                                 // 0x0019d66c: lw $a1, 4($a0)
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x0019d670: lw $v1, 0x14($a0)
    /* multiply: a1 * v1 -> hi:lo */                            // 0x0019d674: mult $ac3, $a1, $v1
    *(uint32_t*)((a0) + 0xc) = v1;                              // 0x0019d678: sw $v1, 0xc($a0)
    v1 = *(int32_t*)((a2) + 0x20);                              // 0x0019d67c: lw $v1, 0x20($a2)
    if (v1 == v0) goto label_0x19d798;                          // 0x0019d680: beq $v1, $v0, 0x19d798
    v0 = 0x13;                                                  // 0x0019d684: addiu $v0, $zero, 0x13
    if (v1 == v0) goto label_0x19d798;                          // 0x0019d688: beq $v1, $v0, 0x19d798
    /* nop */                                                   // 0x0019d68c: nop 
    v0 = 2;                                                     // 0x0019d690: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x19d744;                          // 0x0019d694: beq $v1, $v0, 0x19d744
    a3 = 5;                                                     // 0x0019d698: addiu $a3, $zero, 5
    v0 = 1;                                                     // 0x0019d69c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x19d700;                          // 0x0019d6a0: beq $v1, $v0, 0x19d700
    a1 = 8;                                                     // 0x0019d6a4: addiu $a1, $zero, 8
    if (v1 == 0) goto label_0x19d6b8;                           // 0x0019d6a8: beqz $v1, 0x19d6b8
    a2 = 8;                                                     // 0x0019d6ac: addiu $a2, $zero, 8
    goto label_0x19d7cc;                                        // 0x0019d6b0: b 0x19d7cc
    v0 = 1;                                                     // 0x0019d6b4: addiu $v0, $zero, 1
label_0x19d6b8:
    a1 = 0x10;                                                  // 0x0019d6b8: addiu $a1, $zero, 0x10
    *(uint32_t*)((a0) + 0x18) = a2;                             // 0x0019d6bc: sw $a2, 0x18($a0)
    v1 = 0xff;                                                  // 0x0019d6c0: addiu $v1, $zero, 0xff
    *(uint32_t*)((a0) + 0x1c) = a1;                             // 0x0019d6c4: sw $a1, 0x1c($a0)
    v0 = 0x18;                                                  // 0x0019d6c8: addiu $v0, $zero, 0x18
    *(uint32_t*)((a0) + 0x20) = v1;                             // 0x0019d6cc: sw $v1, 0x20($a0)
    *(uint32_t*)((a0) + 0x24) = a2;                             // 0x0019d6d0: sw $a2, 0x24($a0)
    *(uint32_t*)((a0) + 0x28) = a2;                             // 0x0019d6d4: sw $a2, 0x28($a0)
    *(uint32_t*)((a0) + 0x2c) = v1;                             // 0x0019d6d8: sw $v1, 0x2c($a0)
    *(uint32_t*)((a0) + 0x30) = a2;                             // 0x0019d6dc: sw $a2, 0x30($a0)
    *(uint32_t*)((a0) + 0x34) = 0;                              // 0x0019d6e0: sw $zero, 0x34($a0)
    *(uint32_t*)((a0) + 0x38) = v1;                             // 0x0019d6e4: sw $v1, 0x38($a0)
    *(uint32_t*)((a0) + 0x3c) = a2;                             // 0x0019d6e8: sw $a2, 0x3c($a0)
    *(uint32_t*)((a0) + 0x40) = v0;                             // 0x0019d6ec: sw $v0, 0x40($a0)
    *(uint32_t*)((a0) + 0x44) = v1;                             // 0x0019d6f0: sw $v1, 0x44($a0)
    *(uint32_t*)((a0) + 0x1c) = 0;                              // 0x0019d6f4: sw $zero, 0x1c($a0)
    goto label_0x19d7c8;                                        // 0x0019d6f8: b 0x19d7c8
    *(uint32_t*)((a0) + 0x34) = a1;                             // 0x0019d6fc: sw $a1, 0x34($a0)
label_0x19d700:
    v1 = 0x10;                                                  // 0x0019d700: addiu $v1, $zero, 0x10
    *(uint32_t*)((a0) + 0x18) = a1;                             // 0x0019d704: sw $a1, 0x18($a0)
    v0 = 0xff;                                                  // 0x0019d708: addiu $v0, $zero, 0xff
    *(uint32_t*)((a0) + 0x1c) = v1;                             // 0x0019d70c: sw $v1, 0x1c($a0)
    *(uint32_t*)((a0) + 0x20) = v0;                             // 0x0019d710: sw $v0, 0x20($a0)
    *(uint32_t*)((a0) + 0x24) = a1;                             // 0x0019d714: sw $a1, 0x24($a0)
    *(uint32_t*)((a0) + 0x28) = a1;                             // 0x0019d718: sw $a1, 0x28($a0)
    *(uint32_t*)((a0) + 0x2c) = v0;                             // 0x0019d71c: sw $v0, 0x2c($a0)
    *(uint32_t*)((a0) + 0x30) = a1;                             // 0x0019d720: sw $a1, 0x30($a0)
    *(uint32_t*)((a0) + 0x34) = 0;                              // 0x0019d724: sw $zero, 0x34($a0)
    *(uint32_t*)((a0) + 0x38) = v0;                             // 0x0019d728: sw $v0, 0x38($a0)
    *(uint32_t*)((a0) + 0x3c) = 0;                              // 0x0019d72c: sw $zero, 0x3c($a0)
    *(uint32_t*)((a0) + 0x40) = 0;                              // 0x0019d730: sw $zero, 0x40($a0)
    *(uint32_t*)((a0) + 0x44) = 0;                              // 0x0019d734: sw $zero, 0x44($a0)
    *(uint32_t*)((a0) + 0x1c) = 0;                              // 0x0019d738: sw $zero, 0x1c($a0)
    goto label_0x19d7c8;                                        // 0x0019d73c: b 0x19d7c8
    *(uint32_t*)((a0) + 0x34) = v1;                             // 0x0019d740: sw $v1, 0x34($a0)
label_0x19d744:
    a2 = 0xa;                                                   // 0x0019d744: addiu $a2, $zero, 0xa
    *(uint32_t*)((a0) + 0x18) = a3;                             // 0x0019d748: sw $a3, 0x18($a0)
    a1 = 0x1f;                                                  // 0x0019d74c: addiu $a1, $zero, 0x1f
    *(uint32_t*)((a0) + 0x1c) = a2;                             // 0x0019d750: sw $a2, 0x1c($a0)
    v1 = 1;                                                     // 0x0019d754: addiu $v1, $zero, 1
    *(uint32_t*)((a0) + 0x20) = a1;                             // 0x0019d758: sw $a1, 0x20($a0)
    v0 = 0xf;                                                   // 0x0019d75c: addiu $v0, $zero, 0xf
    *(uint32_t*)((a0) + 0x24) = a3;                             // 0x0019d760: sw $a3, 0x24($a0)
    *(uint32_t*)((a0) + 0x28) = a3;                             // 0x0019d764: sw $a3, 0x28($a0)
    *(uint32_t*)((a0) + 0x2c) = a1;                             // 0x0019d768: sw $a1, 0x2c($a0)
    *(uint32_t*)((a0) + 0x30) = a3;                             // 0x0019d76c: sw $a3, 0x30($a0)
    *(uint32_t*)((a0) + 0x34) = 0;                              // 0x0019d770: sw $zero, 0x34($a0)
    *(uint32_t*)((a0) + 0x38) = a1;                             // 0x0019d774: sw $a1, 0x38($a0)
    *(uint32_t*)((a0) + 0x3c) = v1;                             // 0x0019d778: sw $v1, 0x3c($a0)
    *(uint32_t*)((a0) + 0x40) = v0;                             // 0x0019d77c: sw $v0, 0x40($a0)
    *(uint32_t*)((a0) + 0x44) = v1;                             // 0x0019d780: sw $v1, 0x44($a0)
    *(uint32_t*)((a0) + 0x1c) = 0;                              // 0x0019d784: sw $zero, 0x1c($a0)
    *(uint32_t*)((a0) + 0x34) = a2;                             // 0x0019d788: sw $a2, 0x34($a0)
    *(uint32_t*)((a0) + 0x24) = a3;                             // 0x0019d78c: sw $a3, 0x24($a0)
    goto label_0x19d7c8;                                        // 0x0019d790: b 0x19d7c8
    *(uint32_t*)((a0) + 0x2c) = a1;                             // 0x0019d794: sw $a1, 0x2c($a0)
label_0x19d798:
    *(uint32_t*)((a0) + 0x20) = 0;                              // 0x0019d798: sw $zero, 0x20($a0)
    *(uint32_t*)((a0) + 0x1c) = 0;                              // 0x0019d79c: sw $zero, 0x1c($a0)
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x0019d7a0: sw $zero, 0x18($a0)
    *(uint32_t*)((a0) + 0x2c) = 0;                              // 0x0019d7a4: sw $zero, 0x2c($a0)
    *(uint32_t*)((a0) + 0x28) = 0;                              // 0x0019d7a8: sw $zero, 0x28($a0)
    *(uint32_t*)((a0) + 0x24) = 0;                              // 0x0019d7ac: sw $zero, 0x24($a0)
    *(uint32_t*)((a0) + 0x38) = 0;                              // 0x0019d7b0: sw $zero, 0x38($a0)
    *(uint32_t*)((a0) + 0x34) = 0;                              // 0x0019d7b4: sw $zero, 0x34($a0)
    *(uint32_t*)((a0) + 0x30) = 0;                              // 0x0019d7b8: sw $zero, 0x30($a0)
    *(uint32_t*)((a0) + 0x44) = 0;                              // 0x0019d7bc: sw $zero, 0x44($a0)
    *(uint32_t*)((a0) + 0x40) = 0;                              // 0x0019d7c0: sw $zero, 0x40($a0)
    *(uint32_t*)((a0) + 0x3c) = 0;                              // 0x0019d7c4: sw $zero, 0x3c($a0)
label_0x19d7c8:
    v0 = 1;                                                     // 0x0019d7c8: addiu $v0, $zero, 1
label_0x19d7cc:
    return;                                                     // 0x0019d7cc: jr $ra
    /* nop */                                                   // 0x0019d7d0: nop 
}