void func_0016d948() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_8, local_c;
    
    sp = sp + -0x30;                                            // 0x0016d948: addiu $sp, $sp, -0x30
    t0 = a0 + 0xd08;                                            // 0x0016d95c: addiu $t0, $a0, 0xd08
    v0 = a0 + 0xd04;                                            // 0x0016d960: addiu $v0, $a0, 0xd04
    a3 = *(int32_t*)((s0) + 0x14);                              // 0x0016d964: lw $a3, 0x14($s0)
    t1 = *(int32_t*)((s0) + 0x1c);                              // 0x0016d968: lw $t1, 0x1c($s0)
    if (v1 == 0) goto label_0x16d998;                           // 0x0016d96c: beqz $v1, 0x16d998
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0016d970: lw $a1, 0x10($s0)
    if (a2 < 0) goto label_0x16d99c;                            // 0x0016d974: bltzl $a2, 0x16d99c
    v0 = *(int32_t*)(v0);                                       // 0x0016d978: lw $v0, 0($v0)
    func_0016da58();  // 16da58                                // 0x0016d984: jal 0x16da58
    goto label_0x16d9e0;                                        // 0x0016d98c: b 0x16d9e0
    v1 = local_8;                                               // 0x0016d990: lw $v1, 8($sp)
    /* nop */                                                   // 0x0016d994: nop 
label_0x16d998:
    v0 = *(int32_t*)(v0);                                       // 0x0016d998: lw $v0, 0($v0)
label_0x16d99c:
    if (v0 != 0) goto label_0x16d9c8;                           // 0x0016d99c: bnez $v0, 0x16d9c8
    /* nop */                                                   // 0x0016d9a0: nop 
    v0 = *(int32_t*)((a0) + 0x2ab0);                            // 0x0016d9a4: lw $v0, 0x2ab0($a0)
    /* bnezl $v0, 0x16da4c */                                   // 0x0016d9a8: bnezl $v0, 0x16da4c
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0016d9b0: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x0016d9b4: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x0016d9b8: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x0016d9bc: sw $zero, 0x24($s0)
    goto label_0x16da48;                                        // 0x0016d9c0: b 0x16da48
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x0016d9c4: sw $zero, 0x28($s0)
label_0x16d9c8:
    if (v1 == 0) goto label_0x16da00;                           // 0x0016d9c8: beqz $v1, 0x16da00
    func_0016dc40();  // 16dc40                                // 0x0016d9d4: jal 0x16dc40
    v1 = local_8;                                               // 0x0016d9dc: lw $v1, 8($sp)
label_0x16d9e0:
    a0 = local_c;                                               // 0x0016d9e0: lw $a0, 0xc($sp)
    a1 = local_10;                                              // 0x0016d9e4: lw $a1, 0x10($sp)
    v0 = local_14;                                              // 0x0016d9e8: lw $v0, 0x14($sp)
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x0016d9ec: sw $v1, 0x20($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x0016d9f0: sw $v0, 0x2c($s0)
    *(uint32_t*)((s0) + 0x24) = a0;                             // 0x0016d9f4: sw $a0, 0x24($s0)
    goto label_0x16da48;                                        // 0x0016d9f8: b 0x16da48
    *(uint32_t*)((s0) + 0x28) = a1;                             // 0x0016d9fc: sw $a1, 0x28($s0)
label_0x16da00:
    v0 = *(int32_t*)((t0) + 8);                                 // 0x0016da00: lw $v0, 8($t0)
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x0016da04: sw $v0, 0x20($s0)
    v1 = *(int32_t*)((t0) + 0xc);                               // 0x0016da08: lw $v1, 0xc($t0)
    *(uint32_t*)((s0) + 0x24) = v1;                             // 0x0016da0c: sw $v1, 0x24($s0)
    v0 = *(int32_t*)((t0) + 0x10);                              // 0x0016da10: lw $v0, 0x10($t0)
    *(uint32_t*)((s0) + 0x28) = v0;                             // 0x0016da14: sw $v0, 0x28($s0)
    a0 = *(int32_t*)((t0) + 0x14);                              // 0x0016da18: lw $a0, 0x14($t0)
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x0016da1c: sw $a0, 0x2c($s0)
    v1 = *(int32_t*)((t0) + 0x18);                              // 0x0016da20: lw $v1, 0x18($t0)
    v1 = v1 - a3;                                               // 0x0016da24: subu $v1, $v1, $a3
    v0 = v1 + 0x337;                                            // 0x0016da28: addiu $v0, $v1, 0x337
    v1 = v1 + 0x736;                                            // 0x0016da2c: addiu $v1, $v1, 0x736
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0016da30: slti $a0, $v0, 0
    if (a0 != 0) v0 = v1;                                       // 0x0016da34: movn $v0, $v1, $a0
    v0 = v0 >> 0xa;                                             // 0x0016da38: sra $v0, $v0, 0xa
    v0 = v0 << 0xa;                                             // 0x0016da3c: sll $v0, $v0, 0xa
    v0 = a3 + v0;                                               // 0x0016da40: addu $v0, $a3, $v0
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x0016da44: sw $v0, 0x14($s0)
label_0x16da48:
    return;                                                     // 0x0016da50: jr $ra
    sp = sp + 0x30;                                             // 0x0016da54: addiu $sp, $sp, 0x30
}