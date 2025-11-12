void func_001339d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24, local_4, local_40, local_42;
    
    sp = sp + -0x90;                                            // 0x001339d0: addiu $sp, $sp, -0x90
    v0 = *(int8_t*)((s4) + 0x98);                               // 0x001339f8: lb $v0, 0x98($s4)
    s2 = *(int32_t*)((s4) + 4);                                 // 0x001339fc: lw $s2, 4($s4)
    if (v0 == 0) goto label_0x133c74;                           // 0x00133a00: beqz $v0, 0x133c74
    s1 = *(int32_t*)((s4) + 0x14);                              // 0x00133a04: lw $s1, 0x14($s4)
    v0 = *(int32_t*)(s1);                                       // 0x00133a08: lw $v0, 0($s1)
    a2 = 0x7fff << 16;                                          // 0x00133a0c: lui $a2, 0x7fff
    local_42 = 0;                                               // 0x00133a10: sh $zero, 0x42($sp)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x00133a18: lw $v1, 0x18($v0)
    a1 = 1;                                                     // 0x00133a20: addiu $a1, $zero, 1
    /* call function at address in v1 */                        // 0x00133a24: jalr $v1
    a2 = a2 | 0xffff;                                           // 0x00133a28: ori $a2, $a2, 0xffff
    v0 = *(int32_t*)(s1);                                       // 0x00133a2c: lw $v0, 0($s1)
    s5 = sp + 0x20;                                             // 0x00133a30: addiu $s5, $sp, 0x20
    a2 = 0x7fff << 16;                                          // 0x00133a34: lui $a2, 0x7fff
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x00133a38: lw $v1, 0x18($v0)
    a1 = 1;                                                     // 0x00133a40: addiu $a1, $zero, 1
    a2 = a2 | 0xffff;                                           // 0x00133a44: ori $a2, $a2, 0xffff
    /* call function at address in v1 */                        // 0x00133a48: jalr $v1
    s3 = sp + 0x40;                                             // 0x00133a50: addiu $s3, $sp, 0x40
    a0 = local_0;                                               // 0x00133a54: lw $a0, 0($sp)
    a1 = local_4;                                               // 0x00133a58: lw $a1, 4($sp)
    func_00126c40();  // 0x126be0                                // 0x00133a5c: jal 0x126be0
    if (v0 == 0) goto label_0x133aa8;                           // 0x00133a64: beqz $v0, 0x133aa8
    *(uint8_t*)((s4) + 0x98) = 0;                               // 0x00133a6c: sb $zero, 0x98($s4)
    v0 = *(int32_t*)(s1);                                       // 0x00133a74: lw $v0, 0($s1)
    v1 = *(int32_t*)((v0) + 0x1c);                              // 0x00133a78: lw $v1, 0x1c($v0)
    /* call function at address in v1 */                        // 0x00133a7c: jalr $v1
    a1 = 1;                                                     // 0x00133a80: addiu $a1, $zero, 1
    a2 = *(int32_t*)(s1);                                       // 0x00133a84: lw $a2, 0($s1)
    a1 = 1;                                                     // 0x00133a8c: addiu $a1, $zero, 1
    v0 = g_7fff001c;  // Global at 0x7fff001c                   // 0x00133a90: lw $v0, 0x1c($a2)
    /* call function at address in v0 */                        // 0x00133a94: jalr $v0
    goto label_0x133c78;                                        // 0x00133a9c: b 0x133c78
    /* nop */                                                   // 0x00133aa4: nop 
label_0x133aa8:
    s0 = local_40;                                              // 0x00133aa8: lh $s0, 0x40($sp)
    a0 = local_0;                                               // 0x00133ab0: lw $a0, 0($sp)
    a1 = local_4;                                               // 0x00133ab4: lw $a1, 4($sp)
    a0 = a0 + s0;                                               // 0x00133ab8: addu $a0, $a0, $s0
    func_00126458();  // 0x126330                                // 0x00133abc: jal 0x126330
    a1 = a1 - s0;                                               // 0x00133ac0: subu $a1, $a1, $s0
    if (s3 == 0) goto label_0x133ae4;                           // 0x00133ac8: beqz $s3, 0x133ae4
    v1 = -1;                                                    // 0x00133acc: addiu $v1, $zero, -1
    a0 = local_20;                                              // 0x00133ad0: lw $a0, 0x20($sp)
    a2 = sp + 0x42;                                             // 0x00133ad4: addiu $a2, $sp, 0x42
    func_00126458();  // 0x126330                                // 0x00133ad8: jal 0x126330
    a1 = local_24;                                              // 0x00133adc: lw $a1, 0x24($sp)
label_0x133ae4:
    v0 = local_40;                                              // 0x00133ae4: lh $v0, 0x40($sp)
    s6 = local_42;                                              // 0x00133ae8: lh $s6, 0x42($sp)
    if (s3 == 0) goto label_0x133b30;                           // 0x00133aec: beqz $s3, 0x133b30
    s0 = s0 + v0;                                               // 0x00133af0: addu $s0, $s0, $v0
    if (v1 == 0) goto label_0x133b98;                           // 0x00133af4: beqz $v1, 0x133b98
    v1 = *(int32_t*)(s1);                                       // 0x00133afc: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00133b04: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00133b08: jalr $v0
    a1 = 1;                                                     // 0x00133b0c: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s1);                                       // 0x00133b10: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x00133b18: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00133b1c: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00133b20: jalr $v0
    goto label_0x133c74;                                        // 0x00133b28: b 0x133c74
    *(uint8_t*)((s4) + 0x98) = 0;                               // 0x00133b2c: sb $zero, 0x98($s4)
label_0x133b30:
    v1 = *(int32_t*)(s1);                                       // 0x00133b30: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00133b3c: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00133b40: jalr $v0
    a1 = 1;                                                     // 0x00133b44: addiu $a1, $zero, 1
    s0 = sp + 0x10;                                             // 0x00133b4c: addiu $s0, $sp, 0x10
    func_00140598();  // 0x1404a0                                // 0x00133b58: jal 0x1404a0
    v1 = *(int32_t*)(s1);                                       // 0x00133b60: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00133b6c: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00133b70: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x00133b78: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00133b84: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00133b88: jalr $v0
    a1 = 1;                                                     // 0x00133b8c: addiu $a1, $zero, 1
    goto label_0x133bf8;                                        // 0x00133b90: b 0x133bf8
    /* nop */                                                   // 0x00133b94: nop 
label_0x133b98:
    v1 = *(int32_t*)(s1);                                       // 0x00133b98: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00133ba4: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00133ba8: jalr $v0
    s0 = sp + 0x30;                                             // 0x00133bb4: addiu $s0, $sp, 0x30
    func_00140598();  // 0x1404a0                                // 0x00133bc0: jal 0x1404a0
    v1 = *(int32_t*)(s1);                                       // 0x00133bc8: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00133bd4: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00133bd8: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x00133be0: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00133bec: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00133bf0: jalr $v0
    a1 = 1;                                                     // 0x00133bf4: addiu $a1, $zero, 1
label_0x133bf8:
    func_0012d3a8();  // 0x12d3a0                                // 0x00133bf8: jal 0x12d3a0
    v1 = *(int32_t*)((s4) + 0xa4);                              // 0x00133c00: lw $v1, 0xa4($s4)
    v1 = v1 + v0;                                               // 0x00133c08: addu $v1, $v1, $v0
    func_0012c9a0();  // 0x12c970                                // 0x00133c0c: jal 0x12c970
    *(uint32_t*)((s4) + 0xa4) = v1;                             // 0x00133c10: sw $v1, 0xa4($s4)
    func_0012c970();  // 0x12c940                                // 0x00133c14: jal 0x12c940
    func_0012d338();  // 0x12d2f8                                // 0x00133c1c: jal 0x12d2f8
    func_0012c880();  // 0x12c878                                // 0x00133c24: jal 0x12c878
    v1 = 2;                                                     // 0x00133c2c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x133c40;                          // 0x00133c30: beql $v0, $v1, 0x133c40
    a1 = *(int32_t*)((s4) + 0x48);                              // 0x00133c34: lw $a1, 0x48($s4)
    goto label_0x133c74;                                        // 0x00133c38: b 0x133c74
    *(uint8_t*)((s4) + 0x98) = 0;                               // 0x00133c3c: sb $zero, 0x98($s4)
label_0x133c40:
    func_0012c910();  // 0x12c8d0                                // 0x00133c40: jal 0x12c8d0
    func_0012d4e0();  // 0x12d4c8                                // 0x00133c48: jal 0x12d4c8
    func_0012d418();  // 0x12d408                                // 0x00133c54: jal 0x12d408
    func_0012d438();  // 0x12d428                                // 0x00133c60: jal 0x12d428
    func_0012d428();  // 0x12d418                                // 0x00133c6c: jal 0x12d418
label_0x133c74:
label_0x133c78:
    return;                                                     // 0x00133c94: jr $ra
    sp = sp + 0x90;                                             // 0x00133c98: addiu $sp, $sp, 0x90
}