void func_0013fa18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013fa18: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013fa34: lw $v0, 4($s1)
    if (v0 <= 0) goto label_0x13fb98;                           // 0x0013fa38: blez $v0, 0x13fb98
    v0 = *(int32_t*)(s1);                                       // 0x0013fa40: lw $v0, 0($s1)
    /* beqzl $v0, 0x13fb9c */                                   // 0x0013fa44: beqzl $v0, 0x13fb9c
    func_0013ef18();  // 13ef18                                // 0x0013fa4c: jal 0x13ef18
    /* nop */                                                   // 0x0013fa50: nop 
    if (s2 != 0) goto label_0x13fae0;                           // 0x0013fa54: bnez $s2, 0x13fae0
    v0 = 1;                                                     // 0x0013fa58: addiu $v0, $zero, 1
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0013fa5c: lw $v0, 0x20($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x0013fa60: lw $v1, 0x14($s0)
    a3 = *(int32_t*)((s1) + 4);                                 // 0x0013fa64: lw $a3, 4($s1)
    /* beqzl $v0, 0x13fa70 */                                   // 0x0013fa68: beqzl $v0, 0x13fa70
    /* break (trap) */                                          // 0x0013fa6c: break 0, 7
    v1 = v1 + v0;                                               // 0x0013fa70: addu $v1, $v1, $v0
    a0 = *(int32_t*)(s1);                                       // 0x0013fa74: lw $a0, 0($s1)
    v1 = v1 - a3;                                               // 0x0013fa78: subu $v1, $v1, $a3
    a1 = *(int32_t*)((s0) + 0x1c);                              // 0x0013fa7c: lw $a1, 0x1c($s0)
    /* divide: v1 / v0 -> hi:lo */                              // 0x0013fa80: div $zero, $v1, $v0
    a0 = a0 - a1;                                               // 0x0013fa84: subu $a0, $a0, $a1
    /* mfhi $a2 */                                              // 0x0013fa88
    /* divide: a0 / v0 -> hi:lo */                              // 0x0013fa8c: div $zero, $a0, $v0
    /* mfhi $v1 */                                              // 0x0013fa90
    if (a2 != v1) goto label_0x13fab8;                          // 0x0013fa94: bnel $a2, $v1, 0x13fab8
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x0013fa98: lw $v0, 0x38($s0)
    *(uint32_t*)((s0) + 0x14) = a2;                             // 0x0013fa9c: sw $a2, 0x14($s0)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x0013faa0: lw $v0, 0x10($s0)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013faa4: lw $v1, 4($s1)
    v0 = v0 + v1;                                               // 0x0013faa8: addu $v0, $v0, $v1
    goto label_0x13facc;                                        // 0x0013faac: b 0x13facc
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x0013fab0: sw $v0, 0x10($s0)
    /* nop */                                                   // 0x0013fab4: nop 
label_0x13fab8:
    /* beqzl $v0, 0x13fad4 */                                   // 0x0013fab8: beqzl $v0, 0x13fad4
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0013fabc: lw $v0, 0x28($s0)
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x0013fac0: lw $a0, 0x3c($s0)
    /* call function at address in v0 */                        // 0x0013fac4: jalr $v0
    a1 = -3;                                                    // 0x0013fac8: addiu $a1, $zero, -3
label_0x13facc:
    a3 = *(int32_t*)((s1) + 4);                                 // 0x0013facc: lw $a3, 4($s1)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0013fad0: lw $v0, 0x28($s0)
    v0 = v0 - a3;                                               // 0x0013fad4: subu $v0, $v0, $a3
    goto label_0x13fb80;                                        // 0x0013fad8: b 0x13fb80
    *(uint32_t*)((s0) + 0x28) = v0;                             // 0x0013fadc: sw $v0, 0x28($s0)
label_0x13fae0:
    if (s2 != v0) goto label_0x13fb68;                          // 0x0013fae0: bnel $s2, $v0, 0x13fb68
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x0013fae4: lw $v0, 0x38($s0)
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0013fae8: lw $v0, 0x20($s0)
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x0013faec: lw $a0, 0x18($s0)
    /* beqzl $v0, 0x13faf8 */                                   // 0x0013faf0: beqzl $v0, 0x13faf8
    /* break (trap) */                                          // 0x0013faf4: break 0, 7
    a1 = *(int32_t*)(s1);                                       // 0x0013faf8: lw $a1, 0($s1)
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x0013fafc: lw $v1, 0x1c($s0)
    a0 = a0 + v0;                                               // 0x0013fb00: addu $a0, $a0, $v0
    a3 = *(int32_t*)((s1) + 4);                                 // 0x0013fb04: lw $a3, 4($s1)
    a1 = a1 - v1;                                               // 0x0013fb08: subu $a1, $a1, $v1
    a0 = a0 - a3;                                               // 0x0013fb0c: subu $a0, $a0, $a3
    /* divide: a0 / v0 -> hi:lo */                              // 0x0013fb14: div $zero, $a0, $v0
    /* mfhi $a0 */                                              // 0x0013fb1c
    if (a0 != v1) goto label_0x13fb40;                          // 0x0013fb20: bnel $a0, $v1, 0x13fb40
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x0013fb24: lw $v0, 0x38($s0)
    *(uint32_t*)((s0) + 0x18) = a0;                             // 0x0013fb28: sw $a0, 0x18($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x0013fb2c: lw $v0, 0xc($s0)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013fb30: lw $v1, 4($s1)
    v0 = v0 + v1;                                               // 0x0013fb34: addu $v0, $v0, $v1
    goto label_0x13fb54;                                        // 0x0013fb38: b 0x13fb54
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0013fb3c: sw $v0, 0xc($s0)
label_0x13fb40:
    /* beqzl $v0, 0x13fb5c */                                   // 0x0013fb40: beqzl $v0, 0x13fb5c
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x0013fb44: lw $v0, 0x30($s0)
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x0013fb48: lw $a0, 0x3c($s0)
    /* call function at address in v0 */                        // 0x0013fb4c: jalr $v0
    a1 = -3;                                                    // 0x0013fb50: addiu $a1, $zero, -3
label_0x13fb54:
    a3 = *(int32_t*)((s1) + 4);                                 // 0x0013fb54: lw $a3, 4($s1)
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x0013fb58: lw $v0, 0x30($s0)
    v0 = v0 - a3;                                               // 0x0013fb5c: subu $v0, $v0, $a3
    goto label_0x13fb80;                                        // 0x0013fb60: b 0x13fb80
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x0013fb64: sw $v0, 0x30($s0)
label_0x13fb68:
    *(uint32_t*)(s1) = 0;                                       // 0x0013fb68: sw $zero, 0($s1)
    if (v0 == 0) goto label_0x13fb80;                           // 0x0013fb6c: beqz $v0, 0x13fb80
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0013fb70: sw $zero, 4($s1)
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x0013fb74: lw $a0, 0x3c($s0)
    /* call function at address in v0 */                        // 0x0013fb78: jalr $v0
    a1 = -3;                                                    // 0x0013fb7c: addiu $a1, $zero, -3
label_0x13fb80:
    return func_0013ef80();  // Tail call                        // 0x0013fb90: j 0x13ef30
    sp = sp + 0x20;                                             // 0x0013fb94: addiu $sp, $sp, 0x20
label_0x13fb98:
    return;                                                     // 0x0013fba8: jr $ra
    sp = sp + 0x20;                                             // 0x0013fbac: addiu $sp, $sp, 0x20
}